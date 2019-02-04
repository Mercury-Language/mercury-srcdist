/*
** Automatically generated from `parse.m'
** by the Mercury compiler,
** version rotd-2011-07-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__parse__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 28 "mdb.parse.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "mdb.parse.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 36 "mdb.parse.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "mdb.parse.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "mdb.parse.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "mdb.parse.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 52 "mdb.parse.c"
#line 53 "mdb.parse.c"
#include "mdb.parse.mh"

#line 56 "mdb.parse.c"
#line 57 "mdb.parse.c"
#ifndef MDB__PARSE_DECL_GUARD
#define MDB__PARSE_DECL_GUARD

#line 61 "mdb.parse.c"
#line 62 "mdb.parse.c"

#endif
#line 65 "mdb.parse.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

MR_STATIC_LINKAGE const struct mercury_type_7 mercury_vector_common_7_0[];

MR_STATIC_LINKAGE const struct mercury_type_7 mercury_vector_common_7_1[];

MR_STATIC_LINKAGE const struct mercury_type_7 mercury_vector_common_7_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__parse__type_ctor_info_command_0,
	mercury_data_mdb__parse__type_ctor_info_external_request_0,
	mercury_data_mdb__parse__type_ctor_info_format_option_0,
	mercury_data_mdb__parse__type_ctor_info_format_param_cmd_0,
	mercury_data_mdb__parse__type_ctor_info_path_0,
	mercury_data_mdb__parse__type_ctor_info_setting_option_0,
	mercury_data_mdb__parse__type_ctor_info_token_0;
MR_decl_label4(mdb__parse__digits_to_int_acc_3_0, 11,4,5,13)
MR_decl_label3(mdb__parse__format_cmd_option_defaults_2_0, 9,10,11)
MR_decl_label3(mdb__parse__format_option_defaults_2_0, 6,7,8)
MR_decl_label3(mdb__parse__format_param_cmd_option_defaults_2_0, 9,10,11)
MR_decl_label4(mdb__parse__lexer_dots_2_0, 28,6,4,8)
MR_decl_label3(mdb__parse__lexer_name_3_0, 3,5,6)
MR_decl_label3(mdb__parse__lexer_num_3_0, 3,4,6)
MR_decl_label10(mdb__parse__lexer_word_chars_2_0, 137,3,4,9,7,13,11,17,15,21)
MR_decl_label10(mdb__parse__lexer_word_chars_2_0, 19,28,26,31,23,37,39,40,35,44)
MR_decl_label4(mdb__parse__lexer_word_chars_2_0, 42,49,47,53)
MR_decl_label4(mdb__parse__lexer_words_2_0, 18,4,5,6)
MR_decl_label3(mdb__parse__long_format_cmd_option_2_0, 3,4,1)
MR_decl_label4(mdb__parse__long_format_option_2_0, 3,4,5,1)
MR_decl_label7(mdb__parse__long_format_param_cmd_option_2_0, 3,4,5,6,7,8,1)
MR_decl_label3(mdb__parse__param_cmd_to_setting_3_0, 3,5,7)
MR_decl_label7(mdb__parse__parse_2_0, 47,4,5,6,7,12,14)
MR_decl_label10(mdb__parse__parse_cmd_4_0, 691,9,14,8,18,20,2,26,24,32)
MR_decl_label10(mdb__parse__parse_cmd_4_0, 30,38,695,44,36,54,55,56,48,60)
MR_decl_label10(mdb__parse__parse_cmd_4_0, 698,66,59,69,76,77,78,75,81,86)
MR_decl_label10(mdb__parse__parse_cmd_4_0, 85,89,91,83,95,73,705,105,100,707)
MR_decl_label10(mdb__parse__parse_cmd_4_0, 119,120,121,108,128,129,130,127,133,140)
MR_decl_label10(mdb__parse__parse_cmd_4_0, 141,145,125,157,148,161,169,174,173,692)
MR_decl_label1(mdb__parse__parse_cmd_4_0, 1)
MR_decl_label10(mdb__parse__parse_dirs_2_0, 82,3,6,5,9,12,17,15,22,1)
MR_decl_label4(mdb__parse__parse_format_2_0, 5,8,11,1)
MR_decl_label4(mdb__parse__parse_path_2_0, 5,3,8,1)
MR_decl_label4(mdb__parse__read_command_4_0, 2,4,7,6)
MR_decl_label6(mdb__parse__read_command_external_3_0, 2,4,14,5,7,10)
MR_decl_label3(mdb__parse__short_format_cmd_option_2_0, 3,4,1)
MR_decl_label4(mdb__parse__short_format_option_2_0, 3,4,5,1)
MR_decl_label7(mdb__parse__short_format_param_cmd_option_2_0, 3,4,5,6,7,8,1)
MR_decl_label10(__Unify___mdb__parse__command_0_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label7(__Unify___mdb__parse__command_0_0, 21,18,25,29,75,33,1)
MR_decl_label1(__Unify___mdb__parse__external_request_0_0, 4)
MR_decl_label3(__Unify___mdb__parse__path_0_0, 16,5,1)
MR_decl_label10(__Unify___mdb__parse__token_0_0, 5,6,7,8,9,10,11,13,40,15)
MR_decl_label1(__Unify___mdb__parse__token_0_0, 1)
MR_decl_label10(__Index___mdb__parse__command_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label4(__Index___mdb__parse__command_0_0, 13,14,15,16)
MR_decl_label10(__Compare___mdb__parse__command_0_0, 4,5,6,7,10,11,12,13,14,15)
MR_decl_label10(__Compare___mdb__parse__command_0_0, 16,17,94,18,19,26,22,31,34,37)
MR_decl_label4(__Compare___mdb__parse__command_0_0, 42,46,8,56)
MR_decl_label2(__Compare___mdb__parse__external_request_0_0, 3,2)
MR_decl_label5(__Compare___mdb__parse__path_0_0, 3,2,19,7,5)
MR_decl_label10(__Compare___mdb__parse__token_0_0, 7,8,9,10,11,12,13,14,5,18)
MR_decl_label10(__Compare___mdb__parse__token_0_0, 19,20,21,22,23,24,25,16,29,30)
MR_decl_label10(__Compare___mdb__parse__token_0_0, 31,32,33,34,35,36,27,40,41,42)
MR_decl_label10(__Compare___mdb__parse__token_0_0, 43,44,45,46,47,38,51,52,53,54)
MR_decl_label10(__Compare___mdb__parse__token_0_0, 55,56,57,58,49,62,63,64,65,66)
MR_decl_label10(__Compare___mdb__parse__token_0_0, 276,67,68,69,60,73,74,75,76,77)
MR_decl_label10(__Compare___mdb__parse__token_0_0, 78,79,81,71,85,86,87,88,89,90)
MR_decl_label10(__Compare___mdb__parse__token_0_0, 494,91,83,97,98,99,100,101,102,103)
MR_decl_label10(__Compare___mdb__parse__token_0_0, 104,95,108,109,110,111,112,113,114,115)
MR_decl_label1(__Compare___mdb__parse__token_0_0, 116)
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
MR_COMMON(3,0),
MR_ENTRY_AP(mdb__parse__short_format_option_2_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(mdb__parse__long_format_option_2_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(mdb__parse__format_option_defaults_2_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(mdb__parse__short_format_cmd_option_2_0),
0
},
{
MR_COMMON(3,4),
MR_ENTRY_AP(mdb__parse__long_format_cmd_option_2_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(mdb__parse__format_cmd_option_defaults_2_0),
0
},
{
MR_COMMON(3,6),
MR_ENTRY_AP(mdb__parse__short_format_param_cmd_option_2_0),
0
},
{
MR_COMMON(3,7),
MR_ENTRY_AP(mdb__parse__long_format_param_cmd_option_2_0),
0
},
{
MR_COMMON(3,8),
MR_ENTRY_AP(mdb__parse__format_param_cmd_option_defaults_2_0),
0
},
{
MR_COMMON(3,9),
MR_ENTRY_AP(mdb__parse__short_format_param_cmd_option_2_0),
0
},
{
MR_COMMON(3,10),
MR_ENTRY_AP(mdb__parse__long_format_param_cmd_option_2_0),
0
},
{
MR_COMMON(3,11),
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

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_format_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_setting_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_7;
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
static const struct mercury_type_3 mercury_common_3[12] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, format_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, format_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdb__parse, format_option),
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
MR_CTOR0_ADDR(mdb__parse, setting_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_8,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__parse, setting_option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_9,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdb__parse, setting_option),
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

static const struct mercury_type_4 mercury_common_4[4] =
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

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_maybe_option_table_1;
static const struct mercury_type_6 mercury_common_6[2] =
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

static const struct mercury_type_7 mercury_common_7[1] =
{
{
3,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
0
},
};

static const struct mercury_type_7 mercury_vector_common_7_0[4] =
{
{
0,
MR_TAG_COMMON(1,8,0)
},
{
1,
MR_TAG_COMMON(1,8,0)
},
{
2,
MR_TAG_COMMON(1,8,0)
},
{
3,
MR_TAG_COMMON(1,8,0)
},
};

static const struct mercury_type_7 mercury_vector_common_7_1[7] =
{
{
0,
MR_TAG_COMMON(1,8,0)
},
{
1,
MR_TAG_COMMON(1,8,0)
},
{
2,
MR_TAG_COMMON(1,8,0)
},
{
3,
MR_TAG_COMMON(1,8,0)
},
{
4,
MR_TAG_COMMON(1,8,0)
},
{
5,
MR_TAG_COMMON(1,8,0)
},
{
6,
MR_TAG_COMMON(1,8,0)
},
};

static const struct mercury_type_7 mercury_vector_common_7_2[7] =
{
{
0,
MR_TAG_COMMON(1,8,0)
},
{
1,
MR_TAG_COMMON(1,8,0)
},
{
2,
MR_TAG_COMMON(1,8,0)
},
{
3,
MR_TAG_COMMON(1,8,0)
},
{
4,
MR_TAG_COMMON(1,8,0)
},
{
5,
MR_TAG_COMMON(1,8,0)
},
{
6,
MR_TAG_COMMON(1,8,0)
},
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
	"cmd_print",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_1 = {
	"cmd_display",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_2 = {
	"cmd_write",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_command_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_3 = {
	"cmd_memory_addr",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_command_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_4 = {
	"cmd_cd_path",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_4,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_5 = {
	"cmd_cd_no_path",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_6 = {
	"cmd_pwd",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0;

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_command_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0
};

const MR_DuArgLocn mercury_data_mdb__parse__field_locns_command_0_7[] = {
	{ 0, 0, 1 },
	{ 0, 1, 1 },
	{ 1, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_7 = {
	"cmd_track",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	7,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_7,
	NULL,
	mercury_data_mdb__parse__field_locns_command_0_7,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_command_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_8 = {
	"cmd_mode_query",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	8,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_8,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_9 = {
	"cmd_mode_query_no_path",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_param_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_param_cmd_0;

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_command_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_param_cmd_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_10 = {
	"cmd_param",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	10,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_command_0_10,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_11 = {
	"cmd_help",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_12 = {
	"cmd_quit",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_13 = {
	"cmd_empty",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_command_0_14 = {
	"cmd_unknown",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_command_0_0[] = {
	&mercury_data_mdb__parse__du_functor_desc_command_0_1,
	&mercury_data_mdb__parse__du_functor_desc_command_0_2,
	&mercury_data_mdb__parse__du_functor_desc_command_0_5,
	&mercury_data_mdb__parse__du_functor_desc_command_0_6,
	&mercury_data_mdb__parse__du_functor_desc_command_0_9,
	&mercury_data_mdb__parse__du_functor_desc_command_0_11,
	&mercury_data_mdb__parse__du_functor_desc_command_0_12,
	&mercury_data_mdb__parse__du_functor_desc_command_0_13,
	&mercury_data_mdb__parse__du_functor_desc_command_0_14

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_command_0_1[] = {
	&mercury_data_mdb__parse__du_functor_desc_command_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_command_0_2[] = {
	&mercury_data_mdb__parse__du_functor_desc_command_0_3

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_stag_ordered_command_0_3[] = {
	&mercury_data_mdb__parse__du_functor_desc_command_0_4,
	&mercury_data_mdb__parse__du_functor_desc_command_0_7,
	&mercury_data_mdb__parse__du_functor_desc_command_0_8,
	&mercury_data_mdb__parse__du_functor_desc_command_0_10

};

const MR_DuPtagLayout mercury_data_mdb__parse__du_ptag_ordered_command_0[] = {
	{ 9, MR_SECTAG_LOCAL,
	mercury_data_mdb__parse__du_stag_ordered_command_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__parse__du_stag_ordered_command_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__parse__du_stag_ordered_command_0_2 },
	{ 4, MR_SECTAG_REMOTE,
	mercury_data_mdb__parse__du_stag_ordered_command_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__parse__du_name_ordered_command_0[] = {
	&mercury_data_mdb__parse__du_functor_desc_command_0_5,
	&mercury_data_mdb__parse__du_functor_desc_command_0_4,
	&mercury_data_mdb__parse__du_functor_desc_command_0_1,
	&mercury_data_mdb__parse__du_functor_desc_command_0_13,
	&mercury_data_mdb__parse__du_functor_desc_command_0_11,
	&mercury_data_mdb__parse__du_functor_desc_command_0_3,
	&mercury_data_mdb__parse__du_functor_desc_command_0_8,
	&mercury_data_mdb__parse__du_functor_desc_command_0_9,
	&mercury_data_mdb__parse__du_functor_desc_command_0_10,
	&mercury_data_mdb__parse__du_functor_desc_command_0_0,
	&mercury_data_mdb__parse__du_functor_desc_command_0_6,
	&mercury_data_mdb__parse__du_functor_desc_command_0_12,
	&mercury_data_mdb__parse__du_functor_desc_command_0_7,
	&mercury_data_mdb__parse__du_functor_desc_command_0_14,
	&mercury_data_mdb__parse__du_functor_desc_command_0_2
};

const MR_Integer mercury_data_mdb__parse__functor_number_map_command_0[] = {
	9,
	2,
	14,
	5,
	1,
	0,
	10,
	12,
	6,
	7,
	8,
	4,
	11,
	3,
	13 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_command_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__parse__command_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__parse__command_0_0)),
	"mdb.parse",
	"command",
	{ (void *)mercury_data_mdb__parse__du_name_ordered_command_0 },
	{ (void *)mercury_data_mdb__parse__du_ptag_ordered_command_0 },
	15,
	4,
	mercury_data_mdb__parse__functor_number_map_command_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_NotagFunctorDesc mercury_data_mdb__parse__notag_functor_desc_external_request_0 = {
	"external_request",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_mdb__parse__functor_number_map_external_request_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_external_request_0 = {
	0,
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_0 = {
	"token_dot",
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

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_1 = {
	"token_dot_dot",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_2 = {
	"token_slash",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_3 = {
	"token_question",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_4 = {
	"token_up",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_5 = {
	"token_lessthan",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_token_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_6 = {
	"token_num",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_token_0_6,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_token_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_7 = {
	"token_name",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	7,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_token_0_7,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_token_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_8 = {
	"token_arg",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	8,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_token_0_8,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;

const MR_PseudoTypeInfo mercury_data_mdb__parse__field_types_token_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury_data_mdb__parse__du_functor_desc_token_0_9 = {
	"token_unknown",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	9,
	(MR_PseudoTypeInfo *) mercury_data_mdb__parse__field_types_token_0_9,
	NULL,
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
	&mercury_data_mdb__parse__du_functor_desc_token_0_8,
	&mercury_data_mdb__parse__du_functor_desc_token_0_0,
	&mercury_data_mdb__parse__du_functor_desc_token_0_1,
	&mercury_data_mdb__parse__du_functor_desc_token_0_5,
	&mercury_data_mdb__parse__du_functor_desc_token_0_7,
	&mercury_data_mdb__parse__du_functor_desc_token_0_6,
	&mercury_data_mdb__parse__du_functor_desc_token_0_3,
	&mercury_data_mdb__parse__du_functor_desc_token_0_2,
	&mercury_data_mdb__parse__du_functor_desc_token_0_9,
	&mercury_data_mdb__parse__du_functor_desc_token_0_4
};

const MR_Integer mercury_data_mdb__parse__functor_number_map_token_0[] = {
	1,
	2,
	7,
	6,
	9,
	3,
	5,
	4,
	0,
	8 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_token_0 = {
	0,
	15,
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
226,
"11"
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
215,
"8"
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
567,
"242"
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
567,
"241"
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
567,
"240"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_9 = {
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
552,
"224"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_8 = {
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
552,
"223"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_7 = {
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
552,
"222"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_6 = {
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
522,
"189"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_5 = {
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
522,
"188"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_4 = {
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
522,
"187"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_3 = {
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
390,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_2 = {
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
390,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__parse__parse_cmd_4_0_1 = {
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
390,
"26"
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
334,
"5"
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
318,
"5"
};


MR_decl_entry(char__to_int_2_0);

MR_BEGIN_MODULE(mdb__parse_module0)
	MR_init_entry1(mdb__parse__digits_to_int_acc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__digits_to_int_acc_3_0);
	MR_init_label4(mdb__parse__digits_to_int_acc_3_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'digits_to_int_acc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__digits_to_int_acc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdb__parse__digits_to_int_acc_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__digits_to_int_acc_3_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Integer) 48;
	MR_np_call_localret_ent(char__to_int_2_0,
		mdb__parse__digits_to_int_acc_3_0_i4);
MR_def_label(mdb__parse__digits_to_int_acc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__to_int_2_0,
		mdb__parse__digits_to_int_acc_3_0_i5);
MR_def_label(mdb__parse__digits_to_int_acc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) 10 * (MR_Integer) MR_sv(1)) + ((MR_Integer) MR_r1 - (MR_Integer) MR_sv(2)));
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdb__parse__digits_to_int_acc_3_0_i11);
MR_def_label(mdb__parse__digits_to_int_acc_3_0,13)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__lexer_word_chars_2_0);
	MR_init_label10(mdb__parse__lexer_word_chars_2_0,137,3,4,9,7,13,11,17,15,21)
	MR_init_label10(mdb__parse__lexer_word_chars_2_0,19,28,26,31,23,37,39,40,35,44)
	MR_init_label4(mdb__parse__lexer_word_chars_2_0,42,49,47,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lexer_word_chars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__lexer_word_chars_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdb__parse__lexer_word_chars_2_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__lexer_word_chars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__lexer_word_chars_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),63)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i11);
	}
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_word_chars_2_0_i13);
MR_def_label(mdb__parse__lexer_word_chars_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__lexer_word_chars_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),94)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i15);
	}
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_word_chars_2_0_i17);
MR_def_label(mdb__parse__lexer_word_chars_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__lexer_word_chars_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),60)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i19);
	}
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_word_chars_2_0_i21);
MR_def_label(mdb__parse__lexer_word_chars_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__lexer_word_chars_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),45)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i23);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,45)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i26);
	}
	MR_r1 = MR_tfield(1, MR_r2, 1);
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		mdb__parse__lexer_word_chars_2_0_i28);
MR_def_label(mdb__parse__lexer_word_chars_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__lexer_word_chars_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		mdb__parse__lexer_word_chars_2_0_i31);
MR_def_label(mdb__parse__lexer_word_chars_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__lexer_word_chars_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(char__is_digit_1_0,
		mdb__parse__lexer_word_chars_2_0_i37);
MR_def_label(mdb__parse__lexer_word_chars_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i35);
	}
	MR_r1 = (MR_Integer) 48;
	MR_np_call_localret_ent(char__to_int_2_0,
		mdb__parse__lexer_word_chars_2_0_i39);
MR_def_label(mdb__parse__lexer_word_chars_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__to_int_2_0,
		mdb__parse__lexer_word_chars_2_0_i40);
MR_def_label(mdb__parse__lexer_word_chars_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) MR_sv(1));
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__parse__lexer_num_3_0);
MR_def_label(mdb__parse__lexer_word_chars_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(char__is_alpha_or_underscore_1_0,
		mdb__parse__lexer_word_chars_2_0_i44);
MR_def_label(mdb__parse__lexer_word_chars_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i42);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__parse__lexer_name_3_0);
MR_def_label(mdb__parse__lexer_word_chars_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		mdb__parse__lexer_word_chars_2_0_i49);
MR_def_label(mdb__parse__lexer_word_chars_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i47);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__parse__lexer_word_chars_2_0_i137);
MR_def_label(mdb__parse__lexer_word_chars_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_localcall_lab(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_word_chars_2_0_i53);
MR_def_label(mdb__parse__lexer_word_chars_2_0,53)
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


MR_BEGIN_MODULE(mdb__parse_module2)
	MR_init_entry1(mdb__parse__lexer_dots_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__lexer_dots_2_0);
	MR_init_label4(mdb__parse__lexer_dots_2_0,28,6,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lexer_dots'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__lexer_dots_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__lexer_dots_2_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdb__parse__lexer_dots_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,46)) {
		MR_GOTO_LAB(mdb__parse__lexer_dots_2_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_dots_2_0_i6);
MR_def_label(mdb__parse__lexer_dots_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__parse__lexer_dots_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_dots_2_0_i8);
MR_def_label(mdb__parse__lexer_dots_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__takewhile_4_0);

MR_BEGIN_MODULE(mdb__parse_module3)
	MR_init_entry1(mdb__parse__lexer_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__lexer_num_3_0);
	MR_init_label3(mdb__parse__lexer_num_3_0,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lexer_num'/3 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		mdb__parse__lexer_num_3_0_i3);
MR_def_label(mdb__parse__lexer_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__parse__digits_to_int_acc_3_0,
		mdb__parse__lexer_num_3_0_i4);
MR_def_label(mdb__parse__lexer_num_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_num_3_0_i6);
MR_def_label(mdb__parse__lexer_num_3_0,6)
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


MR_BEGIN_MODULE(mdb__parse_module4)
	MR_init_entry1(mdb__parse__lexer_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__lexer_name_3_0);
	MR_init_label3(mdb__parse__lexer_name_3_0,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lexer_name'/3 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		mdb__parse__lexer_name_3_0_i3);
MR_def_label(mdb__parse__lexer_name_3_0,3)
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
		mdb__parse__lexer_name_3_0_i5);
MR_def_label(mdb__parse__lexer_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_name_3_0_i6);
MR_def_label(mdb__parse__lexer_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__lexer_words_2_0);
	MR_init_label4(mdb__parse__lexer_words_2_0,18,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lexer_words'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__lexer_words_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__lexer_words_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdb__parse__lexer_words_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		mdb__parse__lexer_words_2_0_i4);
MR_def_label(mdb__parse__lexer_words_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__lexer_word_chars_2_0,
		mdb__parse__lexer_words_2_0_i5);
MR_def_label(mdb__parse__lexer_words_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdb__parse__lexer_words_2_0,
		mdb__parse__lexer_words_2_0_i6);
MR_def_label(mdb__parse__lexer_words_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, token);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module6)
	MR_init_entry1(mdb__parse__param_cmd_to_setting_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__param_cmd_to_setting_3_0);
	MR_init_label3(mdb__parse__param_cmd_to_setting_3_0,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'param_cmd_to_setting'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__param_cmd_to_setting_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__parse__param_cmd_to_setting_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(mdb__parse__param_cmd_to_setting_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(mdb__parse__param_cmd_to_setting_3_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_proceed();
MR_def_label(mdb__parse__param_cmd_to_setting_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__parse__param_cmd_to_setting_3_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(mdb__parse__param_cmd_to_setting_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module7)
	MR_init_entry1(mdb__parse__parse_dirs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__parse_dirs_2_0);
	MR_init_label10(mdb__parse__parse_dirs_2_0,82,3,6,5,9,12,17,15,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_dirs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__parse_dirs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(mdb__parse__parse_dirs_2_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(mdb__parse__parse_dirs_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(mdb__parse__parse_dirs_2_0,
		mdb__parse__parse_dirs_2_0_i6);
MR_def_label(mdb__parse__parse_dirs_2_0,6)
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
MR_def_label(mdb__parse__parse_dirs_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i82);
MR_def_label(mdb__parse__parse_dirs_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i12);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i82);
MR_def_label(mdb__parse__parse_dirs_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i15);
	}
	MR_tag_alloc_heap(MR_sv(1), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(1), 0) = MR_tfield(2, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
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
MR_def_label(mdb__parse__parse_dirs_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdb__parse__parse_dirs_2_0_i1);
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(mdb__parse__parse_dirs_2_0,
		mdb__parse__parse_dirs_2_0_i22);
MR_def_label(mdb__parse__parse_dirs_2_0,22)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__parse_path_2_0);
	MR_init_label4(mdb__parse__parse_path_2_0,5,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_path'/2 mode 0 */
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
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(mdb__parse__parse_path_2_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
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
		mdb__parse__parse_path_2_0_i8);
MR_def_label(mdb__parse__parse_path_2_0,8)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__parse_format_2_0);
	MR_init_label4(mdb__parse__parse_format_2_0,5,8,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_format'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__parse_format_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i1);
	}
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("flat", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_format_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("raw_pretty", 10)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i8);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_format_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i11);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_format_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("pretty", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_format_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_format_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(mdb__parse_module10)
	MR_init_entry1(mdb__parse__parse_cmd_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__parse_cmd_4_0);
	MR_init_label10(mdb__parse__parse_cmd_4_0,691,9,14,8,18,20,2,26,24,32)
	MR_init_label10(mdb__parse__parse_cmd_4_0,30,38,695,44,36,54,55,56,48,60)
	MR_init_label10(mdb__parse__parse_cmd_4_0,698,66,59,69,76,77,78,75,81,86)
	MR_init_label10(mdb__parse__parse_cmd_4_0,85,89,91,83,95,73,705,105,100,707)
	MR_init_label10(mdb__parse__parse_cmd_4_0,119,120,121,108,128,129,130,127,133,140)
	MR_init_label10(mdb__parse__parse_cmd_4_0,141,145,125,157,148,161,169,174,173,692)
	MR_init_label1(mdb__parse__parse_cmd_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_cmd'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__parse_cmd_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("p", 1)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i691);
	}
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("ls", 2)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i691);
	}
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("print", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i2);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,691)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i9);
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i8);
MR_def_label(mdb__parse__parse_cmd_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, format_option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,4,0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(getopt__process_options_4_0,
		mdb__parse__parse_cmd_4_0_i14);
MR_def_label(mdb__parse__parse_cmd_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r2;
	MR_np_call_localret_ent(mdb__parse__lexer_words_2_0,
		mdb__parse__parse_cmd_4_0_i8);
MR_def_label(mdb__parse__parse_cmd_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__parse_cmd_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i20);
MR_def_label(mdb__parse__parse_cmd_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("d", 1)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i26);
	}
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("display", 7)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i24);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i692);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_cmd_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("w", 1)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i32);
	}
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("write", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i30);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i692);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_cmd_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("addr", 4)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i38);
	}
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("memory_addr", 11)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i36);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i695);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_cmd_4_0,695)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i44);
MR_def_label(mdb__parse__parse_cmd_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("cdr", 3)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i48);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdb__parse, token);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		mdb__parse__parse_cmd_4_0_i54);
MR_def_label(mdb__parse__parse_cmd_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		mdb__parse__parse_cmd_4_0_i55);
MR_def_label(mdb__parse__parse_cmd_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i56);
MR_def_label(mdb__parse__parse_cmd_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,4)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i60);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i59);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("cd", 2)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i59);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i698);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_cmd_4_0,698)
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
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i69);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("pwd", 3)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i69);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i692);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i73);
	}
	MR_r4 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("m", 1)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i76);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 0;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i75);
MR_def_label(mdb__parse__parse_cmd_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("t", 1)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i77);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i75);
MR_def_label(mdb__parse__parse_cmd_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("mark", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i78);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 0;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i75);
MR_def_label(mdb__parse__parse_cmd_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("track", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i73);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 1;
MR_def_label(mdb__parse__parse_cmd_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i81);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) 1 | ((MR_Integer) MR_sv(1) << (MR_Integer) 1));
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__parse_cmd_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i83);
	}
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("a", 1)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i86);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i85);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("accurate", 8)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i83);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r1, 1);
MR_def_label(mdb__parse__parse_cmd_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i89);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) 0 | ((MR_Integer) MR_sv(1) << (MR_Integer) 1));
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__parse_cmd_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i91);
MR_def_label(mdb__parse__parse_cmd_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) 0 | ((MR_Integer) MR_sv(1) << (MR_Integer) 1));
	MR_tfield(3, MR_r2, 2) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i95);
MR_def_label(mdb__parse__parse_cmd_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) 1 | ((MR_Integer) MR_sv(1) << (MR_Integer) 1));
	MR_tfield(3, MR_r2, 2) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i100);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("mode", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i100);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i705);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,705)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdb__parse__parse_path_2_0,
		mdb__parse__parse_cmd_4_0_i105);
MR_def_label(mdb__parse__parse_cmd_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i108);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("format", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i108);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i707);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,707)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,4,1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(getopt__process_options_4_0,
		mdb__parse__parse_cmd_4_0_i119);
MR_def_label(mdb__parse__parse_cmd_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(mdb__parse__lexer_words_2_0,
		mdb__parse__parse_cmd_4_0_i120);
MR_def_label(mdb__parse__parse_cmd_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_format_2_0,
		mdb__parse__parse_cmd_4_0_i121);
MR_def_label(mdb__parse__parse_cmd_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i125);
	}
	MR_r4 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("size", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i128);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i127);
MR_def_label(mdb__parse__parse_cmd_4_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("depth", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i129);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 0;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i127);
MR_def_label(mdb__parse__parse_cmd_4_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("lines", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i130);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 3;
	MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i127);
MR_def_label(mdb__parse__parse_cmd_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("width", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i125);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) 2;
MR_def_label(mdb__parse__parse_cmd_4_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i133);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__parse_cmd_4_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,4,2);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(getopt__process_options_4_0,
		mdb__parse__parse_cmd_4_0_i140);
MR_def_label(mdb__parse__parse_cmd_4_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(mdb__parse__lexer_words_2_0,
		mdb__parse__parse_cmd_4_0_i141);
MR_def_label(mdb__parse__parse_cmd_4_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__parse__param_cmd_to_setting_3_0,
		mdb__parse__parse_cmd_4_0_i145);
MR_def_label(mdb__parse__parse_cmd_4_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i148);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,4,3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		mdb__parse__parse_cmd_4_0_i157);
MR_def_label(mdb__parse__parse_cmd_4_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_r2;
	MR_tfield(2, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__parse__parse_cmd_4_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i161);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("num_io_actions", 14)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i161);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i692);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i692);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i692);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i169);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("params", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i169);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,3)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i174);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i173);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("h", 1)) == 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i174);
	}
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("help", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i173);
	}
	}
MR_def_label(mdb__parse__parse_cmd_4_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i692);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_cmd_4_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i692);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i692);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("quit", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__parse_cmd_4_0_i692);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__parse__parse_cmd_4_0,692)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__parse_2_0);
	MR_init_label7(mdb__parse__parse_2_0,47,4,5,6,7,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__parse__parse_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_2_0_i47);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__parse_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
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
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
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
		mdb__parse__parse_2_0_i12);
MR_def_label(mdb__parse__parse_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, token);
	MR_np_call_localret_ent(list__append_3_1,
		mdb__parse__parse_2_0_i12);
MR_def_label(mdb__parse__parse_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__parse_2_0_i14);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__parse__parse_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__read_command_4_0);
	MR_init_label4(mdb__parse__read_command_4_0,2,4,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_command'/4 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdb__parse__read_command_4_0_i4);
MR_def_label(mdb__parse__read_command_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_2_0,
		mdb__parse__read_command_4_0_i7);
MR_def_label(mdb__parse__read_command_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__read_command_4_0_i6);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__parse__read_command_4_0,6)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__read_command_external_3_0);
	MR_init_label6(mdb__parse__read_command_external_3_0,2,4,14,5,7,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_command_external'/3 mode 0 */
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
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__parse__read_command_external_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 6);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__parse__read_command_external_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__parse__read_command_external_3_0_i5);
	}
MR_def_label(mdb__parse__read_command_external_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__parse__read_command_external_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdb__parse__read_command_external_3_0_i7);
MR_def_label(mdb__parse__read_command_external_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__parse__parse_2_0,
		mdb__parse__read_command_external_3_0_i10);
MR_def_label(mdb__parse__read_command_external_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__parse__read_command_external_3_0_i14);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module14)
	MR_init_entry1(mdb__parse__short_format_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__short_format_option_2_0);
	MR_init_label4(mdb__parse__short_format_option_2_0,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_format_option'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__long_format_option_2_0);
	MR_init_label4(mdb__parse__long_format_option_2_0,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_format_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__long_format_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("flat", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pretty", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("raw-pretty", 10)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__format_option_defaults_2_0);
	MR_init_label3(mdb__parse__format_option_defaults_2_0,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_option_defaults'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__format_option_defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdb.parse.format_option_defaults/2-0", 1,
		MR_LABEL_AP(mdb__parse__format_option_defaults_2_0_i6));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdb__parse__format_option_defaults_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,6)) {
		MR_GOTO_LAB(mdb__parse__format_option_defaults_2_0_i7);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdb__parse__format_option_defaults_2_0_i8);
MR_def_label(mdb__parse__format_option_defaults_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdb__parse__format_option_defaults_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_0, (MR_Integer) MR_r3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module17)
	MR_init_entry1(mdb__parse__short_format_cmd_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__short_format_cmd_option_2_0);
	MR_init_label3(mdb__parse__short_format_cmd_option_2_0,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_format_cmd_option'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__long_format_cmd_option_2_0);
	MR_init_label3(mdb__parse__long_format_cmd_option_2_0,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_format_cmd_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__long_format_cmd_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("print", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_cmd_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_cmd_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("browse", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_cmd_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_cmd_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("print-all", 9)) != 0)) {
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__format_cmd_option_defaults_2_0);
	MR_init_label3(mdb__parse__format_cmd_option_defaults_2_0,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_cmd_option_defaults'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__format_cmd_option_defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdb.parse.format_cmd_option_defaults/2-0", 1,
		MR_LABEL_AP(mdb__parse__format_cmd_option_defaults_2_0_i9));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_1, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdb__parse__format_cmd_option_defaults_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,12)) {
		MR_GOTO_LAB(mdb__parse__format_cmd_option_defaults_2_0_i10);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdb__parse__format_cmd_option_defaults_2_0_i11);
MR_def_label(mdb__parse__format_cmd_option_defaults_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdb__parse__format_cmd_option_defaults_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_1, (MR_Integer) MR_r3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module20)
	MR_init_entry1(mdb__parse__short_format_param_cmd_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__short_format_param_cmd_option_2_0);
	MR_init_label7(mdb__parse__short_format_param_cmd_option_2_0,3,4,5,6,7,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_format_param_cmd_option'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__long_format_param_cmd_option_2_0);
	MR_init_label7(mdb__parse__long_format_param_cmd_option_2_0,3,4,5,6,7,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_format_param_cmd_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__long_format_param_cmd_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("flat", 4)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("print", 5)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("browse", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pretty", 6)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i6);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i7);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("print-all", 9)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i8);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__parse__long_format_param_cmd_option_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("raw-pretty", 10)) != 0)) {
		MR_GOTO_LAB(mdb__parse__long_format_param_cmd_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 4;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__parse__format_param_cmd_option_defaults_2_0);
	MR_init_label3(mdb__parse__format_param_cmd_option_defaults_2_0,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_param_cmd_option_defaults'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__parse__format_param_cmd_option_defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdb.parse.format_param_cmd_option_defaults/2-0", 1,
		MR_LABEL_AP(mdb__parse__format_param_cmd_option_defaults_2_0_i9));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_2, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdb__parse__format_param_cmd_option_defaults_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,12)) {
		MR_GOTO_LAB(mdb__parse__format_param_cmd_option_defaults_2_0_i10);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdb__parse__format_param_cmd_option_defaults_2_0_i11);
MR_def_label(mdb__parse__format_param_cmd_option_defaults_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdb__parse__format_param_cmd_option_defaults_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_2, (MR_Integer) MR_r3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__parse__command_0_0);
	MR_init_label10(__Unify___mdb__parse__command_0_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label7(__Unify___mdb__parse__command_0_0,21,18,25,29,75,33,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__parse__command_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i75);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__parse__command_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__parse__command_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__parse__command_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__parse__command_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__parse__command_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__parse__command_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__parse__command_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i12);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__parse__command_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i13);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__parse__command_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i14);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, path);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdb__parse__command_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i18);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__parse__command_0_0_i21);
MR_def_label(__Unify___mdb__parse__command_0_0,21)
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
MR_def_label(__Unify___mdb__parse__command_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__parse__path_0_0);
MR_def_label(__Unify___mdb__parse__command_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i29);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__parse__path_0_0);
MR_def_label(__Unify___mdb__parse__command_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i33);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__browser_info__param_cmd_0_0);
MR_def_label(__Unify___mdb__parse__command_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__parse__command_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = ((MR_Integer) MR_tfield(3, MR_tempr3, 1) & (MR_Integer) 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = ((MR_Integer) MR_tfield(3, MR_tempr4, 1) & (MR_Integer) 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i1);
	}
	MR_tempr1 = (((MR_Integer) MR_tfield(3, MR_tempr3, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(3, MR_tempr4, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__command_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, path);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___mdb__parse__command_0_0);
	MR_init_label10(__Index___mdb__parse__command_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label4(__Index___mdb__parse__command_0_0,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___mdb__parse__command_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i3);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i5);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i6);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i7);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i8);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i9);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i10);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i12);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i14);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i15);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___mdb__parse__command_0_0_i16);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___mdb__parse__command_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(__Compare___mdb__browser_info__param_cmd_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(mdb__parse_module25)
	MR_init_entry1(__Compare___mdb__parse__command_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__parse__command_0_0);
	MR_init_label10(__Compare___mdb__parse__command_0_0,4,5,6,7,10,11,12,13,14,15)
	MR_init_label10(__Compare___mdb__parse__command_0_0,16,17,94,18,19,26,22,31,34,37)
	MR_init_label4(__Compare___mdb__parse__command_0_0,42,46,8,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__parse__command_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i94);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___mdb__parse__command_0_0,
		__Compare___mdb__parse__command_0_0_i4);
MR_def_label(__Compare___mdb__parse__command_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___mdb__parse__command_0_0,
		__Compare___mdb__parse__command_0_0_i5);
MR_def_label(__Compare___mdb__parse__command_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i18);
	}
MR_def_label(__Compare___mdb__parse__command_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__parse__command_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i19);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, path);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__parse__command_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i22);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__parse__command_0_0_i26);
MR_def_label(__Compare___mdb__parse__command_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i56);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, path);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__parse__command_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdb__parse__path_0_0);
MR_def_label(__Compare___mdb__parse__command_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i34);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdb__parse__path_0_0);
MR_def_label(__Compare___mdb__parse__command_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i37);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdb__browser_info__param_cmd_0_0);
MR_def_label(__Compare___mdb__parse__command_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(3) = (((MR_Integer) MR_tfield(3, MR_tempr5, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr2 = (((MR_Integer) MR_tfield(3, MR_tempr6, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_tfield(3, MR_tempr3, 1) & (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_tfield(3, MR_tempr4, 1) & (MR_Integer) 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__parse__command_0_0_i42);
MR_def_label(__Compare___mdb__parse__command_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i56);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__parse__command_0_0_i46);
MR_def_label(__Compare___mdb__parse__command_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__command_0_0_i56);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, path);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__parse__command_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___mdb__parse__command_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module26)
	MR_init_entry1(__Unify___mdb__parse__external_request_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__parse__external_request_0_0);
	MR_init_label1(__Unify___mdb__parse__external_request_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__parse__external_request_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__external_request_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__external_request_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdb__parse_module27)
	MR_init_entry1(__Compare___mdb__parse__external_request_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__parse__external_request_0_0);
	MR_init_label2(__Compare___mdb__parse__external_request_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__parse__external_request_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__external_request_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__parse__external_request_0_0_i2);
MR_def_label(__Compare___mdb__parse__external_request_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__external_request_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module28)
	MR_init_entry1(__Unify___mdb__parse__format_option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__parse__format_option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__parse__format_option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__parse__format_param_cmd_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__parse__format_param_cmd_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__parse__path_0_0);
	MR_init_label3(__Unify___mdb__parse__path_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__parse__path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__path_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__path_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__path_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdb__parse__path_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__parse__path_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__path_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__parse__path_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdb__parse_module33)
	MR_init_entry1(__Compare___mdb__parse__path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__parse__path_0_0);
	MR_init_label5(__Compare___mdb__parse__path_0_0,3,2,19,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__parse__path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__path_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__parse__path_0_0_i2);
MR_def_label(__Compare___mdb__parse__path_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__parse__path_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__path_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__path_0_0_i7);
	}
MR_def_label(__Compare___mdb__parse__path_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_mask_field(MR_sv(1), 0);
	MR_r3 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__parse__path_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__path_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__path_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__parse_module34)
	MR_init_entry1(__Unify___mdb__parse__setting_option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__parse__setting_option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__parse__setting_option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__parse__token_0_0);
	MR_init_label10(__Unify___mdb__parse__token_0_0,5,6,7,8,9,10,11,13,40,15)
	MR_init_label1(__Unify___mdb__parse__token_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__parse__token_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__parse__token_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i15);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__parse__token_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__parse__token_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_character_3_0);

MR_BEGIN_MODULE(mdb__parse_module37)
	MR_init_entry1(__Compare___mdb__parse__token_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__parse__token_0_0);
	MR_init_label10(__Compare___mdb__parse__token_0_0,7,8,9,10,11,12,13,14,5,18)
	MR_init_label10(__Compare___mdb__parse__token_0_0,19,20,21,22,23,24,25,16,29,30)
	MR_init_label10(__Compare___mdb__parse__token_0_0,31,32,33,34,35,36,27,40,41,42)
	MR_init_label10(__Compare___mdb__parse__token_0_0,43,44,45,46,47,38,51,52,53,54)
	MR_init_label10(__Compare___mdb__parse__token_0_0,55,56,57,58,49,62,63,64,65,66)
	MR_init_label10(__Compare___mdb__parse__token_0_0,276,67,68,69,60,73,74,75,76,77)
	MR_init_label10(__Compare___mdb__parse__token_0_0,78,79,81,71,85,86,87,88,89,90)
	MR_init_label10(__Compare___mdb__parse__token_0_0,494,91,83,97,98,99,100,101,102,103)
	MR_init_label10(__Compare___mdb__parse__token_0_0,104,95,108,109,110,111,112,113,114,115)
	MR_init_label1(__Compare___mdb__parse__token_0_0,116)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__parse__token_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i276);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___mdb__parse__token_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i494);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i16);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i494);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i27);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i30);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i32);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i33);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i494);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i38);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i43);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i45);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i494);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i49);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i51);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i52);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i53);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i54);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i56);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i58);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i494);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i60);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i65);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i66);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i67);
	}
MR_def_label(__Compare___mdb__parse__token_0_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i68);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i494);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i71);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i73);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i74);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i75);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i76);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i77);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i78);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i79);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__parse__token_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i81);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i494);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i83);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i85);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i86);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i87);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i88);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i89);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i90);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i91);
	}
MR_def_label(__Compare___mdb__parse__token_0_0,494)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i494);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__parse__token_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i95);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i97);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i98);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i99);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i100);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i101);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i102);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i103);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i104);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i494);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__parse__token_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i108);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i109);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i110);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i111);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i112);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i113);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i114);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i115);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__parse__token_0_0_i116);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__parse__token_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_character_3_0);
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
void mercury__mdb__parse__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__parse__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__parse__init_threadscope_string_table(void);
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
		mercury_data_mdb__parse__type_ctor_info_command_0,
		mdb__parse__command_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_external_request_0,
		mdb__parse__external_request_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_format_option_0,
		mdb__parse__format_option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_format_param_cmd_0,
		mdb__parse__format_param_cmd_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_path_0,
		mdb__parse__path_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_setting_option_0,
		mdb__parse__setting_option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__parse__type_ctor_info_token_0,
		mdb__parse__token_0_0);
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
		&mercury_data_mdb__parse__type_ctor_info_command_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_external_request_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_format_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_format_param_cmd_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_path_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_setting_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__parse__type_ctor_info_token_0);
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

void mercury__mdb__parse__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__parse);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__parse__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__parse__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
