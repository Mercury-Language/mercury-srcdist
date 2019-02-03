/*
** Automatically generated from `lexer.m'
** by the Mercury compiler,
** version 10.04.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__lexer__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "lexer.c"
#include "lexer.mh"

#line 28 "lexer.c"
#line 539 "io.int"
#include "io.mh"

#line 32 "lexer.c"
#line 547 "io.int"
#include "string.mh"

#line 36 "lexer.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 40 "lexer.c"
#line 28 "time.int2"
#include "time.mh"

#line 44 "lexer.c"
#line 31 "array.int2"
#include "array.mh"

#line 48 "lexer.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 52 "lexer.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 56 "lexer.c"
#line 50 "array.opt"
#include "store.mh"

#line 60 "lexer.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "lexer.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 68 "lexer.c"
#line 3 "float.opt"
#include "float.mh"

#line 72 "lexer.c"
#line 3 "math.opt"
#include "math.mh"

#line 76 "lexer.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 80 "lexer.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 84 "lexer.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 88 "lexer.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "lexer.c"
#line 4 "int.opt"
#include "int.mh"

#line 96 "lexer.c"
#line 153 "io.opt"
#include "dir.mh"

#line 100 "lexer.c"
#line 163 "io.opt"
#include "table_builtin.mh"

#line 104 "lexer.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 108 "lexer.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "lexer.c"
#line 113 "lexer.c"
#ifndef LEXER_DECL_GUARD
#define LEXER_DECL_GUARD

#line 117 "lexer.c"
#line 118 "lexer.c"

#endif
#line 121 "lexer.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_lexer__type_ctor_info_get_token_action_0,
	mercury_data_lexer__type_ctor_info_offset_0,
	mercury_data_lexer__type_ctor_info_scanned_past_whitespace_0,
	mercury_data_lexer__type_ctor_info_string_token_context_0,
	mercury_data_lexer__type_ctor_info_token_0,
	mercury_data_lexer__type_ctor_info_token_context_0,
	mercury_data_lexer__type_ctor_info_token_list_0,
	mercury_data_lexer__type_ctor_info_unicode_encoding_0;
MR_decl_label6(lexer__LCMCpr_get_token_list_2_1_6_0, 33,3,5,4,9,11)
MR_decl_label10(lexer__LCMCpr_string_get_token_list_max_1_5_0, 144,4,8,11,12,13,14,15,16,17)
MR_decl_label10(lexer__LCMCpr_string_get_token_list_max_1_5_0, 18,19,20,21,22,23,10,25,9,3)
MR_decl_label3(lexer__LCMCpr_string_get_token_list_max_1_5_0, 28,30,31)
MR_decl_label10(lexer__encode_unicode_char_as_utf8_2_0, 78,4,3,7,8,9,6,13,14,15)
MR_decl_label10(lexer__encode_unicode_char_as_utf8_2_0, 16,17,12,21,22,23,24,25,26,27)
MR_decl_label1(lexer__encode_unicode_char_as_utf8_2_0, 1)
MR_decl_label10(lexer__execute_get_token_action_8_0, 3,6,10,9,13,12,16,15,19,18)
MR_decl_label10(lexer__execute_get_token_action_8_0, 22,25,24,28,31,32,30,33,36,39)
MR_decl_label10(lexer__execute_get_token_action_8_0, 40,41,42,44,45,46,47,38,37,35)
MR_decl_label4(lexer__execute_get_token_action_8_0, 227,58,59,214)
MR_decl_label10(lexer__execute_string_get_token_action_10_0, 3,5,7,9,11,13,15,17,19,21)
MR_decl_label10(lexer__execute_string_get_token_action_10_0, 23,28,29,30,31,33,34,35,36,27)
MR_decl_label4(lexer__execute_string_get_token_action_10_0, 39,26,25,45)
MR_decl_label5(lexer__finish_hex_escape_7_0, 56,6,8,12,5)
MR_decl_label5(lexer__finish_octal_escape_7_0, 56,6,8,12,5)
MR_decl_label9(lexer__get_binary_4_0, 4,2,6,12,14,19,18,17,16)
MR_decl_label10(lexer__get_binary_2_5_0, 109,4,2,6,10,12,17,20,14,30)
MR_decl_label7(lexer__get_binary_2_5_0, 29,28,36,39,38,35,27)
MR_decl_label6(lexer__get_char_code_4_0, 4,2,6,12,14,16)
MR_decl_label8(lexer__get_comment_5_0, 54,4,2,6,12,14,17,16)
MR_decl_label9(lexer__get_comment_2_5_0, 64,4,2,6,12,14,17,20,16)
MR_decl_label10(lexer__get_dot_4_0, 4,2,6,12,14,21,18,17,26,27)
MR_decl_label10(lexer__get_dot_4_0, 28,29,30,31,32,33,34,35,36,37)
MR_decl_label8(lexer__get_dot_4_0, 38,39,40,41,42,25,24,15)
MR_decl_label10(lexer__get_float_decimals_5_0, 124,4,2,6,10,12,17,14,31,29)
MR_decl_label7(lexer__get_float_decimals_5_0, 37,36,35,43,46,42,28)
MR_decl_label10(lexer__get_float_exponent_5_0, 4,2,6,10,12,17,20,16,14,31)
MR_decl_label5(lexer__get_float_exponent_5_0, 30,29,37,35,28)
MR_decl_label8(lexer__get_float_exponent_2_5_0, 4,2,6,12,14,19,17,16)
MR_decl_label10(lexer__get_float_exponent_3_5_0, 105,4,2,6,10,12,17,14,31,29)
MR_decl_label4(lexer__get_float_exponent_3_5_0, 37,40,36,28)
MR_decl_label10(lexer__get_graphic_5_0, 199,4,2,6,10,12,17,14,25,26)
MR_decl_label10(lexer__get_graphic_5_0, 27,28,29,30,31,32,33,34,35,36)
MR_decl_label10(lexer__get_graphic_5_0, 37,38,39,40,41,24,23,47,46,22)
MR_decl_label8(lexer__get_hex_4_0, 4,2,6,12,14,19,17,16)
MR_decl_label10(lexer__get_hex_2_5_0, 103,4,2,6,10,12,17,20,14,30)
MR_decl_label6(lexer__get_hex_2_5_0, 28,36,39,38,35,27)
MR_decl_label10(lexer__get_hex_escape_7_0, 66,4,2,6,12,14,18,16,22,15)
MR_decl_label10(lexer__get_implementation_defined_literal_rest_4_0, 4,2,6,12,14,19,22,17,29,30)
MR_decl_label10(lexer__get_implementation_defined_literal_rest_4_0, 31,32,33,34,35,36,37,38,39,40)
MR_decl_label9(lexer__get_implementation_defined_literal_rest_4_0, 41,42,43,44,45,28,27,16,13)
MR_decl_label10(lexer__get_int_dot_5_0, 4,2,6,10,12,17,20,19,16,14)
MR_decl_label9(lexer__get_int_dot_5_0, 30,28,37,40,39,36,46,27,13)
MR_decl_label10(lexer__get_name_5_0, 81,4,2,6,10,12,17,14,25,23)
MR_decl_label3(lexer__get_name_5_0, 31,30,22)
MR_decl_label10(lexer__get_number_5_0, 132,4,2,6,10,12,17,20,14,30)
MR_decl_label10(lexer__get_number_5_0, 28,34,39,38,37,45,48,47,44,27)
MR_decl_label8(lexer__get_octal_4_0, 4,2,6,12,14,19,17,16)
MR_decl_label10(lexer__get_octal_2_5_0, 103,4,2,6,10,12,17,20,14,30)
MR_decl_label6(lexer__get_octal_2_5_0, 28,36,39,38,35,27)
MR_decl_label10(lexer__get_octal_escape_7_0, 66,4,2,6,12,14,18,16,22,15)
MR_decl_label9(lexer__get_quoted_name_6_0, 63,4,2,6,12,14,16,18,15)
MR_decl_label10(lexer__get_quoted_name_escape_6_0, 188,4,2,6,12,14,16,19,24,25)
MR_decl_label10(lexer__get_quoted_name_escape_6_0, 26,27,28,29,30,31,32,33,23,22)
MR_decl_label6(lexer__get_quoted_name_escape_6_0, 37,40,43,48,47,15)
MR_decl_label10(lexer__get_quoted_name_quote_6_0, 4,2,6,10,12,17,19,14,31,36)
MR_decl_label4(lexer__get_quoted_name_quote_6_0, 38,41,35,30)
MR_decl_label10(lexer__get_slash_5_0, 4,2,6,12,14,17,22,23,24,25)
MR_decl_label10(lexer__get_slash_5_0, 26,27,28,29,30,31,32,33,34,35)
MR_decl_label9(lexer__get_slash_5_0, 36,37,38,21,40,43,20,44,16)
MR_decl_label10(lexer__get_source_line_number_6_0, 126,4,2,6,10,12,15,14,20,18)
MR_decl_label10(lexer__get_source_line_number_6_0, 28,31,33,30,35,26,42,24,45,47)
MR_decl_label4(lexer__get_source_line_number_6_0, 54,59,17,63)
MR_decl_label10(lexer__get_token_5_0, 4,2,6,12,14,18,19,20,21,22)
MR_decl_label10(lexer__get_token_5_0, 23,24,25,26,27,28,29,30,17,16)
MR_decl_label1(lexer__get_token_5_0, 15)
MR_decl_label10(lexer__get_token_2_5_0, 4,2,6,12,14,18,19,20,21,22)
MR_decl_label10(lexer__get_token_2_5_0, 23,24,25,26,27,28,29,30,17,16)
MR_decl_label1(lexer__get_token_2_5_0, 15)
MR_decl_label1(lexer__get_token_list_3_0, 2)
MR_decl_label6(lexer__get_token_list_2_6_0, 3,5,4,39,11,13)
MR_decl_label10(lexer__get_unicode_escape_8_0, 167,3,5,7,11,9,14,17,19,18)
MR_decl_label10(lexer__get_unicode_escape_8_0, 21,22,23,24,25,16,29,15,31,34)
MR_decl_label10(lexer__get_unicode_escape_8_0, 35,4,2,42,40,44,50,52,56,55)
MR_decl_label1(lexer__get_unicode_escape_8_0, 53)
MR_decl_label10(lexer__get_variable_5_0, 81,4,2,6,10,12,17,14,25,23)
MR_decl_label3(lexer__get_variable_5_0, 31,30,22)
MR_decl_label10(lexer__get_zero_4_0, 4,2,6,12,14,19,17,23,26,29)
MR_decl_label6(lexer__get_zero_4_0, 32,35,41,40,39,16)
MR_decl_label1(lexer__graphic_token_char_1_0, 2)
MR_decl_label8(lexer__skip_to_eol_5_0, 53,4,2,6,12,14,16,15)
MR_decl_label4(lexer__start_quoted_name_6_0, 2,5,3,10)
MR_decl_label5(lexer__string_finish_hex_escape_10_0, 56,6,8,12,5)
MR_decl_label5(lexer__string_finish_octal_escape_10_0, 56,6,8,12,5)
MR_decl_label6(lexer__string_get_binary_7_0, 4,8,39,9,14,3)
MR_decl_label10(lexer__string_get_binary_2_7_0, 60,4,8,61,9,14,16,15,3,23)
MR_decl_label1(lexer__string_get_binary_2_7_0, 22)
MR_decl_label3(lexer__string_get_char_code_7_0, 4,8,3)
MR_decl_label4(lexer__string_get_comment_7_0, 35,4,8,3)
MR_decl_label6(lexer__string_get_comment_2_7_0, 45,4,8,9,12,3)
MR_decl_label10(lexer__string_get_dot_7_0, 4,8,14,12,17,10,20,21,22,23)
MR_decl_label10(lexer__string_get_dot_7_0, 24,25,26,27,28,29,30,31,32,33)
MR_decl_label6(lexer__string_get_dot_7_0, 34,35,36,18,39,3)
MR_decl_label10(lexer__string_get_float_decimals_7_0, 80,4,8,11,9,16,14,19,21,3)
MR_decl_label1(lexer__string_get_float_decimals_7_0, 30)
MR_decl_label10(lexer__string_get_float_exponent_7_0, 4,8,10,15,19,22,20,25,14,9)
MR_decl_label7(lexer__string_get_float_exponent_7_0, 32,31,35,3,40,42,48)
MR_decl_label8(lexer__string_get_float_exponent_3_7_0, 62,4,11,10,14,16,3,24)
MR_decl_label7(lexer__string_get_graphic_7_0, 112,4,8,113,9,30,3)
MR_decl_label5(lexer__string_get_hex_7_0, 4,11,10,14,3)
MR_decl_label10(lexer__string_get_hex_2_7_0, 60,4,11,10,14,16,15,3,23,22)
MR_decl_label7(lexer__string_get_hex_escape_10_0, 47,4,8,11,9,15,3)
MR_decl_label10(lexer__string_get_implementation_defined_literal_rest_7_0, 4,8,11,13,9,20,21,22,23,24)
MR_decl_label10(lexer__string_get_implementation_defined_literal_rest_7_0, 25,26,27,28,29,30,31,32,33,34)
MR_decl_label6(lexer__string_get_implementation_defined_literal_rest_7_0, 35,36,18,39,3,199)
MR_decl_label10(lexer__string_get_int_dot_7_0, 4,11,10,14,15,17,3,23,25,24)
MR_decl_label6(lexer__string_get_name_7_0, 32,4,11,10,14,3)
MR_decl_label10(lexer__string_get_number_7_0, 89,4,8,11,9,14,19,17,22,24)
MR_decl_label5(lexer__string_get_number_7_0, 23,3,33,32,38)
MR_decl_label5(lexer__string_get_octal_7_0, 4,11,10,14,3)
MR_decl_label10(lexer__string_get_octal_2_7_0, 60,4,11,10,14,16,15,3,23,22)
MR_decl_label8(lexer__string_get_octal_escape_10_0, 48,4,8,11,9,15,18,3)
MR_decl_label6(lexer__string_get_quoted_name_9_0, 44,4,8,9,11,3)
MR_decl_label10(lexer__string_get_quoted_name_escape_9_0, 169,4,8,9,12,17,18,19,20,21)
MR_decl_label10(lexer__string_get_quoted_name_escape_9_0, 22,23,24,25,26,16,15,30,33,36)
MR_decl_label3(lexer__string_get_quoted_name_escape_9_0, 41,39,3)
MR_decl_label10(lexer__string_get_quoted_name_quote_9_0, 4,8,9,12,15,17,13,3,31,33)
MR_decl_label2(lexer__string_get_quoted_name_quote_9_0, 36,29)
MR_decl_label7(lexer__string_get_slash_7_0, 4,8,9,162,12,33,3)
MR_decl_label10(lexer__string_get_source_line_number_7_0, 91,4,8,11,9,17,16,14,27,29)
MR_decl_label4(lexer__string_get_source_line_number_7_0, 36,41,3,45)
MR_decl_label10(lexer__string_get_token_6_0, 4,8,11,12,13,14,15,16,17,18)
MR_decl_label8(lexer__string_get_token_6_0, 19,20,21,22,23,10,9,3)
MR_decl_label10(lexer__string_get_token_2_6_0, 4,8,11,12,13,14,15,16,17,18)
MR_decl_label8(lexer__string_get_token_2_6_0, 19,20,21,22,23,10,9,3)
MR_decl_label10(lexer__string_get_token_list_max_5_0, 4,8,11,12,13,14,15,16,17,18)
MR_decl_label10(lexer__string_get_token_list_max_5_0, 19,20,21,22,23,10,25,9,3,28)
MR_decl_label3(lexer__string_get_token_list_max_5_0, 30,31,34)
MR_decl_label10(lexer__string_get_unicode_escape_11_0, 146,3,5,7,11,9,14,17,19,18)
MR_decl_label10(lexer__string_get_unicode_escape_11_0, 21,22,23,24,25,16,29,15,31,32)
MR_decl_label10(lexer__string_get_unicode_escape_11_0, 35,33,4,39,2,44,48,51,50,55)
MR_decl_label2(lexer__string_get_unicode_escape_11_0, 43,58)
MR_decl_label6(lexer__string_get_variable_7_0, 32,4,11,10,14,3)
MR_decl_label10(lexer__string_get_zero_7_0, 4,8,11,9,14,17,20,23,26,31)
MR_decl_label3(lexer__string_get_zero_7_0, 29,34,3)
MR_decl_label4(lexer__string_skip_to_eol_6_0, 34,4,8,3)
MR_decl_label4(lexer__string_start_quoted_name_9_0, 2,5,3,10)
MR_decl_label1(lexer__string_ungetchar_3_0, 2)
MR_decl_label10(lexer__token_to_string_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(lexer__token_to_string_2_0, 13,14,19,24,29,34,40,39,46,45)
MR_decl_label4(lexer__token_to_string_2_0, 52,51,55,54)
MR_decl_label10(__Unify___lexer__token_0_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label10(__Unify___lexer__token_0_0, 15,16,18,20,22,24,26,28,30,85)
MR_decl_label2(__Unify___lexer__token_0_0, 32,1)
MR_decl_label5(__Unify___lexer__token_list_0_0, 34,14,5,7,1)
MR_decl_label10(__Index___lexer__token_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(__Index___lexer__token_0_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label2(__Compare___lexer__get_token_action_0_0, 2,3)
MR_decl_label2(__Compare___lexer__offset_0_0, 2,3)
MR_decl_label2(__Compare___lexer__scanned_past_whitespace_0_0, 2,3)
MR_decl_label2(__Compare___lexer__string_token_context_0_0, 2,3)
MR_decl_label10(__Compare___lexer__token_0_0, 4,5,6,93,7,10,11,12,13,14)
MR_decl_label10(__Compare___lexer__token_0_0, 15,16,17,18,19,20,23,21,30,28)
MR_decl_label10(__Compare___lexer__token_0_0, 37,35,44,120,42,50,48,57,55,63)
MR_decl_label8(__Compare___lexer__token_0_0, 61,69,67,76,74,81,143,8)
MR_decl_label2(__Compare___lexer__token_context_0_0, 2,3)
MR_decl_label10(__Compare___lexer__token_list_0_0, 64,36,7,5,9,11,16,17,19,69)
MR_decl_label2(__Compare___lexer__unicode_encoding_0_0, 2,3)
MR_decl_static(lexer__get_context_4_0)
MR_def_extern_entry(lexer__graphic_token_char_1_0)
MR_decl_static(lexer__get_graphic_5_0)
MR_decl_static(lexer__get_dot_4_0)
MR_decl_static(lexer__encode_unicode_char_as_utf8_2_0)
MR_decl_static(fn__lexer__backend_unicode_encoding_int_0_0)
MR_decl_static(lexer__get_quoted_name_6_0)
MR_decl_static(lexer__get_quoted_name_quote_6_0)
MR_decl_static(lexer__get_quoted_name_escape_6_0)
MR_decl_static(lexer__get_unicode_escape_8_0)
MR_decl_static(lexer__get_hex_escape_7_0)
MR_decl_static(lexer__finish_hex_escape_7_0)
MR_decl_static(lexer__get_octal_escape_7_0)
MR_decl_static(lexer__finish_octal_escape_7_0)
MR_decl_static(lexer__start_quoted_name_6_0)
MR_decl_static(lexer__get_name_5_0)
MR_decl_static(lexer__get_implementation_defined_literal_rest_4_0)
MR_decl_static(lexer__get_variable_5_0)
MR_decl_static(lexer__get_char_code_4_0)
MR_decl_static(lexer__get_binary_2_5_0)
MR_decl_static(lexer__get_binary_4_0)
MR_decl_static(lexer__get_octal_2_5_0)
MR_decl_static(lexer__get_octal_4_0)
MR_decl_static(lexer__get_hex_2_5_0)
MR_decl_static(lexer__get_hex_4_0)
MR_decl_static(lexer__get_float_exponent_3_5_0)
MR_decl_static(lexer__get_float_exponent_2_5_0)
MR_decl_static(lexer__get_float_exponent_5_0)
MR_decl_static(lexer__get_float_decimals_5_0)
MR_decl_static(lexer__get_int_dot_5_0)
MR_decl_static(lexer__get_number_5_0)
MR_decl_static(lexer__get_zero_4_0)
MR_def_extern_entry(lexer__get_token_5_0)
MR_decl_static(lexer__get_token_2_5_0)
MR_decl_static(lexer__execute_get_token_action_8_0)
MR_decl_static(lexer__skip_to_eol_5_0)
MR_decl_static(lexer__get_slash_5_0)
MR_decl_static(lexer__get_comment_5_0)
MR_decl_static(lexer__get_comment_2_5_0)
MR_decl_static(lexer__get_source_line_number_6_0)
MR_def_extern_entry(lexer__get_token_list_2_6_0)
MR_def_extern_entry(lexer__get_token_list_3_0)
MR_decl_static(lexer__string_get_context_4_0)
MR_decl_static(lexer__string_ungetchar_3_0)
MR_decl_static(lexer__grab_string_5_0)
MR_decl_static(lexer__string_get_graphic_7_0)
MR_decl_static(lexer__string_get_dot_7_0)
MR_decl_static(lexer__string_get_quoted_name_9_0)
MR_decl_static(lexer__string_get_quoted_name_quote_9_0)
MR_decl_static(lexer__string_get_quoted_name_escape_9_0)
MR_decl_static(lexer__string_get_unicode_escape_11_0)
MR_decl_static(lexer__string_get_hex_escape_10_0)
MR_decl_static(lexer__string_finish_hex_escape_10_0)
MR_decl_static(lexer__string_get_octal_escape_10_0)
MR_decl_static(lexer__string_finish_octal_escape_10_0)
MR_decl_static(lexer__string_start_quoted_name_9_0)
MR_decl_static(lexer__string_get_name_7_0)
MR_decl_static(lexer__string_get_implementation_defined_literal_rest_7_0)
MR_decl_static(lexer__string_get_variable_7_0)
MR_decl_static(lexer__string_get_char_code_7_0)
MR_decl_static(lexer__string_get_binary_2_7_0)
MR_decl_static(lexer__string_get_binary_7_0)
MR_decl_static(lexer__string_get_octal_2_7_0)
MR_decl_static(lexer__string_get_octal_7_0)
MR_decl_static(lexer__string_get_hex_2_7_0)
MR_decl_static(lexer__string_get_hex_7_0)
MR_decl_static(lexer__string_get_float_exponent_3_7_0)
MR_decl_static(lexer__string_get_float_exponent_7_0)
MR_decl_static(lexer__string_get_float_decimals_7_0)
MR_decl_static(lexer__string_get_int_dot_7_0)
MR_decl_static(lexer__string_get_number_7_0)
MR_decl_static(lexer__string_get_zero_7_0)
MR_decl_static(lexer__string_get_token_6_0)
MR_decl_static(lexer__string_get_token_2_6_0)
MR_decl_static(lexer__execute_string_get_token_action_10_0)
MR_decl_static(lexer__string_skip_to_eol_6_0)
MR_decl_static(lexer__string_get_slash_7_0)
MR_decl_static(lexer__string_get_comment_7_0)
MR_decl_static(lexer__string_get_comment_2_7_0)
MR_decl_static(lexer__string_get_source_line_number_7_0)
MR_def_extern_entry(lexer__string_get_token_list_max_5_0)
MR_def_extern_entry(lexer__string_get_token_list_4_0)
MR_def_extern_entry(lexer__token_to_string_2_0)
MR_def_extern_entry(__Unify___lexer__get_token_action_0_0)
MR_def_extern_entry(__Compare___lexer__get_token_action_0_0)
MR_def_extern_entry(__Unify___lexer__offset_0_0)
MR_def_extern_entry(__Compare___lexer__offset_0_0)
MR_def_extern_entry(__Unify___lexer__scanned_past_whitespace_0_0)
MR_def_extern_entry(__Compare___lexer__scanned_past_whitespace_0_0)
MR_def_extern_entry(__Unify___lexer__string_token_context_0_0)
MR_def_extern_entry(__Compare___lexer__string_token_context_0_0)
MR_def_extern_entry(__Unify___lexer__token_0_0)
MR_def_extern_entry(__Index___lexer__token_0_0)
MR_def_extern_entry(__Compare___lexer__token_0_0)
MR_def_extern_entry(__Unify___lexer__token_context_0_0)
MR_def_extern_entry(__Compare___lexer__token_context_0_0)
MR_def_extern_entry(__Unify___lexer__token_list_0_0)
MR_def_extern_entry(__Compare___lexer__token_list_0_0)
MR_def_extern_entry(__Unify___lexer__unicode_encoding_0_0)
MR_def_extern_entry(__Compare___lexer__unicode_encoding_0_0)
MR_decl_static(fn__f_108_101_120_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(lexer__LCMCpr_get_token_list_2_1_6_0)
MR_def_extern_entry(lexer__LCMCpr_string_get_token_list_max_1_5_0)

static const struct mercury_type_0 mercury_common_0[25] =
{
{
5,
MR_string_const("invalid character in graphic token", 34)
},
{
5,
MR_string_const("invalid character in quoted name", 32)
},
{
5,
MR_string_const("invalid escape character", 24)
},
{
5,
MR_string_const("null character is illegal in strings and names", 46)
},
{
5,
MR_string_const("invalid Unicode character code", 30)
},
{
5,
MR_string_const("invalid hex character in Unicode escape", 39)
},
{
5,
MR_string_const("unterminated hex escape", 23)
},
{
5,
MR_string_const("empty hex escape", 16)
},
{
5,
MR_string_const("invalid hex escape", 18)
},
{
5,
MR_string_const("empty octal escape", 18)
},
{
5,
MR_string_const("invalid octal escape", 20)
},
{
5,
MR_string_const("unterminated quote", 18)
},
{
5,
MR_string_const("invalid character in name", 25)
},
{
5,
MR_string_const("invalid character in variable", 29)
},
{
5,
MR_string_const("unterminated char code constant", 31)
},
{
5,
MR_string_const("invalid integer token", 21)
},
{
5,
MR_string_const("invalid character in int", 24)
},
{
5,
MR_string_const("unterminated binary constant", 28)
},
{
5,
MR_string_const("unterminated octal constant", 27)
},
{
5,
MR_string_const("unterminated hex constant", 25)
},
{
5,
MR_string_const("invalid float token", 19)
},
{
5,
MR_string_const("unterminated exponent in float token", 36)
},
{
5,
MR_string_const("unterminated \'/*\' comment", 25)
},
{
5,
MR_string_const("unexpected end-of-file in \140#\' line number directive", 51)
},
{
5,
MR_string_const("invalid character in \140#\' line number directive", 46)
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
46,
MR_tbmkword(0, 0)
},
{
36,
MR_tbmkword(0, 0)
},
{
48,
MR_tbmkword(0, 0)
},
{
47,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
MR_string_const(".", 1)
},
{
MR_string_const("\044", 1)
},
{
MR_string_const("\140", 1)
},
{
MR_string_const(";", 1)
},
{
MR_string_const("/", 1)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
0,
0
}
},
};

static const struct mercury_type_4 mercury_common_4[8] =
{
{
MR_string_const("\' in \140#\' line number directive", 30),
MR_tbmkword(0, 0)
},
{
MR_string_const("NUL", 3),
MR_TAG_COMMON(1,4,0)
},
{
MR_string_const("invalid character \140", 19),
MR_TAG_COMMON(1,4,1)
},
{
MR_string_const("\'", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const(")", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("\'.", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const(">>", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("\"", 1),
MR_tbmkword(0, 0)
},
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_0 = {
	"action_whitespace",
	0
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_1 = {
	"action_alpha_lower",
	1
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_2 = {
	"action_alpha_upper_uscore",
	2
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_3 = {
	"action_zero",
	3
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_4 = {
	"action_nonzero_digit",
	4
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_5 = {
	"action_special_token",
	5
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_6 = {
	"action_dot",
	6
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_7 = {
	"action_percent",
	7
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_8 = {
	"action_quote",
	8
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_9 = {
	"action_slash",
	9
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_10 = {
	"action_hash",
	10
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_11 = {
	"action_backquote",
	11
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_12 = {
	"action_dollar",
	12
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_get_token_action_0_13 = {
	"action_graphic_token",
	13
};

const MR_EnumFunctorDescPtr mercury_data_lexer__enum_value_ordered_get_token_action_0[] = {
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_0,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_1,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_2,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_3,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_4,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_5,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_6,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_7,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_8,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_9,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_10,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_11,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_12,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_13
};

const MR_EnumFunctorDescPtr mercury_data_lexer__enum_name_ordered_get_token_action_0[] = {
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_1,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_2,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_11,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_12,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_6,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_13,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_10,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_4,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_7,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_8,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_9,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_5,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_0,
	&mercury_data_lexer__enum_functor_desc_get_token_action_0_3
};

const MR_Integer mercury_data_lexer__functor_number_map_get_token_action_0[] = {
	12,
	0,
	1,
	13,
	7,
	11,
	4,
	8,
	9,
	10,
	6,
	2,
	3,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_get_token_action_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___lexer__get_token_action_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___lexer__get_token_action_0_0)),
	"lexer",
	"get_token_action",
	{ (void *)mercury_data_lexer__enum_name_ordered_get_token_action_0 },
	{ (void *)mercury_data_lexer__enum_value_ordered_get_token_action_0 },
	14,
	4,
	mercury_data_lexer__functor_number_map_get_token_action_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_offset_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___lexer__offset_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___lexer__offset_0_0)),
	"lexer",
	"offset",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_scanned_past_whitespace_0_0 = {
	"scanned_past_whitespace",
	0
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_scanned_past_whitespace_0_1 = {
	"not_scanned_past_whitespace",
	1
};

const MR_EnumFunctorDescPtr mercury_data_lexer__enum_value_ordered_scanned_past_whitespace_0[] = {
	&mercury_data_lexer__enum_functor_desc_scanned_past_whitespace_0_0,
	&mercury_data_lexer__enum_functor_desc_scanned_past_whitespace_0_1
};

const MR_EnumFunctorDescPtr mercury_data_lexer__enum_name_ordered_scanned_past_whitespace_0[] = {
	&mercury_data_lexer__enum_functor_desc_scanned_past_whitespace_0_1,
	&mercury_data_lexer__enum_functor_desc_scanned_past_whitespace_0_0
};

const MR_Integer mercury_data_lexer__functor_number_map_scanned_past_whitespace_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_scanned_past_whitespace_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___lexer__scanned_past_whitespace_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___lexer__scanned_past_whitespace_0_0)),
	"lexer",
	"scanned_past_whitespace",
	{ (void *)mercury_data_lexer__enum_name_ordered_scanned_past_whitespace_0 },
	{ (void *)mercury_data_lexer__enum_value_ordered_scanned_past_whitespace_0 },
	2,
	4,
	mercury_data_lexer__functor_number_map_scanned_past_whitespace_0
};

const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_string_token_context_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___lexer__string_token_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___lexer__string_token_context_0_0)),
	"lexer",
	"string_token_context",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_0 = {
	"name",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_1 = {
	"variable",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_2 = {
	"integer",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_3 = {
	"float",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_4 = {
	"string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_5 = {
	"implementation_defined",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_5,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_6 = {
	"open",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_7 = {
	"open_ct",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_8 = {
	"close",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_9 = {
	"open_list",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_10 = {
	"close_list",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_11 = {
	"open_curly",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_12 = {
	"close_curly",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_13 = {
	"ht_sep",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_14 = {
	"comma",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_15 = {
	"end",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	15,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_16 = {
	"junk",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	16,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_16,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_17 = {
	"error",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	17,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_17,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_18 = {
	"io_error",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	18,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_18,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_19 = {
	"eof",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	19,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_20 = {
	"integer_dot",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	20,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_20,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_lexer__du_stag_ordered_token_0_0[] = {
	&mercury_data_lexer__du_functor_desc_token_0_6,
	&mercury_data_lexer__du_functor_desc_token_0_7,
	&mercury_data_lexer__du_functor_desc_token_0_8,
	&mercury_data_lexer__du_functor_desc_token_0_9,
	&mercury_data_lexer__du_functor_desc_token_0_10,
	&mercury_data_lexer__du_functor_desc_token_0_11,
	&mercury_data_lexer__du_functor_desc_token_0_12,
	&mercury_data_lexer__du_functor_desc_token_0_13,
	&mercury_data_lexer__du_functor_desc_token_0_14,
	&mercury_data_lexer__du_functor_desc_token_0_15,
	&mercury_data_lexer__du_functor_desc_token_0_19

};

const MR_DuFunctorDescPtr mercury_data_lexer__du_stag_ordered_token_0_1[] = {
	&mercury_data_lexer__du_functor_desc_token_0_0

};

const MR_DuFunctorDescPtr mercury_data_lexer__du_stag_ordered_token_0_2[] = {
	&mercury_data_lexer__du_functor_desc_token_0_1

};

const MR_DuFunctorDescPtr mercury_data_lexer__du_stag_ordered_token_0_3[] = {
	&mercury_data_lexer__du_functor_desc_token_0_2,
	&mercury_data_lexer__du_functor_desc_token_0_3,
	&mercury_data_lexer__du_functor_desc_token_0_4,
	&mercury_data_lexer__du_functor_desc_token_0_5,
	&mercury_data_lexer__du_functor_desc_token_0_16,
	&mercury_data_lexer__du_functor_desc_token_0_17,
	&mercury_data_lexer__du_functor_desc_token_0_18,
	&mercury_data_lexer__du_functor_desc_token_0_20

};

const MR_DuPtagLayout mercury_data_lexer__du_ptag_ordered_token_0[] = {
	{ 11, MR_SECTAG_LOCAL,
	mercury_data_lexer__du_stag_ordered_token_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_lexer__du_stag_ordered_token_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_lexer__du_stag_ordered_token_0_2 },
	{ 8, MR_SECTAG_REMOTE,
	mercury_data_lexer__du_stag_ordered_token_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_lexer__du_name_ordered_token_0[] = {
	&mercury_data_lexer__du_functor_desc_token_0_8,
	&mercury_data_lexer__du_functor_desc_token_0_12,
	&mercury_data_lexer__du_functor_desc_token_0_10,
	&mercury_data_lexer__du_functor_desc_token_0_14,
	&mercury_data_lexer__du_functor_desc_token_0_15,
	&mercury_data_lexer__du_functor_desc_token_0_19,
	&mercury_data_lexer__du_functor_desc_token_0_17,
	&mercury_data_lexer__du_functor_desc_token_0_3,
	&mercury_data_lexer__du_functor_desc_token_0_13,
	&mercury_data_lexer__du_functor_desc_token_0_5,
	&mercury_data_lexer__du_functor_desc_token_0_2,
	&mercury_data_lexer__du_functor_desc_token_0_20,
	&mercury_data_lexer__du_functor_desc_token_0_18,
	&mercury_data_lexer__du_functor_desc_token_0_16,
	&mercury_data_lexer__du_functor_desc_token_0_0,
	&mercury_data_lexer__du_functor_desc_token_0_6,
	&mercury_data_lexer__du_functor_desc_token_0_7,
	&mercury_data_lexer__du_functor_desc_token_0_11,
	&mercury_data_lexer__du_functor_desc_token_0_9,
	&mercury_data_lexer__du_functor_desc_token_0_4,
	&mercury_data_lexer__du_functor_desc_token_0_1
};

const MR_Integer mercury_data_lexer__functor_number_map_token_0[] = {
	14,
	20,
	10,
	7,
	19,
	9,
	15,
	16,
	0,
	18,
	2,
	17,
	1,
	8,
	3,
	4,
	13,
	6,
	12,
	5,
	11 };
	
const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_token_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___lexer__token_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___lexer__token_0_0)),
	"lexer",
	"token",
	{ (void *)mercury_data_lexer__du_name_ordered_token_0 },
	{ (void *)mercury_data_lexer__du_ptag_ordered_token_0 },
	21,
	4,
	mercury_data_lexer__functor_number_map_token_0
};

const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_token_context_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___lexer__token_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___lexer__token_context_0_0)),
	"lexer",
	"token_context",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_token_0;
extern const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_token_list_0;

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_list_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_lexer__type_ctor_info_token_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_lexer__type_ctor_info_token_list_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_list_0_0 = {
	"token_cons",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_list_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_list_0_1 = {
	"token_nil",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_lexer__du_stag_ordered_token_list_0_0[] = {
	&mercury_data_lexer__du_functor_desc_token_list_0_1

};

const MR_DuFunctorDescPtr mercury_data_lexer__du_stag_ordered_token_list_0_1[] = {
	&mercury_data_lexer__du_functor_desc_token_list_0_0

};

const MR_DuPtagLayout mercury_data_lexer__du_ptag_ordered_token_list_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_lexer__du_stag_ordered_token_list_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_lexer__du_stag_ordered_token_list_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_lexer__du_name_ordered_token_list_0[] = {
	&mercury_data_lexer__du_functor_desc_token_list_0_0,
	&mercury_data_lexer__du_functor_desc_token_list_0_1
};

const MR_Integer mercury_data_lexer__functor_number_map_token_list_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_token_list_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___lexer__token_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___lexer__token_list_0_0)),
	"lexer",
	"token_list",
	{ (void *)mercury_data_lexer__du_name_ordered_token_list_0 },
	{ (void *)mercury_data_lexer__du_ptag_ordered_token_list_0 },
	2,
	4,
	mercury_data_lexer__functor_number_map_token_list_0
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_unicode_encoding_0_0 = {
	"utf8",
	0
};

static const MR_EnumFunctorDesc mercury_data_lexer__enum_functor_desc_unicode_encoding_0_1 = {
	"utf16",
	1
};

const MR_EnumFunctorDescPtr mercury_data_lexer__enum_value_ordered_unicode_encoding_0[] = {
	&mercury_data_lexer__enum_functor_desc_unicode_encoding_0_0,
	&mercury_data_lexer__enum_functor_desc_unicode_encoding_0_1
};

const MR_EnumFunctorDescPtr mercury_data_lexer__enum_name_ordered_unicode_encoding_0[] = {
	&mercury_data_lexer__enum_functor_desc_unicode_encoding_0_1,
	&mercury_data_lexer__enum_functor_desc_unicode_encoding_0_0
};

const MR_Integer mercury_data_lexer__functor_number_map_unicode_encoding_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_unicode_encoding_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___lexer__unicode_encoding_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___lexer__unicode_encoding_0_0)),
	"lexer",
	"unicode_encoding",
	{ (void *)mercury_data_lexer__enum_name_ordered_unicode_encoding_0 },
	{ (void *)mercury_data_lexer__enum_value_ordered_unicode_encoding_0 },
	2,
	4,
	mercury_data_lexer__functor_number_map_unicode_encoding_0
};




MR_BEGIN_MODULE(lexer_module0)
	MR_init_entry1(lexer__get_context_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_context_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_context'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_context_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_context_4_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 1424 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module1)
	MR_init_entry1(lexer__graphic_token_char_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__graphic_token_char_1_0);
	MR_init_label1(lexer__graphic_token_char_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'graphic_token_char'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__graphic_token_char_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,33)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,35)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,36)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,38)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,42)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,43)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,45)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,46)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,47)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,58)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,60)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,61)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,62)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,63)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,64)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,92)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,94)) {
		MR_GOTO_LAB(lexer__graphic_token_char_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 126);
	MR_proceed();
MR_def_label(lexer__graphic_token_char_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__det_from_int_2_0);
MR_decl_entry(string__semidet_from_rev_char_list_2_0);

MR_BEGIN_MODULE(lexer_module2)
	MR_init_entry1(lexer__get_graphic_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_graphic_5_0);
	MR_init_label10(lexer__get_graphic_5_0,199,4,2,6,10,12,17,14,25,26)
	MR_init_label10(lexer__get_graphic_5_0,27,28,29,30,31,32,33,34,35,36)
	MR_init_label10(lexer__get_graphic_5_0,37,38,39,40,41,24,23,47,46,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_graphic'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_graphic_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_graphic_5_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 1551 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_graphic_5_0_i4);
MR_def_label(lexer__get_graphic_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i12);
MR_def_label(lexer__get_graphic_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 1592 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_graphic_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i12);
MR_def_label(lexer__get_graphic_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 1625 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 1645 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_graphic_5_0_i10);
MR_def_label(lexer__get_graphic_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_graphic_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_graphic_5_0_i17);
MR_def_label(lexer__get_graphic_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i46);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_graphic_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i22);
	}
	if (MR_INT_NE(MR_r2,33)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,35)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,36)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,38)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,42)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,43)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,45)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,46)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,47)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i33);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,58)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i34);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,60)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,61)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i36);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,62)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,63)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i38);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,64)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,92)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,94)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
MR_def_label(lexer__get_graphic_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,126)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i23);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_graphic_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i199);
	}
MR_def_label(lexer__get_graphic_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 1861 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_graphic_5_0_i47);
MR_def_label(lexer__get_graphic_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i46);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_graphic_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_graphic_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_whitespace_1_0);

MR_BEGIN_MODULE(lexer_module3)
	MR_init_entry1(lexer__get_dot_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_dot_4_0);
	MR_init_label10(lexer__get_dot_4_0,4,2,6,12,14,21,18,17,26,27)
	MR_init_label10(lexer__get_dot_4_0,28,29,30,31,32,33,34,35,36,37)
	MR_init_label8(lexer__get_dot_4_0,38,39,40,41,42,25,24,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_dot'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_dot_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_4_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 1929 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_dot_4_0_i4);
MR_def_label(lexer__get_dot_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i12);
MR_def_label(lexer__get_dot_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 1966 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_dot_4_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_dot_4_0_i12);
MR_def_label(lexer__get_dot_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_4_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 1998 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 2018 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_dot_4_0_i12);
MR_def_label(lexer__get_dot_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_dot_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i15);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__get_dot_4_0_i21);
MR_def_label(lexer__get_dot_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i18);
	}
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i17);
	}
MR_def_label(lexer__get_dot_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_sv(2);
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 2079 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_dot_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i26);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i33);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i34);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i36);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i38);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i42);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i25);
MR_def_label(lexer__get_dot_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i24);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_dot_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_graphic_5_0);
MR_def_label(lexer__get_dot_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 2264 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_dot_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);

MR_BEGIN_MODULE(lexer_module4)
	MR_init_entry1(lexer__encode_unicode_char_as_utf8_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__encode_unicode_char_as_utf8_2_0);
	MR_init_label10(lexer__encode_unicode_char_as_utf8_2_0,78,4,3,7,8,9,6,13,14,15)
	MR_init_label10(lexer__encode_unicode_char_as_utf8_2_0,16,17,12,21,22,23,24,25,26,27)
	MR_init_label1(lexer__encode_unicode_char_as_utf8_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'encode_unicode_char_as_utf8'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__encode_unicode_char_as_utf8_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i1);
	}
	if (MR_INT_GT(MR_r1,1114111)) {
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i1);
	}
	if (MR_INT_LT(MR_r1,55296)) {
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i78);
	}
	if (MR_INT_LE(MR_r1,57343)) {
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i1);
	}
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_GT(MR_r1,127)) {
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i3);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i4);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,2047)) {
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) 1984 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i7);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) 63 & (MR_Integer) MR_sv(1));
	MR_r1 = ((MR_Integer) MR_r1 | (MR_Integer) 192);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i8);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r2 | (MR_Integer) 128);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i9);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,65535)) {
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) 61440 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i13);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) 4032 & (MR_Integer) MR_sv(1));
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i14);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) 63 & (MR_Integer) MR_sv(1));
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r2 | (MR_Integer) 224);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i15);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r2 | (MR_Integer) 128);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i16);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r2 | (MR_Integer) 128);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i17);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) 1835008 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 18;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i21);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) 258048 & (MR_Integer) MR_sv(1));
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i22);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = ((MR_Integer) 4032 & (MR_Integer) MR_sv(1));
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i23);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) 63 & (MR_Integer) MR_sv(1));
	MR_sv(4) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(2) | (MR_Integer) 240);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i24);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(3) | (MR_Integer) 128);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i25);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(4) | (MR_Integer) 128);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i26);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r2 | (MR_Integer) 128);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i27);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module5)
	MR_init_entry1(fn__lexer__backend_unicode_encoding_int_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__lexer__backend_unicode_encoding_int_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'backend_unicode_encoding_int'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__lexer__backend_unicode_encoding_int_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	EncodingInt;
#define	MR_PROC_LABEL	mercury__fn__lexer__backend_unicode_encoding_int_0_0
{
#line 1420 "lexer.m"

    EncodingInt = 0;
;}
#line 2520 "lexer.c"
	MR_r1 = EncodingInt;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module6)
	MR_init_entry1(lexer__get_quoted_name_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_quoted_name_6_0);
	MR_init_label9(lexer__get_quoted_name_6_0,63,4,2,6,12,14,16,18,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_quoted_name'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_quoted_name_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__get_quoted_name_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_6_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 2566 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r4 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_6_0_i4);
MR_def_label(lexer__get_quoted_name_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_quoted_name_6_0_i12);
MR_def_label(lexer__get_quoted_name_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r4;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 2606 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_6_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_quoted_name_6_0_i12);
MR_def_label(lexer__get_quoted_name_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_6_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 2640 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 2660 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_6_0_i12);
MR_def_label(lexer__get_quoted_name_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i15);
	}
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_quote_6_0);
MR_def_label(lexer__get_quoted_name_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_escape_6_0);
MR_def_label(lexer__get_quoted_name_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__get_quoted_name_6_0_i63);
	}
MR_def_label(lexer__get_quoted_name_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(4), 0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(lexer_module7)
	MR_init_entry1(lexer__get_quoted_name_quote_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_quoted_name_quote_6_0);
	MR_init_label10(lexer__get_quoted_name_quote_6_0,4,2,6,10,12,17,19,14,31,36)
	MR_init_label4(lexer__get_quoted_name_quote_6_0,38,41,35,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_quoted_name_quote'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_quoted_name_quote_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 2764 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r4 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_quote_6_0_i4);
MR_def_label(lexer__get_quoted_name_quote_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i12);
MR_def_label(lexer__get_quoted_name_quote_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r4;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 2806 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i12);
MR_def_label(lexer__get_quoted_name_quote_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 2840 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 2860 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_quote_6_0_i10);
MR_def_label(lexer__get_quoted_name_quote_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_quoted_name_quote_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_quoted_name_quote_6_0_i17);
MR_def_label(lexer__get_quoted_name_quote_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i35);
	}
	if (MR_INT_NE(MR_sv(2),39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i41);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i30);
	}
	if ((MR_r2 != MR_sv(2))) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_6_0);
	}
MR_def_label(lexer__get_quoted_name_quote_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 2952 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_quoted_name_quote_6_0_i36);
MR_def_label(lexer__get_quoted_name_quote_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i35);
	}
	if (MR_INT_NE(MR_sv(2),39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i38);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i41);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lexer.m: unknown quote character", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__get_quoted_name_quote_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(4), 0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_octal_digit_1_0);

MR_BEGIN_MODULE(lexer_module8)
	MR_init_entry1(lexer__get_quoted_name_escape_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_quoted_name_escape_6_0);
	MR_init_label10(lexer__get_quoted_name_escape_6_0,188,4,2,6,12,14,16,19,24,25)
	MR_init_label10(lexer__get_quoted_name_escape_6_0,26,27,28,29,30,31,32,33,23,22)
	MR_init_label6(lexer__get_quoted_name_escape_6_0,37,40,43,48,47,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_quoted_name_escape'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_quoted_name_escape_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__get_quoted_name_escape_6_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_6_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 3042 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r4 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_escape_6_0_i4);
MR_def_label(lexer__get_quoted_name_escape_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i12);
MR_def_label(lexer__get_quoted_name_escape_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r4;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 3082 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i12);
MR_def_label(lexer__get_quoted_name_escape_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_6_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 3116 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 3136 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_escape_6_0_i12);
MR_def_label(lexer__get_quoted_name_escape_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_escape_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i15);
	}
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_6_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i188);
MR_def_label(lexer__get_quoted_name_escape_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 34;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
MR_def_label(lexer__get_quoted_name_escape_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 39;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
MR_def_label(lexer__get_quoted_name_escape_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i26);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 92;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
MR_def_label(lexer__get_quoted_name_escape_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i27);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 96;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
MR_def_label(lexer__get_quoted_name_escape_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,97)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i28);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
MR_def_label(lexer__get_quoted_name_escape_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i29);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
MR_def_label(lexer__get_quoted_name_escape_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,102)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i30);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
MR_def_label(lexer__get_quoted_name_escape_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,110)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i31);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
MR_def_label(lexer__get_quoted_name_escape_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,114)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i32);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
MR_def_label(lexer__get_quoted_name_escape_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,116)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i33);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
MR_def_label(lexer__get_quoted_name_escape_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i22);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 11;
MR_def_label(lexer__get_quoted_name_escape_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_6_0);
	}
MR_def_label(lexer__get_quoted_name_escape_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_hex_escape_7_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,117)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i40);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_unicode_escape_8_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,85)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i43);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 8;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_unicode_escape_8_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_quoted_name_escape_6_0_i48);
MR_def_label(lexer__get_quoted_name_escape_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_octal_escape_7_0);
	}
MR_def_label(lexer__get_quoted_name_escape_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_escape_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(4), 0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__length_2_3_0);
MR_decl_entry(string__base_string_to_int_3_0);
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(char__is_hex_digit_1_0);

MR_BEGIN_MODULE(lexer_module9)
	MR_init_entry1(lexer__get_unicode_escape_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_unicode_escape_8_0);
	MR_init_label10(lexer__get_unicode_escape_8_0,167,3,5,7,11,9,14,17,19,18)
	MR_init_label10(lexer__get_unicode_escape_8_0,21,22,23,24,25,16,29,15,31,34)
	MR_init_label10(lexer__get_unicode_escape_8_0,35,4,2,42,40,44,50,52,56,55)
	MR_init_label1(lexer__get_unicode_escape_8_0,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_unicode_escape'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_unicode_escape_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(lexer__get_unicode_escape_8_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		lexer__get_unicode_escape_8_0_i3);
MR_def_label(lexer__get_unicode_escape_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_unicode_escape_8_0_i5);
MR_def_label(lexer__get_unicode_escape_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i4);
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_unicode_escape_8_0_i7);
MR_def_label(lexer__get_unicode_escape_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i4);
	}
	{
	MR_Integer	EncodingInt;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
{
#line 1420 "lexer.m"

    EncodingInt = 0;
;}
#line 3451 "lexer.c"
	MR_r3 = EncodingInt;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i14);
MR_def_label(lexer__get_unicode_escape_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i14);
MR_def_label(lexer__get_unicode_escape_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_unicode_encoding: unexpected Unicode encoding code", 58);
	MR_np_call_localret_ent(require__error_1_0,
		lexer__get_unicode_escape_8_0_i14);
MR_def_label(lexer__get_unicode_escape_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i16);
	}
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i4);
	}
	if (MR_INT_GT(MR_r1,1114111)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i4);
	}
	if (MR_INT_LT(MR_r1,55296)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i17);
	}
	if (MR_INT_LE(MR_r1,57343)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i4);
	}
MR_def_label(lexer__get_unicode_escape_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,65535)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i18);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i19);
MR_def_label(lexer__get_unicode_escape_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i15);
	}
MR_def_label(lexer__get_unicode_escape_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) 2031616 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__get_unicode_escape_8_0_i21);
MR_def_label(lexer__get_unicode_escape_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = ((MR_Integer) 64512 & (MR_Integer) MR_sv(2));
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__get_unicode_escape_8_0_i22);
MR_def_label(lexer__get_unicode_escape_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = ((MR_Integer) 1023 & (MR_Integer) MR_sv(2));
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r2 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		lexer__get_unicode_escape_8_0_i23);
MR_def_label(lexer__get_unicode_escape_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = ((MR_Integer) 56320 | (MR_Integer) MR_sv(6));
	MR_r1 = (((MR_Integer) 55296 | (MR_Integer) MR_r1) | (MR_Integer) MR_r2);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i24);
MR_def_label(lexer__get_unicode_escape_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i25);
MR_def_label(lexer__get_unicode_escape_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i15);
	}
MR_def_label(lexer__get_unicode_escape_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(lexer__encode_unicode_char_as_utf8_2_0,
		lexer__get_unicode_escape_8_0_i29);
MR_def_label(lexer__get_unicode_escape_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i4);
	}
	MR_r1 = MR_r2;
MR_def_label(lexer__get_unicode_escape_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i31);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__get_unicode_escape_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CHAR_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		lexer__get_unicode_escape_8_0_i34);
MR_def_label(lexer__get_unicode_escape_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__append_3_1,
		lexer__get_unicode_escape_8_0_i35);
MR_def_label(lexer__get_unicode_escape_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__get_quoted_name_6_0);
	}
MR_def_label(lexer__get_unicode_escape_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__get_unicode_escape_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 3639 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i40);
	}
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i42);
MR_def_label(lexer__get_unicode_escape_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i50);
MR_def_label(lexer__get_unicode_escape_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 3676 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i44);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i50);
MR_def_label(lexer__get_unicode_escape_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 3707 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 3727 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i50);
MR_def_label(lexer__get_unicode_escape_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i52);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__get_unicode_escape_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i53);
	}
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_1_0,
		lexer__get_unicode_escape_8_0_i56);
MR_def_label(lexer__get_unicode_escape_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i55);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i167);
	}
MR_def_label(lexer__get_unicode_escape_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,5);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__get_unicode_escape_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(6), 0);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_hex_digit_2_0);

MR_BEGIN_MODULE(lexer_module10)
	MR_init_entry1(lexer__get_hex_escape_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_hex_escape_7_0);
	MR_init_label10(lexer__get_hex_escape_7_0,66,4,2,6,12,14,18,16,22,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_hex_escape'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_hex_escape_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__get_hex_escape_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_7_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 3823 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r5 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r5,-1)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_escape_7_0_i4);
MR_def_label(lexer__get_hex_escape_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_hex_escape_7_0_i12);
MR_def_label(lexer__get_hex_escape_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r5;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 3864 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_escape_7_0_i6);
	MR_r5 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r5;
	MR_GOTO_LAB(lexer__get_hex_escape_7_0_i12);
MR_def_label(lexer__get_hex_escape_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_7_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 3899 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 3919 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_escape_7_0_i12);
MR_def_label(lexer__get_hex_escape_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,1)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_hex_escape_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i15);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_escape_7_0_i18);
MR_def_label(lexer__get_hex_escape_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__get_hex_escape_7_0_i66);
	}
MR_def_label(lexer__get_hex_escape_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__finish_hex_escape_7_0);
MR_def_label(lexer__get_hex_escape_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_hex_escape_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(5), 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module11)
	MR_init_entry1(lexer__finish_hex_escape_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__finish_hex_escape_7_0);
	MR_init_label5(lexer__finish_hex_escape_7_0,56,6,8,12,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'finish_hex_escape'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__finish_hex_escape_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(lexer__finish_hex_escape_7_0_i56);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_proceed();
MR_def_label(lexer__finish_hex_escape_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__finish_hex_escape_7_0_i6);
MR_def_label(lexer__finish_hex_escape_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__finish_hex_escape_7_0_i5);
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__finish_hex_escape_7_0_i8);
MR_def_label(lexer__finish_hex_escape_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__finish_hex_escape_7_0_i5);
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__finish_hex_escape_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 4057 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__finish_hex_escape_7_0_i5);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__finish_hex_escape_7_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__finish_hex_escape_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_quoted_name_6_0);
	}
MR_def_label(lexer__finish_hex_escape_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,8);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module12)
	MR_init_entry1(lexer__get_octal_escape_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_octal_escape_7_0);
	MR_init_label10(lexer__get_octal_escape_7_0,66,4,2,6,12,14,18,16,22,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_octal_escape'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_octal_escape_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__get_octal_escape_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_7_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 4126 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r5 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r5,-1)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_escape_7_0_i4);
MR_def_label(lexer__get_octal_escape_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_octal_escape_7_0_i12);
MR_def_label(lexer__get_octal_escape_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r5;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 4166 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_escape_7_0_i6);
	MR_r5 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r5;
	MR_GOTO_LAB(lexer__get_octal_escape_7_0_i12);
MR_def_label(lexer__get_octal_escape_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_7_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 4201 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4221 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_escape_7_0_i12);
MR_def_label(lexer__get_octal_escape_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,1)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_octal_escape_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i15);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_escape_7_0_i18);
MR_def_label(lexer__get_octal_escape_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__get_octal_escape_7_0_i66);
	}
MR_def_label(lexer__get_octal_escape_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__finish_octal_escape_7_0);
MR_def_label(lexer__get_octal_escape_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_7_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 4308 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__finish_octal_escape_7_0);
	}
MR_def_label(lexer__get_octal_escape_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(5), 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module13)
	MR_init_entry1(lexer__finish_octal_escape_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__finish_octal_escape_7_0);
	MR_init_label5(lexer__finish_octal_escape_7_0,56,6,8,12,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'finish_octal_escape'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__finish_octal_escape_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(lexer__finish_octal_escape_7_0_i56);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,9);
	MR_proceed();
MR_def_label(lexer__finish_octal_escape_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__finish_octal_escape_7_0_i6);
MR_def_label(lexer__finish_octal_escape_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__finish_octal_escape_7_0_i5);
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__finish_octal_escape_7_0_i8);
MR_def_label(lexer__finish_octal_escape_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__finish_octal_escape_7_0_i5);
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__finish_octal_escape_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 4397 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__finish_octal_escape_7_0_i5);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__finish_octal_escape_7_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__finish_octal_escape_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_quoted_name_6_0);
	}
MR_def_label(lexer__finish_octal_escape_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,10);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module14)
	MR_init_entry1(lexer__start_quoted_name_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__start_quoted_name_6_0);
	MR_init_label4(lexer__start_quoted_name_6_0,2,5,3,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'start_quoted_name'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__start_quoted_name_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(lexer__get_quoted_name_6_0,
		lexer__start_quoted_name_6_0_i2);
MR_def_label(lexer__start_quoted_name_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(lexer__start_quoted_name_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(lexer__start_quoted_name_6_0,
		lexer__start_quoted_name_6_0_i5);
MR_def_label(lexer__start_quoted_name_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__start_quoted_name_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(lexer__start_quoted_name_6_0_i10);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,11);
MR_def_label(lexer__start_quoted_name_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_alnum_or_underscore_1_0);

MR_BEGIN_MODULE(lexer_module15)
	MR_init_entry1(lexer__get_name_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_name_5_0);
	MR_init_label10(lexer__get_name_5_0,81,4,2,6,10,12,17,14,25,23)
	MR_init_label3(lexer__get_name_5_0,31,30,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_name_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_name_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 4524 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_name_5_0_i4);
MR_def_label(lexer__get_name_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_name_5_0_i12);
MR_def_label(lexer__get_name_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 4565 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_name_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_name_5_0_i12);
MR_def_label(lexer__get_name_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 4598 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4618 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_name_5_0_i10);
MR_def_label(lexer__get_name_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_name_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_name_5_0_i17);
MR_def_label(lexer__get_name_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_name_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i22);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__get_name_5_0_i25);
MR_def_label(lexer__get_name_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i23);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_name_5_0_i81);
MR_def_label(lexer__get_name_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 4699 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_name_5_0_i31);
MR_def_label(lexer__get_name_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_name_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,12);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_name_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__lower_upper_2_0);

MR_BEGIN_MODULE(lexer_module16)
	MR_init_entry1(lexer__get_implementation_defined_literal_rest_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_implementation_defined_literal_rest_4_0);
	MR_init_label10(lexer__get_implementation_defined_literal_rest_4_0,4,2,6,12,14,19,22,17,29,30)
	MR_init_label10(lexer__get_implementation_defined_literal_rest_4_0,31,32,33,34,35,36,37,38,39,40)
	MR_init_label9(lexer__get_implementation_defined_literal_rest_4_0,41,42,43,44,45,28,27,16,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_implementation_defined_literal_rest'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_implementation_defined_literal_rest_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_implementation_defined_literal_rest_4_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 4767 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_implementation_defined_literal_rest_4_0_i4);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i12);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_implementation_defined_literal_rest_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 4804 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i12);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_implementation_defined_literal_rest_4_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 4836 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_implementation_defined_literal_rest_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4856 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_implementation_defined_literal_rest_4_0_i12);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		lexer__get_implementation_defined_literal_rest_4_0_i19);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i17);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(lexer__get_name_5_0,
		lexer__get_implementation_defined_literal_rest_4_0_i22);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i33);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i34);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i36);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i38);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i42);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i43);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i44);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i45);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_graphic_5_0);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_implementation_defined_literal_rest_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 5083 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module17)
	MR_init_entry1(lexer__get_variable_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_variable_5_0);
	MR_init_label10(lexer__get_variable_5_0,81,4,2,6,10,12,17,14,25,23)
	MR_init_label3(lexer__get_variable_5_0,31,30,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_variable'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_variable_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_variable_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 5140 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_variable_5_0_i4);
MR_def_label(lexer__get_variable_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_variable_5_0_i12);
MR_def_label(lexer__get_variable_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 5181 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_variable_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_variable_5_0_i12);
MR_def_label(lexer__get_variable_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 5214 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5234 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_variable_5_0_i10);
MR_def_label(lexer__get_variable_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_variable_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_variable_5_0_i17);
MR_def_label(lexer__get_variable_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_variable_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i22);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__get_variable_5_0_i25);
MR_def_label(lexer__get_variable_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i23);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_variable_5_0_i81);
MR_def_label(lexer__get_variable_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 5315 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_variable_5_0_i31);
MR_def_label(lexer__get_variable_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_variable_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,13);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_variable_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module18)
	MR_init_entry1(lexer__get_char_code_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_char_code_4_0);
	MR_init_label6(lexer__get_char_code_4_0,4,2,6,12,14,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_char_code'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_char_code_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 5380 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_char_code_4_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_char_code_4_0_i4);
MR_def_label(lexer__get_char_code_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_char_code_4_0_i12);
MR_def_label(lexer__get_char_code_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 5416 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_char_code_4_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_char_code_4_0_i12);
MR_def_label(lexer__get_char_code_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 5447 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5467 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_char_code_4_0_i12);
MR_def_label(lexer__get_char_code_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(lexer__get_char_code_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,14);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_char_code_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(lexer__get_char_code_4_0_i16);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
	Character = MR_r1;
{
#line 49 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 5502 "lexer.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(lexer__get_char_code_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(1), 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module19)
	MR_init_entry1(lexer__get_binary_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_binary_2_5_0);
	MR_init_label10(lexer__get_binary_2_5_0,109,4,2,6,10,12,17,20,14,30)
	MR_init_label7(lexer__get_binary_2_5_0,29,28,36,39,38,35,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_binary_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_binary_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_binary_2_5_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 5557 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_binary_2_5_0_i4);
MR_def_label(lexer__get_binary_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_binary_2_5_0_i12);
MR_def_label(lexer__get_binary_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 5598 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_2_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_binary_2_5_0_i12);
MR_def_label(lexer__get_binary_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 5631 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5651 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_binary_2_5_0_i10);
MR_def_label(lexer__get_binary_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_binary_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_binary_2_5_0_i17);
MR_def_label(lexer__get_binary_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i35);
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_binary_2_5_0_i20);
MR_def_label(lexer__get_binary_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i38);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_binary_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i27);
	}
	if (MR_INT_NE(MR_r2,48)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_binary_2_5_0_i29);
MR_def_label(lexer__get_binary_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,49)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_binary_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_binary_2_5_0_i109);
	}
MR_def_label(lexer__get_binary_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 5748 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_binary_2_5_0_i36);
MR_def_label(lexer__get_binary_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i35);
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_binary_2_5_0_i39);
MR_def_label(lexer__get_binary_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i38);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_binary_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_binary_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_binary_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module20)
	MR_init_entry1(lexer__get_binary_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_binary_4_0);
	MR_init_label9(lexer__get_binary_4_0,4,2,6,12,14,19,18,17,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_binary'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_binary_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_4_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 5826 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_binary_4_0_i4);
MR_def_label(lexer__get_binary_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_binary_4_0_i12);
MR_def_label(lexer__get_binary_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 5863 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_4_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_binary_4_0_i12);
MR_def_label(lexer__get_binary_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_4_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 5895 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5915 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_binary_4_0_i12);
MR_def_label(lexer__get_binary_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,17);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_binary_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i16);
	}
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i19);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_binary_4_0_i18);
MR_def_label(lexer__get_binary_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,49)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i17);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
MR_def_label(lexer__get_binary_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_binary_2_5_0);
	}
MR_def_label(lexer__get_binary_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 5991 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,17);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_binary_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module21)
	MR_init_entry1(lexer__get_octal_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_octal_2_5_0);
	MR_init_label10(lexer__get_octal_2_5_0,103,4,2,6,10,12,17,20,14,30)
	MR_init_label6(lexer__get_octal_2_5_0,28,36,39,38,35,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_octal_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_octal_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_octal_2_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6046 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_2_5_0_i4);
MR_def_label(lexer__get_octal_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_octal_2_5_0_i12);
MR_def_label(lexer__get_octal_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 6087 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_2_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_octal_2_5_0_i12);
MR_def_label(lexer__get_octal_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 6120 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6140 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_2_5_0_i10);
MR_def_label(lexer__get_octal_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_octal_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_octal_2_5_0_i17);
MR_def_label(lexer__get_octal_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i35);
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_octal_2_5_0_i20);
MR_def_label(lexer__get_octal_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i38);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_octal_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_2_5_0_i30);
MR_def_label(lexer__get_octal_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i28);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_octal_2_5_0_i103);
MR_def_label(lexer__get_octal_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 6230 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_octal_2_5_0_i36);
MR_def_label(lexer__get_octal_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i35);
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_octal_2_5_0_i39);
MR_def_label(lexer__get_octal_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i38);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_octal_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_octal_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_octal_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module22)
	MR_init_entry1(lexer__get_octal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_octal_4_0);
	MR_init_label8(lexer__get_octal_4_0,4,2,6,12,14,19,17,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_octal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_octal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_4_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6308 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_4_0_i4);
MR_def_label(lexer__get_octal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_octal_4_0_i12);
MR_def_label(lexer__get_octal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 6345 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_4_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_octal_4_0_i12);
MR_def_label(lexer__get_octal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_4_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 6377 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6397 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_4_0_i12);
MR_def_label(lexer__get_octal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_octal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_4_0_i19);
MR_def_label(lexer__get_octal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i17);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_octal_2_5_0);
MR_def_label(lexer__get_octal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 6462 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_octal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module23)
	MR_init_entry1(lexer__get_hex_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_hex_2_5_0);
	MR_init_label10(lexer__get_hex_2_5_0,103,4,2,6,10,12,17,20,14,30)
	MR_init_label6(lexer__get_hex_2_5_0,28,36,39,38,35,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_hex_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_hex_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_hex_2_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6517 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_2_5_0_i4);
MR_def_label(lexer__get_hex_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_hex_2_5_0_i12);
MR_def_label(lexer__get_hex_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 6558 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_2_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_hex_2_5_0_i12);
MR_def_label(lexer__get_hex_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 6591 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6611 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_2_5_0_i10);
MR_def_label(lexer__get_hex_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_hex_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_hex_2_5_0_i17);
MR_def_label(lexer__get_hex_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i35);
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_hex_2_5_0_i20);
MR_def_label(lexer__get_hex_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i38);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_hex_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_2_5_0_i30);
MR_def_label(lexer__get_hex_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i28);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_hex_2_5_0_i103);
MR_def_label(lexer__get_hex_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 6701 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_hex_2_5_0_i36);
MR_def_label(lexer__get_hex_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i35);
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_hex_2_5_0_i39);
MR_def_label(lexer__get_hex_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i38);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_hex_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_hex_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_hex_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module24)
	MR_init_entry1(lexer__get_hex_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_hex_4_0);
	MR_init_label8(lexer__get_hex_4_0,4,2,6,12,14,19,17,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_hex'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_hex_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_4_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6779 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_4_0_i4);
MR_def_label(lexer__get_hex_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_hex_4_0_i12);
MR_def_label(lexer__get_hex_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 6816 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_4_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_hex_4_0_i12);
MR_def_label(lexer__get_hex_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_4_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 6848 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6868 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_4_0_i12);
MR_def_label(lexer__get_hex_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,19);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_hex_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_4_0_i19);
MR_def_label(lexer__get_hex_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i17);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_hex_2_5_0);
MR_def_label(lexer__get_hex_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 6933 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,19);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_hex_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_digit_1_0);

MR_BEGIN_MODULE(lexer_module25)
	MR_init_entry1(lexer__get_float_exponent_3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_float_exponent_3_5_0);
	MR_init_label10(lexer__get_float_exponent_3_5_0,105,4,2,6,10,12,17,14,31,29)
	MR_init_label4(lexer__get_float_exponent_3_5_0,37,40,36,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_float_exponent_3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_float_exponent_3_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_float_exponent_3_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6989 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_3_5_0_i4);
MR_def_label(lexer__get_float_exponent_3_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i12);
MR_def_label(lexer__get_float_exponent_3_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 7030 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i12);
MR_def_label(lexer__get_float_exponent_3_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 7063 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7083 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_3_5_0_i10);
MR_def_label(lexer__get_float_exponent_3_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_float_exponent_3_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_float_exponent_3_5_0_i17);
MR_def_label(lexer__get_float_exponent_3_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i36);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
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
#line 7136 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i40);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_float_exponent_3_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_3_5_0_i31);
MR_def_label(lexer__get_float_exponent_3_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i29);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i105);
MR_def_label(lexer__get_float_exponent_3_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 7196 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_float_exponent_3_5_0_i37);
MR_def_label(lexer__get_float_exponent_3_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i36);
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
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
#line 7232 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i40);
	MR_r2 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_3_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_3_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_3_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module26)
	MR_init_entry1(lexer__get_float_exponent_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_float_exponent_2_5_0);
	MR_init_label8(lexer__get_float_exponent_2_5_0,4,2,6,12,14,19,17,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_float_exponent_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_float_exponent_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 7294 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_2_5_0_i4);
MR_def_label(lexer__get_float_exponent_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i12);
MR_def_label(lexer__get_float_exponent_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 7332 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i12);
MR_def_label(lexer__get_float_exponent_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 7365 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7385 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_2_5_0_i12);
MR_def_label(lexer__get_float_exponent_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i16);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_2_5_0_i19);
MR_def_label(lexer__get_float_exponent_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i17);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_3_5_0);
MR_def_label(lexer__get_float_exponent_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 7451 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module27)
	MR_init_entry1(lexer__get_float_exponent_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_float_exponent_5_0);
	MR_init_label10(lexer__get_float_exponent_5_0,4,2,6,10,12,17,20,16,14,31)
	MR_init_label5(lexer__get_float_exponent_5_0,30,29,37,35,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_float_exponent'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_float_exponent_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 7504 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_5_0_i4);
MR_def_label(lexer__get_float_exponent_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_exponent_5_0_i12);
MR_def_label(lexer__get_float_exponent_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 7545 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_exponent_5_0_i12);
MR_def_label(lexer__get_float_exponent_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 7578 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7598 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_5_0_i10);
MR_def_label(lexer__get_float_exponent_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_float_exponent_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_float_exponent_5_0_i17);
MR_def_label(lexer__get_float_exponent_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i16);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
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
#line 7651 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_5_0_i20);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_float_exponent_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i28);
	}
	if (MR_INT_NE(MR_r2,43)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(lexer__get_float_exponent_5_0_i30);
MR_def_label(lexer__get_float_exponent_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,45)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r2;
MR_def_label(lexer__get_float_exponent_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_2_5_0);
MR_def_label(lexer__get_float_exponent_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_5_0_i37);
MR_def_label(lexer__get_float_exponent_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i35);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_3_5_0);
MR_def_label(lexer__get_float_exponent_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 7744 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module28)
	MR_init_entry1(lexer__get_float_decimals_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_float_decimals_5_0);
	MR_init_label10(lexer__get_float_decimals_5_0,124,4,2,6,10,12,17,14,31,29)
	MR_init_label7(lexer__get_float_decimals_5_0,37,36,35,43,46,42,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_float_decimals'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_float_decimals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_float_decimals_5_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 7799 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_decimals_5_0_i4);
MR_def_label(lexer__get_float_decimals_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i12);
MR_def_label(lexer__get_float_decimals_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 7840 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i12);
MR_def_label(lexer__get_float_decimals_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 7873 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7893 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_decimals_5_0_i10);
MR_def_label(lexer__get_float_decimals_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_float_decimals_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_float_decimals_5_0_i17);
MR_def_label(lexer__get_float_decimals_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i42);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
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
#line 7946 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i46);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_float_decimals_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_decimals_5_0_i31);
MR_def_label(lexer__get_float_decimals_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i29);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i124);
MR_def_label(lexer__get_float_decimals_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	if (MR_INT_NE(MR_r2,69)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i36);
MR_def_label(lexer__get_float_decimals_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,101)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r2;
MR_def_label(lexer__get_float_decimals_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_5_0);
MR_def_label(lexer__get_float_decimals_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 8030 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_float_decimals_5_0_i43);
MR_def_label(lexer__get_float_decimals_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i42);
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
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
#line 8066 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i46);
	MR_r2 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_decimals_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_decimals_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_decimals_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module29)
	MR_init_entry1(lexer__get_int_dot_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_int_dot_5_0);
	MR_init_label10(lexer__get_int_dot_5_0,4,2,6,10,12,17,20,19,16,14)
	MR_init_label9(lexer__get_int_dot_5_0,30,28,37,40,39,36,46,27,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_int_dot'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_int_dot_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 8129 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_int_dot_5_0_i4);
MR_def_label(lexer__get_int_dot_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_int_dot_5_0_i12);
MR_def_label(lexer__get_int_dot_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 8170 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_int_dot_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_int_dot_5_0_i12);
MR_def_label(lexer__get_int_dot_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 8203 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8223 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_int_dot_5_0_i10);
MR_def_label(lexer__get_int_dot_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_int_dot_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i14);
	}
	MR_sv(2) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = (MR_Integer) 46;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 8270 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_int_dot_5_0_i17);
MR_def_label(lexer__get_int_dot_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i16);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_int_dot_5_0_i20);
MR_def_label(lexer__get_int_dot_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_int_dot_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_int_dot_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_int_dot_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_int_dot_5_0_i30);
MR_def_label(lexer__get_int_dot_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 46;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_decimals_5_0);
	}
MR_def_label(lexer__get_int_dot_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 8360 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_int_dot_5_0_i37);
MR_def_label(lexer__get_int_dot_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i36);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_int_dot_5_0_i40);
MR_def_label(lexer__get_int_dot_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_int_dot_5_0_i46);
	}
MR_def_label(lexer__get_int_dot_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_GOTO_LAB(lexer__get_int_dot_5_0_i46);
MR_def_label(lexer__get_int_dot_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
MR_def_label(lexer__get_int_dot_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_int_dot_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
MR_def_label(lexer__get_int_dot_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module30)
	MR_init_entry1(lexer__get_number_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_number_5_0);
	MR_init_label10(lexer__get_number_5_0,132,4,2,6,10,12,17,20,14,30)
	MR_init_label10(lexer__get_number_5_0,28,34,39,38,37,45,48,47,44,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_number'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_number_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_number_5_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 8460 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_number_5_0_i4);
MR_def_label(lexer__get_number_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_number_5_0_i12);
MR_def_label(lexer__get_number_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 8501 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_number_5_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_number_5_0_i12);
MR_def_label(lexer__get_number_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 8534 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8554 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_number_5_0_i10);
MR_def_label(lexer__get_number_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
MR_def_label(lexer__get_number_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i14);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_number_5_0_i17);
MR_def_label(lexer__get_number_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i44);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_number_5_0_i20);
MR_def_label(lexer__get_number_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i47);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_number_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_number_5_0_i30);
MR_def_label(lexer__get_number_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i28);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_number_5_0_i132);
MR_def_label(lexer__get_number_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	if (MR_INT_NE(MR_r2,46)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_int_dot_5_0);
	}
MR_def_label(lexer__get_number_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,69)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(lexer__get_number_5_0_i38);
MR_def_label(lexer__get_number_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,101)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r2;
MR_def_label(lexer__get_number_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_5_0);
MR_def_label(lexer__get_number_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 8684 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_number_5_0_i45);
MR_def_label(lexer__get_number_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i44);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_number_5_0_i48);
MR_def_label(lexer__get_number_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i47);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_number_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_number_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_number_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module31)
	MR_init_entry1(lexer__get_zero_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_zero_4_0);
	MR_init_label10(lexer__get_zero_4_0,4,2,6,12,14,19,17,23,26,29)
	MR_init_label6(lexer__get_zero_4_0,32,35,41,40,39,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_zero'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_zero_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_4_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 8763 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_zero_4_0_i4);
MR_def_label(lexer__get_zero_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_zero_4_0_i12);
MR_def_label(lexer__get_zero_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 8800 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_zero_4_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_zero_4_0_i12);
MR_def_label(lexer__get_zero_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_4_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 8832 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8852 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_zero_4_0_i12);
MR_def_label(lexer__get_zero_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_zero_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_zero_4_0_i19);
MR_def_label(lexer__get_zero_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i17);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_number_5_0);
MR_def_label(lexer__get_zero_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_char_code_4_0);
MR_def_label(lexer__get_zero_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_binary_4_0);
MR_def_label(lexer__get_zero_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,111)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_octal_4_0);
MR_def_label(lexer__get_zero_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i32);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_hex_4_0);
MR_def_label(lexer__get_zero_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_int_dot_5_0);
MR_def_label(lexer__get_zero_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_zero_4_0_i40);
MR_def_label(lexer__get_zero_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_zero_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_float_exponent_5_0);
MR_def_label(lexer__get_zero_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 8986 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_zero_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module32)
	MR_init_entry1(lexer__get_token_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_token_5_0);
	MR_init_label10(lexer__get_token_5_0,4,2,6,12,14,18,19,20,21,22)
	MR_init_label10(lexer__get_token_5_0,23,24,25,26,27,28,29,30,17,16)
	MR_init_label1(lexer__get_token_5_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_token'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__get_token_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 9040 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_token_5_0_i4);
MR_def_label(lexer__get_token_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_token_5_0_i12);
MR_def_label(lexer__get_token_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 9077 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_token_5_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_token_5_0_i12);
MR_def_label(lexer__get_token_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 9109 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9129 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_token_5_0_i12);
MR_def_label(lexer__get_token_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i14);
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9160 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_token_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i15);
	}
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i18);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i19);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i20);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i21);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i22);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i23);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i24);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) 34) || ((MR_Integer) MR_r1 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i25);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r1 == (MR_Integer) 9) || ((MR_Integer) MR_r1 == (MR_Integer) 10)) || ((MR_Integer) MR_r1 == (MR_Integer) 11)) || ((MR_Integer) MR_r1 == (MR_Integer) 12)) || ((MR_Integer) MR_r1 == (MR_Integer) 13)) || ((MR_Integer) MR_r1 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i26);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r1 == (MR_Integer) 40) || ((MR_Integer) MR_r1 == (MR_Integer) 41)) || ((MR_Integer) MR_r1 == (MR_Integer) 44)) || ((MR_Integer) MR_r1 == (MR_Integer) 59)) || ((MR_Integer) MR_r1 == (MR_Integer) 91)) || ((MR_Integer) MR_r1 == (MR_Integer) 93)) || ((MR_Integer) MR_r1 == (MR_Integer) 123)) || ((MR_Integer) MR_r1 == (MR_Integer) 124)) || ((MR_Integer) MR_r1 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i27);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r1 == (MR_Integer) 49) || ((MR_Integer) MR_r1 == (MR_Integer) 50)) || ((MR_Integer) MR_r1 == (MR_Integer) 51)) || ((MR_Integer) MR_r1 == (MR_Integer) 52)) || ((MR_Integer) MR_r1 == (MR_Integer) 53)) || ((MR_Integer) MR_r1 == (MR_Integer) 54)) || ((MR_Integer) MR_r1 == (MR_Integer) 55)) || ((MR_Integer) MR_r1 == (MR_Integer) 56)) || ((MR_Integer) MR_r1 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i28);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 33) || ((MR_Integer) MR_r1 == (MR_Integer) 38)) || ((MR_Integer) MR_r1 == (MR_Integer) 42)) || ((MR_Integer) MR_r1 == (MR_Integer) 43)) || ((MR_Integer) MR_r1 == (MR_Integer) 45)) || ((MR_Integer) MR_r1 == (MR_Integer) 58)) || ((MR_Integer) MR_r1 == (MR_Integer) 60)) || ((MR_Integer) MR_r1 == (MR_Integer) 61)) || ((MR_Integer) MR_r1 == (MR_Integer) 62)) || ((MR_Integer) MR_r1 == (MR_Integer) 63)) || ((MR_Integer) MR_r1 == (MR_Integer) 64)) || ((MR_Integer) MR_r1 == (MR_Integer) 92)) || ((MR_Integer) MR_r1 == (MR_Integer) 94)) || ((MR_Integer) MR_r1 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i29);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 97) || ((MR_Integer) MR_r1 == (MR_Integer) 98)) || ((MR_Integer) MR_r1 == (MR_Integer) 99)) || ((MR_Integer) MR_r1 == (MR_Integer) 100)) || ((MR_Integer) MR_r1 == (MR_Integer) 101)) || ((MR_Integer) MR_r1 == (MR_Integer) 102)) || ((MR_Integer) MR_r1 == (MR_Integer) 103)) || ((MR_Integer) MR_r1 == (MR_Integer) 104)) || ((MR_Integer) MR_r1 == (MR_Integer) 105)) || ((MR_Integer) MR_r1 == (MR_Integer) 106)) || ((MR_Integer) MR_r1 == (MR_Integer) 107)) || ((MR_Integer) MR_r1 == (MR_Integer) 108)) || ((MR_Integer) MR_r1 == (MR_Integer) 109)) || ((MR_Integer) MR_r1 == (MR_Integer) 110)) || ((MR_Integer) MR_r1 == (MR_Integer) 111)) || ((MR_Integer) MR_r1 == (MR_Integer) 112)) || ((MR_Integer) MR_r1 == (MR_Integer) 113)) || ((MR_Integer) MR_r1 == (MR_Integer) 114)) || ((MR_Integer) MR_r1 == (MR_Integer) 115)) || ((MR_Integer) MR_r1 == (MR_Integer) 116)) || ((MR_Integer) MR_r1 == (MR_Integer) 117)) || ((MR_Integer) MR_r1 == (MR_Integer) 118)) || ((MR_Integer) MR_r1 == (MR_Integer) 119)) || ((MR_Integer) MR_r1 == (MR_Integer) 120)) || ((MR_Integer) MR_r1 == (MR_Integer) 121)) || ((MR_Integer) MR_r1 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i30);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__get_token_5_0_i17);
MR_def_label(lexer__get_token_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 65) || ((MR_Integer) MR_r1 == (MR_Integer) 66)) || ((MR_Integer) MR_r1 == (MR_Integer) 67)) || ((MR_Integer) MR_r1 == (MR_Integer) 68)) || ((MR_Integer) MR_r1 == (MR_Integer) 69)) || ((MR_Integer) MR_r1 == (MR_Integer) 70)) || ((MR_Integer) MR_r1 == (MR_Integer) 71)) || ((MR_Integer) MR_r1 == (MR_Integer) 72)) || ((MR_Integer) MR_r1 == (MR_Integer) 73)) || ((MR_Integer) MR_r1 == (MR_Integer) 74)) || ((MR_Integer) MR_r1 == (MR_Integer) 75)) || ((MR_Integer) MR_r1 == (MR_Integer) 76)) || ((MR_Integer) MR_r1 == (MR_Integer) 77)) || ((MR_Integer) MR_r1 == (MR_Integer) 78)) || ((MR_Integer) MR_r1 == (MR_Integer) 79)) || ((MR_Integer) MR_r1 == (MR_Integer) 80)) || ((MR_Integer) MR_r1 == (MR_Integer) 81)) || ((MR_Integer) MR_r1 == (MR_Integer) 82)) || ((MR_Integer) MR_r1 == (MR_Integer) 83)) || ((MR_Integer) MR_r1 == (MR_Integer) 84)) || ((MR_Integer) MR_r1 == (MR_Integer) 85)) || ((MR_Integer) MR_r1 == (MR_Integer) 86)) || ((MR_Integer) MR_r1 == (MR_Integer) 87)) || ((MR_Integer) MR_r1 == (MR_Integer) 88)) || ((MR_Integer) MR_r1 == (MR_Integer) 89)) || ((MR_Integer) MR_r1 == (MR_Integer) 90)) || ((MR_Integer) MR_r1 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(lexer__get_token_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__execute_get_token_action_8_0);
MR_def_label(lexer__get_token_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9334 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_token_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9363 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module33)
	MR_init_entry1(lexer__get_token_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_token_2_5_0);
	MR_init_label10(lexer__get_token_2_5_0,4,2,6,12,14,18,19,20,21,22)
	MR_init_label10(lexer__get_token_2_5_0,23,24,25,26,27,28,29,30,17,16)
	MR_init_label1(lexer__get_token_2_5_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_token_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_token_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 9411 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_token_2_5_0_i4);
MR_def_label(lexer__get_token_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_token_2_5_0_i12);
MR_def_label(lexer__get_token_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 9448 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_token_2_5_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i12);
MR_def_label(lexer__get_token_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 9480 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9500 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_token_2_5_0_i12);
MR_def_label(lexer__get_token_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i14);
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9531 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_token_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i15);
	}
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i19);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i20);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i21);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i22);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i23);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i24);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) 34) || ((MR_Integer) MR_r1 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i25);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r1 == (MR_Integer) 9) || ((MR_Integer) MR_r1 == (MR_Integer) 10)) || ((MR_Integer) MR_r1 == (MR_Integer) 11)) || ((MR_Integer) MR_r1 == (MR_Integer) 12)) || ((MR_Integer) MR_r1 == (MR_Integer) 13)) || ((MR_Integer) MR_r1 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i26);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r1 == (MR_Integer) 40) || ((MR_Integer) MR_r1 == (MR_Integer) 41)) || ((MR_Integer) MR_r1 == (MR_Integer) 44)) || ((MR_Integer) MR_r1 == (MR_Integer) 59)) || ((MR_Integer) MR_r1 == (MR_Integer) 91)) || ((MR_Integer) MR_r1 == (MR_Integer) 93)) || ((MR_Integer) MR_r1 == (MR_Integer) 123)) || ((MR_Integer) MR_r1 == (MR_Integer) 124)) || ((MR_Integer) MR_r1 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i27);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r1 == (MR_Integer) 49) || ((MR_Integer) MR_r1 == (MR_Integer) 50)) || ((MR_Integer) MR_r1 == (MR_Integer) 51)) || ((MR_Integer) MR_r1 == (MR_Integer) 52)) || ((MR_Integer) MR_r1 == (MR_Integer) 53)) || ((MR_Integer) MR_r1 == (MR_Integer) 54)) || ((MR_Integer) MR_r1 == (MR_Integer) 55)) || ((MR_Integer) MR_r1 == (MR_Integer) 56)) || ((MR_Integer) MR_r1 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i28);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 33) || ((MR_Integer) MR_r1 == (MR_Integer) 38)) || ((MR_Integer) MR_r1 == (MR_Integer) 42)) || ((MR_Integer) MR_r1 == (MR_Integer) 43)) || ((MR_Integer) MR_r1 == (MR_Integer) 45)) || ((MR_Integer) MR_r1 == (MR_Integer) 58)) || ((MR_Integer) MR_r1 == (MR_Integer) 60)) || ((MR_Integer) MR_r1 == (MR_Integer) 61)) || ((MR_Integer) MR_r1 == (MR_Integer) 62)) || ((MR_Integer) MR_r1 == (MR_Integer) 63)) || ((MR_Integer) MR_r1 == (MR_Integer) 64)) || ((MR_Integer) MR_r1 == (MR_Integer) 92)) || ((MR_Integer) MR_r1 == (MR_Integer) 94)) || ((MR_Integer) MR_r1 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i29);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 97) || ((MR_Integer) MR_r1 == (MR_Integer) 98)) || ((MR_Integer) MR_r1 == (MR_Integer) 99)) || ((MR_Integer) MR_r1 == (MR_Integer) 100)) || ((MR_Integer) MR_r1 == (MR_Integer) 101)) || ((MR_Integer) MR_r1 == (MR_Integer) 102)) || ((MR_Integer) MR_r1 == (MR_Integer) 103)) || ((MR_Integer) MR_r1 == (MR_Integer) 104)) || ((MR_Integer) MR_r1 == (MR_Integer) 105)) || ((MR_Integer) MR_r1 == (MR_Integer) 106)) || ((MR_Integer) MR_r1 == (MR_Integer) 107)) || ((MR_Integer) MR_r1 == (MR_Integer) 108)) || ((MR_Integer) MR_r1 == (MR_Integer) 109)) || ((MR_Integer) MR_r1 == (MR_Integer) 110)) || ((MR_Integer) MR_r1 == (MR_Integer) 111)) || ((MR_Integer) MR_r1 == (MR_Integer) 112)) || ((MR_Integer) MR_r1 == (MR_Integer) 113)) || ((MR_Integer) MR_r1 == (MR_Integer) 114)) || ((MR_Integer) MR_r1 == (MR_Integer) 115)) || ((MR_Integer) MR_r1 == (MR_Integer) 116)) || ((MR_Integer) MR_r1 == (MR_Integer) 117)) || ((MR_Integer) MR_r1 == (MR_Integer) 118)) || ((MR_Integer) MR_r1 == (MR_Integer) 119)) || ((MR_Integer) MR_r1 == (MR_Integer) 120)) || ((MR_Integer) MR_r1 == (MR_Integer) 121)) || ((MR_Integer) MR_r1 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i30);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
MR_def_label(lexer__get_token_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 65) || ((MR_Integer) MR_r1 == (MR_Integer) 66)) || ((MR_Integer) MR_r1 == (MR_Integer) 67)) || ((MR_Integer) MR_r1 == (MR_Integer) 68)) || ((MR_Integer) MR_r1 == (MR_Integer) 69)) || ((MR_Integer) MR_r1 == (MR_Integer) 70)) || ((MR_Integer) MR_r1 == (MR_Integer) 71)) || ((MR_Integer) MR_r1 == (MR_Integer) 72)) || ((MR_Integer) MR_r1 == (MR_Integer) 73)) || ((MR_Integer) MR_r1 == (MR_Integer) 74)) || ((MR_Integer) MR_r1 == (MR_Integer) 75)) || ((MR_Integer) MR_r1 == (MR_Integer) 76)) || ((MR_Integer) MR_r1 == (MR_Integer) 77)) || ((MR_Integer) MR_r1 == (MR_Integer) 78)) || ((MR_Integer) MR_r1 == (MR_Integer) 79)) || ((MR_Integer) MR_r1 == (MR_Integer) 80)) || ((MR_Integer) MR_r1 == (MR_Integer) 81)) || ((MR_Integer) MR_r1 == (MR_Integer) 82)) || ((MR_Integer) MR_r1 == (MR_Integer) 83)) || ((MR_Integer) MR_r1 == (MR_Integer) 84)) || ((MR_Integer) MR_r1 == (MR_Integer) 85)) || ((MR_Integer) MR_r1 == (MR_Integer) 86)) || ((MR_Integer) MR_r1 == (MR_Integer) 87)) || ((MR_Integer) MR_r1 == (MR_Integer) 88)) || ((MR_Integer) MR_r1 == (MR_Integer) 89)) || ((MR_Integer) MR_r1 == (MR_Integer) 90)) || ((MR_Integer) MR_r1 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(lexer__get_token_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__execute_get_token_action_8_0);
MR_def_label(lexer__get_token_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9705 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_token_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9734 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module34)
	MR_init_entry1(lexer__execute_get_token_action_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__execute_get_token_action_8_0);
	MR_init_label10(lexer__execute_get_token_action_8_0,3,6,10,9,13,12,16,15,19,18)
	MR_init_label10(lexer__execute_get_token_action_8_0,22,25,24,28,31,32,30,33,36,39)
	MR_init_label10(lexer__execute_get_token_action_8_0,40,41,42,44,45,46,47,38,37,35)
	MR_init_label4(lexer__execute_get_token_action_8_0,227,58,59,214)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_get_token_action'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__execute_get_token_action_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__execute_get_token_action_8_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9788 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(lexer__get_name_5_0,
		lexer__execute_get_token_action_8_0_i32);
MR_def_label(lexer__execute_get_token_action_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__execute_get_token_action_8_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9824 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(lexer__get_variable_5_0,
		lexer__execute_get_token_action_8_0_i32);
MR_def_label(lexer__execute_get_token_action_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,11)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i10);
MR_def_label(lexer__execute_get_token_action_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__execute_get_token_action_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,12)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i13);
MR_def_label(lexer__execute_get_token_action_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_implementation_defined_literal_rest_4_0,
		lexer__execute_get_token_action_8_0_i32);
MR_def_label(lexer__execute_get_token_action_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,6)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i15);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i16);
MR_def_label(lexer__execute_get_token_action_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_dot_4_0,
		lexer__execute_get_token_action_8_0_i32);
MR_def_label(lexer__execute_get_token_action_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,13)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i19);
MR_def_label(lexer__execute_get_token_action_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_graphic_5_0,
		lexer__execute_get_token_action_8_0_i32);
MR_def_label(lexer__execute_get_token_action_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,10)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i22);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(lexer__get_source_line_number_6_0);
MR_def_label(lexer__execute_get_token_action_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i24);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i25);
MR_def_label(lexer__execute_get_token_action_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_number_5_0,
		lexer__execute_get_token_action_8_0_i32);
MR_def_label(lexer__execute_get_token_action_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,7)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i28);
	}
	MR_np_tailcall_ent(lexer__skip_to_eol_5_0);
MR_def_label(lexer__execute_get_token_action_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,8)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i30);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i31);
MR_def_label(lexer__execute_get_token_action_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(lexer__start_quoted_name_6_0,
		lexer__execute_get_token_action_8_0_i32);
MR_def_label(lexer__execute_get_token_action_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__execute_get_token_action_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,9)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i33);
	}
	MR_np_tailcall_ent(lexer__get_slash_5_0);
MR_def_label(lexer__execute_get_token_action_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,5)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i35);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i36);
MR_def_label(lexer__execute_get_token_action_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),40)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i39);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i38);
MR_def_label(lexer__execute_get_token_action_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),41)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i40);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i38);
MR_def_label(lexer__execute_get_token_action_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),44)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i41);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i38);
MR_def_label(lexer__execute_get_token_action_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),59)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i42);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i38);
MR_def_label(lexer__execute_get_token_action_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),91)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i44);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i38);
MR_def_label(lexer__execute_get_token_action_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),93)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i45);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i38);
MR_def_label(lexer__execute_get_token_action_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),123)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i46);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i38);
MR_def_label(lexer__execute_get_token_action_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),124)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i47);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 7);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i38);
MR_def_label(lexer__execute_get_token_action_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),125)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i37);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 6);
MR_def_label(lexer__execute_get_token_action_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i214);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i214);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__execute_get_token_action_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lexer.m, handle_special_token: unknown special token", 52);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__execute_get_token_action_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i227);
	}
	MR_np_tailcall_ent(lexer__get_token_2_5_0);
MR_def_label(lexer__execute_get_token_action_8_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i58);
MR_def_label(lexer__execute_get_token_action_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_zero_4_0,
		lexer__execute_get_token_action_8_0_i59);
MR_def_label(lexer__execute_get_token_action_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(lexer__execute_get_token_action_8_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module35)
	MR_init_entry1(lexer__skip_to_eol_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__skip_to_eol_5_0);
	MR_init_label8(lexer__skip_to_eol_5_0,53,4,2,6,12,14,16,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_to_eol'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__skip_to_eol_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__skip_to_eol_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10158 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__skip_to_eol_5_0_i4);
MR_def_label(lexer__skip_to_eol_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__skip_to_eol_5_0_i12);
MR_def_label(lexer__skip_to_eol_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 10195 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__skip_to_eol_5_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__skip_to_eol_5_0_i12);
MR_def_label(lexer__skip_to_eol_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 10227 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 10247 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__skip_to_eol_5_0_i12);
MR_def_label(lexer__skip_to_eol_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i14);
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 10278 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__skip_to_eol_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i15);
	}
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_token_2_5_0);
MR_def_label(lexer__skip_to_eol_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__skip_to_eol_5_0_i53);
MR_def_label(lexer__skip_to_eol_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 10318 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module36)
	MR_init_entry1(lexer__get_slash_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_slash_5_0);
	MR_init_label10(lexer__get_slash_5_0,4,2,6,12,14,17,22,23,24,25)
	MR_init_label10(lexer__get_slash_5_0,26,27,28,29,30,31,32,33,34,35)
	MR_init_label9(lexer__get_slash_5_0,36,37,38,21,40,43,20,44,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_slash'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_slash_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10366 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_slash_5_0_i4);
MR_def_label(lexer__get_slash_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i12);
MR_def_label(lexer__get_slash_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 10403 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_slash_5_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_slash_5_0_i12);
MR_def_label(lexer__get_slash_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 10435 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 10455 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_slash_5_0_i12);
MR_def_label(lexer__get_slash_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i14);
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 10486 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_slash_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i16);
	}
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_comment_5_0);
MR_def_label(lexer__get_slash_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i22);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i23);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i24);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i25);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i26);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i33);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i34);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i36);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i38);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i21);
MR_def_label(lexer__get_slash_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i20);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_slash_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_slash_5_0_i40);
MR_def_label(lexer__get_slash_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_graphic_5_0,
		lexer__get_slash_5_0_i43);
MR_def_label(lexer__get_slash_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_slash_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1293 "io.opt"

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    /* XXX should work even if ungetc() fails */
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_char: ungetc failed");
    }
    MR_update_io(IO0, IO);
;}
#line 10696 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_slash_5_0_i44);
MR_def_label(lexer__get_slash_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_slash_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 10731 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module37)
	MR_init_entry1(lexer__get_comment_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_comment_5_0);
	MR_init_label8(lexer__get_comment_5_0,54,4,2,6,12,14,17,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_comment'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_comment_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_comment_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10779 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_comment_5_0_i4);
MR_def_label(lexer__get_comment_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_comment_5_0_i12);
MR_def_label(lexer__get_comment_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 10816 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_comment_5_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_comment_5_0_i12);
MR_def_label(lexer__get_comment_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 10848 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 10868 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_comment_5_0_i12);
MR_def_label(lexer__get_comment_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i14);
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 10899 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_comment_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i16);
	}
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_comment_2_5_0);
MR_def_label(lexer__get_comment_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_comment_5_0_i54);
MR_def_label(lexer__get_comment_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 10939 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module38)
	MR_init_entry1(lexer__get_comment_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_comment_2_5_0);
	MR_init_label9(lexer__get_comment_2_5_0,64,4,2,6,12,14,17,20,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_comment_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_comment_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_comment_2_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10987 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_comment_2_5_0_i4);
MR_def_label(lexer__get_comment_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_comment_2_5_0_i12);
MR_def_label(lexer__get_comment_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 11024 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_comment_2_5_0_i6);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_comment_2_5_0_i12);
MR_def_label(lexer__get_comment_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_5_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 11056 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 11076 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_comment_2_5_0_i12);
MR_def_label(lexer__get_comment_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i14);
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 11107 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_comment_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i16);
	}
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_token_2_5_0);
MR_def_label(lexer__get_comment_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_comment_2_5_0_i64);
MR_def_label(lexer__get_comment_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_comment_5_0);
MR_def_label(lexer__get_comment_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 11156 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__set_line_number_4_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(lexer_module39)
	MR_init_entry1(lexer__get_source_line_number_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_source_line_number_6_0);
	MR_init_label10(lexer__get_source_line_number_6_0,126,4,2,6,10,12,15,14,20,18)
	MR_init_label10(lexer__get_source_line_number_6_0,28,31,33,30,35,26,42,24,45,47)
	MR_init_label4(lexer__get_source_line_number_6_0,54,59,17,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_source_line_number'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_source_line_number_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_source_line_number_6_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1285 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 11211 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_source_line_number_6_0_i4);
MR_def_label(lexer__get_source_line_number_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_r4;
	MR_GOTO_LAB(lexer__get_source_line_number_6_0_i12);
MR_def_label(lexer__get_source_line_number_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r3;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 11253 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_source_line_number_6_0_i6);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_source_line_number_6_0_i12);
MR_def_label(lexer__get_source_line_number_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
{
#line 1056 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
    MR_update_io(IO0, IO);
};}
#line 11284 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 997 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 11304 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_source_line_number_6_0_i10);
MR_def_label(lexer__get_source_line_number_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
MR_def_label(lexer__get_source_line_number_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i14);
	}
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i15);
MR_def_label(lexer__get_source_line_number_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_source_line_number_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i17);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_source_line_number_6_0_i20);
MR_def_label(lexer__get_source_line_number_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_source_line_number_6_0_i126);
MR_def_label(lexer__get_source_line_number_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	if (MR_INT_NE(MR_r3,10)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i24);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_source_line_number_6_0_i28);
MR_def_label(lexer__get_source_line_number_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i26);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_source_line_number_6_0_i31);
MR_def_label(lexer__get_source_line_number_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i30);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_line_number_4_0,
		lexer__get_source_line_number_6_0_i33);
MR_def_label(lexer__get_source_line_number_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_token_5_0);
MR_def_label(lexer__get_source_line_number_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i35);
MR_def_label(lexer__get_source_line_number_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("invalid line number \140", 21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__get_source_line_number_6_0_i59);
MR_def_label(lexer__get_source_line_number_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i42);
MR_def_label(lexer__get_source_line_number_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_source_line_number_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i45);
MR_def_label(lexer__get_source_line_number_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Character = MR_sv(3);
	Int = (MR_Integer) 0;
{
#line 46 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 11457 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_source_line_number_6_0_i47);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__get_source_line_number_6_0_i59);
MR_def_label(lexer__get_source_line_number_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		lexer__get_source_line_number_6_0_i54);
MR_def_label(lexer__get_source_line_number_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("invalid character \140", 19);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__get_source_line_number_6_0_i59);
MR_def_label(lexer__get_source_line_number_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_source_line_number_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i63);
MR_def_label(lexer__get_source_line_number_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module40)
	MR_init_entry1(lexer__get_token_list_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_token_list_2_6_0);
	MR_init_label6(lexer__get_token_list_2_6_0,3,5,4,39,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_token_list_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__get_token_list_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,10)) {
		MR_GOTO_LAB(lexer__get_token_list_2_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(lexer__get_token_list_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(lexer__get_token_list_2_6_0_i4);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_list_2_6_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 11568 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_dot_4_0,
		lexer__get_token_list_2_6_0_i5);
MR_def_label(lexer__get_token_list_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) &MR_tfield(1, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(lexer__LCMCpr_get_token_list_2_1_6_0,
		lexer__get_token_list_2_6_0_i13);
MR_def_label(lexer__get_token_list_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 9)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 6))))) {
		MR_GOTO_LAB(lexer__get_token_list_2_6_0_i39);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(lexer__get_token_list_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(lexer__get_token_5_0,
		lexer__get_token_list_2_6_0_i11);
MR_def_label(lexer__get_token_list_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_tempr4 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr4;
	MR_r4 = (MR_Word) &MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(lexer__LCMCpr_get_token_list_2_1_6_0,
		lexer__get_token_list_2_6_0_i13);
MR_def_label(lexer__get_token_list_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module41)
	MR_init_entry1(lexer__get_token_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_token_list_3_0);
	MR_init_label1(lexer__get_token_list_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_token_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__get_token_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_list_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1414 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 11678 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_token_5_0,
		lexer__get_token_list_3_0_i2);
MR_def_label(lexer__get_token_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_token_list_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module42)
	MR_init_entry1(lexer__string_get_context_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_context_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_context'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_context_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module43)
	MR_init_entry1(lexer__string_ungetchar_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_ungetchar_3_0);
	MR_init_label1(lexer__string_ungetchar_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_ungetchar'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_ungetchar_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_r2, 2) - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_ungetchar_3_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 11760 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tfield(0, MR_r2, 1);
	MR_r6 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_ungetchar_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_r6 - (MR_Integer) 1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__string_ungetchar_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_r6;
	MR_tfield(0, MR_r1, 1) = MR_r5;
	MR_tfield(0, MR_r1, 2) = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module44)
	MR_init_entry1(lexer__grab_string_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__grab_string_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'grab_string'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__grab_string_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	MR_tempr3 = MR_r3;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr3, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__grab_string_5_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 11825 "lexer.c"
	MR_r1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module45)
	MR_init_entry1(lexer__string_get_graphic_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_graphic_7_0);
	MR_init_label7(lexer__string_get_graphic_7_0,112,4,8,113,9,30,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_graphic'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_graphic_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_graphic_7_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_graphic_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 11877 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r5 = MR_tempr2;
	MR_sv(3) = MR_tempr5;
	MR_r4 = MR_r7;
	MR_GOTO_LAB(lexer__string_get_graphic_7_0_i8);
	}
MR_def_label(lexer__string_get_graphic_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_r5 = MR_r6;
	MR_sv(3) = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_graphic_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,33)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,35)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,36)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,38)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,43)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,45)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,46)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,47)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,58)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,60)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,61)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,62)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,63)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,64)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,92)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_EQ(MR_r5,94)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i113);
	}
	if (MR_INT_NE(MR_r5,126)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i9);
	}
MR_def_label(lexer__string_get_graphic_7_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__string_get_graphic_7_0_i112);
MR_def_label(lexer__string_get_graphic_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_graphic_7_0_i30);
MR_def_label(lexer__string_get_graphic_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_graphic_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 12004 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__string_get_graphic_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_graphic_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 12042 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr4;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module46)
	MR_init_entry1(lexer__string_get_dot_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_dot_7_0);
	MR_init_label10(lexer__string_get_dot_7_0,4,8,14,12,17,10,20,21,22,23)
	MR_init_label10(lexer__string_get_dot_7_0,24,25,26,27,28,29,30,31,32,33)
	MR_init_label6(lexer__string_get_dot_7_0,34,35,36,18,39,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_dot'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_dot_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_dot_7_0
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 12095 "lexer.c"
	MR_tempr1 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_dot_7_0_i8);
	}
MR_def_label(lexer__string_get_dot_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_dot_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__string_get_dot_7_0_i14);
MR_def_label(lexer__string_get_dot_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_dot_7_0_i17);
MR_def_label(lexer__string_get_dot_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_dot_7_0_i17);
MR_def_label(lexer__string_get_dot_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_dot_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i32);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i34);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_dot_7_0_i39);
MR_def_label(lexer__string_get_dot_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_dot_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module47)
	MR_init_entry1(lexer__string_get_quoted_name_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_quoted_name_9_0);
	MR_init_label6(lexer__string_get_quoted_name_9_0,44,4,8,9,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_quoted_name'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_quoted_name_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_quoted_name_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r6;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r7 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_quoted_name_9_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 12452 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr3;
	MR_r7 = MR_tfield(0, MR_tempr5, 1);
	MR_r10 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_r9 = MR_tempr4;
	MR_r7 = MR_tempr2;
	MR_sv(2) = MR_tempr5;
	MR_r6 = MR_r9;
	MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i8);
	}
MR_def_label(lexer__string_get_quoted_name_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r9;
	MR_r7 = MR_r8;
	MR_sv(2) = MR_r6;
	MR_r6 = MR_tempr1;
	}
MR_def_label(lexer__string_get_quoted_name_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r7 != MR_r3)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i9);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_quote_9_0);
MR_def_label(lexer__string_get_quoted_name_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,92)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_escape_9_0);
MR_def_label(lexer__string_get_quoted_name_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i44);
	}
MR_def_label(lexer__string_get_quoted_name_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module48)
	MR_init_entry1(lexer__string_get_quoted_name_quote_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_quoted_name_quote_9_0);
	MR_init_label10(lexer__string_get_quoted_name_quote_9_0,4,8,9,12,15,17,13,3,31,33)
	MR_init_label2(lexer__string_get_quoted_name_quote_9_0,36,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_quoted_name_quote'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_quoted_name_quote_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r6;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r7 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_quoted_name_quote_9_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 12563 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr3;
	MR_r7 = MR_tfield(0, MR_tempr5, 1);
	MR_r10 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr2;
	MR_sv(4) = MR_tempr5;
	MR_r6 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i8);
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r9;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_r8;
	MR_sv(4) = MR_r6;
	MR_r6 = MR_tempr1;
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r3)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_quoted_name_quote_9_0_i12);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__string_get_quoted_name_quote_9_0_i15);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i13);
	}
	if (MR_INT_NE(MR_sv(1),39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i36);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r5, 0);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__string_get_quoted_name_quote_9_0_i31);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i29);
	}
	if (MR_INT_NE(MR_sv(1),39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i33);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i36);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lexer.m: unknown quote character", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module49)
	MR_init_entry1(lexer__string_get_quoted_name_escape_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_quoted_name_escape_9_0);
	MR_init_label10(lexer__string_get_quoted_name_escape_9_0,169,4,8,9,12,17,18,19,20,21)
	MR_init_label10(lexer__string_get_quoted_name_escape_9_0,22,23,24,25,26,16,15,30,33,36)
	MR_init_label3(lexer__string_get_quoted_name_escape_9_0,41,39,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_quoted_name_escape'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_quoted_name_escape_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_quoted_name_escape_9_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r6;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r7 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_quoted_name_escape_9_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 12763 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr3;
	MR_r7 = MR_tfield(0, MR_tempr5, 1);
	MR_r10 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(6) = MR_tempr2;
	MR_sv(1) = MR_tempr5;
	MR_r6 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i8);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r9;
	MR_sv(6) = MR_r8;
	MR_sv(1) = MR_r6;
	MR_r6 = MR_tempr1;
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),10)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i9);
	}
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),13)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i12);
	}
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i169);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i17);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 34;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 39;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),92)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i19);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 92;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),96)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i20);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 96;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),97)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i21);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),98)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i22);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),102)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i23);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),110)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i24);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),114)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i25);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),116)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i26);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),118)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i15);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 11;
MR_def_label(lexer__string_get_quoted_name_escape_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),120)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_hex_escape_10_0);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),117)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 4;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_tempr6 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_unicode_escape_11_0);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),85)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 8;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_tempr6 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_unicode_escape_11_0);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_quoted_name_escape_9_0_i41);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_octal_escape_10_0);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(lexer_module50)
	MR_init_entry1(lexer__string_get_unicode_escape_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_unicode_escape_11_0);
	MR_init_label10(lexer__string_get_unicode_escape_11_0,146,3,5,7,11,9,14,17,19,18)
	MR_init_label10(lexer__string_get_unicode_escape_11_0,21,22,23,24,25,16,29,15,31,32)
	MR_init_label10(lexer__string_get_unicode_escape_11_0,35,33,4,39,2,44,48,51,50,55)
	MR_init_label2(lexer__string_get_unicode_escape_11_0,43,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_unicode_escape'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_unicode_escape_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_unicode_escape_11_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		lexer__string_get_unicode_escape_11_0_i3);
MR_def_label(lexer__string_get_unicode_escape_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i2);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__string_get_unicode_escape_11_0_i5);
MR_def_label(lexer__string_get_unicode_escape_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i4);
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_unicode_escape_11_0_i7);
MR_def_label(lexer__string_get_unicode_escape_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i4);
	}
	{
	MR_Integer	EncodingInt;
#define	MR_PROC_LABEL	mercury__lexer__string_get_unicode_escape_11_0
{
#line 1420 "lexer.m"

    EncodingInt = 0;
;}
#line 13100 "lexer.c"
	MR_r3 = EncodingInt;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i14);
MR_def_label(lexer__string_get_unicode_escape_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i14);
MR_def_label(lexer__string_get_unicode_escape_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_unicode_encoding: unexpected Unicode encoding code", 58);
	MR_np_call_localret_ent(require__error_1_0,
		lexer__string_get_unicode_escape_11_0_i14);
MR_def_label(lexer__string_get_unicode_escape_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i16);
	}
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i4);
	}
	if (MR_INT_GT(MR_r1,1114111)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i4);
	}
	if (MR_INT_LT(MR_r1,55296)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i17);
	}
	if (MR_INT_LE(MR_r1,57343)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i4);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,65535)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__string_get_unicode_escape_11_0_i19);
MR_def_label(lexer__string_get_unicode_escape_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i15);
MR_def_label(lexer__string_get_unicode_escape_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) 2031616 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__string_get_unicode_escape_11_0_i21);
MR_def_label(lexer__string_get_unicode_escape_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = ((MR_Integer) 64512 & (MR_Integer) MR_sv(1));
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__string_get_unicode_escape_11_0_i22);
MR_def_label(lexer__string_get_unicode_escape_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(9) = ((MR_Integer) 1023 & (MR_Integer) MR_sv(1));
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r2 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		lexer__string_get_unicode_escape_11_0_i23);
MR_def_label(lexer__string_get_unicode_escape_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = ((MR_Integer) 56320 | (MR_Integer) MR_sv(9));
	MR_r1 = (((MR_Integer) 55296 | (MR_Integer) MR_r1) | (MR_Integer) MR_r2);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__string_get_unicode_escape_11_0_i24);
MR_def_label(lexer__string_get_unicode_escape_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__string_get_unicode_escape_11_0_i25);
MR_def_label(lexer__string_get_unicode_escape_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i15);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__encode_unicode_char_as_utf8_2_0,
		lexer__string_get_unicode_escape_11_0_i29);
MR_def_label(lexer__string_get_unicode_escape_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i4);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(list__reverse_2_0,
		lexer__string_get_unicode_escape_11_0_i31);
MR_def_label(lexer__string_get_unicode_escape_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		lexer__string_get_unicode_escape_11_0_i32);
MR_def_label(lexer__string_get_unicode_escape_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i33);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i35);
MR_def_label(lexer__string_get_unicode_escape_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i39);
MR_def_label(lexer__string_get_unicode_escape_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(8);
	MR_r2 = MR_tfield(0, MR_tempr3, 2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i43);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_unicode_escape_11_0
	Str = (MR_String) MR_sv(2);
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 13307 "lexer.c"
	MR_r1 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tfield(0, MR_tempr3, 0);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i44);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(9) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i48);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_1_0,
		lexer__string_get_unicode_escape_11_0_i51);
MR_def_label(lexer__string_get_unicode_escape_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i50);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i146);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i55);
MR_def_label(lexer__string_get_unicode_escape_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i58);
MR_def_label(lexer__string_get_unicode_escape_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module51)
	MR_init_entry1(lexer__string_get_hex_escape_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_hex_escape_10_0);
	MR_init_label7(lexer__string_get_hex_escape_10_0,47,4,8,11,9,15,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_hex_escape'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_hex_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_hex_escape_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r7;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r8 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_escape_10_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 13440 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r9 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r10 = MR_tempr3;
	MR_r8 = MR_tfield(0, MR_tempr5, 1);
	MR_r11 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r11 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i8);
	}
MR_def_label(lexer__string_get_hex_escape_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r11;
	MR_tfield(0, MR_tempr1, 1) = MR_r8;
	MR_tfield(0, MR_tempr1, 2) = MR_r10;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r9;
	MR_r2 = MR_r7;
	}
MR_def_label(lexer__string_get_hex_escape_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_escape_10_0_i11);
MR_def_label(lexer__string_get_hex_escape_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i47);
	}
MR_def_label(lexer__string_get_hex_escape_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(lexer__string_finish_hex_escape_10_0);
MR_def_label(lexer__string_get_hex_escape_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_r2 = MR_tfield(0, MR_sv(6), 0);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(lexer__string_get_hex_escape_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_tfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module52)
	MR_init_entry1(lexer__string_finish_hex_escape_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_finish_hex_escape_10_0);
	MR_init_label5(lexer__string_finish_hex_escape_10_0,56,6,8,12,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_finish_hex_escape'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_finish_hex_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i56);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_r2 = MR_tfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(lexer__string_finish_hex_escape_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__string_finish_hex_escape_10_0_i6);
MR_def_label(lexer__string_finish_hex_escape_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i5);
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_finish_hex_escape_10_0_i8);
MR_def_label(lexer__string_finish_hex_escape_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i5);
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__string_finish_hex_escape_10_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 13611 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i5);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_r2 = MR_tfield(0, MR_sv(5), 0);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__string_finish_hex_escape_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
	}
MR_def_label(lexer__string_finish_hex_escape_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,8);
	MR_r2 = MR_tfield(0, MR_sv(5), 0);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module53)
	MR_init_entry1(lexer__string_get_octal_escape_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_octal_escape_10_0);
	MR_init_label8(lexer__string_get_octal_escape_10_0,48,4,8,11,9,15,18,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_octal_escape'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_octal_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_octal_escape_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r7;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r8 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_escape_10_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 13693 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r9 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r10 = MR_tempr3;
	MR_r8 = MR_tfield(0, MR_tempr5, 1);
	MR_r11 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r11 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i8);
	}
MR_def_label(lexer__string_get_octal_escape_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r11;
	MR_tfield(0, MR_tempr1, 1) = MR_r8;
	MR_tfield(0, MR_tempr1, 2) = MR_r10;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r9;
	MR_r2 = MR_r7;
	}
MR_def_label(lexer__string_get_octal_escape_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_escape_10_0_i11);
MR_def_label(lexer__string_get_octal_escape_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i48);
	}
MR_def_label(lexer__string_get_octal_escape_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(lexer__string_finish_octal_escape_10_0);
MR_def_label(lexer__string_get_octal_escape_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_octal_escape_10_0_i18);
MR_def_label(lexer__string_get_octal_escape_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(lexer__string_finish_octal_escape_10_0);
	}
MR_def_label(lexer__string_get_octal_escape_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_tfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module54)
	MR_init_entry1(lexer__string_finish_octal_escape_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_finish_octal_escape_10_0);
	MR_init_label5(lexer__string_finish_octal_escape_10_0,56,6,8,12,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_finish_octal_escape'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_finish_octal_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i56);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,9);
	MR_r2 = MR_tfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(lexer__string_finish_octal_escape_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__string_finish_octal_escape_10_0_i6);
MR_def_label(lexer__string_finish_octal_escape_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i5);
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_finish_octal_escape_10_0_i8);
MR_def_label(lexer__string_finish_octal_escape_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i5);
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__string_finish_octal_escape_10_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 37 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 13880 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i5);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_r2 = MR_tfield(0, MR_sv(5), 0);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__string_finish_octal_escape_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
	}
MR_def_label(lexer__string_finish_octal_escape_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,10);
	MR_r2 = MR_tfield(0, MR_sv(5), 0);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module55)
	MR_init_entry1(lexer__string_start_quoted_name_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_start_quoted_name_9_0);
	MR_init_label4(lexer__string_start_quoted_name_9_0,2,5,3,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_start_quoted_name'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_start_quoted_name_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(lexer__string_get_quoted_name_9_0,
		lexer__string_start_quoted_name_9_0_i2);
MR_def_label(lexer__string_start_quoted_name_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(lexer__string_start_quoted_name_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(lexer__string_start_quoted_name_9_0,
		lexer__string_start_quoted_name_9_0_i5);
MR_def_label(lexer__string_start_quoted_name_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_start_quoted_name_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(lexer__string_start_quoted_name_9_0_i10);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,11);
MR_def_label(lexer__string_start_quoted_name_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module56)
	MR_init_entry1(lexer__string_get_name_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_name_7_0);
	MR_init_label6(lexer__string_get_name_7_0,32,4,11,10,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_name'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_name_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_name_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_name_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_name_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 14027 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_name_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__string_get_name_7_0_i11);
MR_def_label(lexer__string_get_name_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__string_get_name_7_0_i11);
MR_def_label(lexer__string_get_name_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_name_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_name_7_0_i32);
MR_def_label(lexer__string_get_name_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_name_7_0_i14);
MR_def_label(lexer__string_get_name_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_name_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 14111 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_name_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_name_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 14149 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr4;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module57)
	MR_init_entry1(lexer__string_get_implementation_defined_literal_rest_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_implementation_defined_literal_rest_7_0);
	MR_init_label10(lexer__string_get_implementation_defined_literal_rest_7_0,4,8,11,13,9,20,21,22,23,24)
	MR_init_label10(lexer__string_get_implementation_defined_literal_rest_7_0,25,26,27,28,29,30,31,32,33,34)
	MR_init_label6(lexer__string_get_implementation_defined_literal_rest_7_0,35,36,18,39,3,199)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_implementation_defined_literal_rest'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_implementation_defined_literal_rest_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_implementation_defined_literal_rest_7_0
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 14202 "lexer.c"
	MR_tempr1 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(6) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_sv(5) = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i8);
	}
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_sv(5) = MR_r4;
	}
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		lexer__string_get_implementation_defined_literal_rest_7_0_i11);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(lexer__string_get_name_7_0,
		lexer__string_get_implementation_defined_literal_rest_7_0_i13);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i199);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i32);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i34);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_implementation_defined_literal_rest_7_0_i39);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module58)
	MR_init_entry1(lexer__string_get_variable_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_variable_7_0);
	MR_init_label6(lexer__string_get_variable_7_0,32,4,11,10,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_variable'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_variable_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_variable_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_variable_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_variable_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 14558 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_variable_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__string_get_variable_7_0_i11);
MR_def_label(lexer__string_get_variable_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__string_get_variable_7_0_i11);
MR_def_label(lexer__string_get_variable_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_variable_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_variable_7_0_i32);
MR_def_label(lexer__string_get_variable_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_variable_7_0_i14);
MR_def_label(lexer__string_get_variable_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_variable_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 14642 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_variable_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_variable_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 14680 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr4;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module59)
	MR_init_entry1(lexer__string_get_char_code_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_char_code_7_0);
	MR_init_label3(lexer__string_get_char_code_7_0,4,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_char_code'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_char_code_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_char_code_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_char_code_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 14732 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_char_code_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_sv(2) = MR_tempr5;
	MR_r3 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_char_code_7_0_i8);
	}
MR_def_label(lexer__string_get_char_code_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_tempr1;
	}
MR_def_label(lexer__string_get_char_code_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__string_get_char_code_7_0
	Character = MR_r1;
{
#line 49 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 14782 "lexer.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(lexer__string_get_char_code_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,14);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module60)
	MR_init_entry1(lexer__string_get_binary_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_binary_2_7_0);
	MR_init_label10(lexer__string_get_binary_2_7_0,60,4,8,61,9,14,16,15,3,23)
	MR_init_label1(lexer__string_get_binary_2_7_0,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_binary_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_binary_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_binary_2_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_binary_2_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 14846 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r5 = MR_tempr2;
	MR_sv(3) = MR_tempr5;
	MR_r4 = MR_r7;
	MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i8);
	}
MR_def_label(lexer__string_get_binary_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_r5 = MR_r6;
	MR_sv(3) = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_binary_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,48)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i61);
	}
	if (MR_INT_NE(MR_r5,49)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i9);
	}
MR_def_label(lexer__string_get_binary_2_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i60);
MR_def_label(lexer__string_get_binary_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_binary_2_7_0_i14);
MR_def_label(lexer__string_get_binary_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_binary_2_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 14924 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_binary_2_7_0_i16);
MR_def_label(lexer__string_get_binary_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i15);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_binary_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_binary_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_binary_2_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 14976 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr4;
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_binary_2_7_0_i23);
MR_def_label(lexer__string_get_binary_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_binary_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module61)
	MR_init_entry1(lexer__string_get_binary_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_binary_7_0);
	MR_init_label6(lexer__string_get_binary_7_0,4,8,39,9,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_binary'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_binary_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_binary_7_0
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 15044 "lexer.c"
	MR_tempr1 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tempr1;
	MR_sv(2) = MR_tempr4;
	MR_r4 = MR_r7;
	MR_GOTO_LAB(lexer__string_get_binary_7_0_i8);
	}
MR_def_label(lexer__string_get_binary_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_r5 = MR_r6;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_binary_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,48)) {
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i39);
	}
	if (MR_INT_NE(MR_r5,49)) {
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i9);
	}
MR_def_label(lexer__string_get_binary_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_binary_2_7_0);
MR_def_label(lexer__string_get_binary_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_binary_7_0_i14);
MR_def_label(lexer__string_get_binary_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,17);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__string_get_binary_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,17);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module62)
	MR_init_entry1(lexer__string_get_octal_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_octal_2_7_0);
	MR_init_label10(lexer__string_get_octal_2_7_0,60,4,11,10,14,16,15,3,23,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_octal_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_octal_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_octal_2_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_2_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 15160 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_2_7_0_i11);
MR_def_label(lexer__string_get_octal_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_2_7_0_i11);
MR_def_label(lexer__string_get_octal_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i60);
MR_def_label(lexer__string_get_octal_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_octal_2_7_0_i14);
MR_def_label(lexer__string_get_octal_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_2_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15243 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_octal_2_7_0_i16);
MR_def_label(lexer__string_get_octal_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i15);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_octal_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_octal_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_2_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15295 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_octal_2_7_0_i23);
MR_def_label(lexer__string_get_octal_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_octal_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module63)
	MR_init_entry1(lexer__string_get_octal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_octal_7_0);
	MR_init_label5(lexer__string_get_octal_7_0,4,11,10,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_octal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_octal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_octal_7_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_7_0
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 15363 "lexer.c"
	MR_tempr1 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(lexer__string_get_octal_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_7_0_i11);
MR_def_label(lexer__string_get_octal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_7_0_i11);
MR_def_label(lexer__string_get_octal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_octal_2_7_0);
MR_def_label(lexer__string_get_octal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_octal_7_0_i14);
MR_def_label(lexer__string_get_octal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_octal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module64)
	MR_init_entry1(lexer__string_get_hex_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_hex_2_7_0);
	MR_init_label10(lexer__string_get_hex_2_7_0,60,4,11,10,14,16,15,3,23,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_hex_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_hex_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_hex_2_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_2_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 15485 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_2_7_0_i11);
MR_def_label(lexer__string_get_hex_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_2_7_0_i11);
MR_def_label(lexer__string_get_hex_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i60);
MR_def_label(lexer__string_get_hex_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_hex_2_7_0_i14);
MR_def_label(lexer__string_get_hex_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_2_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15568 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_hex_2_7_0_i16);
MR_def_label(lexer__string_get_hex_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i15);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_hex_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_hex_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_2_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15620 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_hex_2_7_0_i23);
MR_def_label(lexer__string_get_hex_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_hex_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module65)
	MR_init_entry1(lexer__string_get_hex_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_hex_7_0);
	MR_init_label5(lexer__string_get_hex_7_0,4,11,10,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_hex'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_hex_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_hex_7_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_7_0
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 15688 "lexer.c"
	MR_tempr1 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(lexer__string_get_hex_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_7_0_i11);
MR_def_label(lexer__string_get_hex_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_7_0_i11);
MR_def_label(lexer__string_get_hex_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_hex_2_7_0);
MR_def_label(lexer__string_get_hex_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_hex_7_0_i14);
MR_def_label(lexer__string_get_hex_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,19);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_hex_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,19);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module66)
	MR_init_entry1(lexer__string_get_float_exponent_3_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_float_exponent_3_7_0);
	MR_init_label8(lexer__string_get_float_exponent_3_7_0,62,4,11,10,14,16,3,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_float_exponent_3'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_float_exponent_3_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_float_exponent_3_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_3_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 15810 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_3_7_0_i11);
MR_def_label(lexer__string_get_float_exponent_3_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_3_7_0_i11);
MR_def_label(lexer__string_get_float_exponent_3_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i62);
MR_def_label(lexer__string_get_float_exponent_3_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_exponent_3_7_0_i14);
MR_def_label(lexer__string_get_float_exponent_3_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_3_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15894 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_3_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_tempr1;
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
#line 15919 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i16);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_3_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_3_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_3_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15971 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_3_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_tempr1;
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
#line 15996 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i24);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr4;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_3_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module67)
	MR_init_entry1(lexer__string_get_float_exponent_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_float_exponent_7_0);
	MR_init_label10(lexer__string_get_float_exponent_7_0,4,8,10,15,19,22,20,25,14,9)
	MR_init_label7(lexer__string_get_float_exponent_7_0,32,31,35,3,40,42,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_float_exponent'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_float_exponent_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 16060 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i8);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_float_exponent_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,43)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i10);
	}
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i9);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i14);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_7_0
	Str = (MR_String) MR_sv(1);
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 16128 "lexer.c"
	MR_r1 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i15);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i19);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__string_get_float_exponent_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_7_0_i22);
MR_def_label(lexer__string_get_float_exponent_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_3_7_0);
MR_def_label(lexer__string_get_float_exponent_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_exponent_7_0_i25);
MR_def_label(lexer__string_get_float_exponent_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_float_exponent_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_7_0_i32);
MR_def_label(lexer__string_get_float_exponent_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_3_7_0);
MR_def_label(lexer__string_get_float_exponent_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_exponent_7_0_i35);
MR_def_label(lexer__string_get_float_exponent_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,21);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_float_exponent_7_0_i48);
MR_def_label(lexer__string_get_float_exponent_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(lexer__grab_string_5_0,
		lexer__string_get_float_exponent_7_0_i40);
MR_def_label(lexer__string_get_float_exponent_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r1;
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
#line 16263 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i42);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_float_exponent_7_0_i48);
MR_def_label(lexer__string_get_float_exponent_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_float_exponent_7_0_i48);
MR_def_label(lexer__string_get_float_exponent_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module68)
	MR_init_entry1(lexer__string_get_float_decimals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_float_decimals_7_0);
	MR_init_label10(lexer__string_get_float_decimals_7_0,80,4,8,11,9,16,14,19,21,3)
	MR_init_label1(lexer__string_get_float_decimals_7_0,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_float_decimals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_float_decimals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_float_decimals_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_decimals_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 16341 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i8);
	}
MR_def_label(lexer__string_get_float_decimals_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_float_decimals_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_decimals_7_0_i11);
MR_def_label(lexer__string_get_float_decimals_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i80);
MR_def_label(lexer__string_get_float_decimals_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_float_decimals_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_float_decimals_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_decimals_7_0_i19);
MR_def_label(lexer__string_get_float_decimals_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_decimals_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16452 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_decimals_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_tempr1;
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
#line 16477 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i21);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_float_decimals_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_float_decimals_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_decimals_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16529 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_decimals_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_tempr1;
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
#line 16554 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i30);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr4;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_float_decimals_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module69)
	MR_init_entry1(lexer__string_get_int_dot_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_int_dot_7_0);
	MR_init_label10(lexer__string_get_int_dot_7_0,4,11,10,14,15,17,3,23,25,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_int_dot'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_int_dot_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_int_dot_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 16617 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_int_dot_7_0_i11);
MR_def_label(lexer__string_get_int_dot_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_int_dot_7_0_i11);
MR_def_label(lexer__string_get_int_dot_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_float_decimals_7_0);
MR_def_label(lexer__string_get_int_dot_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_int_dot_7_0_i14);
MR_def_label(lexer__string_get_int_dot_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_int_dot_7_0_i15);
MR_def_label(lexer__string_get_int_dot_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_int_dot_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16711 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_int_dot_7_0_i17);
MR_def_label(lexer__string_get_int_dot_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_int_dot_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_int_dot_7_0_i23);
MR_def_label(lexer__string_get_int_dot_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_int_dot_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16762 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_int_dot_7_0_i25);
MR_def_label(lexer__string_get_int_dot_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_int_dot_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module70)
	MR_init_entry1(lexer__string_get_number_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_number_7_0);
	MR_init_label10(lexer__string_get_number_7_0,89,4,8,11,9,14,19,17,22,24)
	MR_init_label5(lexer__string_get_number_7_0,23,3,33,32,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_number'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_number_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_number_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_number_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 16834 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	MR_GOTO_LAB(lexer__string_get_number_7_0_i8);
	}
MR_def_label(lexer__string_get_number_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_number_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_number_7_0_i11);
MR_def_label(lexer__string_get_number_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__string_get_number_7_0_i89);
MR_def_label(lexer__string_get_number_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_int_dot_7_0);
MR_def_label(lexer__string_get_number_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_number_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_number_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_number_7_0_i22);
MR_def_label(lexer__string_get_number_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_number_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16956 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_number_7_0_i24);
MR_def_label(lexer__string_get_number_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i23);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_number_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_number_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_number_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 17008 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_number_7_0_i33);
MR_def_label(lexer__string_get_number_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_number_7_0_i38);
MR_def_label(lexer__string_get_number_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_number_7_0_i38);
MR_def_label(lexer__string_get_number_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module71)
	MR_init_entry1(lexer__string_get_zero_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_zero_7_0);
	MR_init_label10(lexer__string_get_zero_7_0,4,8,11,9,14,17,20,23,26,31)
	MR_init_label3(lexer__string_get_zero_7_0,29,34,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_zero'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_zero_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_zero_7_0
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 17094 "lexer.c"
	MR_tempr1 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_zero_7_0_i8);
	}
MR_def_label(lexer__string_get_zero_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_zero_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_zero_7_0_i11);
MR_def_label(lexer__string_get_zero_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_number_7_0);
MR_def_label(lexer__string_get_zero_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_char_code_7_0);
MR_def_label(lexer__string_get_zero_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_binary_7_0);
MR_def_label(lexer__string_get_zero_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,111)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_octal_7_0);
MR_def_label(lexer__string_get_zero_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_hex_7_0);
MR_def_label(lexer__string_get_zero_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_int_dot_7_0);
MR_def_label(lexer__string_get_zero_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_zero_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_zero_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_zero_7_0_i34);
MR_def_label(lexer__string_get_zero_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_zero_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module72)
	MR_init_entry1(lexer__string_get_token_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_token_6_0);
	MR_init_label10(lexer__string_get_token_6_0,4,8,11,12,13,14,15,16,17,18)
	MR_init_label8(lexer__string_get_token_6_0,19,20,21,22,23,10,9,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_token'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_token_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 2);
	MR_r8 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_token_6_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 17300 "lexer.c"
	MR_r4 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr2;
	MR_r8 = MR_tfield(0, MR_tempr4, 1);
	MR_r10 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i8);
	}
MR_def_label(lexer__string_get_token_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r8;
	MR_tfield(0, MR_tempr1, 2) = MR_r9;
	}
MR_def_label(lexer__string_get_token_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,35)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i11);
	}
	MR_r5 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,36)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
	}
	MR_r5 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,37)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i13);
	}
	MR_r5 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,46)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i14);
	}
	MR_r5 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i15);
	}
	MR_r5 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,48)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i16);
	}
	MR_r5 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,96)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i17);
	}
	MR_r5 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r4 == (MR_Integer) 34) || ((MR_Integer) MR_r4 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i18);
	}
	MR_r5 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r4 == (MR_Integer) 9) || ((MR_Integer) MR_r4 == (MR_Integer) 10)) || ((MR_Integer) MR_r4 == (MR_Integer) 11)) || ((MR_Integer) MR_r4 == (MR_Integer) 12)) || ((MR_Integer) MR_r4 == (MR_Integer) 13)) || ((MR_Integer) MR_r4 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i19);
	}
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 40) || ((MR_Integer) MR_r4 == (MR_Integer) 41)) || ((MR_Integer) MR_r4 == (MR_Integer) 44)) || ((MR_Integer) MR_r4 == (MR_Integer) 59)) || ((MR_Integer) MR_r4 == (MR_Integer) 91)) || ((MR_Integer) MR_r4 == (MR_Integer) 93)) || ((MR_Integer) MR_r4 == (MR_Integer) 123)) || ((MR_Integer) MR_r4 == (MR_Integer) 124)) || ((MR_Integer) MR_r4 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i20);
	}
	MR_r5 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 49) || ((MR_Integer) MR_r4 == (MR_Integer) 50)) || ((MR_Integer) MR_r4 == (MR_Integer) 51)) || ((MR_Integer) MR_r4 == (MR_Integer) 52)) || ((MR_Integer) MR_r4 == (MR_Integer) 53)) || ((MR_Integer) MR_r4 == (MR_Integer) 54)) || ((MR_Integer) MR_r4 == (MR_Integer) 55)) || ((MR_Integer) MR_r4 == (MR_Integer) 56)) || ((MR_Integer) MR_r4 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i21);
	}
	MR_r5 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 33) || ((MR_Integer) MR_r4 == (MR_Integer) 38)) || ((MR_Integer) MR_r4 == (MR_Integer) 42)) || ((MR_Integer) MR_r4 == (MR_Integer) 43)) || ((MR_Integer) MR_r4 == (MR_Integer) 45)) || ((MR_Integer) MR_r4 == (MR_Integer) 58)) || ((MR_Integer) MR_r4 == (MR_Integer) 60)) || ((MR_Integer) MR_r4 == (MR_Integer) 61)) || ((MR_Integer) MR_r4 == (MR_Integer) 62)) || ((MR_Integer) MR_r4 == (MR_Integer) 63)) || ((MR_Integer) MR_r4 == (MR_Integer) 64)) || ((MR_Integer) MR_r4 == (MR_Integer) 92)) || ((MR_Integer) MR_r4 == (MR_Integer) 94)) || ((MR_Integer) MR_r4 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i22);
	}
	MR_r5 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 97) || ((MR_Integer) MR_r4 == (MR_Integer) 98)) || ((MR_Integer) MR_r4 == (MR_Integer) 99)) || ((MR_Integer) MR_r4 == (MR_Integer) 100)) || ((MR_Integer) MR_r4 == (MR_Integer) 101)) || ((MR_Integer) MR_r4 == (MR_Integer) 102)) || ((MR_Integer) MR_r4 == (MR_Integer) 103)) || ((MR_Integer) MR_r4 == (MR_Integer) 104)) || ((MR_Integer) MR_r4 == (MR_Integer) 105)) || ((MR_Integer) MR_r4 == (MR_Integer) 106)) || ((MR_Integer) MR_r4 == (MR_Integer) 107)) || ((MR_Integer) MR_r4 == (MR_Integer) 108)) || ((MR_Integer) MR_r4 == (MR_Integer) 109)) || ((MR_Integer) MR_r4 == (MR_Integer) 110)) || ((MR_Integer) MR_r4 == (MR_Integer) 111)) || ((MR_Integer) MR_r4 == (MR_Integer) 112)) || ((MR_Integer) MR_r4 == (MR_Integer) 113)) || ((MR_Integer) MR_r4 == (MR_Integer) 114)) || ((MR_Integer) MR_r4 == (MR_Integer) 115)) || ((MR_Integer) MR_r4 == (MR_Integer) 116)) || ((MR_Integer) MR_r4 == (MR_Integer) 117)) || ((MR_Integer) MR_r4 == (MR_Integer) 118)) || ((MR_Integer) MR_r4 == (MR_Integer) 119)) || ((MR_Integer) MR_r4 == (MR_Integer) 120)) || ((MR_Integer) MR_r4 == (MR_Integer) 121)) || ((MR_Integer) MR_r4 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i23);
	}
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
MR_def_label(lexer__string_get_token_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 65) || ((MR_Integer) MR_r4 == (MR_Integer) 66)) || ((MR_Integer) MR_r4 == (MR_Integer) 67)) || ((MR_Integer) MR_r4 == (MR_Integer) 68)) || ((MR_Integer) MR_r4 == (MR_Integer) 69)) || ((MR_Integer) MR_r4 == (MR_Integer) 70)) || ((MR_Integer) MR_r4 == (MR_Integer) 71)) || ((MR_Integer) MR_r4 == (MR_Integer) 72)) || ((MR_Integer) MR_r4 == (MR_Integer) 73)) || ((MR_Integer) MR_r4 == (MR_Integer) 74)) || ((MR_Integer) MR_r4 == (MR_Integer) 75)) || ((MR_Integer) MR_r4 == (MR_Integer) 76)) || ((MR_Integer) MR_r4 == (MR_Integer) 77)) || ((MR_Integer) MR_r4 == (MR_Integer) 78)) || ((MR_Integer) MR_r4 == (MR_Integer) 79)) || ((MR_Integer) MR_r4 == (MR_Integer) 80)) || ((MR_Integer) MR_r4 == (MR_Integer) 81)) || ((MR_Integer) MR_r4 == (MR_Integer) 82)) || ((MR_Integer) MR_r4 == (MR_Integer) 83)) || ((MR_Integer) MR_r4 == (MR_Integer) 84)) || ((MR_Integer) MR_r4 == (MR_Integer) 85)) || ((MR_Integer) MR_r4 == (MR_Integer) 86)) || ((MR_Integer) MR_r4 == (MR_Integer) 87)) || ((MR_Integer) MR_r4 == (MR_Integer) 88)) || ((MR_Integer) MR_r4 == (MR_Integer) 89)) || ((MR_Integer) MR_r4 == (MR_Integer) 90)) || ((MR_Integer) MR_r4 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i9);
	}
	MR_r5 = (MR_Integer) 2;
MR_def_label(lexer__string_get_token_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 1;
	MR_np_tailcall_ent(lexer__execute_string_get_token_action_10_0);
MR_def_label(lexer__string_get_token_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r4;
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(lexer__string_get_token_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module73)
	MR_init_entry1(lexer__string_get_token_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_token_2_6_0);
	MR_init_label10(lexer__string_get_token_2_6_0,4,8,11,12,13,14,15,16,17,18)
	MR_init_label8(lexer__string_get_token_2_6_0,19,20,21,22,23,10,9,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_token_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_token_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 2);
	MR_r8 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_token_2_6_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 17484 "lexer.c"
	MR_r4 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr2;
	MR_r8 = MR_tfield(0, MR_tempr4, 1);
	MR_r10 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i8);
	}
MR_def_label(lexer__string_get_token_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r8;
	MR_tfield(0, MR_tempr1, 2) = MR_r9;
	}
MR_def_label(lexer__string_get_token_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,35)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i11);
	}
	MR_r5 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,36)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
	}
	MR_r5 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,37)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i13);
	}
	MR_r5 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,46)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i14);
	}
	MR_r5 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i15);
	}
	MR_r5 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,48)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i16);
	}
	MR_r5 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,96)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i17);
	}
	MR_r5 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r4 == (MR_Integer) 34) || ((MR_Integer) MR_r4 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i18);
	}
	MR_r5 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r4 == (MR_Integer) 9) || ((MR_Integer) MR_r4 == (MR_Integer) 10)) || ((MR_Integer) MR_r4 == (MR_Integer) 11)) || ((MR_Integer) MR_r4 == (MR_Integer) 12)) || ((MR_Integer) MR_r4 == (MR_Integer) 13)) || ((MR_Integer) MR_r4 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i19);
	}
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 40) || ((MR_Integer) MR_r4 == (MR_Integer) 41)) || ((MR_Integer) MR_r4 == (MR_Integer) 44)) || ((MR_Integer) MR_r4 == (MR_Integer) 59)) || ((MR_Integer) MR_r4 == (MR_Integer) 91)) || ((MR_Integer) MR_r4 == (MR_Integer) 93)) || ((MR_Integer) MR_r4 == (MR_Integer) 123)) || ((MR_Integer) MR_r4 == (MR_Integer) 124)) || ((MR_Integer) MR_r4 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i20);
	}
	MR_r5 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 49) || ((MR_Integer) MR_r4 == (MR_Integer) 50)) || ((MR_Integer) MR_r4 == (MR_Integer) 51)) || ((MR_Integer) MR_r4 == (MR_Integer) 52)) || ((MR_Integer) MR_r4 == (MR_Integer) 53)) || ((MR_Integer) MR_r4 == (MR_Integer) 54)) || ((MR_Integer) MR_r4 == (MR_Integer) 55)) || ((MR_Integer) MR_r4 == (MR_Integer) 56)) || ((MR_Integer) MR_r4 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i21);
	}
	MR_r5 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 33) || ((MR_Integer) MR_r4 == (MR_Integer) 38)) || ((MR_Integer) MR_r4 == (MR_Integer) 42)) || ((MR_Integer) MR_r4 == (MR_Integer) 43)) || ((MR_Integer) MR_r4 == (MR_Integer) 45)) || ((MR_Integer) MR_r4 == (MR_Integer) 58)) || ((MR_Integer) MR_r4 == (MR_Integer) 60)) || ((MR_Integer) MR_r4 == (MR_Integer) 61)) || ((MR_Integer) MR_r4 == (MR_Integer) 62)) || ((MR_Integer) MR_r4 == (MR_Integer) 63)) || ((MR_Integer) MR_r4 == (MR_Integer) 64)) || ((MR_Integer) MR_r4 == (MR_Integer) 92)) || ((MR_Integer) MR_r4 == (MR_Integer) 94)) || ((MR_Integer) MR_r4 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i22);
	}
	MR_r5 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 97) || ((MR_Integer) MR_r4 == (MR_Integer) 98)) || ((MR_Integer) MR_r4 == (MR_Integer) 99)) || ((MR_Integer) MR_r4 == (MR_Integer) 100)) || ((MR_Integer) MR_r4 == (MR_Integer) 101)) || ((MR_Integer) MR_r4 == (MR_Integer) 102)) || ((MR_Integer) MR_r4 == (MR_Integer) 103)) || ((MR_Integer) MR_r4 == (MR_Integer) 104)) || ((MR_Integer) MR_r4 == (MR_Integer) 105)) || ((MR_Integer) MR_r4 == (MR_Integer) 106)) || ((MR_Integer) MR_r4 == (MR_Integer) 107)) || ((MR_Integer) MR_r4 == (MR_Integer) 108)) || ((MR_Integer) MR_r4 == (MR_Integer) 109)) || ((MR_Integer) MR_r4 == (MR_Integer) 110)) || ((MR_Integer) MR_r4 == (MR_Integer) 111)) || ((MR_Integer) MR_r4 == (MR_Integer) 112)) || ((MR_Integer) MR_r4 == (MR_Integer) 113)) || ((MR_Integer) MR_r4 == (MR_Integer) 114)) || ((MR_Integer) MR_r4 == (MR_Integer) 115)) || ((MR_Integer) MR_r4 == (MR_Integer) 116)) || ((MR_Integer) MR_r4 == (MR_Integer) 117)) || ((MR_Integer) MR_r4 == (MR_Integer) 118)) || ((MR_Integer) MR_r4 == (MR_Integer) 119)) || ((MR_Integer) MR_r4 == (MR_Integer) 120)) || ((MR_Integer) MR_r4 == (MR_Integer) 121)) || ((MR_Integer) MR_r4 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i23);
	}
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
MR_def_label(lexer__string_get_token_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 65) || ((MR_Integer) MR_r4 == (MR_Integer) 66)) || ((MR_Integer) MR_r4 == (MR_Integer) 67)) || ((MR_Integer) MR_r4 == (MR_Integer) 68)) || ((MR_Integer) MR_r4 == (MR_Integer) 69)) || ((MR_Integer) MR_r4 == (MR_Integer) 70)) || ((MR_Integer) MR_r4 == (MR_Integer) 71)) || ((MR_Integer) MR_r4 == (MR_Integer) 72)) || ((MR_Integer) MR_r4 == (MR_Integer) 73)) || ((MR_Integer) MR_r4 == (MR_Integer) 74)) || ((MR_Integer) MR_r4 == (MR_Integer) 75)) || ((MR_Integer) MR_r4 == (MR_Integer) 76)) || ((MR_Integer) MR_r4 == (MR_Integer) 77)) || ((MR_Integer) MR_r4 == (MR_Integer) 78)) || ((MR_Integer) MR_r4 == (MR_Integer) 79)) || ((MR_Integer) MR_r4 == (MR_Integer) 80)) || ((MR_Integer) MR_r4 == (MR_Integer) 81)) || ((MR_Integer) MR_r4 == (MR_Integer) 82)) || ((MR_Integer) MR_r4 == (MR_Integer) 83)) || ((MR_Integer) MR_r4 == (MR_Integer) 84)) || ((MR_Integer) MR_r4 == (MR_Integer) 85)) || ((MR_Integer) MR_r4 == (MR_Integer) 86)) || ((MR_Integer) MR_r4 == (MR_Integer) 87)) || ((MR_Integer) MR_r4 == (MR_Integer) 88)) || ((MR_Integer) MR_r4 == (MR_Integer) 89)) || ((MR_Integer) MR_r4 == (MR_Integer) 90)) || ((MR_Integer) MR_r4 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i9);
	}
	MR_r5 = (MR_Integer) 2;
MR_def_label(lexer__string_get_token_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(lexer__execute_string_get_token_action_10_0);
MR_def_label(lexer__string_get_token_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r4;
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(lexer__string_get_token_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module74)
	MR_init_entry1(lexer__execute_string_get_token_action_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__execute_string_get_token_action_10_0);
	MR_init_label10(lexer__execute_string_get_token_action_10_0,3,5,7,9,11,13,15,17,19,21)
	MR_init_label10(lexer__execute_string_get_token_action_10_0,23,28,29,30,31,33,34,35,36,27)
	MR_init_label4(lexer__execute_string_get_token_action_10_0,39,26,25,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_string_get_token_action'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__execute_string_get_token_action_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i3);
	}
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_name_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i5);
	}
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_variable_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,11)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(lexer__execute_string_get_token_action_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,12)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i9);
	}
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_implementation_defined_literal_rest_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,6)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i11);
	}
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_dot_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,13)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i13);
	}
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,10)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i15);
	}
	MR_r3 = MR_r7;
	MR_r4 = MR_r3;
	MR_np_tailcall_ent(lexer__string_get_source_line_number_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,4)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i17);
	}
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_number_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,7)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i19);
	}
	MR_r3 = MR_r7;
	MR_np_tailcall_ent(lexer__string_skip_to_eol_6_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,8)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(lexer__string_start_quoted_name_9_0);
	}
MR_def_label(lexer__execute_string_get_token_action_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,9)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i23);
	}
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_slash_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,5)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i25);
	}
	MR_r2 = MR_tfield(0, MR_r3, 0);
	if (MR_INT_NE(MR_r4,40)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i28);
	}
	MR_r1 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i27);
MR_def_label(lexer__execute_string_get_token_action_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,41)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i29);
	}
	MR_r1 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Word) MR_tbmkword(0, 2);
	MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i27);
MR_def_label(lexer__execute_string_get_token_action_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,44)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i30);
	}
	MR_r1 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Word) MR_tbmkword(0, 8);
	MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i27);
MR_def_label(lexer__execute_string_get_token_action_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,59)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i31);
	}
	MR_r1 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i27);
MR_def_label(lexer__execute_string_get_token_action_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,91)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i33);
	}
	MR_r1 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Word) MR_tbmkword(0, 3);
	MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i27);
MR_def_label(lexer__execute_string_get_token_action_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,93)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i34);
	}
	MR_r1 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Word) MR_tbmkword(0, 4);
	MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i27);
MR_def_label(lexer__execute_string_get_token_action_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,123)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i35);
	}
	MR_r1 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Word) MR_tbmkword(0, 5);
	MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i27);
MR_def_label(lexer__execute_string_get_token_action_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,124)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i36);
	}
	MR_r1 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Word) MR_tbmkword(0, 7);
	MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i27);
MR_def_label(lexer__execute_string_get_token_action_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,125)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i26);
	}
	MR_r1 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Word) MR_tbmkword(0, 6);
MR_def_label(lexer__execute_string_get_token_action_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i39);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i39);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(lexer__execute_string_get_token_action_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(lexer__execute_string_get_token_action_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lexer.m, handle_special_token: unknown special token", 52);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(lexer__execute_string_get_token_action_10_0_i45);
	}
	MR_r3 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_token_2_6_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_zero_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module75)
	MR_init_entry1(lexer__string_skip_to_eol_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_skip_to_eol_6_0);
	MR_init_label4(lexer__string_skip_to_eol_6_0,34,4,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_skip_to_eol'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_skip_to_eol_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(lexer__string_skip_to_eol_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r4 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_skip_to_eol_6_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 17892 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r6 = MR_tempr3;
	MR_r4 = MR_tfield(0, MR_tempr5, 1);
	MR_r7 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r7 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_r4 = MR_tempr2;
	MR_sv(1) = MR_tempr5;
	MR_r3 = MR_r6;
	MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i8);
	}
MR_def_label(lexer__string_skip_to_eol_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r7;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r6;
	MR_r4 = MR_r5;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_tempr1;
	}
MR_def_label(lexer__string_skip_to_eol_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i34);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__string_get_token_2_6_0);
MR_def_label(lexer__string_skip_to_eol_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module76)
	MR_init_entry1(lexer__string_get_slash_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_slash_7_0);
	MR_init_label7(lexer__string_get_slash_7_0,4,8,9,162,12,33,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_slash'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_slash_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_slash_7_0
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 17981 "lexer.c"
	MR_tempr1 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tempr1;
	MR_sv(2) = MR_tempr4;
	MR_r4 = MR_r7;
	MR_GOTO_LAB(lexer__string_get_slash_7_0_i8);
	}
MR_def_label(lexer__string_get_slash_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_r5 = MR_r6;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_slash_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i9);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_comment_7_0);
MR_def_label(lexer__string_get_slash_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,33)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,35)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,36)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,38)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,43)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,45)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,46)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,47)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,58)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,60)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,61)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,62)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,63)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,64)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,92)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_EQ(MR_r5,94)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i162);
	}
	if (MR_INT_NE(MR_r5,126)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i12);
	}
MR_def_label(lexer__string_get_slash_7_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_slash_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_slash_7_0_i33);
MR_def_label(lexer__string_get_slash_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__string_get_slash_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module77)
	MR_init_entry1(lexer__string_get_comment_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_comment_7_0);
	MR_init_label4(lexer__string_get_comment_7_0,35,4,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_comment'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_comment_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_comment_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_comment_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_comment_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 18153 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_comment_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r5 = MR_tempr2;
	MR_sv(2) = MR_tempr5;
	MR_r4 = MR_r7;
	MR_GOTO_LAB(lexer__string_get_comment_7_0_i8);
	}
MR_def_label(lexer__string_get_comment_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_r5 = MR_r6;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_comment_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_comment_7_0_i35);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_comment_2_7_0);
MR_def_label(lexer__string_get_comment_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module78)
	MR_init_entry1(lexer__string_get_comment_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_comment_2_7_0);
	MR_init_label6(lexer__string_get_comment_2_7_0,45,4,8,9,12,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_comment_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_comment_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_comment_2_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_comment_2_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 18247 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr5;
	MR_r4 = MR_tempr2;
	MR_r3 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i8);
	}
MR_def_label(lexer__string_get_comment_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_r6;
	MR_r3 = MR_tempr1;
	}
MR_def_label(lexer__string_get_comment_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i9);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_token_2_6_0);
MR_def_label(lexer__string_get_comment_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,42)) {
		MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i45);
	}
MR_def_label(lexer__string_get_comment_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_comment_7_0);
	}
MR_def_label(lexer__string_get_comment_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module79)
	MR_init_entry1(lexer__string_get_source_line_number_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_source_line_number_7_0);
	MR_init_label10(lexer__string_get_source_line_number_7_0,91,4,8,11,9,17,16,14,27,29)
	MR_init_label4(lexer__string_get_source_line_number_7_0,36,41,3,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_source_line_number'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_source_line_number_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_source_line_number_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_source_line_number_7_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 18366 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i8);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_source_line_number_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_source_line_number_7_0_i11);
MR_def_label(lexer__string_get_source_line_number_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i91);
MR_def_label(lexer__string_get_source_line_number_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_sv(5), 2) - (MR_Integer) MR_tempr1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_source_line_number_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 18449 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_source_line_number_7_0_i17);
MR_def_label(lexer__string_get_source_line_number_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i16);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(5), 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_token_6_0);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("invalid line number \140", 21);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_sv(3), 0);
	MR_sv(2) = MR_sv(5);
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__string_get_source_line_number_7_0_i41);
MR_def_label(lexer__string_get_source_line_number_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_source_line_number_7_0_i27);
MR_def_label(lexer__string_get_source_line_number_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__string_get_source_line_number_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Character = MR_sv(4);
	Int = (MR_Integer) 0;
{
#line 46 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 18514 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i29);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__string_get_source_line_number_7_0_i41);
MR_def_label(lexer__string_get_source_line_number_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		lexer__string_get_source_line_number_7_0_i36);
MR_def_label(lexer__string_get_source_line_number_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("invalid character \140", 19);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__string_get_source_line_number_7_0_i41);
MR_def_label(lexer__string_get_source_line_number_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_source_line_number_7_0_i45);
MR_def_label(lexer__string_get_source_line_number_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module80)
	MR_init_entry1(lexer__string_get_token_list_max_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_token_list_max_5_0);
	MR_init_label10(lexer__string_get_token_list_max_5_0,4,8,11,12,13,14,15,16,17,18)
	MR_init_label10(lexer__string_get_token_list_max_5_0,19,20,21,22,23,10,25,9,3,28)
	MR_init_label3(lexer__string_get_token_list_max_5_0,30,31,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_token_list_max'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__string_get_token_list_max_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 2);
	MR_r8 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_token_list_max_5_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 18622 "lexer.c"
	MR_r4 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr2;
	MR_r8 = MR_tfield(0, MR_tempr4, 1);
	MR_r10 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i8);
	}
MR_def_label(lexer__string_get_token_list_max_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r8;
	MR_tfield(0, MR_tempr1, 2) = MR_r9;
	}
MR_def_label(lexer__string_get_token_list_max_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,35)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i11);
	}
	MR_r5 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,36)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
	}
	MR_r5 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,37)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i13);
	}
	MR_r5 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,46)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i14);
	}
	MR_r5 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i15);
	}
	MR_r5 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,48)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i16);
	}
	MR_r5 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,96)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i17);
	}
	MR_r5 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r4 == (MR_Integer) 34) || ((MR_Integer) MR_r4 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i18);
	}
	MR_r5 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r4 == (MR_Integer) 9) || ((MR_Integer) MR_r4 == (MR_Integer) 10)) || ((MR_Integer) MR_r4 == (MR_Integer) 11)) || ((MR_Integer) MR_r4 == (MR_Integer) 12)) || ((MR_Integer) MR_r4 == (MR_Integer) 13)) || ((MR_Integer) MR_r4 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i19);
	}
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 40) || ((MR_Integer) MR_r4 == (MR_Integer) 41)) || ((MR_Integer) MR_r4 == (MR_Integer) 44)) || ((MR_Integer) MR_r4 == (MR_Integer) 59)) || ((MR_Integer) MR_r4 == (MR_Integer) 91)) || ((MR_Integer) MR_r4 == (MR_Integer) 93)) || ((MR_Integer) MR_r4 == (MR_Integer) 123)) || ((MR_Integer) MR_r4 == (MR_Integer) 124)) || ((MR_Integer) MR_r4 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i20);
	}
	MR_r5 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 49) || ((MR_Integer) MR_r4 == (MR_Integer) 50)) || ((MR_Integer) MR_r4 == (MR_Integer) 51)) || ((MR_Integer) MR_r4 == (MR_Integer) 52)) || ((MR_Integer) MR_r4 == (MR_Integer) 53)) || ((MR_Integer) MR_r4 == (MR_Integer) 54)) || ((MR_Integer) MR_r4 == (MR_Integer) 55)) || ((MR_Integer) MR_r4 == (MR_Integer) 56)) || ((MR_Integer) MR_r4 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i21);
	}
	MR_r5 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 33) || ((MR_Integer) MR_r4 == (MR_Integer) 38)) || ((MR_Integer) MR_r4 == (MR_Integer) 42)) || ((MR_Integer) MR_r4 == (MR_Integer) 43)) || ((MR_Integer) MR_r4 == (MR_Integer) 45)) || ((MR_Integer) MR_r4 == (MR_Integer) 58)) || ((MR_Integer) MR_r4 == (MR_Integer) 60)) || ((MR_Integer) MR_r4 == (MR_Integer) 61)) || ((MR_Integer) MR_r4 == (MR_Integer) 62)) || ((MR_Integer) MR_r4 == (MR_Integer) 63)) || ((MR_Integer) MR_r4 == (MR_Integer) 64)) || ((MR_Integer) MR_r4 == (MR_Integer) 92)) || ((MR_Integer) MR_r4 == (MR_Integer) 94)) || ((MR_Integer) MR_r4 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i22);
	}
	MR_r5 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 97) || ((MR_Integer) MR_r4 == (MR_Integer) 98)) || ((MR_Integer) MR_r4 == (MR_Integer) 99)) || ((MR_Integer) MR_r4 == (MR_Integer) 100)) || ((MR_Integer) MR_r4 == (MR_Integer) 101)) || ((MR_Integer) MR_r4 == (MR_Integer) 102)) || ((MR_Integer) MR_r4 == (MR_Integer) 103)) || ((MR_Integer) MR_r4 == (MR_Integer) 104)) || ((MR_Integer) MR_r4 == (MR_Integer) 105)) || ((MR_Integer) MR_r4 == (MR_Integer) 106)) || ((MR_Integer) MR_r4 == (MR_Integer) 107)) || ((MR_Integer) MR_r4 == (MR_Integer) 108)) || ((MR_Integer) MR_r4 == (MR_Integer) 109)) || ((MR_Integer) MR_r4 == (MR_Integer) 110)) || ((MR_Integer) MR_r4 == (MR_Integer) 111)) || ((MR_Integer) MR_r4 == (MR_Integer) 112)) || ((MR_Integer) MR_r4 == (MR_Integer) 113)) || ((MR_Integer) MR_r4 == (MR_Integer) 114)) || ((MR_Integer) MR_r4 == (MR_Integer) 115)) || ((MR_Integer) MR_r4 == (MR_Integer) 116)) || ((MR_Integer) MR_r4 == (MR_Integer) 117)) || ((MR_Integer) MR_r4 == (MR_Integer) 118)) || ((MR_Integer) MR_r4 == (MR_Integer) 119)) || ((MR_Integer) MR_r4 == (MR_Integer) 120)) || ((MR_Integer) MR_r4 == (MR_Integer) 121)) || ((MR_Integer) MR_r4 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i23);
	}
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
MR_def_label(lexer__string_get_token_list_max_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 65) || ((MR_Integer) MR_r4 == (MR_Integer) 66)) || ((MR_Integer) MR_r4 == (MR_Integer) 67)) || ((MR_Integer) MR_r4 == (MR_Integer) 68)) || ((MR_Integer) MR_r4 == (MR_Integer) 69)) || ((MR_Integer) MR_r4 == (MR_Integer) 70)) || ((MR_Integer) MR_r4 == (MR_Integer) 71)) || ((MR_Integer) MR_r4 == (MR_Integer) 72)) || ((MR_Integer) MR_r4 == (MR_Integer) 73)) || ((MR_Integer) MR_r4 == (MR_Integer) 74)) || ((MR_Integer) MR_r4 == (MR_Integer) 75)) || ((MR_Integer) MR_r4 == (MR_Integer) 76)) || ((MR_Integer) MR_r4 == (MR_Integer) 77)) || ((MR_Integer) MR_r4 == (MR_Integer) 78)) || ((MR_Integer) MR_r4 == (MR_Integer) 79)) || ((MR_Integer) MR_r4 == (MR_Integer) 80)) || ((MR_Integer) MR_r4 == (MR_Integer) 81)) || ((MR_Integer) MR_r4 == (MR_Integer) 82)) || ((MR_Integer) MR_r4 == (MR_Integer) 83)) || ((MR_Integer) MR_r4 == (MR_Integer) 84)) || ((MR_Integer) MR_r4 == (MR_Integer) 85)) || ((MR_Integer) MR_r4 == (MR_Integer) 86)) || ((MR_Integer) MR_r4 == (MR_Integer) 87)) || ((MR_Integer) MR_r4 == (MR_Integer) 88)) || ((MR_Integer) MR_r4 == (MR_Integer) 89)) || ((MR_Integer) MR_r4 == (MR_Integer) 90)) || ((MR_Integer) MR_r4 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i9);
	}
	MR_r5 = (MR_Integer) 2;
MR_def_label(lexer__string_get_token_list_max_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(lexer__execute_string_get_token_action_10_0,
		lexer__string_get_token_list_max_5_0_i25);
MR_def_label(lexer__string_get_token_list_max_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r8 = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_r7;
	MR_r4 = MR_r8;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i28);
MR_def_label(lexer__string_get_token_list_max_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_sv(3), 0);
	MR_r4 = MR_r7;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i28);
	}
MR_def_label(lexer__string_get_token_list_max_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 10);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_token_list_max_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,10)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_token_list_max_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 9)) || ((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 6))))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i31);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_token_list_max_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_r3 = (MR_Word) &MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(lexer__LCMCpr_string_get_token_list_max_1_5_0,
		lexer__string_get_token_list_max_5_0_i34);
MR_def_label(lexer__string_get_token_list_max_5_0,34)
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


MR_BEGIN_MODULE(lexer_module81)
	MR_init_entry1(lexer__string_get_token_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_token_list_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_token_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__string_get_token_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__lexer__string_get_token_list_4_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 18861 "lexer.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(lexer__string_get_token_list_max_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);
MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(lexer_module82)
	MR_init_entry1(lexer__token_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__token_to_string_2_0);
	MR_init_label10(lexer__token_to_string_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(lexer__token_to_string_2_0,13,14,19,24,29,34,40,39,46,45)
	MR_init_label4(lexer__token_to_string_2_0,52,51,55,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'token_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__token_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("token \140)\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("token \140}\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("token \140]\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("token \140,\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("token \140. \'", 10);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("end-of-file", 11);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("token \140|\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("token \140 (\'", 10);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("token \140(\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("token \140{\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("token \140[\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i14);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("token \'", 7);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_tailcall_ent(string__append_list_2_0);
MR_def_label(lexer__token_to_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i19);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(2, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("variable \140", 10);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_tailcall_ent(string__append_list_2_0);
MR_def_label(lexer__token_to_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i24);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("illegal token (", 15);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_tailcall_ent(fn__string__append_list_1_0);
MR_def_label(lexer__token_to_string_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i29);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	{
	MR_Float	Flt;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
	Flt = MR_word_to_float(MR_r2);
{
#line 261 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str);
};}
#line 19028 "lexer.c"
	MR_r2 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("float \140", 7);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
MR_def_label(lexer__token_to_string_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i34);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("implementation-defined \140\044", 25);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_tailcall_ent(fn__string__append_list_1_0);
MR_def_label(lexer__token_to_string_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i39);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		lexer__token_to_string_2_0_i40);
MR_def_label(lexer__token_to_string_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("integer \140", 9);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
MR_def_label(lexer__token_to_string_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i45);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		lexer__token_to_string_2_0_i46);
MR_def_label(lexer__token_to_string_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("integer \140", 9);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
MR_def_label(lexer__token_to_string_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i51);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(io__error_message_2_0,
		lexer__token_to_string_2_0_i52);
MR_def_label(lexer__token_to_string_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("I/O error: ", 11);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_3_2);
	}
MR_def_label(lexer__token_to_string_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(lexer__token_to_string_2_0_i54);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
	Character = MR_tempr1;
{
#line 49 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 19139 "lexer.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		lexer__token_to_string_2_0_i55);
MR_def_label(lexer__token_to_string_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,6);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("illegal character <<0x", 22);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
MR_def_label(lexer__token_to_string_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("string \"", 8);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module83)
	MR_init_entry1(__Unify___lexer__get_token_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___lexer__get_token_action_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lexer__get_token_action_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module84)
	MR_init_entry1(__Compare___lexer__get_token_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___lexer__get_token_action_0_0);
	MR_init_label2(__Compare___lexer__get_token_action_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lexer__get_token_action_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__get_token_action_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___lexer__get_token_action_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__get_token_action_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___lexer__get_token_action_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module85)
	MR_init_entry1(__Unify___lexer__offset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___lexer__offset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lexer__offset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module86)
	MR_init_entry1(__Compare___lexer__offset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___lexer__offset_0_0);
	MR_init_label2(__Compare___lexer__offset_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lexer__offset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__offset_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___lexer__offset_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__offset_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___lexer__offset_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module87)
	MR_init_entry1(__Unify___lexer__scanned_past_whitespace_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___lexer__scanned_past_whitespace_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lexer__scanned_past_whitespace_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module88)
	MR_init_entry1(__Compare___lexer__scanned_past_whitespace_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___lexer__scanned_past_whitespace_0_0);
	MR_init_label2(__Compare___lexer__scanned_past_whitespace_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lexer__scanned_past_whitespace_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__scanned_past_whitespace_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___lexer__scanned_past_whitespace_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__scanned_past_whitespace_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___lexer__scanned_past_whitespace_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module89)
	MR_init_entry1(__Unify___lexer__string_token_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___lexer__string_token_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lexer__string_token_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module90)
	MR_init_entry1(__Compare___lexer__string_token_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___lexer__string_token_context_0_0);
	MR_init_label2(__Compare___lexer__string_token_context_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lexer__string_token_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__string_token_context_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___lexer__string_token_context_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__string_token_context_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___lexer__string_token_context_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module91)
	MR_init_entry1(__Unify___lexer__token_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___lexer__token_0_0);
	MR_init_label10(__Unify___lexer__token_0_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label10(__Unify___lexer__token_0_0,15,16,18,20,22,24,26,28,30,85)
	MR_init_label2(__Unify___lexer__token_0_0,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lexer__token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i85);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i12);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i13);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i14);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i15);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i18);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i20);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i22);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i24);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i26);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i28);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i30);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i32);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module92)
	MR_init_entry1(__Index___lexer__token_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___lexer__token_0_0);
	MR_init_label10(__Index___lexer__token_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(__Index___lexer__token_0_0,13,14,15,16,17,18,19,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___lexer__token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i3);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i4);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i5);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i6);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i7);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i8);
	}
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i9);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i10);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i11);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i12);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i13);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i16);
	}
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i17);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i18);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i20);
	}
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i21);
	}
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(__Index___lexer__token_0_0_i22);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(lexer_module93)
	MR_init_entry1(__Compare___lexer__token_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___lexer__token_0_0);
	MR_init_label10(__Compare___lexer__token_0_0,4,5,6,93,7,10,11,12,13,14)
	MR_init_label10(__Compare___lexer__token_0_0,15,16,17,18,19,20,23,21,30,28)
	MR_init_label10(__Compare___lexer__token_0_0,37,35,44,120,42,50,48,57,55,63)
	MR_init_label8(__Compare___lexer__token_0_0,61,69,67,76,74,81,143,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lexer__token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i143);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___lexer__token_0_0,
		__Compare___lexer__token_0_0_i4);
MR_def_label(__Compare___lexer__token_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___lexer__token_0_0,
		__Compare___lexer__token_0_0_i5);
MR_def_label(__Compare___lexer__token_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i7);
	}
MR_def_label(__Compare___lexer__token_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i21);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 119 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 19988 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i120);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i28);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 119 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 20029 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i120);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i35);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 119 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 20070 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i120);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i42);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tfield(3, MR_sv(1), 1);
	if ((MR_word_to_float(MR_r3) >= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r3) <= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i143);
	}
MR_def_label(__Compare___lexer__token_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i48);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 119 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 20135 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i50);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i120);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i55);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tfield(3, MR_sv(1), 1);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i120);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i61);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tfield(3, MR_sv(1), 1);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i63);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i120);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i67);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 119 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 20220 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i120);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i74);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	Character = MR_r2;
{
#line 49 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 20256 "lexer.c"
	MR_r2 = Int;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	Character = MR_r3;
{
#line 49 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 20271 "lexer.c"
	MR_r3 = Int;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i76);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i120);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 119 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 20308 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i81);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i93);
	}
MR_def_label(__Compare___lexer__token_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module94)
	MR_init_entry1(__Unify___lexer__token_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___lexer__token_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lexer__token_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module95)
	MR_init_entry1(__Compare___lexer__token_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___lexer__token_context_0_0);
	MR_init_label2(__Compare___lexer__token_context_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lexer__token_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__token_context_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___lexer__token_context_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__token_context_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___lexer__token_context_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module96)
	MR_init_entry1(__Unify___lexer__token_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___lexer__token_list_0_0);
	MR_init_label5(__Unify___lexer__token_list_0_0,34,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lexer__token_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Unify___lexer__token_list_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___lexer__token_list_0_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___lexer__token_list_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___lexer__token_list_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___lexer__token_list_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___lexer__token_list_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___lexer__token_0_0,
		__Unify___lexer__token_list_0_0_i7);
MR_def_label(__Unify___lexer__token_list_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___lexer__token_list_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___lexer__token_list_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___lexer__token_list_0_0_i34);
MR_def_label(__Unify___lexer__token_list_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module97)
	MR_init_entry1(__Compare___lexer__token_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___lexer__token_list_0_0);
	MR_init_label10(__Compare___lexer__token_list_0_0,64,36,7,5,9,11,16,17,19,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lexer__token_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Compare___lexer__token_list_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i7);
	}
MR_def_label(__Compare___lexer__token_list_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___lexer__token_list_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___lexer__token_list_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___lexer__token_list_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___lexer__token_0_0,
		__Compare___lexer__token_list_0_0_i11);
MR_def_label(__Compare___lexer__token_list_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i69);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i19);
MR_def_label(__Compare___lexer__token_list_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(1))) {
		MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i19);
MR_def_label(__Compare___lexer__token_list_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___lexer__token_list_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Compare___lexer__token_list_0_0_i64);
MR_def_label(__Compare___lexer__token_list_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module98)
	MR_init_entry1(__Unify___lexer__unicode_encoding_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___lexer__unicode_encoding_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lexer__unicode_encoding_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module99)
	MR_init_entry1(__Compare___lexer__unicode_encoding_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___lexer__unicode_encoding_0_0);
	MR_init_label2(__Compare___lexer__unicode_encoding_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lexer__unicode_encoding_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__unicode_encoding_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___lexer__unicode_encoding_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__unicode_encoding_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___lexer__unicode_encoding_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module100)
	MR_init_entry1(fn__f_108_101_120_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_101_120_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_108_101_120_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module101)
	MR_init_entry1(lexer__LCMCpr_get_token_list_2_1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__LCMCpr_get_token_list_2_1_6_0);
	MR_init_label6(lexer__LCMCpr_get_token_list_2_1_6_0,33,3,5,4,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'LCMCpr_get_token_list_2_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__LCMCpr_get_token_list_2_1_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,10)) {
		MR_GOTO_LAB(lexer__LCMCpr_get_token_list_2_1_6_0_i3);
	}
	* (MR_Word *) (MR_r4) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(lexer__LCMCpr_get_token_list_2_1_6_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__LCMCpr_get_token_list_2_1_6_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1430 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 20706 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	}
	MR_np_call_localret_ent(lexer__get_dot_4_0,
		lexer__LCMCpr_get_token_list_2_1_6_0_i5);
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	* (MR_Word *) (MR_sv(5)) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) &MR_tfield(1, MR_tempr2, 2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__LCMCpr_get_token_list_2_1_6_0_i33);
	}
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 9)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 6))))) {
		MR_GOTO_LAB(lexer__LCMCpr_get_token_list_2_1_6_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	* (MR_Word *) (MR_r4) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(lexer__get_token_5_0,
		lexer__LCMCpr_get_token_list_2_1_6_0_i11);
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	* (MR_Word *) (MR_sv(5)) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = (MR_Word) &MR_tfield(1, MR_tempr1, 2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__LCMCpr_get_token_list_2_1_6_0_i33);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module102)
	MR_init_entry1(lexer__LCMCpr_string_get_token_list_max_1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__LCMCpr_string_get_token_list_max_1_5_0);
	MR_init_label10(lexer__LCMCpr_string_get_token_list_max_1_5_0,144,4,8,11,12,13,14,15,16,17)
	MR_init_label10(lexer__LCMCpr_string_get_token_list_max_1_5_0,18,19,20,21,22,23,10,25,9,3)
	MR_init_label3(lexer__LCMCpr_string_get_token_list_max_1_5_0,28,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'LCMCpr_string_get_token_list_max_1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__LCMCpr_string_get_token_list_max_1_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_r8 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__LCMCpr_string_get_token_list_max_1_5_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 20824 "lexer.c"
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef	MR_PROC_LABEL
	}
	MR_r9 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r10 = MR_tempr3;
	MR_r8 = MR_tfield(0, MR_tempr5, 1);
	MR_r11 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r11 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_tempr5;
	MR_r4 = MR_tempr2;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i8);
	}
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r11;
	MR_tfield(0, MR_tempr1, 1) = MR_r8;
	MR_tfield(0, MR_tempr1, 2) = MR_r10;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r9;
	}
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,35)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i11);
	}
	MR_r5 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,36)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
	}
	MR_r5 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,37)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i13);
	}
	MR_r5 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,46)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i14);
	}
	MR_r5 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i15);
	}
	MR_r5 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,48)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16);
	}
	MR_r5 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,96)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i17);
	}
	MR_r5 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r4 == (MR_Integer) 34) || ((MR_Integer) MR_r4 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i18);
	}
	MR_r5 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r4 == (MR_Integer) 9) || ((MR_Integer) MR_r4 == (MR_Integer) 10)) || ((MR_Integer) MR_r4 == (MR_Integer) 11)) || ((MR_Integer) MR_r4 == (MR_Integer) 12)) || ((MR_Integer) MR_r4 == (MR_Integer) 13)) || ((MR_Integer) MR_r4 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i19);
	}
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 40) || ((MR_Integer) MR_r4 == (MR_Integer) 41)) || ((MR_Integer) MR_r4 == (MR_Integer) 44)) || ((MR_Integer) MR_r4 == (MR_Integer) 59)) || ((MR_Integer) MR_r4 == (MR_Integer) 91)) || ((MR_Integer) MR_r4 == (MR_Integer) 93)) || ((MR_Integer) MR_r4 == (MR_Integer) 123)) || ((MR_Integer) MR_r4 == (MR_Integer) 124)) || ((MR_Integer) MR_r4 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i20);
	}
	MR_r5 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 49) || ((MR_Integer) MR_r4 == (MR_Integer) 50)) || ((MR_Integer) MR_r4 == (MR_Integer) 51)) || ((MR_Integer) MR_r4 == (MR_Integer) 52)) || ((MR_Integer) MR_r4 == (MR_Integer) 53)) || ((MR_Integer) MR_r4 == (MR_Integer) 54)) || ((MR_Integer) MR_r4 == (MR_Integer) 55)) || ((MR_Integer) MR_r4 == (MR_Integer) 56)) || ((MR_Integer) MR_r4 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i21);
	}
	MR_r5 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 33) || ((MR_Integer) MR_r4 == (MR_Integer) 38)) || ((MR_Integer) MR_r4 == (MR_Integer) 42)) || ((MR_Integer) MR_r4 == (MR_Integer) 43)) || ((MR_Integer) MR_r4 == (MR_Integer) 45)) || ((MR_Integer) MR_r4 == (MR_Integer) 58)) || ((MR_Integer) MR_r4 == (MR_Integer) 60)) || ((MR_Integer) MR_r4 == (MR_Integer) 61)) || ((MR_Integer) MR_r4 == (MR_Integer) 62)) || ((MR_Integer) MR_r4 == (MR_Integer) 63)) || ((MR_Integer) MR_r4 == (MR_Integer) 64)) || ((MR_Integer) MR_r4 == (MR_Integer) 92)) || ((MR_Integer) MR_r4 == (MR_Integer) 94)) || ((MR_Integer) MR_r4 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i22);
	}
	MR_r5 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 97) || ((MR_Integer) MR_r4 == (MR_Integer) 98)) || ((MR_Integer) MR_r4 == (MR_Integer) 99)) || ((MR_Integer) MR_r4 == (MR_Integer) 100)) || ((MR_Integer) MR_r4 == (MR_Integer) 101)) || ((MR_Integer) MR_r4 == (MR_Integer) 102)) || ((MR_Integer) MR_r4 == (MR_Integer) 103)) || ((MR_Integer) MR_r4 == (MR_Integer) 104)) || ((MR_Integer) MR_r4 == (MR_Integer) 105)) || ((MR_Integer) MR_r4 == (MR_Integer) 106)) || ((MR_Integer) MR_r4 == (MR_Integer) 107)) || ((MR_Integer) MR_r4 == (MR_Integer) 108)) || ((MR_Integer) MR_r4 == (MR_Integer) 109)) || ((MR_Integer) MR_r4 == (MR_Integer) 110)) || ((MR_Integer) MR_r4 == (MR_Integer) 111)) || ((MR_Integer) MR_r4 == (MR_Integer) 112)) || ((MR_Integer) MR_r4 == (MR_Integer) 113)) || ((MR_Integer) MR_r4 == (MR_Integer) 114)) || ((MR_Integer) MR_r4 == (MR_Integer) 115)) || ((MR_Integer) MR_r4 == (MR_Integer) 116)) || ((MR_Integer) MR_r4 == (MR_Integer) 117)) || ((MR_Integer) MR_r4 == (MR_Integer) 118)) || ((MR_Integer) MR_r4 == (MR_Integer) 119)) || ((MR_Integer) MR_r4 == (MR_Integer) 120)) || ((MR_Integer) MR_r4 == (MR_Integer) 121)) || ((MR_Integer) MR_r4 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i23);
	}
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 65) || ((MR_Integer) MR_r4 == (MR_Integer) 66)) || ((MR_Integer) MR_r4 == (MR_Integer) 67)) || ((MR_Integer) MR_r4 == (MR_Integer) 68)) || ((MR_Integer) MR_r4 == (MR_Integer) 69)) || ((MR_Integer) MR_r4 == (MR_Integer) 70)) || ((MR_Integer) MR_r4 == (MR_Integer) 71)) || ((MR_Integer) MR_r4 == (MR_Integer) 72)) || ((MR_Integer) MR_r4 == (MR_Integer) 73)) || ((MR_Integer) MR_r4 == (MR_Integer) 74)) || ((MR_Integer) MR_r4 == (MR_Integer) 75)) || ((MR_Integer) MR_r4 == (MR_Integer) 76)) || ((MR_Integer) MR_r4 == (MR_Integer) 77)) || ((MR_Integer) MR_r4 == (MR_Integer) 78)) || ((MR_Integer) MR_r4 == (MR_Integer) 79)) || ((MR_Integer) MR_r4 == (MR_Integer) 80)) || ((MR_Integer) MR_r4 == (MR_Integer) 81)) || ((MR_Integer) MR_r4 == (MR_Integer) 82)) || ((MR_Integer) MR_r4 == (MR_Integer) 83)) || ((MR_Integer) MR_r4 == (MR_Integer) 84)) || ((MR_Integer) MR_r4 == (MR_Integer) 85)) || ((MR_Integer) MR_r4 == (MR_Integer) 86)) || ((MR_Integer) MR_r4 == (MR_Integer) 87)) || ((MR_Integer) MR_r4 == (MR_Integer) 88)) || ((MR_Integer) MR_r4 == (MR_Integer) 89)) || ((MR_Integer) MR_r4 == (MR_Integer) 90)) || ((MR_Integer) MR_r4 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i9);
	}
	MR_r5 = (MR_Integer) 2;
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(lexer__execute_string_get_token_action_10_0,
		lexer__LCMCpr_string_get_token_list_max_1_5_0_i25);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r8 = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_r7;
	MR_r4 = MR_r8;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i28);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_sv(3), 0);
	MR_r4 = MR_r7;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i28);
	}
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 10);
	MR_r5 = MR_tfield(0, MR_r4, 0);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,10)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i30);
	}
	* (MR_Word *) (MR_sv(4)) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 9)) || ((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 6))))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	* (MR_Word *) (MR_sv(4)) = MR_tempr1;
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	* (MR_Word *) (MR_sv(4)) = MR_tempr1;
	MR_r3 = (MR_Word) &MR_tfield(1, MR_tempr1, 2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i144);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__lexer_maybe_bunch_0(void)
{
	lexer_module0();
	lexer_module1();
	lexer_module2();
	lexer_module3();
	lexer_module4();
	lexer_module5();
	lexer_module6();
	lexer_module7();
	lexer_module8();
	lexer_module9();
	lexer_module10();
	lexer_module11();
	lexer_module12();
	lexer_module13();
	lexer_module14();
	lexer_module15();
	lexer_module16();
	lexer_module17();
	lexer_module18();
	lexer_module19();
	lexer_module20();
	lexer_module21();
	lexer_module22();
	lexer_module23();
	lexer_module24();
	lexer_module25();
	lexer_module26();
	lexer_module27();
	lexer_module28();
	lexer_module29();
	lexer_module30();
	lexer_module31();
	lexer_module32();
	lexer_module33();
	lexer_module34();
	lexer_module35();
	lexer_module36();
	lexer_module37();
	lexer_module38();
	lexer_module39();
}

static void mercury__lexer_maybe_bunch_1(void)
{
	lexer_module40();
	lexer_module41();
	lexer_module42();
	lexer_module43();
	lexer_module44();
	lexer_module45();
	lexer_module46();
	lexer_module47();
	lexer_module48();
	lexer_module49();
	lexer_module50();
	lexer_module51();
	lexer_module52();
	lexer_module53();
	lexer_module54();
	lexer_module55();
	lexer_module56();
	lexer_module57();
	lexer_module58();
	lexer_module59();
	lexer_module60();
	lexer_module61();
	lexer_module62();
	lexer_module63();
	lexer_module64();
	lexer_module65();
	lexer_module66();
	lexer_module67();
	lexer_module68();
	lexer_module69();
	lexer_module70();
	lexer_module71();
	lexer_module72();
	lexer_module73();
	lexer_module74();
	lexer_module75();
	lexer_module76();
	lexer_module77();
	lexer_module78();
	lexer_module79();
}

static void mercury__lexer_maybe_bunch_2(void)
{
	lexer_module80();
	lexer_module81();
	lexer_module82();
	lexer_module83();
	lexer_module84();
	lexer_module85();
	lexer_module86();
	lexer_module87();
	lexer_module88();
	lexer_module89();
	lexer_module90();
	lexer_module91();
	lexer_module92();
	lexer_module93();
	lexer_module94();
	lexer_module95();
	lexer_module96();
	lexer_module97();
	lexer_module98();
	lexer_module99();
	lexer_module100();
	lexer_module101();
	lexer_module102();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__lexer__init(void);
void mercury__lexer__init_type_tables(void);
void mercury__lexer__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__lexer__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__lexer__init_complexity_procs(void);
#endif

void mercury__lexer__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__lexer_maybe_bunch_0();
	mercury__lexer_maybe_bunch_1();
	mercury__lexer_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_get_token_action_0,
		lexer__get_token_action_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_offset_0,
		lexer__offset_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_scanned_past_whitespace_0,
		lexer__scanned_past_whitespace_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_string_token_context_0,
		lexer__string_token_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_token_0,
		lexer__token_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_token_context_0,
		lexer__token_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_token_list_0,
		lexer__token_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_unicode_encoding_0,
		lexer__unicode_encoding_0_0);
	mercury__lexer__init_debugger();
}

void mercury__lexer__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_get_token_action_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_offset_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_scanned_past_whitespace_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_string_token_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_token_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_token_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_token_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_unicode_encoding_0);
	}
}


void mercury__lexer__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__lexer__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__lexer);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__lexer__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
