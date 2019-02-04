/*
** Automatically generated from `parse.m'
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
INIT mercury__mdb__parse__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 27 "mdb.parse.c"
#line 520 "../library/io.int"
#include "io.mh"

#line 31 "mdb.parse.c"
#line 526 "../library/io.int"
#include "string.mh"

#line 35 "mdb.parse.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "mdb.parse.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 43 "mdb.parse.c"
#line 28 "../library/array.int2"
#include "array.mh"

#line 47 "mdb.parse.c"
#line 48 "mdb.parse.c"
#include "mdb.parse.mh"

#line 51 "mdb.parse.c"
#line 52 "mdb.parse.c"
#ifndef MDB__PARSE_DECL_GUARD
#define MDB__PARSE_DECL_GUARD

#line 56 "mdb.parse.c"
#line 57 "mdb.parse.c"

#endif
#line 60 "mdb.parse.c"


struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1[2];
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[3];
};
static const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
};
static const struct mercury_type_7 mercury_common_7[];

static const struct mercury_type_4 mercury_vector_common_4_0[];

static const struct mercury_type_4 mercury_vector_common_4_1[];

static const struct mercury_type_4 mercury_vector_common_4_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__parse__type_ctor_info_token_0,
	mercury_data_mdb__parse__type_ctor_info_setting_option_0,
	mercury_data_mdb__parse__type_ctor_info_path_0,
	mercury_data_mdb__parse__type_ctor_info_format_param_cmd_0,
	mercury_data_mdb__parse__type_ctor_info_format_option_0,
	mercury_data_mdb__parse__type_ctor_info_external_request_0,
	mercury_data_mdb__parse__type_ctor_info_command_0;
MR_decl_label4(mdb__parse__digits_to_int_acc_3_0, 12,4,5,14)
MR_decl_label3(mdb__parse__format_cmd_option_defaults_2_0, 2,3,4)
MR_decl_label3(mdb__parse__format_option_defaults_2_0, 2,3,4)
MR_decl_label3(mdb__parse__format_param_cmd_option_defaults_2_0, 2,3,4)
MR_decl_label4(mdb__parse__lexer_dots_2_0, 20,6,4,7)
MR_decl_label3(mdb__parse__lexer_name_3_0, 2,3,4)
MR_decl_label3(mdb__parse__lexer_num_3_0, 2,3,4)
MR_decl_label8(mdb__parse__lexer_word_chars_2_0, 115,3,4,9,7,12,10,15)
MR_decl_label8(mdb__parse__lexer_word_chars_2_0, 13,18,16,22,25,19,29,31)
MR_decl_label7(mdb__parse__lexer_word_chars_2_0, 32,27,36,34,41,39,44)
MR_decl_label4(mdb__parse__lexer_words_2_0, 4,5,6,3)
MR_decl_label3(mdb__parse__long_format_cmd_option_2_0, 3,4,1)
MR_decl_label4(mdb__parse__long_format_option_2_0, 3,4,5,1)
MR_decl_label7(mdb__parse__long_format_param_cmd_option_2_0, 3,4,5,6,7,8,1)
MR_decl_label4(mdb__parse__param_cmd_to_setting_3_0, 3,4,5,6)
MR_decl_label7(mdb__parse__parse_2_0, 42,4,5,6,7,11,13)
MR_decl_label8(mdb__parse__parse_cmd_4_0, 3,2,11,494,17,10,24,25)
MR_decl_label8(mdb__parse__parse_cmd_4_0, 26,19,28,35,36,37,34,39)
MR_decl_label8(mdb__parse__parse_cmd_4_0, 46,45,41,52,54,48,56,32)
MR_decl_label8(mdb__parse__parse_cmd_4_0, 502,66,61,504,74,75,76,68)
MR_decl_label8(mdb__parse__parse_cmd_4_0, 81,82,83,80,86,88,89,93)
MR_decl_label8(mdb__parse__parse_cmd_4_0, 78,94,97,103,109,107,115,514)
MR_decl_label8(mdb__parse__parse_cmd_4_0, 121,126,127,125,130,131,119,137)
MR_decl_label2(mdb__parse__parse_cmd_4_0, 492,1)
MR_decl_label8(mdb__parse__parse_dirs_2_0, 60,3,20,16,17,6,7,8)
MR_decl_label2(mdb__parse__parse_dirs_2_0, 13,1)
MR_decl_label4(mdb__parse__parse_format_2_0, 4,7,10,1)
MR_decl_label4(mdb__parse__parse_path_2_0, 5,3,7,1)
MR_decl_label4(mdb__parse__read_command_4_0, 2,3,6,5)
MR_decl_label5(mdb__parse__read_command_external_3_0, 2,5,6,9,8)
MR_decl_label3(mdb__parse__short_format_cmd_option_2_0, 3,4,1)
MR_decl_label4(mdb__parse__short_format_option_2_0, 3,4,5,1)
MR_decl_label7(mdb__parse__short_format_param_cmd_option_2_0, 3,4,5,6,7,8,1)
MR_decl_label8(__Unify___mdb__parse__command_0_0, 13,119,16,20,24,25,29,121)
MR_decl_label1(__Unify___mdb__parse__command_0_0, 1)
MR_decl_label2(__Unify___mdb__parse__path_0_0, 3,1)
MR_decl_label6(__Unify___mdb__parse__token_0_0, 10,11,13,15,16,1)
MR_decl_label8(__Index___mdb__parse__command_0_0, 4,5,6,7,8,9,10,11)
MR_decl_label7(__Index___mdb__parse__command_0_0, 12,13,14,15,16,17,18)
MR_decl_label8(__Compare___mdb__parse__command_0_0, 2,3,4,5,18,19,22,27)
MR_decl_label7(__Compare___mdb__parse__command_0_0, 30,34,38,31,44,6,52)
MR_decl_label3(__Compare___mdb__parse__path_0_0, 14,5,3)
MR_decl_label8(__Compare___mdb__parse__token_0_0, 4,5,8,17,19,22,31,33)
MR_decl_label8(__Compare___mdb__parse__token_0_0, 36,45,47,50,59,61,64,73)
MR_decl_label8(__Compare___mdb__parse__token_0_0, 75,78,84,87,200,89,99,104)
MR_decl_label5(__Compare___mdb__parse__token_0_0, 115,119,120,159,147)
MR_decl_static(mdb__parse__digits_to_int_acc_3_0)
MR_decl_static(mdb__parse__lexer_word_chars_2_0)
MR_decl_static(mdb__parse__lexer_dots_2_0)
MR_decl_static(mdb__parse__lexer_num_3_0)
MR_decl_static(mdb__parse__lexer_name_3_0)
MR_decl_static(mdb__parse__lexer_words_2_0)
MR_decl_static(mdb__parse__param_cmd_to_setting_3_0)
MR_decl_static(mdb__parse__parse_dirs_2_0)
MR_decl_static(mdb__parse__parse_path_2_0)
MR_decl_static(mdb__parse__parse_format_2_0)
MR_decl_static(mdb__parse__parse_cmd_4_0)
MR_def_extern_entry(mdb__parse__parse_2_0)
MR_def_extern_entry(mdb__parse__read_command_4_0)
MR_def_extern_entry(mdb__parse__read_command_external_3_0)
MR_decl_static(mdb__parse__short_format_option_2_0)
MR_decl_static(mdb__parse__long_format_option_2_0)
MR_decl_static(mdb__parse__format_option_defaults_2_0)
MR_decl_static(mdb__parse__short_format_cmd_option_2_0)
MR_decl_static(mdb__parse__long_format_cmd_option_2_0)
MR_decl_static(mdb__parse__format_cmd_option_defaults_2_0)
MR_decl_static(mdb__parse__short_format_param_cmd_option_2_0)
MR_decl_static(mdb__parse__long_format_param_cmd_option_2_0)
MR_decl_static(mdb__parse__format_param_cmd_option_defaults_2_0)
MR_def_extern_entry(__Unify___mdb__parse__command_0_0)
MR_def_extern_entry(__Index___mdb__parse__command_0_0)
MR_def_extern_entry(__Compare___mdb__parse__command_0_0)
MR_def_extern_entry(__Unify___mdb__parse__external_request_0_0)
MR_def_extern_entry(__Compare___mdb__parse__external_request_0_0)
MR_def_extern_entry(__Unify___mdb__parse__format_option_0_0)
MR_def_extern_entry(__Compare___mdb__parse__format_option_0_0)
MR_def_extern_entry(__Unify___mdb__parse__format_param_cmd_0_0)
MR_def_extern_entry(__Compare___mdb__parse__format_param_cmd_0_0)
MR_def_extern_entry(__Unify___mdb__parse__path_0_0)
MR_def_extern_entry(__Compare___mdb__parse__path_0_0)
MR_def_extern_entry(__Unify___mdb__parse__setting_option_0_0)
MR_def_extern_entry(__Compare___mdb__parse__setting_option_0_0)
MR_decl_static(__Unify___mdb__parse__token_0_0)
MR_decl_static(__Compare___mdb__parse__token_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__lexer_num_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__lexer_name_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__read_command_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__read_command_external_3_0_1;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__lexer_num_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__lexer_name_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__read_command_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__read_command_external_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

MR_decl_entry(char__is_digit_1_0);
MR_decl_entry(char__is_alnum_or_underscore_1_0);
MR_decl_entry(char__is_whitespace_1_0);
static const struct mercury_type_1 mercury_common_1[16] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(char__is_digit_1_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(char__is_alnum_or_underscore_1_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(mdb__parse__short_format_cmd_option_2_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(mdb__parse__long_format_cmd_option_2_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(mdb__parse__format_cmd_option_defaults_2_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(mdb__parse__short_format_param_cmd_option_2_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(mdb__parse__long_format_param_cmd_option_2_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(mdb__parse__format_param_cmd_option_defaults_2_0),
0
},
{
MR_COMMON(5,6),
MR_ENTRY_AP(mdb__parse__short_format_option_2_0),
0
},
{
MR_COMMON(5,7),
MR_ENTRY_AP(mdb__parse__long_format_option_2_0),
0
},
{
MR_COMMON(5,8),
MR_ENTRY_AP(mdb__parse__format_option_defaults_2_0),
0
},
{
MR_COMMON(5,9),
MR_ENTRY_AP(mdb__parse__short_format_param_cmd_option_2_0),
0
},
{
MR_COMMON(5,10),
MR_ENTRY_AP(mdb__parse__long_format_param_cmd_option_2_0),
0
},
{
MR_COMMON(5,11),
MR_ENTRY_AP(mdb__parse__format_param_cmd_option_defaults_2_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(char__is_whitespace_1_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(char__is_whitespace_1_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
1,
0
}
},
{
{
1,
1
}
},
{
{
1,
2
}
},
{
{
1,
3
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_maybe_option_table_1;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, token)
}
},
{
{
MR_CTOR1_ADDR(getopt, maybe_option_table),
MR_CTOR0_ADDR(mdb__parse, format_option)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
2,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_setting_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_7;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_format_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_12;
static const struct mercury_type_5 mercury_common_5[12] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, setting_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, setting_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdb__parse, setting_option),
MR_CTOR0_ADDR(getopt, option_data)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, setting_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, setting_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdb__parse, setting_option),
MR_CTOR0_ADDR(getopt, option_data)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, format_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_8,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, format_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_9,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdb__parse, format_option),
MR_CTOR0_ADDR(getopt, option_data)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_10,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, setting_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_11,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, setting_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_12,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdb__parse, setting_option),
MR_CTOR0_ADDR(getopt, option_data)
},
};

static const struct mercury_type_6 mercury_common_6[4] =
{
{
{
MR_TAG_COMMON(0,1,2),
MR_TAG_COMMON(0,1,3),
MR_TAG_COMMON(0,1,4)
}
},
{
{
MR_TAG_COMMON(0,1,5),
MR_TAG_COMMON(0,1,6),
MR_TAG_COMMON(0,1,7)
}
},
{
{
MR_TAG_COMMON(0,1,8),
MR_TAG_COMMON(0,1,9),
MR_TAG_COMMON(0,1,10)
}
},
{
{
MR_TAG_COMMON(0,1,11),
MR_TAG_COMMON(0,1,12),
MR_TAG_COMMON(0,1,13)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
0
},
};

static const struct mercury_type_4 mercury_vector_common_4_0[4] =
{
{
0,
MR_TAG_COMMON(1,7,0)
},
{
1,
MR_TAG_COMMON(1,7,0)
},
{
2,
MR_TAG_COMMON(1,7,0)
},
{
3,
MR_TAG_COMMON(1,7,0)
},
};

static const struct mercury_type_4 mercury_vector_common_4_1[7] =
{
{
0,
MR_TAG_COMMON(1,7,0)
},
{
1,
MR_TAG_COMMON(1,7,0)
},
{
2,
MR_TAG_COMMON(1,7,0)
},
{
3,
MR_TAG_COMMON(1,7,0)
},
{
4,
MR_TAG_COMMON(1,7,0)
},
{
5,
MR_TAG_COMMON(1,7,0)
},
{
6,
MR_TAG_COMMON(1,7,0)
},
};

static const struct mercury_type_4 mercury_vector_common_4_2[7] =
{
{
0,
MR_TAG_COMMON(1,7,0)
},
{
1,
MR_TAG_COMMON(1,7,0)
},
{
2,
MR_TAG_COMMON(1,7,0)
},
{
3,
MR_TAG_COMMON(1,7,0)
},
{
4,
MR_TAG_COMMON(1,7,0)
},
{
5,
MR_TAG_COMMON(1,7,0)
},
{
6,
MR_TAG_COMMON(1,7,0)
},
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_0 = {
	".",
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

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_1 = {
	"..",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_2 = {
	"/",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_3 = {
	"?",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_4 = {
	"^",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_5 = {
	"<",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_token_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_6 = {
	"num",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_token_0_6,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_token_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_7 = {
	"name",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	7,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_token_0_7,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_token_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_8 = {
	"arg",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	8,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_token_0_8,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_token_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_9 = {
	"unknown",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	9,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_token_0_9,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_token_0_0[] = {
	&mercury_data_mdb__parse__du_functor_desc_token_0_0,
	&mercury_data_mdb__parse__du_functor_desc_token_0_1,
	&mercury_data_mdb__parse__du_functor_desc_token_0_2,
	&mercury_data_mdb__parse__du_functor_desc_token_0_3,
	&mercury_data_mdb__parse__du_functor_desc_token_0_4,
	&mercury_data_mdb__parse__du_functor_desc_token_0_5

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_token_0_1[] = {
	&mercury_data_mdb__parse__du_functor_desc_token_0_6

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_token_0_2[] = {
	&mercury_data_mdb__parse__du_functor_desc_token_0_7

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_token_0_3[] = {
	&mercury_data_mdb__parse__du_functor_desc_token_0_8,
	&mercury_data_mdb__parse__du_functor_desc_token_0_9

};

const MR_DuPtagLayout mercury_data_mdb__parse__du_ptag_ordered_token_0[] = {
	{ 6, MR_SECTAG_LOCAL,
	mercury_data_mdb__parse__du_stag_ordered_token_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__parse__du_stag_ordered_token_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__parse__du_stag_ordered_token_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_mdb__parse__du_stag_ordered_token_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_name_ordered_token_0[] = {
	&mercury_data_mdb__parse__du_functor_desc_token_0_0,
	&mercury_data_mdb__parse__du_functor_desc_token_0_1,
	&mercury_data_mdb__parse__du_functor_desc_token_0_2,
	&mercury_data_mdb__parse__du_functor_desc_token_0_5,
	&mercury_data_mdb__parse__du_functor_desc_token_0_3,
	&mercury_data_mdb__parse__du_functor_desc_token_0_4,
	&mercury_data_mdb__parse__du_functor_desc_token_0_8,
	&mercury_data_mdb__parse__du_functor_desc_token_0_7,
	&mercury_data_mdb__parse__du_functor_desc_token_0_6,
	&mercury_data_mdb__parse__du_functor_desc_token_0_9
};

const MR_Integer mercury_data_mdb__parse__functor_number_map_token_0[] = {
	0,
	1,
	2,
	4,
	5,
	3,
	8,
	7,
	6,
	9 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_token_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__parse__token_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__parse__token_0_0)),
	"mdb.parse",
	"token",
	{ (void *)mercury_data_mdb__parse__du_name_ordered_token_0 },
	{ (void *)mercury_data_mdb__parse__du_ptag_ordered_token_0 },
	10,
	4,
	mercury_data_mdb__parse__functor_number_map_token_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_setting_option_0_0 = {
	"set_print",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_setting_option_0_1 = {
	"set_browse",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_setting_option_0_2 = {
	"set_print_all",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_setting_option_0_3 = {
	"set_flat",
	3
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_setting_option_0_4 = {
	"set_raw_pretty",
	4
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_setting_option_0_5 = {
	"set_verbose",
	5
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_setting_option_0_6 = {
	"set_pretty",
	6
};

const MR_EnumFunctorDescPtr mercury_data_mdb__parse__enum_value_ordered_setting_option_0[] = {
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_0,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_1,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_2,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_3,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_4,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_5,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_6
};

const MR_EnumFunctorDescPtr mercury_data_mdb__parse__enum_name_ordered_setting_option_0[] = {
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_1,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_3,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_6,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_0,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_2,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_4,
	&mercury_data_mdb__parse__enum_functor_desc_setting_option_0_5
};

const MR_Integer mercury_data_mdb__parse__functor_number_map_setting_option_0[] = {
	3,
	0,
	4,
	1,
	5,
	6,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_setting_option_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__parse__setting_option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__parse__setting_option_0_0)),
	"mdb.parse",
	"setting_option",
	{ (void *)mercury_data_mdb__parse__enum_name_ordered_setting_option_0 },
	{ (void *)mercury_data_mdb__parse__enum_value_ordered_setting_option_0 },
	7,
	4,
	mercury_data_mdb__parse__functor_number_map_setting_option_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_dir_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_dir_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_dir_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_path_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdb__browser_info__type_ctor_info_dir_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_path_0_0 = {
	"root_rel",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_path_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_path_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdb__browser_info__type_ctor_info_dir_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_path_0_1 = {
	"dot_rel",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_path_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_path_0_0[] = {
	&mercury_data_mdb__parse__du_functor_desc_path_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_path_0_1[] = {
	&mercury_data_mdb__parse__du_functor_desc_path_0_1

};

const MR_DuPtagLayout mercury_data_mdb__parse__du_ptag_ordered_path_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__parse__du_stag_ordered_path_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__parse__du_stag_ordered_path_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_name_ordered_path_0[] = {
	&mercury_data_mdb__parse__du_functor_desc_path_0_1,
	&mercury_data_mdb__parse__du_functor_desc_path_0_0
};

const MR_Integer mercury_data_mdb__parse__functor_number_map_path_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_path_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__parse__path_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__parse__path_0_0)),
	"mdb.parse",
	"path",
	{ (void *)mercury_data_mdb__parse__du_name_ordered_path_0 },
	{ (void *)mercury_data_mdb__parse__du_ptag_ordered_path_0 },
	2,
	4,
	mercury_data_mdb__parse__functor_number_map_path_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_0 = {
	"param_depth",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_1 = {
	"param_size",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_2 = {
	"param_width",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_3 = {
	"param_lines",
	3
};

const MR_EnumFunctorDescPtr mercury_data_mdb__parse__enum_value_ordered_format_param_cmd_0[] = {
	&mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_0,
	&mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_1,
	&mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_2,
	&mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_3
};

const MR_EnumFunctorDescPtr mercury_data_mdb__parse__enum_name_ordered_format_param_cmd_0[] = {
	&mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_0,
	&mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_3,
	&mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_1,
	&mercury_data_mdb__parse__enum_functor_desc_format_param_cmd_0_2
};

const MR_Integer mercury_data_mdb__parse__functor_number_map_format_param_cmd_0[] = {
	0,
	2,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_format_param_cmd_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__parse__format_param_cmd_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__parse__format_param_cmd_0_0)),
	"mdb.parse",
	"format_param_cmd",
	{ (void *)mercury_data_mdb__parse__enum_name_ordered_format_param_cmd_0 },
	{ (void *)mercury_data_mdb__parse__enum_value_ordered_format_param_cmd_0 },
	4,
	4,
	mercury_data_mdb__parse__functor_number_map_format_param_cmd_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_format_option_0_0 = {
	"flat",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_format_option_0_1 = {
	"raw_pretty",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_format_option_0_2 = {
	"verbose",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdb__parse__enum_functor_desc_format_option_0_3 = {
	"pretty",
	3
};

const MR_EnumFunctorDescPtr mercury_data_mdb__parse__enum_value_ordered_format_option_0[] = {
	&mercury_data_mdb__parse__enum_functor_desc_format_option_0_0,
	&mercury_data_mdb__parse__enum_functor_desc_format_option_0_1,
	&mercury_data_mdb__parse__enum_functor_desc_format_option_0_2,
	&mercury_data_mdb__parse__enum_functor_desc_format_option_0_3
};

const MR_EnumFunctorDescPtr mercury_data_mdb__parse__enum_name_ordered_format_option_0[] = {
	&mercury_data_mdb__parse__enum_functor_desc_format_option_0_0,
	&mercury_data_mdb__parse__enum_functor_desc_format_option_0_3,
	&mercury_data_mdb__parse__enum_functor_desc_format_option_0_1,
	&mercury_data_mdb__parse__enum_functor_desc_format_option_0_2
};

const MR_Integer mercury_data_mdb__parse__functor_number_map_format_option_0[] = {
	0,
	2,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_format_option_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__parse__format_option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__parse__format_option_0_0)),
	"mdb.parse",
	"format_option",
	{ (void *)mercury_data_mdb__parse__enum_name_ordered_format_option_0 },
	{ (void *)mercury_data_mdb__parse__enum_value_ordered_format_option_0 },
	4,
	4,
	mercury_data_mdb__parse__functor_number_map_format_option_0
};

static const MR_NotagFunctorDesc mercury_data_mdb__parse__notag_functor_desc_external_request_0 = {
	"external_request",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_mdb__parse__functor_number_map_external_request_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_external_request_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__parse__external_request_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__parse__external_request_0_0)),
	"mdb.parse",
	"external_request",
	{ (void *)&mercury_data_mdb__parse__notag_functor_desc_external_request_0 },
	{ (void *)&mercury_data_mdb__parse__notag_functor_desc_external_request_0 },
	1,
	4,
	mercury_data_mdb__parse__functor_number_map_external_request_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_format_option_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0 = {
	&mercury_data_getopt__type_ctor_info_maybe_option_table_1,
{	(MR_TypeInfo) &mercury_data_mdb__parse__type_ctor_info_format_option_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_path_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdb__parse__type_ctor_info_path_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_command_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_0 = {
	"print",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_command_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_1 = {
	"cd_path",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_2 = {
	"cd_no_path",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0;

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_command_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_3 = {
	"track",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_command_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_4 = {
	"mode_query",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_4,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_5 = {
	"mode_query",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_6 = {
	"pwd",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_7 = {
	"help",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_param_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_param_cmd_0;

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_command_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_param_cmd_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_8 = {
	"param_command",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	8,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_8,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_9 = {
	"quit",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_10 = {
	"display",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_11 = {
	"write",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_12 = {
	"empty",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_13 = {
	"unknown",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_command_0_0[] = {
	&mercury_data_mdb__parse__du_functor_desc_command_0_2,
	&mercury_data_mdb__parse__du_functor_desc_command_0_5,
	&mercury_data_mdb__parse__du_functor_desc_command_0_6,
	&mercury_data_mdb__parse__du_functor_desc_command_0_7,
	&mercury_data_mdb__parse__du_functor_desc_command_0_9,
	&mercury_data_mdb__parse__du_functor_desc_command_0_10,
	&mercury_data_mdb__parse__du_functor_desc_command_0_11,
	&mercury_data_mdb__parse__du_functor_desc_command_0_12,
	&mercury_data_mdb__parse__du_functor_desc_command_0_13

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_command_0_1[] = {
	&mercury_data_mdb__parse__du_functor_desc_command_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_command_0_2[] = {
	&mercury_data_mdb__parse__du_functor_desc_command_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_command_0_3[] = {
	&mercury_data_mdb__parse__du_functor_desc_command_0_3,
	&mercury_data_mdb__parse__du_functor_desc_command_0_4,
	&mercury_data_mdb__parse__du_functor_desc_command_0_8

};

const MR_DuPtagLayout mercury_data_mdb__parse__du_ptag_ordered_command_0[] = {
	{ 9, MR_SECTAG_LOCAL,
	mercury_data_mdb__parse__du_stag_ordered_command_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__parse__du_stag_ordered_command_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__parse__du_stag_ordered_command_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_mdb__parse__du_stag_ordered_command_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_name_ordered_command_0[] = {
	&mercury_data_mdb__parse__du_functor_desc_command_0_2,
	&mercury_data_mdb__parse__du_functor_desc_command_0_1,
	&mercury_data_mdb__parse__du_functor_desc_command_0_10,
	&mercury_data_mdb__parse__du_functor_desc_command_0_12,
	&mercury_data_mdb__parse__du_functor_desc_command_0_7,
	&mercury_data_mdb__parse__du_functor_desc_command_0_5,
	&mercury_data_mdb__parse__du_functor_desc_command_0_4,
	&mercury_data_mdb__parse__du_functor_desc_command_0_8,
	&mercury_data_mdb__parse__du_functor_desc_command_0_0,
	&mercury_data_mdb__parse__du_functor_desc_command_0_6,
	&mercury_data_mdb__parse__du_functor_desc_command_0_9,
	&mercury_data_mdb__parse__du_functor_desc_command_0_3,
	&mercury_data_mdb__parse__du_functor_desc_command_0_13,
	&mercury_data_mdb__parse__du_functor_desc_command_0_11
};

const MR_Integer mercury_data_mdb__parse__functor_number_map_command_0[] = {
	8,
	1,
	0,
	11,
	6,
	5,
	9,
	4,
	7,
	10,
	2,
	13,
	3,
	12 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_command_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__parse__command_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__parse__command_0_0)),
	"mdb.parse",
	"command",
	{ (void *)mercury_data_mdb__parse__du_name_ordered_command_0 },
	{ (void *)mercury_data_mdb__parse__du_ptag_ordered_command_0 },
	14,
	4,
	mercury_data_mdb__parse__functor_number_map_command_0
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__lexer_num_3_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"is_digit",
1,
0
},
"mdb.parse",
"parse.m",
319,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__lexer_name_3_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"is_alnum_or_underscore",
1,
0
},
"mdb.parse",
"parse.m",
335,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_1 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"short_format_cmd_option",
2,
0
},
"mdb.parse",
"parse.m",
469,
"d1;c5;e;e;e;e;e;e;t;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_2 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"long_format_cmd_option",
2,
0
},
"mdb.parse",
"parse.m",
469,
"d1;c5;e;e;e;e;e;e;t;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_3 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"format_cmd_option_defaults",
2,
0
},
"mdb.parse",
"parse.m",
469,
"d1;c5;e;e;e;e;e;e;t;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_4 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"short_format_param_cmd_option",
2,
0
},
"mdb.parse",
"parse.m",
498,
"d1;c5;e;e;e;e;e;e;e;t;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_5 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"long_format_param_cmd_option",
2,
0
},
"mdb.parse",
"parse.m",
498,
"d1;c5;e;e;e;e;e;e;e;t;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_6 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"format_param_cmd_option_defaults",
2,
0
},
"mdb.parse",
"parse.m",
498,
"d1;c5;e;e;e;e;e;e;e;t;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_7 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"short_format_option",
2,
0
},
"mdb.parse",
"parse.m",
548,
"d1;c5;e;e;e;e;e;e;e;e;e;e;e;e;e;t;c1;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_8 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"long_format_option",
2,
0
},
"mdb.parse",
"parse.m",
548,
"d1;c5;e;e;e;e;e;e;e;e;e;e;e;e;e;t;c1;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_9 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"format_option_defaults",
2,
0
},
"mdb.parse",
"parse.m",
548,
"d1;c5;e;e;e;e;e;e;e;e;e;e;e;e;e;t;c1;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_10 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"short_format_param_cmd_option",
2,
0
},
"mdb.parse",
"parse.m",
568,
"d1;c5;e;e;e;e;e;e;e;e;e;e;e;e;e;e;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_11 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"long_format_param_cmd_option",
2,
0
},
"mdb.parse",
"parse.m",
568,
"d1;c5;e;e;e;e;e;e;e;e;e;e;e;e;e;e;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_12 = {
{
MR_PREDICATE,
"mdb.parse",
"mdb.parse",
"format_param_cmd_option_defaults",
2,
0
},
"mdb.parse",
"parse.m",
568,
"d1;c5;e;e;e;e;e;e;e;e;e;e;e;e;e;e;t;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__read_command_4_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"is_whitespace",
1,
0
},
"mdb.parse",
"parse.m",
214,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__read_command_external_3_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"is_whitespace",
1,
0
},
"mdb.parse",
"parse.m",
225,
"d1;c5;d1;c4;"
};

MR_decl_entry(char__to_int_2_0);

MR_BEGIN_MODULE(mdb__parse_module0)
	MR_init_entry1(mdb__parse__digits_to_int_acc_3_0);
	MR_init_label4(mdb__parse__digits_to_int_acc_3_0,12,4,5,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__digits_to_int_acc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdb__parse__digits_to_int_acc_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__digits_to_int_acc_3_0_i14);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 48;
	}
	MR_np_call_localret_ent(char__to_int_2_0,
		mdb__parse__digits_to_int_acc_3_0_i4);
MR_def_label(mdb__parse__digits_to_int_acc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(char__to_int_2_0,
		mdb__parse__digits_to_int_acc_3_0_i5);
MR_def_label(mdb__parse__digits_to_int_acc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) 10 * (MR_Integer) MR_sv(1)) + ((MR_Integer) MR_r1 - (MR_Integer) MR_sv(2)));
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdb__parse__digits_to_int_acc_3_0_i12);
MR_def_label(mdb__parse__digits_to_int_acc_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(char__is_alpha_or_underscore_1_0);

MR_BEGIN_MODULE(mdb__parse_module1)
	MR_init_entry1(mdb__parse__lexer_word_chars_2_0);
	MR_init_label8(mdb__parse__lexer_word_chars_2_0,115,3,4,9,7,12,10,15)
	MR_init_label8(mdb__parse__lexer_word_chars_2_0,13,18,16,22,25,19,29,31)
	MR_init_label7(mdb__parse__lexer_word_chars_2_0,32,27,36,34,41,39,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__lexer_word_chars_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdb__parse__lexer_word_chars_2_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__lexer_word_chars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_sv(1),46)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i4);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__parse__lexer_dots_2_0);
MR_def_label(mdb__parse__lexer_word_chars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),47)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i7);
	}
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_word_chars_2_0_i9);
MR_def_label(mdb__parse__lexer_word_chars_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__lexer_word_chars_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),63)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i10);
	}
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_word_chars_2_0_i12);
MR_def_label(mdb__parse__lexer_word_chars_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__lexer_word_chars_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),94)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i13);
	}
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_word_chars_2_0_i15);
MR_def_label(mdb__parse__lexer_word_chars_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__lexer_word_chars_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),60)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i16);
	}
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_word_chars_2_0_i18);
MR_def_label(mdb__parse__lexer_word_chars_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__lexer_word_chars_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),45)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i19);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,45)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i22);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		mdb__parse__lexer_word_chars_2_0_i25);
MR_def_label(mdb__parse__lexer_word_chars_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		mdb__parse__lexer_word_chars_2_0_i25);
MR_def_label(mdb__parse__lexer_word_chars_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__lexer_word_chars_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(char__is_digit_1_0,
		mdb__parse__lexer_word_chars_2_0_i29);
MR_def_label(mdb__parse__lexer_word_chars_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i27);
	}
	MR_r1 = (MR_Integer) 48;
	MR_np_call_localret_ent(char__to_int_2_0,
		mdb__parse__lexer_word_chars_2_0_i31);
MR_def_label(mdb__parse__lexer_word_chars_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(char__to_int_2_0,
		mdb__parse__lexer_word_chars_2_0_i32);
MR_def_label(mdb__parse__lexer_word_chars_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) MR_sv(1));
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__parse__lexer_num_3_0);
MR_def_label(mdb__parse__lexer_word_chars_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(char__is_alpha_or_underscore_1_0,
		mdb__parse__lexer_word_chars_2_0_i36);
MR_def_label(mdb__parse__lexer_word_chars_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i34);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__parse__lexer_name_3_0);
MR_def_label(mdb__parse__lexer_word_chars_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		mdb__parse__lexer_word_chars_2_0_i41);
MR_def_label(mdb__parse__lexer_word_chars_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i39);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i115);
MR_def_label(mdb__parse__lexer_word_chars_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_word_chars_2_0_i44);
MR_def_label(mdb__parse__lexer_word_chars_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module2)
	MR_init_entry1(mdb__parse__lexer_dots_2_0);
	MR_init_label4(mdb__parse__lexer_dots_2_0,20,6,4,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__lexer_dots_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__lexer_dots_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdb__parse__lexer_dots_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,46)) {
		MR_GOTO_LAB(mdb__parse__lexer_dots_2_0_i4);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_dots_2_0_i6);
MR_def_label(mdb__parse__lexer_dots_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(mdb__parse__lexer_dots_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_dots_2_0_i7);
MR_def_label(mdb__parse__lexer_dots_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__takewhile_4_0);

MR_BEGIN_MODULE(mdb__parse_module3)
	MR_init_entry1(mdb__parse__lexer_num_3_0);
	MR_init_label3(mdb__parse__lexer_num_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__lexer_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(list__takewhile_4_0,
		mdb__parse__lexer_num_3_0_i2);
MR_def_label(mdb__parse__lexer_num_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__parse__digits_to_int_acc_3_0,
		mdb__parse__lexer_num_3_0_i3);
MR_def_label(mdb__parse__lexer_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_num_3_0_i4);
MR_def_label(mdb__parse__lexer_num_3_0,4)
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


MR_BEGIN_MODULE(mdb__parse_module4)
	MR_init_entry1(mdb__parse__lexer_name_3_0);
	MR_init_label3(mdb__parse__lexer_name_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__lexer_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(list__takewhile_4_0,
		mdb__parse__lexer_name_3_0_i2);
MR_def_label(mdb__parse__lexer_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		mdb__parse__lexer_name_3_0_i3);
MR_def_label(mdb__parse__lexer_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_name_3_0_i4);
MR_def_label(mdb__parse__lexer_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(mdb__parse_module5)
	MR_init_entry1(mdb__parse__lexer_words_2_0);
	MR_init_label4(mdb__parse__lexer_words_2_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__lexer_words_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__lexer_words_2_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		mdb__parse__lexer_words_2_0_i4);
MR_def_label(mdb__parse__lexer_words_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_words_2_0_i5);
MR_def_label(mdb__parse__lexer_words_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(mdb__parse__lexer_words_2_0,
		mdb__parse__lexer_words_2_0_i6);
MR_def_label(mdb__parse__lexer_words_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, token);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_1);
MR_def_label(mdb__parse__lexer_words_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module6)
	MR_init_entry1(mdb__parse__param_cmd_to_setting_3_0);
	MR_init_label4(mdb__parse__param_cmd_to_setting_3_0,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__param_cmd_to_setting_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(mdb__parse__param_cmd_to_setting_3_0_i3) MR_AND
		MR_LABEL_AP(mdb__parse__param_cmd_to_setting_3_0_i4) MR_AND
		MR_LABEL_AP(mdb__parse__param_cmd_to_setting_3_0_i5) MR_AND
		MR_LABEL_AP(mdb__parse__param_cmd_to_setting_3_0_i6));
MR_def_label(mdb__parse__param_cmd_to_setting_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(mdb__parse__param_cmd_to_setting_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(mdb__parse__param_cmd_to_setting_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(mdb__parse__param_cmd_to_setting_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module7)
	MR_init_entry1(mdb__parse__parse_dirs_2_0);
	MR_init_label8(mdb__parse__parse_dirs_2_0,60,3,20,16,17,6,7,8)
	MR_init_label2(mdb__parse__parse_dirs_2_0,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__parse_dirs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(mdb__parse__parse_dirs_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(mdb__parse__parse_dirs_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i16);
	}
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i1);
	}
	MR_tag_alloc_heap(MR_sv(1), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(1), 0) = MR_ctfield(2, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(mdb__parse__parse_dirs_2_0,
		mdb__parse__parse_dirs_2_0_i20);
MR_def_label(mdb__parse__parse_dirs_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i1);
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
MR_def_label(mdb__parse__parse_dirs_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(mdb__parse__parse_dirs_2_0,
		mdb__parse__parse_dirs_2_0_i17);
MR_def_label(mdb__parse__parse_dirs_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i1);
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
MR_def_label(mdb__parse__parse_dirs_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(mdb__parse__parse_dirs_2_0_i1) MR_AND
		MR_LABEL_AP(mdb__parse__parse_dirs_2_0_i7) MR_AND
		MR_LABEL_AP(mdb__parse__parse_dirs_2_0_i13) MR_AND
		MR_LABEL_AP(mdb__parse__parse_dirs_2_0_i1) MR_AND
		MR_LABEL_AP(mdb__parse__parse_dirs_2_0_i13) MR_AND
		MR_LABEL_AP(mdb__parse__parse_dirs_2_0_i1));
MR_def_label(mdb__parse__parse_dirs_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(mdb__parse__parse_dirs_2_0,
		mdb__parse__parse_dirs_2_0_i8);
MR_def_label(mdb__parse__parse_dirs_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdb__parse__parse_dirs_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i60);
MR_def_label(mdb__parse__parse_dirs_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module8)
	MR_init_entry1(mdb__parse__parse_path_2_0);
	MR_init_label4(mdb__parse__parse_path_2_0,5,3,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__parse_path_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_path_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(mdb__parse__parse_path_2_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(mdb__parse__parse_dirs_2_0,
		mdb__parse__parse_path_2_0_i5);
MR_def_label(mdb__parse__parse_path_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_path_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_path_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_dirs_2_0,
		mdb__parse__parse_path_2_0_i7);
MR_def_label(mdb__parse__parse_path_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_path_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_path_2_0,1)
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


MR_BEGIN_MODULE(mdb__parse_module9)
	MR_init_entry1(mdb__parse__parse_format_2_0);
	MR_init_label4(mdb__parse__parse_format_2_0,4,7,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__parse_format_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i1);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i4);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("flat", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_format_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("raw_pretty", 10)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i7);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_format_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i10);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_format_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("pretty", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_format_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(getopt__process_options_4_0);

MR_BEGIN_MODULE(mdb__parse_module10)
	MR_init_entry1(mdb__parse__parse_cmd_4_0);
	MR_init_label8(mdb__parse__parse_cmd_4_0,3,2,11,494,17,10,24,25)
	MR_init_label8(mdb__parse__parse_cmd_4_0,26,19,28,35,36,37,34,39)
	MR_init_label8(mdb__parse__parse_cmd_4_0,46,45,41,52,54,48,56,32)
	MR_init_label8(mdb__parse__parse_cmd_4_0,502,66,61,504,74,75,76,68)
	MR_init_label8(mdb__parse__parse_cmd_4_0,81,82,83,80,86,88,89,93)
	MR_init_label8(mdb__parse__parse_cmd_4_0,78,94,97,103,109,107,115,514)
	MR_init_label8(mdb__parse__parse_cmd_4_0,121,126,127,125,130,131,119,137)
	MR_init_label2(mdb__parse__parse_cmd_4_0,492,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__parse_cmd_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,3)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("h", 1)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i3);
	}
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("help", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i2);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i492);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_cmd_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,4)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i11);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("cd", 2)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i10);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i494);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_cmd_4_0,494)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i17);
MR_def_label(mdb__parse__parse_cmd_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("cdr", 3)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		mdb__parse__parse_cmd_4_0_i24);
MR_def_label(mdb__parse__parse_cmd_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, token);
	MR_np_call_localret_ent(list__condense_2_0,
		mdb__parse__parse_cmd_4_0_i25);
MR_def_label(mdb__parse__parse_cmd_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i26);
MR_def_label(mdb__parse__parse_cmd_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("pwd", 3)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i28);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i492);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i32);
	}
	MR_r4 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("m", 1)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i35);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 0;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i34);
MR_def_label(mdb__parse__parse_cmd_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("mark", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i36);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 0;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i34);
MR_def_label(mdb__parse__parse_cmd_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("t", 1)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i37);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i34);
MR_def_label(mdb__parse__parse_cmd_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("track", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i32);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 1;
MR_def_label(mdb__parse__parse_cmd_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i41);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i41);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i41);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("a", 1)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i46);
	}
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i45);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("accurate", 8)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i41);
	}
	MR_r1 = MR_r2;
MR_def_label(mdb__parse__parse_cmd_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i48);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("a", 1)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i52);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i54);
MR_def_label(mdb__parse__parse_cmd_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("accurate", 8)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i48);
	}
	MR_r1 = MR_ctfield(1, MR_r2, 1);
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i54);
MR_def_label(mdb__parse__parse_cmd_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i56);
MR_def_label(mdb__parse__parse_cmd_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i61);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("mode", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i61);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i502);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,502)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i66);
MR_def_label(mdb__parse__parse_cmd_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i68);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("format", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i68);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i504);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,504)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,6,0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(getopt__process_options_4_0,
		mdb__parse__parse_cmd_4_0_i74);
MR_def_label(mdb__parse__parse_cmd_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(mdb__parse__lexer_words_2_0,
		mdb__parse__parse_cmd_4_0_i75);
MR_def_label(mdb__parse__parse_cmd_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_format_2_0,
		mdb__parse__parse_cmd_4_0_i76);
MR_def_label(mdb__parse__parse_cmd_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i78);
	}
	MR_r4 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("depth", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i81);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 0;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i80);
MR_def_label(mdb__parse__parse_cmd_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("lines", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i82);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 3;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i80);
MR_def_label(mdb__parse__parse_cmd_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("size", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i83);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i80);
MR_def_label(mdb__parse__parse_cmd_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("width", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i78);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 2;
MR_def_label(mdb__parse__parse_cmd_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i86);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__parse_cmd_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,6,1);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(getopt__process_options_4_0,
		mdb__parse__parse_cmd_4_0_i88);
MR_def_label(mdb__parse__parse_cmd_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(mdb__parse__lexer_words_2_0,
		mdb__parse__parse_cmd_4_0_i89);
MR_def_label(mdb__parse__parse_cmd_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__parse__param_cmd_to_setting_3_0,
		mdb__parse__parse_cmd_4_0_i93);
MR_def_label(mdb__parse__parse_cmd_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i94);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("params", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i94);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i97);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("num_io_actions", 14)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i97);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i492);
	}
	MR_tempr4 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i492);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i492);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i103);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("quit", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i103);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i492);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i107);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("d", 1)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i109);
	}
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("display", 7)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i107);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i492);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_cmd_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i514);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("w", 1)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i115);
	}
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("write", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i514);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i492);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_cmd_4_0,514)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i119);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("ls", 2)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i121);
	}
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("p", 1)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i121);
	}
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("print", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i119);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i126);
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i125);
MR_def_label(mdb__parse__parse_cmd_4_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, format_option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,6,2);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(getopt__process_options_4_0,
		mdb__parse__parse_cmd_4_0_i127);
MR_def_label(mdb__parse__parse_cmd_4_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r2;
	MR_np_call_localret_ent(mdb__parse__lexer_words_2_0,
		mdb__parse__parse_cmd_4_0_i125);
MR_def_label(mdb__parse__parse_cmd_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i130);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i131);
MR_def_label(mdb__parse__parse_cmd_4_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,6,3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		mdb__parse__parse_cmd_4_0_i137);
MR_def_label(mdb__parse__parse_cmd_4_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_r2;
	MR_tfield(2, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,492)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdb__parse__parse_cmd_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module11)
	MR_init_entry1(mdb__parse__parse_2_0);
	MR_init_label7(mdb__parse__parse_2_0,42,4,5,6,7,11,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__parse__parse_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_2_0_i42);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		mdb__parse__parse_2_0_i4);
MR_def_label(mdb__parse__parse_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__parse_2_0_i5);
MR_def_label(mdb__parse__parse_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__parse__lexer_words_2_0,
		mdb__parse__parse_2_0_i6);
MR_def_label(mdb__parse__parse_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_2_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_2_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, token);
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__parse__parse_2_0_i11);
MR_def_label(mdb__parse__parse_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, token);
	MR_np_call_localret_ent(list__append_3_1,
		mdb__parse__parse_2_0_i11);
MR_def_label(mdb__parse__parse_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_2_0_i13);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__parse_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__parse__parse_cmd_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__util__trace_get_command_4_0);
MR_decl_entry(fn__string__words_separator_2_0);

MR_BEGIN_MODULE(mdb__parse_module12)
	MR_init_entry1(mdb__parse__read_command_4_0);
	MR_init_label4(mdb__parse__read_command_4_0,2,3,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__parse__read_command_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__util__trace_get_command_4_0,
		mdb__parse__read_command_4_0_i2);
MR_def_label(mdb__parse__read_command_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdb__parse__read_command_4_0_i3);
MR_def_label(mdb__parse__read_command_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_2_0,
		mdb__parse__read_command_4_0_i6);
MR_def_label(mdb__parse__read_command_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__read_command_4_0_i5);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__parse__read_command_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_3_0);

MR_BEGIN_MODULE(mdb__parse_module13)
	MR_init_entry1(mdb__parse__read_command_external_3_0);
	MR_init_label5(mdb__parse__read_command_external_3_0,2,5,6,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__parse__read_command_external_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, external_request);
	MR_np_call_localret_ent(io__read_3_0,
		mdb__parse__read_command_external_3_0_i2);
MR_def_label(mdb__parse__read_command_external_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdb__parse__read_command_external_3_0_i5);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__read_command_external_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__parse__read_command_external_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdb__parse__read_command_external_3_0_i6);
MR_def_label(mdb__parse__read_command_external_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_2_0,
		mdb__parse__read_command_external_3_0_i9);
MR_def_label(mdb__parse__read_command_external_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__read_command_external_3_0_i8);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__parse__read_command_external_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module14)
	MR_init_entry1(mdb__parse__short_format_option_2_0);
	MR_init_label4(mdb__parse__short_format_option_2_0,3,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__short_format_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,102)) {
		MR_GOTO_LAB(mdb__parse__short_format_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,112)) {
		MR_GOTO_LAB(mdb__parse__short_format_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,114)) {
		MR_GOTO_LAB(mdb__parse__short_format_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(mdb__parse__short_format_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module15)
	MR_init_entry1(mdb__parse__long_format_option_2_0);
	MR_init_label4(mdb__parse__long_format_option_2_0,3,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__long_format_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("flat", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("pretty", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("raw-pretty", 10)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mdb__parse_module16)
	MR_init_entry1(mdb__parse__format_option_defaults_2_0);
	MR_init_label3(mdb__parse__format_option_defaults_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__format_option_defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdb.parse.format_option_defaults/2-0", 1,
		MR_LABEL_AP(mdb__parse__format_option_defaults_2_0_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, (MR_Integer) 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdb__parse__format_option_defaults_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,6)) {
		MR_GOTO_LAB(mdb__parse__format_option_defaults_2_0_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdb__parse__format_option_defaults_2_0_i4);
MR_def_label(mdb__parse__format_option_defaults_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdb__parse__format_option_defaults_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, MR_r3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module17)
	MR_init_entry1(mdb__parse__short_format_cmd_option_2_0);
	MR_init_label3(mdb__parse__short_format_cmd_option_2_0,3,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__short_format_cmd_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,65)) {
		MR_GOTO_LAB(mdb__parse__short_format_cmd_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_cmd_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,66)) {
		MR_GOTO_LAB(mdb__parse__short_format_cmd_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_cmd_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,80)) {
		MR_GOTO_LAB(mdb__parse__short_format_cmd_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_cmd_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module18)
	MR_init_entry1(mdb__parse__long_format_cmd_option_2_0);
	MR_init_label3(mdb__parse__long_format_cmd_option_2_0,3,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__long_format_cmd_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("browse", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_cmd_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_cmd_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("print", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_cmd_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_cmd_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("print-all", 9)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_cmd_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_cmd_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module19)
	MR_init_entry1(mdb__parse__format_cmd_option_defaults_2_0);
	MR_init_label3(mdb__parse__format_cmd_option_defaults_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__format_cmd_option_defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdb.parse.format_cmd_option_defaults/2-0", 1,
		MR_LABEL_AP(mdb__parse__format_cmd_option_defaults_2_0_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_1, (MR_Integer) 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdb__parse__format_cmd_option_defaults_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,12)) {
		MR_GOTO_LAB(mdb__parse__format_cmd_option_defaults_2_0_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdb__parse__format_cmd_option_defaults_2_0_i4);
MR_def_label(mdb__parse__format_cmd_option_defaults_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdb__parse__format_cmd_option_defaults_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_1, MR_r3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module20)
	MR_init_entry1(mdb__parse__short_format_param_cmd_option_2_0);
	MR_init_label7(mdb__parse__short_format_param_cmd_option_2_0,3,4,5,6,7,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__short_format_param_cmd_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,65)) {
		MR_GOTO_LAB(mdb__parse__short_format_param_cmd_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_param_cmd_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,66)) {
		MR_GOTO_LAB(mdb__parse__short_format_param_cmd_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_param_cmd_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,80)) {
		MR_GOTO_LAB(mdb__parse__short_format_param_cmd_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_param_cmd_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,102)) {
		MR_GOTO_LAB(mdb__parse__short_format_param_cmd_option_2_0_i6);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_param_cmd_option_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,112)) {
		MR_GOTO_LAB(mdb__parse__short_format_param_cmd_option_2_0_i7);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_param_cmd_option_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,114)) {
		MR_GOTO_LAB(mdb__parse__short_format_param_cmd_option_2_0_i8);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_param_cmd_option_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(mdb__parse__short_format_param_cmd_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__short_format_param_cmd_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module21)
	MR_init_entry1(mdb__parse__long_format_param_cmd_option_2_0);
	MR_init_label7(mdb__parse__long_format_param_cmd_option_2_0,3,4,5,6,7,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__long_format_param_cmd_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("browse", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("flat", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("pretty", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("print", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i6);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("print-all", 9)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i7);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("raw-pretty", 10)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i8);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module22)
	MR_init_entry1(mdb__parse__format_param_cmd_option_defaults_2_0);
	MR_init_label3(mdb__parse__format_param_cmd_option_defaults_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__format_param_cmd_option_defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdb.parse.format_param_cmd_option_defaults/2-0", 1,
		MR_LABEL_AP(mdb__parse__format_param_cmd_option_defaults_2_0_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_2, (MR_Integer) 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdb__parse__format_param_cmd_option_defaults_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,12)) {
		MR_GOTO_LAB(mdb__parse__format_param_cmd_option_defaults_2_0_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdb__parse__format_param_cmd_option_defaults_2_0_i4);
MR_def_label(mdb__parse__format_param_cmd_option_defaults_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdb__parse__format_param_cmd_option_defaults_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_2, MR_r3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___mdb__browser_info__param_cmd_0_0);

MR_BEGIN_MODULE(mdb__parse_module23)
	MR_init_entry1(__Unify___mdb__parse__command_0_0);
	MR_init_label8(__Unify___mdb__parse__command_0_0,13,119,16,20,24,25,29,121)
	MR_init_label1(__Unify___mdb__parse__command_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__parse__command_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___mdb__parse__command_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___mdb__parse__command_0_0_i119) MR_AND
		MR_LABEL_AP(__Unify___mdb__parse__command_0_0_i20) MR_AND
		MR_LABEL_AP(__Unify___mdb__parse__command_0_0_i24));
MR_def_label(__Unify___mdb__parse__command_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__command_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__parse__command_0_0_i16);
MR_def_label(__Unify___mdb__parse__command_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, path);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdb__parse__command_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i121);
	}
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_np_tailcall_ent(__Unify___mdb__parse__path_0_0);
MR_def_label(__Unify___mdb__parse__command_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i121);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i121);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i121);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, path);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	MR_r3 = MR_ctfield(3, MR_tempr2, 3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___mdb__parse__command_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i29);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i121);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(__Unify___mdb__parse__path_0_0);
MR_def_label(__Unify___mdb__parse__command_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i121);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(__Unify___mdb__browser_info__param_cmd_0_0);
MR_def_label(__Unify___mdb__parse__command_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Unify___mdb__parse__command_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module24)
	MR_init_entry1(__Index___mdb__parse__command_0_0);
	MR_init_label8(__Index___mdb__parse__command_0_0,4,5,6,7,8,9,10,11)
	MR_init_label7(__Index___mdb__parse__command_0_0,12,13,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___mdb__parse__command_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i16));
MR_def_label(__Index___mdb__parse__command_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___mdb__parse__command_0_0_i13));
MR_def_label(__Index___mdb__parse__command_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i17);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i18);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___mdb__browser_info__param_cmd_0_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(mdb__parse_module25)
	MR_init_entry1(__Compare___mdb__parse__command_0_0);
	MR_init_label8(__Compare___mdb__parse__command_0_0,2,3,4,5,18,19,22,27)
	MR_init_label7(__Compare___mdb__parse__command_0_0,30,34,38,31,44,6,52)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__parse__command_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___mdb__parse__command_0_0,
		__Compare___mdb__parse__command_0_0_i2);
MR_def_label(__Compare___mdb__parse__command_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___mdb__parse__command_0_0,
		__Compare___mdb__parse__command_0_0_i3);
MR_def_label(__Compare___mdb__parse__command_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i5);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__command_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__command_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__command_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__command_0_0_i30));
MR_def_label(__Compare___mdb__parse__command_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr2 = MR_ctfield(1, MR_r2, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__parse__command_0_0_i22);
MR_def_label(__Compare___mdb__parse__command_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, path);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__parse__command_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i6);
	}
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdb__parse__path_0_0);
MR_def_label(__Compare___mdb__parse__command_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__parse__command_0_0_i34);
MR_def_label(__Compare___mdb__parse__command_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i52);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__parse__command_0_0_i38);
MR_def_label(__Compare___mdb__parse__command_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, path);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__parse__command_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i44);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i6);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdb__parse__path_0_0);
MR_def_label(__Compare___mdb__parse__command_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i6);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdb__browser_info__param_cmd_0_0);
MR_def_label(__Compare___mdb__parse__command_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___mdb__parse__command_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module26)
	MR_init_entry1(__Unify___mdb__parse__external_request_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__parse__external_request_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdb__parse_module27)
	MR_init_entry1(__Compare___mdb__parse__external_request_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__parse__external_request_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module28)
	MR_init_entry1(__Unify___mdb__parse__format_option_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__parse__format_option_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module29)
	MR_init_entry1(__Compare___mdb__parse__format_option_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__parse__format_option_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module30)
	MR_init_entry1(__Unify___mdb__parse__format_param_cmd_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__parse__format_param_cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module31)
	MR_init_entry1(__Compare___mdb__parse__format_param_cmd_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__parse__format_param_cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__parse_module32)
	MR_init_entry1(__Unify___mdb__parse__path_0_0);
	MR_init_label2(__Unify___mdb__parse__path_0_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__parse__path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__path_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__path_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdb__parse__path_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__path_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdb__parse__path_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdb__parse_module33)
	MR_init_entry1(__Compare___mdb__parse__path_0_0);
	MR_init_label3(__Compare___mdb__parse__path_0_0,14,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__parse__path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__path_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__path_0_0_i5);
	}
MR_def_label(__Compare___mdb__parse__path_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_const_mask_field(MR_tempr1, 0);
	MR_r3 = MR_const_mask_field(MR_tempr2, 0);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
MR_def_label(__Compare___mdb__parse__path_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__path_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__path_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module34)
	MR_init_entry1(__Unify___mdb__parse__setting_option_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__parse__setting_option_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module35)
	MR_init_entry1(__Compare___mdb__parse__setting_option_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__parse__setting_option_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module36)
	MR_init_entry1(__Unify___mdb__parse__token_0_0);
	MR_init_label6(__Unify___mdb__parse__token_0_0,10,11,13,15,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__parse__token_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___mdb__parse__token_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___mdb__parse__token_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___mdb__parse__token_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___mdb__parse__token_0_0_i15));
MR_def_label(__Unify___mdb__parse__token_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__parse__token_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__parse__token_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i16);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__parse__token_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__parse__token_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module37)
	MR_init_entry1(__Compare___mdb__parse__token_0_0);
	MR_init_label8(__Compare___mdb__parse__token_0_0,4,5,8,17,19,22,31,33)
	MR_init_label8(__Compare___mdb__parse__token_0_0,36,45,47,50,59,61,64,73)
	MR_init_label8(__Compare___mdb__parse__token_0_0,75,78,84,87,200,89,99,104)
	MR_init_label5(__Compare___mdb__parse__token_0_0,115,119,120,159,147)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__parse__token_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i4) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i89) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i119));
MR_def_label(__Compare___mdb__parse__token_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i47) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i61) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i75));
MR_def_label(__Compare___mdb__parse__token_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i8) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i17));
MR_def_label(__Compare___mdb__parse__token_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i84);
	}
	MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i200);
MR_def_label(__Compare___mdb__parse__token_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i200);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__token_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i31));
MR_def_label(__Compare___mdb__parse__token_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i84) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200));
MR_def_label(__Compare___mdb__parse__token_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i200);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__token_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i36) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i45));
MR_def_label(__Compare___mdb__parse__token_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i84) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200));
MR_def_label(__Compare___mdb__parse__token_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i200);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__token_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i59));
MR_def_label(__Compare___mdb__parse__token_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i84) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200));
MR_def_label(__Compare___mdb__parse__token_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i200);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__token_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i64) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i73));
MR_def_label(__Compare___mdb__parse__token_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i84) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200));
MR_def_label(__Compare___mdb__parse__token_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i200);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__token_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i78) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i87));
MR_def_label(__Compare___mdb__parse__token_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i159);
	}
MR_def_label(__Compare___mdb__parse__token_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__token_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___mdb__parse__token_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__token_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i99) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200));
MR_def_label(__Compare___mdb__parse__token_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__parse__token_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i115) MR_AND
		MR_LABEL_AP(__Compare___mdb__parse__token_0_0_i200));
MR_def_label(__Compare___mdb__parse__token_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__parse__token_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i120);
	}
	if (MR_INT_NE(MR_tag(MR_r2),3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i159);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i200);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__parse__token_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r2),3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i159);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i147);
	}
MR_def_label(__Compare___mdb__parse__token_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__token_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdb__parse_maybe_bunch_0(void)
{
	mdb__parse_module0();
	mdb__parse_module1();
	mdb__parse_module2();
	mdb__parse_module3();
	mdb__parse_module4();
	mdb__parse_module5();
	mdb__parse_module6();
	mdb__parse_module7();
	mdb__parse_module8();
	mdb__parse_module9();
	mdb__parse_module10();
	mdb__parse_module11();
	mdb__parse_module12();
	mdb__parse_module13();
	mdb__parse_module14();
	mdb__parse_module15();
	mdb__parse_module16();
	mdb__parse_module17();
	mdb__parse_module18();
	mdb__parse_module19();
	mdb__parse_module20();
	mdb__parse_module21();
	mdb__parse_module22();
	mdb__parse_module23();
	mdb__parse_module24();
	mdb__parse_module25();
	mdb__parse_module26();
	mdb__parse_module27();
	mdb__parse_module28();
	mdb__parse_module29();
	mdb__parse_module30();
	mdb__parse_module31();
	mdb__parse_module32();
	mdb__parse_module33();
	mdb__parse_module34();
	mdb__parse_module35();
	mdb__parse_module36();
	mdb__parse_module37();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__parse__init(void);
void mercury__mdb__parse__init_type_tables(void);
void mercury__mdb__parse__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__parse__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__parse__init_complexity_procs(void);
#endif

void mercury__mdb__parse__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__parse_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_token_0,
		mdb__parse__token_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_setting_option_0,
		mdb__parse__setting_option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_path_0,
		mdb__parse__path_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_format_param_cmd_0,
		mdb__parse__format_param_cmd_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_format_option_0,
		mdb__parse__format_option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_external_request_0,
		mdb__parse__external_request_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_command_0,
		mdb__parse__command_0_0);
	mercury__mdb__parse__init_debugger();
}

void mercury__mdb__parse__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_token_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_setting_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_path_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_format_param_cmd_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_format_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_external_request_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_command_0);
	}
}


void mercury__mdb__parse__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__parse__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__parse__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
