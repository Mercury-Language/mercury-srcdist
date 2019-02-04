/*
** Automatically generated from `parser.m'
** by the Mercury compiler,
** version rotd-2011-08-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__parser__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "io.int"
#include "io.mh"

#line 28 "parser.c"
#line 536 "io.int"
#include "string.mh"

#line 32 "parser.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "parser.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "parser.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "parser.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "parser.c"
#line 55 "array.opt"
#include "stm_builtin.mh"

#line 52 "parser.c"
#line 57 "array.opt"
#include "store.mh"

#line 56 "parser.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "parser.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 64 "parser.c"
#line 38 "pretty_printer.opt"
#include "version_array.mh"

#line 68 "parser.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 72 "parser.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 76 "parser.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 80 "parser.c"
#line 4 "char.opt"
#include "char.mh"

#line 84 "parser.c"
#line 3 "float.opt"
#include "float.mh"

#line 88 "parser.c"
#line 3 "math.opt"
#include "math.mh"

#line 92 "parser.c"
#line 4 "int.opt"
#include "int.mh"

#line 96 "parser.c"
#line 156 "io.opt"
#include "dir.mh"

#line 100 "parser.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 104 "parser.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 108 "parser.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "parser.c"
#line 113 "parser.c"
#include "parser.mh"

#line 116 "parser.c"
#line 117 "parser.c"
#ifndef PARSER_DECL_GUARD
#define PARSER_DECL_GUARD

#line 121 "parser.c"
#line 122 "parser.c"

#endif
#line 125 "parser.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parser__type_ctor_info_parse_1,
	mercury_data_parser__type_ctor_info_state_2,
	mercury_data_parser__type_ctor_info_term_kind_0;
MR_decl_label6(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0, 4,2,8,6,11,13)
MR_decl_label2(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0, 9,2)
MR_decl_label9(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0, 76,6,5,8,10,11,14,18,2)
MR_decl_label2(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0, 3,1)
MR_decl_label1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1, 1)
MR_decl_label1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0, 1)
MR_decl_label1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0, 2)
MR_decl_label8(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0, 7,6,12,10,14,9,4,5)
MR_decl_label8(parser__check_for_bad_token_3_0, 45,4,6,9,10,16,8,1)
MR_decl_label10(parser__check_for_errors_5_0, 6,4,12,11,10,16,17,18,19,3)
MR_decl_label5(parser__check_for_errors_5_0, 24,22,28,30,31)
MR_decl_label6(parser__check_for_higher_order_term_5_0, 44,6,10,2,3,46)
MR_decl_label1(parser__check_priority_3_0, 3)
MR_decl_label10(parser__could_start_term_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(parser__could_start_term_2_0, 13,14,15,16,17,18,39,19,20,21)
MR_decl_label1(parser__parse_arg_3_0, 2)
MR_decl_label7(parser__parse_args_3_0, 2,3,11,9,16,6,4)
MR_decl_label4(parser__parse_backquoted_operator_5_0, 7,6,9,1)
MR_decl_label10(parser__parse_left_term_6_0, 4,10,13,6,7,21,24,17,18,32)
MR_decl_label10(parser__parse_left_term_6_0, 34,31,36,37,39,41,43,42,45,44)
MR_decl_label10(parser__parse_left_term_6_0, 46,48,49,51,52,28,29,62,64,61)
MR_decl_label10(parser__parse_left_term_6_0, 66,67,69,71,73,74,76,77,58,59)
MR_decl_label3(parser__parse_left_term_6_0, 82,2,87)
MR_decl_label3(parser__parse_list_3_0, 2,3,4)
MR_decl_label10(parser__parse_list_2_4_0, 5,8,6,18,22,21,16,31,2,44)
MR_decl_label1(parser__parse_list_2_4_0, 45)
MR_decl_label10(parser__parse_rest_7_0, 197,3,6,8,5,15,17,20,12,13)
MR_decl_label10(parser__parse_rest_7_0, 22,23,25,26,29,28,30,33,38,41)
MR_decl_label8(parser__parse_rest_7_0, 2,48,51,52,54,56,47,201)
MR_decl_label9(parser__parse_simple_term_6_0, 4,2,12,11,17,15,19,14,10)
MR_decl_label10(parser__parse_simple_term_2_6_0, 209,4,6,8,7,3,12,16,18,17)
MR_decl_label10(parser__parse_simple_term_2_6_0, 21,23,24,26,25,15,35,37,36,34)
MR_decl_label10(parser__parse_simple_term_2_6_0, 43,45,47,105,49,44,53,56,58,55)
MR_decl_label10(parser__parse_simple_term_2_6_0, 42,68,69,67,73,72,78,77,83,82)
MR_decl_label2(parser__parse_simple_term_2_6_0, 88,1)
MR_decl_label5(parser__parse_special_atom_5_0, 5,8,2,3,17)
MR_decl_label1(parser__parse_term_3_0, 2)
MR_decl_label2(parser__parse_term_2_5_0, 2,4)
MR_decl_label2(parser__parse_tokens_with_op_table_4_0, 18,6)
MR_decl_label6(parser__parse_whole_term_3_0, 2,3,9,6,7,4)
MR_decl_label3(parser__read_term_3_0, 2,4,5)
MR_decl_label2(parser__read_term_filename_4_0, 3,4)
MR_decl_label2(parser__read_term_filename_with_op_table_5_0, 2,3)
MR_decl_label2(parser__read_term_from_string_4_0, 4,5)
MR_decl_label2(parser__read_term_from_string_with_op_table_5_0, 3,4)
MR_decl_label2(parser__read_term_from_substring_6_0, 3,4)
MR_decl_label2(parser__read_term_from_substring_with_op_table_7_0, 2,3)
MR_decl_label3(parser__read_term_with_op_table_4_0, 2,3,4)
MR_decl_label3(__Unify___parser__parse_1_0, 17,5,1)
MR_decl_label5(__Unify___parser__state_2_0, 4,6,8,13,1)
MR_decl_label9(__Compare___parser__parse_1_0, 3,2,10,11,14,7,5,20,58)
MR_decl_label9(__Compare___parser__state_2_0, 3,2,6,7,10,14,18,22,57)
MR_decl_label2(__Compare___parser__term_kind_0_0, 2,3)
MR_decl_static(parser__check_for_bad_token_3_0)
MR_def_extern_entry(parser__check_for_errors_5_0)
MR_def_extern_entry(fn__parser__parser_state_get_tokens_left_1_0)
MR_def_extern_entry(fn__parser__parser_state_get_varset_1_0)
MR_decl_static(parser__could_start_term_2_0)
MR_decl_static(parser__parse_backquoted_operator_5_0)
MR_decl_static(parser__check_priority_3_0)
MR_decl_static(parser__parse_term_3_0)
MR_decl_static(parser__parse_arg_3_0)
MR_decl_static(parser__parse_term_2_5_0)
MR_decl_static(parser__parse_left_term_6_0)
MR_decl_static(parser__parse_rest_7_0)
MR_decl_static(parser__parse_simple_term_6_0)
MR_decl_static(parser__parse_simple_term_2_6_0)
MR_decl_static(parser__check_for_higher_order_term_5_0)
MR_decl_static(parser__parse_special_atom_5_0)
MR_decl_static(parser__parse_list_3_0)
MR_decl_static(parser__parse_list_2_4_0)
MR_decl_static(parser__parse_args_3_0)
MR_def_extern_entry(parser__parse_whole_term_3_0)
MR_def_extern_entry(parser__init_parser_state_4_0)
MR_def_extern_entry(parser__final_parser_state_3_0)
MR_def_extern_entry(parser__parse_tokens_with_op_table_4_0)
MR_def_extern_entry(parser__read_term_filename_with_op_table_5_0)
MR_def_extern_entry(parser__read_term_3_0)
MR_def_extern_entry(parser__read_term_with_op_table_4_0)
MR_def_extern_entry(parser__read_term_filename_4_0)
MR_def_extern_entry(parser__read_term_from_substring_with_op_table_7_0)
MR_def_extern_entry(parser__read_term_from_string_with_op_table_5_0)
MR_def_extern_entry(parser__read_term_from_string_4_0)
MR_def_extern_entry(parser__read_term_from_substring_6_0)
MR_def_extern_entry(parser__parse_tokens_3_0)
MR_def_extern_entry(__Unify___parser__parse_1_0)
MR_def_extern_entry(__Compare___parser__parse_1_0)
MR_def_extern_entry(__Unify___parser__state_2_0)
MR_def_extern_entry(__Compare___parser__state_2_0)
MR_def_extern_entry(__Unify___parser__term_kind_0_0)
MR_def_extern_entry(__Compare___parser__term_kind_0_0)
MR_decl_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0)
MR_decl_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0)
MR_decl_static(fn__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_101_114_114_111_114_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0)
MR_decl_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0)
MR_decl_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1)
MR_decl_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0)
MR_decl_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0)
MR_decl_static(fn__f_112_97_114_115_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const(") in input", 10),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_1 mercury_common_1[6] =
{
{
MR_string_const("\140", 1)
},
{
MR_string_const(".", 1)
},
{
MR_string_const("{}", 2)
},
{
MR_string_const("", 0)
},
{
MR_string_const("[|]", 3)
},
{
MR_string_const("[]", 2)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
0,
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_mercury_op_table_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__,
MR_CTOR0_ADDR(ops, mercury_op_table)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
1,
0,
0
}
},
};

const MR_PseudoTypeInfo mercury_data_parser__field_types_parse_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_parser__du_functor_desc_parse_1_0 = {
	"ok",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parser__field_types_parse_1_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_token_list_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_token_list_0;

const MR_PseudoTypeInfo mercury_data_parser__field_types_parse_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_lexer__type_ctor_info_token_list_0
};

static const MR_DuFunctorDesc mercury_data_parser__du_functor_desc_parse_1_1 = {
	"error",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parser__field_types_parse_1_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parser__du_stag_ordered_parse_1_0[] = {
	&mercury_data_parser__du_functor_desc_parse_1_0

};

const MR_DuFunctorDescPtr mercury_data_parser__du_stag_ordered_parse_1_1[] = {
	&mercury_data_parser__du_functor_desc_parse_1_1

};

const MR_DuPtagLayout mercury_data_parser__du_ptag_ordered_parse_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parser__du_stag_ordered_parse_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parser__du_stag_ordered_parse_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_parser__du_name_ordered_parse_1[] = {
	&mercury_data_parser__du_functor_desc_parse_1_1,
	&mercury_data_parser__du_functor_desc_parse_1_0
};

const MR_Integer mercury_data_parser__functor_number_map_parse_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parser__type_ctor_info_parse_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parser__parse_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parser__parse_1_0)),
	"parser",
	"parse",
	{ (void *)mercury_data_parser__du_name_ordered_parse_1 },
	{ (void *)mercury_data_parser__du_ptag_ordered_parse_1 },
	2,
	4,
	mercury_data_parser__functor_number_map_parse_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_varset__pti_varset_1__pseudo_2 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_PseudoTypeInfo) 2
}};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_var_1__pseudo_2 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_2
}};

const MR_PseudoTypeInfo mercury_data_parser__field_types_state_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_varset__pti_varset_1__pseudo_2,
	(MR_PseudoTypeInfo) &mercury_data_lexer__type_ctor_info_token_list_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2
};

const MR_ConstString mercury_data_parser__field_names_state_2_0[] = {
	"stream_name",
	"ops_table",
	"varset",
	"tokens_left",
	"var_names"
};

static const MR_DuFunctorDesc mercury_data_parser__du_functor_desc_state_2_0 = {
	"state",
	5,
	22,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parser__field_types_state_2_0,
	mercury_data_parser__field_names_state_2_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parser__du_stag_ordered_state_2_0[] = {
	&mercury_data_parser__du_functor_desc_state_2_0

};

const MR_DuPtagLayout mercury_data_parser__du_ptag_ordered_state_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parser__du_stag_ordered_state_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_parser__du_name_ordered_state_2[] = {
	&mercury_data_parser__du_functor_desc_state_2_0
};

const MR_Integer mercury_data_parser__functor_number_map_state_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parser__type_ctor_info_state_2 = {
	2,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parser__state_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parser__state_2_0)),
	"parser",
	"state",
	{ (void *)mercury_data_parser__du_name_ordered_state_2 },
	{ (void *)mercury_data_parser__du_ptag_ordered_state_2 },
	1,
	4,
	mercury_data_parser__functor_number_map_state_2
};

static const MR_EnumFunctorDesc mercury_data_parser__enum_functor_desc_term_kind_0_0 = {
	"ordinary_term",
	0
};

static const MR_EnumFunctorDesc mercury_data_parser__enum_functor_desc_term_kind_0_1 = {
	"argument",
	1
};

static const MR_EnumFunctorDesc mercury_data_parser__enum_functor_desc_term_kind_0_2 = {
	"list_elem",
	2
};

const MR_EnumFunctorDescPtr mercury_data_parser__enum_value_ordered_term_kind_0[] = {
	&mercury_data_parser__enum_functor_desc_term_kind_0_0,
	&mercury_data_parser__enum_functor_desc_term_kind_0_1,
	&mercury_data_parser__enum_functor_desc_term_kind_0_2
};

const MR_EnumFunctorDescPtr mercury_data_parser__enum_name_ordered_term_kind_0[] = {
	&mercury_data_parser__enum_functor_desc_term_kind_0_1,
	&mercury_data_parser__enum_functor_desc_term_kind_0_2,
	&mercury_data_parser__enum_functor_desc_term_kind_0_0
};

const MR_Integer mercury_data_parser__functor_number_map_term_kind_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parser__type_ctor_info_term_kind_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parser__term_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parser__term_kind_0_0)),
	"parser",
	"term_kind",
	{ (void *)mercury_data_parser__enum_name_ordered_term_kind_0 },
	{ (void *)mercury_data_parser__enum_value_ordered_term_kind_0 },
	3,
	4,
	mercury_data_parser__functor_number_map_term_kind_0
};



MR_decl_entry(string__append_3_2);
MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(parser_module0)
	MR_init_entry1(parser__check_for_bad_token_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__check_for_bad_token_3_0);
	MR_init_label8(parser__check_for_bad_token_3_0,45,4,6,9,10,16,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_for_bad_token'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__check_for_bad_token_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(parser__check_for_bad_token_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parser__check_for_bad_token_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(parser__check_for_bad_token_3_0_i4);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("Syntax error: ", 14);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(string__append_3_2,
		parser__check_for_bad_token_3_0_i16);
MR_def_label(parser__check_for_bad_token_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(parser__check_for_bad_token_3_0_i6);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("I/O error: ", 11);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(string__append_3_2,
		parser__check_for_bad_token_3_0_i16);
MR_def_label(parser__check_for_bad_token_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(parser__check_for_bad_token_3_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__parser__check_for_bad_token_3_0
	Character = MR_tempr1;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 610 "parser.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		parser__check_for_bad_token_3_0_i9);
MR_def_label(parser__check_for_bad_token_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		parser__check_for_bad_token_3_0_i10);
MR_def_label(parser__check_for_bad_token_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" (", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("Syntax error: Illegal character 0x", 34);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		parser__check_for_bad_token_3_0_i16);
MR_def_label(parser__check_for_bad_token_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(parser__check_for_bad_token_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(parser__check_for_bad_token_3_0_i45);
MR_def_label(parser__check_for_bad_token_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);
MR_decl_entry(lexer__token_to_string_2_0);

MR_BEGIN_MODULE(parser_module1)
	MR_init_entry1(parser__check_for_errors_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__check_for_errors_5_0);
	MR_init_label10(parser__check_for_errors_5_0,6,4,12,11,10,16,17,18,19,3)
	MR_init_label5(parser__check_for_errors_5_0,24,22,28,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_for_errors'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__check_for_errors_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parser__check_for_errors_5_0_i3);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parser__check_for_bad_token_3_0,
		parser__check_for_errors_5_0_i6);
MR_def_label(parser__check_for_errors_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__check_for_errors_5_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(parser__check_for_errors_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(parser__check_for_errors_5_0_i10);
	}
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parser__check_for_errors_5_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("Syntax error: ", 14);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(string__append_3_2,
		parser__check_for_errors_5_0_i31);
MR_def_label(parser__check_for_errors_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_for_errors", 16);
	MR_np_call_localret_ent(require__error_1_0,
		parser__check_for_errors_5_0_i11);
MR_def_label(parser__check_for_errors_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_3_2,
		parser__check_for_errors_5_0_i31);
MR_def_label(parser__check_for_errors_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(lexer__token_to_string_2_0,
		parser__check_for_errors_5_0_i16);
MR_def_label(parser__check_for_errors_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_2,
		parser__check_for_errors_5_0_i17);
MR_def_label(parser__check_for_errors_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		parser__check_for_errors_5_0_i18);
MR_def_label(parser__check_for_errors_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Syntax error at ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		parser__check_for_errors_5_0_i19);
MR_def_label(parser__check_for_errors_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(parser__check_for_errors_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r5;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(parser__check_for_bad_token_3_0,
		parser__check_for_errors_5_0_i24);
MR_def_label(parser__check_for_errors_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__check_for_errors_5_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(parser__check_for_errors_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r5 = MR_sv(1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parser__check_for_errors_5_0_i28);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(parser__check_for_errors_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(lexer__token_to_string_2_0,
		parser__check_for_errors_5_0_i30);
MR_def_label(parser__check_for_errors_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Syntax error: unexpected ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		parser__check_for_errors_5_0_i31);
MR_def_label(parser__check_for_errors_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module2)
	MR_init_entry1(fn__parser__parser_state_get_tokens_left_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parser__parser_state_get_tokens_left_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parser_state_get_tokens_left'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parser__parser_state_get_tokens_left_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module3)
	MR_init_entry1(fn__parser__parser_state_get_varset_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parser__parser_state_get_varset_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parser_state_get_varset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parser__parser_state_get_varset_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module4)
	MR_init_entry1(parser__could_start_term_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__could_start_term_2_0);
	MR_init_label10(parser__could_start_term_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(parser__could_start_term_2_0,13,14,15,16,17,18,39,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'could_start_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__could_start_term_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i19);
	}
MR_def_label(parser__could_start_term_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(parser__could_start_term_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(parser__could_start_term_2_0_i39);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module5)
	MR_init_entry1(parser__parse_backquoted_operator_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_backquoted_operator_5_0);
	MR_init_label4(parser__parse_backquoted_operator_5_0,7,6,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_backquoted_operator'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_backquoted_operator_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parser__parse_backquoted_operator_5_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 2);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_r7 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r7,1)) {
		MR_GOTO_LAB(parser__parse_backquoted_operator_5_0_i6);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tfield(1, MR_r7, 0);
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,
		parser__parse_backquoted_operator_5_0_i7);
MR_def_label(parser__parse_backquoted_operator_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parser__parse_backquoted_operator_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(parser__parse_backquoted_operator_5_0_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r2 = MR_tfield(2, MR_r7, 0);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0,
		parser__parse_backquoted_operator_5_0_i9);
MR_def_label(parser__parse_backquoted_operator_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_r5 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parser__parse_backquoted_operator_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module6)
	MR_init_entry1(parser__check_priority_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__check_priority_3_0);
	MR_init_label1(parser__check_priority_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_priority'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__check_priority_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parser__check_priority_3_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r3 < (MR_Integer) MR_r2);
	MR_proceed();
MR_def_label(parser__check_priority_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 <= (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(parser_module7)
	MR_init_entry1(parser__parse_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_term_3_0);
	MR_init_label1(parser__parse_term_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_term_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parser__parse_term_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__parser__parse_term_3_0_i2);
MR_def_label(parser__parse_term_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parser__parse_term_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module8)
	MR_init_entry1(parser__parse_arg_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_arg_3_0);
	MR_init_label1(parser__parse_arg_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_arg'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_arg_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parser__parse_arg_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__parser__parse_arg_3_0_i2);
MR_def_label(parser__parse_arg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parser__parse_term_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module9)
	MR_init_entry1(parser__parse_term_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_term_2_5_0);
	MR_init_label2(parser__parse_term_2_5_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_term_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_term_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(parser__parse_left_term_6_0,
		parser__parse_term_2_5_0_i2);
MR_def_label(parser__parse_term_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parser__parse_term_2_5_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(parser__parse_term_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tfield(0, MR_tempr2, 0);
	MR_r7 = MR_tempr3;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parser__parse_rest_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(__Unify___lexer__token_0_0);
MR_decl_entry(ops__lookup_binary_prefix_op_5_0);
MR_decl_entry(ops__lookup_prefix_op_4_0);

MR_BEGIN_MODULE(parser_module10)
	MR_init_entry1(parser__parse_left_term_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_left_term_6_0);
	MR_init_label10(parser__parse_left_term_6_0,4,10,13,6,7,21,24,17,18,32)
	MR_init_label10(parser__parse_left_term_6_0,34,31,36,37,39,41,43,42,45,44)
	MR_init_label10(parser__parse_left_term_6_0,46,48,49,51,52,28,29,62,64,61)
	MR_init_label10(parser__parse_left_term_6_0,66,67,69,71,73,74,76,77,58,59)
	MR_init_label3(parser__parse_left_term_6_0,82,2,87)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_left_term'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_left_term_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1,
		parser__parse_left_term_6_0_i4);
MR_def_label(parser__parse_left_term_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("-", 1)) != 0)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i7);
	}
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1,
		parser__parse_left_term_6_0_i10);
MR_def_label(parser__parse_left_term_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i6);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i6);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_r4;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_left_term_6_0_i13);
MR_def_label(parser__parse_left_term_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) 0 - (MR_Integer) MR_sv(1));
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(13);
	}
MR_def_label(parser__parse_left_term_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
MR_def_label(parser__parse_left_term_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("-", 1)) != 0)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i18);
	}
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1,
		parser__parse_left_term_6_0_i21);
MR_def_label(parser__parse_left_term_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i17);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_r4;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_left_term_6_0_i24);
MR_def_label(parser__parse_left_term_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_float_to_word(((MR_Float) 0.0000000000000000 - MR_word_to_float(MR_sv(1))));
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(13);
	}
MR_def_label(parser__parse_left_term_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
MR_def_label(parser__parse_left_term_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i29);
	}
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_left_term_6_0_i32);
MR_def_label(parser__parse_left_term_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(__Unify___lexer__token_0_0,
		parser__parse_left_term_6_0_i34);
MR_def_label(parser__parse_left_term_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i28);
	}
MR_def_label(parser__parse_left_term_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_0,
		parser__parse_left_term_6_0_i36);
MR_def_label(parser__parse_left_term_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ops__lookup_binary_prefix_op_5_0,
		parser__parse_left_term_6_0_i37);
MR_def_label(parser__parse_left_term_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i28);
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i28);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_left_term_6_0_i39);
MR_def_label(parser__parse_left_term_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i28);
	}
	MR_sv(10) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parser__could_start_term_2_0,
		parser__parse_left_term_6_0_i41);
MR_def_label(parser__parse_left_term_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i28);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i43);
	}
	MR_r4 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r5 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(parser__parse_left_term_6_0_i42);
MR_def_label(parser__parse_left_term_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(12);
MR_def_label(parser__parse_left_term_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i45);
	}
	MR_sv(1) = MR_sv(2);
	MR_sv(7) = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_GOTO_LAB(parser__parse_left_term_6_0_i44);
MR_def_label(parser__parse_left_term_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(2);
	MR_sv(7) = MR_sv(1);
MR_def_label(parser__parse_left_term_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(parser__parse_term_2_5_0,
		parser__parse_left_term_6_0_i46);
MR_def_label(parser__parse_left_term_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(parser__parse_left_term_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(12);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(parser__parse_term_2_5_0,
		parser__parse_left_term_6_0_i49);
MR_def_label(parser__parse_left_term_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i51);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(parser__parse_left_term_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_left_term_6_0_i52);
MR_def_label(parser__parse_left_term_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(13);
	}
MR_def_label(parser__parse_left_term_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
MR_def_label(parser__parse_left_term_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i59);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_left_term_6_0_i62);
MR_def_label(parser__parse_left_term_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i61);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(__Unify___lexer__token_0_0,
		parser__parse_left_term_6_0_i64);
MR_def_label(parser__parse_left_term_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i58);
	}
MR_def_label(parser__parse_left_term_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_0,
		parser__parse_left_term_6_0_i66);
MR_def_label(parser__parse_left_term_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ops__lookup_prefix_op_4_0,
		parser__parse_left_term_6_0_i67);
MR_def_label(parser__parse_left_term_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i58);
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i58);
	}
	MR_sv(6) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_left_term_6_0_i69);
MR_def_label(parser__parse_left_term_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i58);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parser__could_start_term_2_0,
		parser__parse_left_term_6_0_i71);
MR_def_label(parser__parse_left_term_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i58);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i73);
	}
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(parser__parse_term_2_5_0,
		parser__parse_left_term_6_0_i74);
MR_def_label(parser__parse_left_term_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(parser__parse_term_2_5_0,
		parser__parse_left_term_6_0_i74);
MR_def_label(parser__parse_left_term_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_left_term_6_0_i76);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(parser__parse_left_term_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_left_term_6_0_i77);
MR_def_label(parser__parse_left_term_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(13);
	}
MR_def_label(parser__parse_left_term_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
MR_def_label(parser__parse_left_term_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(parser__parse_simple_term_6_0,
		parser__parse_left_term_6_0_i82);
MR_def_label(parser__parse_left_term_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(parser__parse_left_term_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("unexpected end-of-file at start of sub-term", 43);
	}
	MR_np_call_localret_ent(fn__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_101_114_114_111_114_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0,
		parser__parse_left_term_6_0_i87);
MR_def_label(parser__parse_left_term_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_2);
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
MR_decl_entry(fn__list__append_2_0);
MR_decl_entry(ops__lookup_postfix_op_4_0);

MR_BEGIN_MODULE(parser_module11)
	MR_init_entry1(parser__parse_rest_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_rest_7_0);
	MR_init_label10(parser__parse_rest_7_0,197,3,6,8,5,15,17,20,12,13)
	MR_init_label10(parser__parse_rest_7_0,22,23,25,26,29,28,30,33,38,41)
	MR_init_label8(parser__parse_rest_7_0,2,48,51,52,54,56,47,201)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_rest'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_rest_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(parser__parse_rest_7_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(11) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(9) = MR_tempr1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1,
		parser__parse_rest_7_0_i3);
MR_def_label(parser__parse_rest_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,8)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i6);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i2);
	}
	MR_sv(12) = MR_r3;
	MR_sv(3) = (MR_Word) MR_string_const(",", 1);
	MR_sv(10) = MR_r4;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(parser__parse_rest_7_0_i5);
MR_def_label(parser__parse_rest_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,7)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i8);
	}
	if (MR_INT_EQ(MR_sv(2),2)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i2);
	}
	MR_sv(12) = MR_r3;
	MR_sv(3) = (MR_Word) MR_string_const("|", 1);
	MR_sv(10) = MR_r4;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(parser__parse_rest_7_0_i5);
MR_def_label(parser__parse_rest_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i2);
	}
	MR_sv(12) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(10) = MR_r4;
	MR_r1 = MR_sv(13);
MR_def_label(parser__parse_rest_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("\140", 1)) != 0)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i13);
	}
	MR_sv(13) = MR_r1;
	MR_r3 = MR_tfield(0, MR_sv(10), 1);
	MR_r2 = (MR_Integer) 7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parser__parse_rest_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__parser__parse_rest_7_0_i15);
MR_def_label(parser__parse_rest_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i12);
	}
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parser__parse_backquoted_operator_5_0,
		parser__parse_rest_7_0_i17);
MR_def_label(parser__parse_rest_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i2);
	}
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_rest_7_0_i20);
MR_def_label(parser__parse_rest_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i2);
	}
	if (((MR_Integer) MR_sv(3) > (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i2);
	}
	MR_r3 = MR_sv(8);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_r4;
	MR_GOTO_LAB(parser__parse_rest_7_0_i25);
MR_def_label(parser__parse_rest_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
MR_def_label(parser__parse_rest_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_sv(3);
	MR_sv(13) = MR_r1;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_0,
		parser__parse_rest_7_0_i22);
MR_def_label(parser__parse_rest_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parser__parse_rest_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__parser__parse_rest_7_0_i23);
MR_def_label(parser__parse_rest_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i2);
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(parser__parse_rest_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(parser__check_priority_3_0,
		parser__parse_rest_7_0_i26);
MR_def_label(parser__parse_rest_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i2);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i29);
	}
	MR_r4 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r5 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(parser__parse_rest_7_0_i28);
MR_def_label(parser__parse_rest_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
MR_def_label(parser__parse_rest_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(parser__parse_term_2_5_0,
		parser__parse_rest_7_0_i30);
MR_def_label(parser__parse_rest_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i201);
	}
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_rest_7_0_i33);
MR_def_label(parser__parse_rest_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		parser__parse_rest_7_0_i38);
MR_def_label(parser__parse_rest_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i41);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parser__parse_rest_7_0_i197);
	}
MR_def_label(parser__parse_rest_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_sv(5), 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parser__parse_rest_7_0_i197);
	}
MR_def_label(parser__parse_rest_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1,
		parser__parse_rest_7_0_i48);
MR_def_label(parser__parse_rest_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i47);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(12) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(10) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_0,
		parser__parse_rest_7_0_i51);
MR_def_label(parser__parse_rest_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(ops__lookup_postfix_op_4_0,
		parser__parse_rest_7_0_i52);
MR_def_label(parser__parse_rest_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i47);
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parser__check_priority_3_0,
		parser__parse_rest_7_0_i54);
MR_def_label(parser__parse_rest_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_rest_7_0_i47);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_rest_7_0_i56);
MR_def_label(parser__parse_rest_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(8);
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parser__parse_rest_7_0_i197);
	}
MR_def_label(parser__parse_rest_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(11);
	MR_r2 = MR_sv(9);
MR_def_label(parser__parse_rest_7_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module12)
	MR_init_entry1(parser__parse_simple_term_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_simple_term_6_0);
	MR_init_label9(parser__parse_simple_term_6_0,4,2,12,11,17,15,19,14,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_simple_term'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_simple_term_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(parser__parse_simple_term_2_6_0,
		parser__parse_simple_term_6_0_i4);
MR_def_label(parser__parse_simple_term_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_simple_term_6_0_i2);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parser__check_for_higher_order_term_5_0);
	}
MR_def_label(parser__parse_simple_term_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_r6 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_tfield(1, MR_tempr3, 2) = MR_tfield(0, MR_tempr2, 3);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr4, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 4) = MR_tfield(0, MR_tempr2, 4);
	if (MR_LTAGS_TESTR(MR_tempr1,0,8)) {
		MR_GOTO_LAB(parser__parse_simple_term_6_0_i12);
	}
	MR_r1 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_GOTO_LAB(parser__parse_simple_term_6_0_i11);
	}
MR_def_label(parser__parse_simple_term_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(parser__parse_simple_term_6_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r4 = MR_tfield(1, MR_r3, 0);
MR_def_label(parser__parse_simple_term_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parser__parse_simple_term_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__parser__parse_simple_term_6_0_i17);
MR_def_label(parser__parse_simple_term_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_simple_term_6_0_i15);
	}
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(parser__parse_simple_term_6_0_i14);
MR_def_label(parser__parse_simple_term_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parser__parse_simple_term_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__parser__parse_simple_term_6_0_i19);
MR_def_label(parser__parse_simple_term_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_simple_term_6_0_i10);
	}
	MR_r2 = MR_sv(1);
MR_def_label(parser__parse_simple_term_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("operator precedence error", 25);
	MR_tfield(1, MR_r1, 1) = MR_tfield(0, MR_r2, 3);
	MR_decr_sp_and_return(6);
MR_def_label(parser__parse_simple_term_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("unexpected token at start of (sub)term", 38);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ops__lookup_op_2_0);
MR_decl_entry(fn__ops__max_priority_1_0);

MR_BEGIN_MODULE(parser_module13)
	MR_init_entry1(parser__parse_simple_term_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_simple_term_2_6_0);
	MR_init_label10(parser__parse_simple_term_2_6_0,209,4,6,8,7,3,12,16,18,17)
	MR_init_label10(parser__parse_simple_term_2_6_0,21,23,24,26,25,15,35,37,36,34)
	MR_init_label10(parser__parse_simple_term_2_6_0,43,45,47,105,49,44,53,56,58,55)
	MR_init_label10(parser__parse_simple_term_2_6_0,42,68,69,67,73,72,78,77,83,82)
	MR_init_label2(parser__parse_simple_term_2_6_0,88,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_simple_term_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_simple_term_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(parser__parse_simple_term_2_6_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i3);
	}
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(parser__parse_term_3_0,
		parser__parse_simple_term_2_6_0_i4);
MR_def_label(parser__parse_simple_term_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i8);
MR_def_label(parser__parse_simple_term_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("expecting \140)\' or operator", 25);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0,
		parser__parse_simple_term_2_6_0_i105);
MR_def_label(parser__parse_simple_term_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i12);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i209);
MR_def_label(parser__parse_simple_term_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,5)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i16);
MR_def_label(parser__parse_simple_term_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i18);
MR_def_label(parser__parse_simple_term_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i17);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const("{}", 2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(parser__parse_special_atom_5_0,
		parser__parse_simple_term_2_6_0_i105);
MR_def_label(parser__parse_simple_term_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parser__parse_term_3_0,
		parser__parse_simple_term_2_6_0_i21);
MR_def_label(parser__parse_simple_term_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0,
		parser__parse_simple_term_2_6_0_i24);
MR_def_label(parser__parse_simple_term_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i26);
MR_def_label(parser__parse_simple_term_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("expecting \140}\' or operator", 25);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0,
		parser__parse_simple_term_2_6_0_i105);
MR_def_label(parser__parse_simple_term_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,3)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i35);
MR_def_label(parser__parse_simple_term_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i37);
MR_def_label(parser__parse_simple_term_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i36);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const("[]", 2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(parser__parse_special_atom_5_0,
		parser__parse_simple_term_2_6_0_i105);
MR_def_label(parser__parse_simple_term_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parser__parse_list_3_0,
		parser__parse_simple_term_2_6_0_i105);
MR_def_label(parser__parse_simple_term_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i42);
	}
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_sv(6) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i43);
MR_def_label(parser__parse_simple_term_2_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i45);
MR_def_label(parser__parse_simple_term_2_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i44);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parser__parse_args_3_0,
		parser__parse_simple_term_2_6_0_i47);
MR_def_label(parser__parse_simple_term_2_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i49);
	}
MR_def_label(parser__parse_simple_term_2_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_0,
		parser__parse_simple_term_2_6_0_i53);
MR_def_label(parser__parse_simple_term_2_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ops__lookup_op_2_0,
		parser__parse_simple_term_2_6_0_i56);
MR_def_label(parser__parse_simple_term_2_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i55);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__ops__max_priority_1_0,
		parser__parse_simple_term_2_6_0_i58);
MR_def_label(parser__parse_simple_term_2_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(5) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i67);
	}
	MR_sv(5) = MR_r4;
	MR_r2 = MR_tfield(2, MR_r3, 0);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0,
		parser__parse_simple_term_2_6_0_i68);
MR_def_label(parser__parse_simple_term_2_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i69);
MR_def_label(parser__parse_simple_term_2_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i72);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(3, MR_r3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i73);
MR_def_label(parser__parse_simple_term_2_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i77);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(3, MR_r3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i78);
MR_def_label(parser__parse_simple_term_2_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i82);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(3, MR_r3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i83);
MR_def_label(parser__parse_simple_term_2_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(parser__parse_simple_term_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(3, MR_r3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_simple_term_2_6_0_i88);
MR_def_label(parser__parse_simple_term_2_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_simple_term_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module14)
	MR_init_entry1(parser__check_for_higher_order_term_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__check_for_higher_order_term_5_0);
	MR_init_label6(parser__check_for_higher_order_term_5_0,44,6,10,2,3,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_for_higher_order_term'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__check_for_higher_order_term_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(parser__check_for_higher_order_term_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parser__check_for_higher_order_term_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parser__check_for_higher_order_term_5_0_i3);
	}
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___lexer__token_0_0,
		parser__check_for_higher_order_term_5_0_i6);
MR_def_label(parser__check_for_higher_order_term_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__check_for_higher_order_term_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(parser__parse_args_3_0,
		parser__check_for_higher_order_term_5_0_i10);
MR_def_label(parser__check_for_higher_order_term_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parser__check_for_higher_order_term_5_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_tempr2;
	MR_r1 = MR_sv(6);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(parser__check_for_higher_order_term_5_0_i44);
	}
MR_def_label(parser__check_for_higher_order_term_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
MR_def_label(parser__check_for_higher_order_term_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
MR_def_label(parser__check_for_higher_order_term_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module15)
	MR_init_entry1(parser__parse_special_atom_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_special_atom_5_0);
	MR_init_label5(parser__parse_special_atom_5_0,5,8,2,3,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_special_atom'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_special_atom_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parser__parse_special_atom_5_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___lexer__token_0_0,
		parser__parse_special_atom_5_0_i5);
MR_def_label(parser__parse_special_atom_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_special_atom_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(parser__parse_args_3_0,
		parser__parse_special_atom_5_0_i8);
MR_def_label(parser__parse_special_atom_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_special_atom_5_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_special_atom_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
MR_def_label(parser__parse_special_atom_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_r5;
	}
MR_def_label(parser__parse_special_atom_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module16)
	MR_init_entry1(parser__parse_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_list_3_0);
	MR_init_label3(parser__parse_list_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parser__parse_list_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__parser__parse_list_3_0_i2);
MR_def_label(parser__parse_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(parser__parse_term_2_5_0,
		parser__parse_list_3_0_i3);
MR_def_label(parser__parse_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_list_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parser__parse_list_2_4_0);
	}
MR_def_label(parser__parse_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module17)
	MR_init_entry1(parser__parse_list_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_list_2_4_0);
	MR_init_label10(parser__parse_list_2_4_0,5,8,6,18,22,21,16,31,2,44)
	MR_init_label1(parser__parse_list_2_4_0,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_list_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_list_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parser__parse_list_2_4_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 2);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_list_2_4_0_i5);
MR_def_label(parser__parse_list_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(parser__parse_list_2_4_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parser__parse_list_3_0,
		parser__parse_list_2_4_0_i8);
MR_def_label(parser__parse_list_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_list_2_4_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_list_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(parser__parse_list_2_4_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parser__parse_arg_3_0,
		parser__parse_list_2_4_0_i18);
MR_def_label(parser__parse_list_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_list_2_4_0_i45);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,
		parser__parse_list_2_4_0_i22);
MR_def_label(parser__parse_list_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_list_2_4_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_list_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("expecting \']\' or operator", 25);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0);
MR_def_label(parser__parse_list_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(parser__parse_list_2_4_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
MR_def_label(parser__parse_list_2_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("expected comma, \140|\', \140]\', or operator", 37);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0);
MR_def_label(parser__parse_list_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("unexpected end-of-file in list", 30);
	}
	MR_np_call_localret_ent(fn__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_101_114_114_111_114_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0,
		parser__parse_list_2_4_0_i44);
MR_def_label(parser__parse_list_2_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(parser__parse_list_2_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module18)
	MR_init_entry1(parser__parse_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_args_3_0);
	MR_init_label7(parser__parse_args_3_0,2,3,11,9,16,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parser__parse_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parser__parse_args_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__parser__parse_args_3_0_i2);
MR_def_label(parser__parse_args_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(parser__parse_term_2_5_0,
		parser__parse_args_3_0_i3);
MR_def_label(parser__parse_args_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_args_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parser__parse_args_3_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 2);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_r2, 4);
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r6,0,8)) {
		MR_GOTO_LAB(parser__parse_args_3_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(parser__parse_args_3_0,
		parser__parse_args_3_0_i11);
MR_def_label(parser__parse_args_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_args_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parser__parse_args_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,2)) {
		MR_GOTO_LAB(parser__parse_args_3_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parser__parse_args_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = (MR_Word) MR_string_const("expected \140,\', \140)\', or operator", 30);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0);
	}
MR_def_label(parser__parse_args_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("unexpected end-of-file in argument list", 39);
	MR_tfield(1, MR_r1, 1) = MR_tfield(0, MR_r2, 3);
MR_def_label(parser__parse_args_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module19)
	MR_init_entry1(parser__parse_whole_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_whole_term_3_0);
	MR_init_label6(parser__parse_whole_term_3_0,2,3,9,6,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_whole_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__parse_whole_term_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parser__parse_whole_term_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__parser__parse_whole_term_3_0_i2);
MR_def_label(parser__parse_whole_term_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(parser__parse_term_2_5_0,
		parser__parse_whole_term_3_0_i3);
MR_def_label(parser__parse_whole_term_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parser__parse_whole_term_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parser__parse_whole_term_3_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___lexer__token_0_0,
		parser__parse_whole_term_3_0_i9);
MR_def_label(parser__parse_whole_term_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parser__parse_whole_term_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(parser__parse_whole_term_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
MR_def_label(parser__parse_whole_term_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("operator or \140.\' expected", 24);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0);
	}
MR_def_label(parser__parse_whole_term_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module20)
	MR_init_entry1(parser__init_parser_state_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__init_parser_state_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_parser_state'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__init_parser_state_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_r4;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tfield(0, MR_r1, 3) = MR_r5;
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module21)
	MR_init_entry1(parser__final_parser_state_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__final_parser_state_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'final_parser_state'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__final_parser_state_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module22)
	MR_init_entry1(parser__parse_tokens_with_op_table_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_tokens_with_op_table_4_0);
	MR_init_label2(parser__parse_tokens_with_op_table_4_0,18,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_tokens_with_op_table'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__parse_tokens_with_op_table_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parser__parse_tokens_with_op_table_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parser__parse_tokens_with_op_table_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parser__parse_whole_term_3_0,
		parser__parse_tokens_with_op_table_4_0_i6);
MR_def_label(parser__parse_tokens_with_op_table_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr2, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(parser__check_for_errors_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(lexer__get_token_5_0);
MR_decl_entry(lexer__get_token_list_2_6_0);

MR_BEGIN_MODULE(parser_module23)
	MR_init_entry1(parser__read_term_filename_with_op_table_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__read_term_filename_with_op_table_5_0);
	MR_init_label2(parser__read_term_filename_with_op_table_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term_filename_with_op_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__read_term_filename_with_op_table_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__parser__read_term_filename_with_op_table_5_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1360 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 3751 "parser.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_token_5_0,
		parser__read_term_filename_with_op_table_5_0_i2);
MR_def_label(parser__read_term_filename_with_op_table_5_0,2)
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
		parser__read_term_filename_with_op_table_5_0_i3);
MR_def_label(parser__read_term_filename_with_op_table_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
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

MR_decl_entry(io__stream_name_4_0);

MR_BEGIN_MODULE(parser_module24)
	MR_init_entry1(parser__read_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__read_term_3_0);
	MR_init_label3(parser__read_term_3_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__read_term_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__parser__read_term_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1360 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 3829 "parser.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__stream_name_4_0,
		parser__read_term_3_0_i2);
MR_def_label(parser__read_term_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__parser__read_term_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1360 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 3855 "parser.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_token_5_0,
		parser__read_term_3_0_i4);
MR_def_label(parser__read_term_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(lexer__get_token_list_2_6_0,
		parser__read_term_3_0_i5);
MR_def_label(parser__read_term_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parser__parse_tokens_with_op_table_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module25)
	MR_init_entry1(parser__read_term_with_op_table_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__read_term_with_op_table_4_0);
	MR_init_label3(parser__read_term_with_op_table_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term_with_op_table'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__read_term_with_op_table_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__parser__read_term_with_op_table_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1360 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 3929 "parser.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__stream_name_4_0,
		parser__read_term_with_op_table_4_0_i2);
MR_def_label(parser__read_term_with_op_table_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__parser__read_term_with_op_table_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1360 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 3957 "parser.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_token_5_0,
		parser__read_term_with_op_table_4_0_i3);
MR_def_label(parser__read_term_with_op_table_4_0,3)
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
		parser__read_term_with_op_table_4_0_i4);
MR_def_label(parser__read_term_with_op_table_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
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


MR_BEGIN_MODULE(parser_module26)
	MR_init_entry1(parser__read_term_filename_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__read_term_filename_4_0);
	MR_init_label2(parser__read_term_filename_4_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term_filename'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__read_term_filename_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__parser__read_term_filename_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1360 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 4031 "parser.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_token_5_0,
		parser__read_term_filename_4_0_i3);
MR_def_label(parser__read_term_filename_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(lexer__get_token_list_2_6_0,
		parser__read_term_filename_4_0_i4);
MR_def_label(parser__read_term_filename_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parser__parse_tokens_with_op_table_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(lexer__string_get_token_list_max_5_0);

MR_BEGIN_MODULE(parser_module27)
	MR_init_entry1(parser__read_term_from_substring_with_op_table_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__read_term_from_substring_with_op_table_7_0);
	MR_init_label2(parser__read_term_from_substring_with_op_table_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term_from_substring_with_op_table'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__read_term_from_substring_with_op_table_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(lexer__string_get_token_list_max_5_0,
		parser__read_term_from_substring_with_op_table_7_0_i2);
MR_def_label(parser__read_term_from_substring_with_op_table_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(parser__parse_tokens_with_op_table_4_0,
		parser__read_term_from_substring_with_op_table_7_0_i3);
MR_def_label(parser__read_term_from_substring_with_op_table_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module28)
	MR_init_entry1(parser__read_term_from_string_with_op_table_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__read_term_from_string_with_op_table_5_0);
	MR_init_label2(parser__read_term_from_string_with_op_table_5_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term_from_string_with_op_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__read_term_from_string_with_op_table_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parser__read_term_from_string_with_op_table_5_0
	Str = (MR_String) MR_r5;
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 4161 "parser.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	}
	MR_np_call_localret_ent(lexer__string_get_token_list_max_5_0,
		parser__read_term_from_string_with_op_table_5_0_i3);
MR_def_label(parser__read_term_from_string_with_op_table_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(parser__parse_tokens_with_op_table_4_0,
		parser__read_term_from_string_with_op_table_5_0_i4);
MR_def_label(parser__read_term_from_string_with_op_table_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module29)
	MR_init_entry1(parser__read_term_from_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__read_term_from_string_4_0);
	MR_init_label2(parser__read_term_from_string_4_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term_from_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__read_term_from_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parser__read_term_from_string_4_0
	Str = (MR_String) MR_r3;
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 4234 "parser.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	}
	MR_np_call_localret_ent(lexer__string_get_token_list_max_5_0,
		parser__read_term_from_string_4_0_i4);
MR_def_label(parser__read_term_from_string_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(parser__parse_tokens_with_op_table_4_0,
		parser__read_term_from_string_4_0_i5);
MR_def_label(parser__read_term_from_string_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module30)
	MR_init_entry1(parser__read_term_from_substring_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__read_term_from_substring_6_0);
	MR_init_label2(parser__read_term_from_substring_6_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term_from_substring'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__read_term_from_substring_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(lexer__string_get_token_list_max_5_0,
		parser__read_term_from_substring_6_0_i3);
MR_def_label(parser__read_term_from_substring_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(parser__parse_tokens_with_op_table_4_0,
		parser__read_term_from_substring_6_0_i4);
MR_def_label(parser__read_term_from_substring_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module31)
	MR_init_entry1(parser__parse_tokens_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parser__parse_tokens_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_tokens'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parser__parse_tokens_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r3;
	MR_np_tailcall_ent(parser__parse_tokens_with_op_table_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___lexer__token_list_0_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(parser_module32)
	MR_init_entry1(__Unify___parser__parse_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parser__parse_1_0);
	MR_init_label3(__Unify___parser__parse_1_0,17,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parser__parse_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___parser__parse_1_0_i17);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___parser__parse_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___parser__parse_1_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parser__parse_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___lexer__token_list_0_0);
	}
MR_def_label(__Unify___parser__parse_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parser__parse_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___parser__parse_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___parser__parse_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___lexer__token_list_0_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(parser_module33)
	MR_init_entry1(__Compare___parser__parse_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parser__parse_1_0);
	MR_init_label9(__Compare___parser__parse_1_0,3,2,10,11,14,7,5,20,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parser__parse_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___parser__parse_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(__Compare___parser__parse_1_0_i2);
MR_def_label(__Compare___parser__parse_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parser__parse_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parser__parse_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___parser__parse_1_0_i7);
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
#define	MR_PROC_LABEL	mercury____Compare___parser__parse_1_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 4486 "parser.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___parser__parse_1_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(__Compare___parser__parse_1_0_i14);
	}
MR_def_label(__Compare___parser__parse_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___parser__parse_1_0_i11);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(__Compare___parser__parse_1_0_i14);
MR_def_label(__Compare___parser__parse_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(3) = MR_r2;
MR_def_label(__Compare___parser__parse_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parser__parse_1_0_i58);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___lexer__token_list_0_0);
	}
MR_def_label(__Compare___parser__parse_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parser__parse_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___parser__parse_1_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parser__parse_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(3), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___parser__parse_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(parser_module34)
	MR_init_entry1(__Unify___parser__state_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parser__state_2_0);
	MR_init_label5(__Unify___parser__state_2_0,4,6,8,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parser__state_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___parser__state_2_0_i13);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parser__state_2_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr5 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = MR_tempr5;
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___parser__state_2_0_i4);
MR_def_label(__Unify___parser__state_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parser__state_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parser__state_2_0_i6);
MR_def_label(__Unify___parser__state_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parser__state_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___lexer__token_list_0_0,
		__Unify___parser__state_2_0_i8);
MR_def_label(__Unify___parser__state_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parser__state_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___parser__state_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parser__state_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(parser_module35)
	MR_init_entry1(__Compare___parser__state_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parser__state_2_0);
	MR_init_label9(__Compare___parser__state_2_0,3,2,6,7,10,14,18,22,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parser__state_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___parser__state_2_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_GOTO_LAB(__Compare___parser__state_2_0_i2);
MR_def_label(__Compare___parser__state_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parser__state_2_0,2)
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
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___parser__state_2_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 4712 "parser.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___parser__state_2_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___parser__state_2_0_i10);
	}
MR_def_label(__Compare___parser__state_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___parser__state_2_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___parser__state_2_0_i10);
MR_def_label(__Compare___parser__state_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___parser__state_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parser__state_2_0_i57);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___parser__state_2_0_i14);
MR_def_label(__Compare___parser__state_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parser__state_2_0_i57);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parser__state_2_0_i18);
MR_def_label(__Compare___parser__state_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parser__state_2_0_i57);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___lexer__token_list_0_0,
		__Compare___parser__state_2_0_i22);
MR_def_label(__Compare___parser__state_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parser__state_2_0_i57);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_sv(10);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___parser__state_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module36)
	MR_init_entry1(__Unify___parser__term_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parser__term_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parser__term_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module37)
	MR_init_entry1(__Compare___parser__term_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parser__term_kind_0_0);
	MR_init_label2(__Compare___parser__term_kind_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parser__term_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___parser__term_kind_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___parser__term_kind_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___parser__term_kind_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parser__term_kind_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module38)
	MR_init_entry1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0);
	MR_init_label9(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,76,6,5,8,10,11,14,18,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parse_backquoted_operator_2__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 3);
	MR_r6 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r7 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i2);
	}
	MR_r8 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r8, MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tfield(0, MR_r2, 1);
	MR_r5 = MR_tfield(0, MR_r2, 2);
	MR_r8 = MR_tempr1;
	MR_r6 = MR_tfield(0, MR_r2, 4);
	MR_r7 = MR_tfield(1, MR_r8, 2);
	MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i5);
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r8, MR_string_const(":", 1)) != 0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	MR_r2 = MR_r5;
	MR_r3 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tfield(0, MR_r2, 1);
	MR_r5 = MR_tfield(0, MR_r2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r6 = MR_tfield(0, MR_r2, 4);
	MR_r7 = MR_tfield(1, MR_tempr1, 2);
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i8);
	}
	MR_r8 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r9 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r10 = MR_r5;
	MR_r5 = MR_r8;
	MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i2);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tempr2 = MR_r7;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 4) = MR_r6;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TEST(MR_r3,1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i10);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r6;
	MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i2);
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r7, 1);
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("\140", 1)) != 0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i11);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r7 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r6;
	MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i2);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0,
		f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i14);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(2);
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r5 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i76);
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_sv(1), 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r5 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0_i76);
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module39)
	MR_init_entry1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0);
	MR_init_label2(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__conjunction_to_list__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(",", 1)) != 0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0_i2);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0,
		f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0_i9);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module40)
	MR_init_entry1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_init_label1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parser_unexpected__[1, 2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 2);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0);
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(1, MR_r1, 1) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module41)
	MR_init_entry1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0);
	MR_init_label8(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0,7,6,12,10,14,9,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parser_unexpected_tok__[1, 2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	if (MR_LTAGS_TESTR(MR_r2,0,8)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0_i7);
	}
	MR_sv(1) = MR_r4;
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0_i6);
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0_i5);
	}
	MR_sv(1) = MR_r4;
	MR_r4 = MR_tfield(1, MR_r2, 0);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_sv(4), 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0_i12);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0_i10);
	}
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0_i9);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0_i14);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0_i4);
	}
	MR_r2 = MR_sv(4);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("operator precedence error", 25);
	MR_tfield(1, MR_r1, 1) = MR_tfield(0, MR_r2, 3);
	MR_decr_sp_and_return(6);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module42)
	MR_init_entry1(fn__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_101_114_114_111_114_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_101_114_114_111_114_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__make_error__[1, 2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_101_114_114_111_114_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module43)
	MR_init_entry1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_init_label2(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parser_get_token__[1, 2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___lexer__token_0_0,
		f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0_i3);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,1)
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


MR_BEGIN_MODULE(parser_module44)
	MR_init_entry1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1);
	MR_init_label1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parser_get_token_context__[1, 2]_1'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 2);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_r1, 4);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module45)
	MR_init_entry1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_init_label1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parser_peek_token__[1, 2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(tree234__search_3_0);
MR_decl_entry(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(parser_module46)
	MR_init_entry1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0);
	MR_init_label6(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0,4,2,8,6,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__add_var__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0_i8);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) + (MR_Integer) 1);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0_i11);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0_i13);
MR_def_label(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module47)
	MR_init_entry1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__get_ops_table__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module48)
	MR_init_entry1(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__get_term_context__[1, 2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parser_module49)
	MR_init_entry1(fn__f_112_97_114_115_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_97_114_115_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_97_114_115_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parser_maybe_bunch_0(void)
{
	parser_module0();
	parser_module1();
	parser_module2();
	parser_module3();
	parser_module4();
	parser_module5();
	parser_module6();
	parser_module7();
	parser_module8();
	parser_module9();
	parser_module10();
	parser_module11();
	parser_module12();
	parser_module13();
	parser_module14();
	parser_module15();
	parser_module16();
	parser_module17();
	parser_module18();
	parser_module19();
	parser_module20();
	parser_module21();
	parser_module22();
	parser_module23();
	parser_module24();
	parser_module25();
	parser_module26();
	parser_module27();
	parser_module28();
	parser_module29();
	parser_module30();
	parser_module31();
	parser_module32();
	parser_module33();
	parser_module34();
	parser_module35();
	parser_module36();
	parser_module37();
	parser_module38();
	parser_module39();
}

static void mercury__parser_maybe_bunch_1(void)
{
	parser_module40();
	parser_module41();
	parser_module42();
	parser_module43();
	parser_module44();
	parser_module45();
	parser_module46();
	parser_module47();
	parser_module48();
	parser_module49();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parser__init(void);
void mercury__parser__init_type_tables(void);
void mercury__parser__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parser__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parser__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__parser__init_threadscope_string_table(void);
#endif

void mercury__parser__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parser_maybe_bunch_0();
	mercury__parser_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parser__type_ctor_info_parse_1,
		parser__parse_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parser__type_ctor_info_state_2,
		parser__state_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parser__type_ctor_info_term_kind_0,
		parser__term_kind_0_0);
	mercury__parser__init_debugger();
}

void mercury__parser__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parser__type_ctor_info_parse_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parser__type_ctor_info_state_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parser__type_ctor_info_term_kind_0);
	}
}


void mercury__parser__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parser__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parser);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parser__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__parser__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
