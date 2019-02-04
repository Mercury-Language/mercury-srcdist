/*
** Automatically generated from `lexer.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__lexer__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "lexer.c"
#include "lexer.mh"

#line 27 "lexer.c"
#line 534 "io.int"
#include "io.mh"

#line 31 "lexer.c"
#line 542 "io.int"
#include "string.mh"

#line 35 "lexer.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "lexer.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "lexer.c"
#line 31 "array.int2"
#include "array.mh"

#line 47 "lexer.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "lexer.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 55 "lexer.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 59 "lexer.c"
#line 20 "store.opt"
#include "store.mh"

#line 63 "lexer.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 67 "lexer.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "lexer.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "lexer.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 79 "lexer.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 83 "lexer.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 87 "lexer.c"
#line 4 "char.opt"
#include "char.mh"

#line 91 "lexer.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "lexer.c"
#line 150 "io.opt"
#include "dir.mh"

#line 99 "lexer.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 103 "lexer.c"
#line 3 "list.opt"
#include "list.mh"

#line 107 "lexer.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 111 "lexer.c"
#line 112 "lexer.c"
#ifndef LEXER_DECL_GUARD
#define LEXER_DECL_GUARD

#line 116 "lexer.c"
#line 117 "lexer.c"

#endif
#line 120 "lexer.c"

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
	MR_Integer f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_6 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_5 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_0[];

MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_1[];

MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_2[];

MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_3[];

MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_4[];

MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_lexer__type_ctor_info_unicode_encoding_0,
	mercury_data_lexer__type_ctor_info_token_list_0,
	mercury_data_lexer__type_ctor_info_token_context_0,
	mercury_data_lexer__type_ctor_info_token_0,
	mercury_data_lexer__type_ctor_info_string_token_context_0,
	mercury_data_lexer__type_ctor_info_scanned_past_whitespace_0,
	mercury_data_lexer__type_ctor_info_offset_0,
	mercury_data_lexer__type_ctor_info_get_token_action_0;
MR_decl_label8(lexer__LCMCpr_get_token_list_2_1_6_0, 15,3,4,18,7,9,10,11)
MR_decl_label8(lexer__LCMCpr_string_get_token_list_max_1_5_0, 39,4,8,11,9,3,22,16)
MR_decl_label3(lexer__LCMCpr_string_get_token_list_max_1_5_0, 25,19,21)
MR_decl_label8(lexer__encode_unicode_char_as_utf8_2_0, 60,4,3,7,8,9,6,13)
MR_decl_label8(lexer__encode_unicode_char_as_utf8_2_0, 14,15,16,17,12,21,22,23)
MR_decl_label5(lexer__encode_unicode_char_as_utf8_2_0, 24,25,26,27,1)
MR_decl_label8(lexer__execute_get_token_action_8_0, 117,118,126,10,127,13,122,16)
MR_decl_label8(lexer__execute_get_token_action_8_0, 128,19,22,120,25,123,124,31)
MR_decl_label8(lexer__execute_get_token_action_8_0, 32,125,121,36,39,40,41,42)
MR_decl_label8(lexer__execute_get_token_action_8_0, 44,45,46,47,38,37,116,119)
MR_decl_label3(lexer__execute_get_token_action_8_0, 59,60,115)
MR_decl_label8(lexer__execute_string_get_token_action_10_0, 3,5,7,9,11,13,15,17)
MR_decl_label8(lexer__execute_string_get_token_action_10_0, 19,21,23,25,28,29,30,31)
MR_decl_label8(lexer__execute_string_get_token_action_10_0, 33,34,35,36,27,39,26,45)
MR_decl_label1(lexer__execute_string_get_token_action_10_0, 47)
MR_decl_label4(lexer__finish_hex_escape_7_0, 57,9,13,6)
MR_decl_label4(lexer__finish_octal_escape_7_0, 57,9,13,6)
MR_decl_label8(lexer__get_binary_4_0, 4,2,6,12,21,20,19,14)
MR_decl_label1(lexer__get_binary_4_0, 16)
MR_decl_label8(lexer__get_binary_2_5_0, 112,4,2,6,12,32,31,30)
MR_decl_label6(lexer__get_binary_2_5_0, 41,14,20,19,16,27)
MR_decl_label6(lexer__get_char_code_4_0, 4,2,6,12,14,16)
MR_decl_label8(lexer__get_comment_5_0, 57,4,2,6,12,19,14,16)
MR_decl_label8(lexer__get_comment_2_5_0, 67,4,2,6,12,19,22,14)
MR_decl_label1(lexer__get_comment_2_5_0, 16)
MR_decl_label8(lexer__get_dot_4_0, 4,2,6,12,23,20,19,28)
MR_decl_label8(lexer__get_dot_4_0, 29,30,31,32,33,34,35,36)
MR_decl_label8(lexer__get_dot_4_0, 37,38,39,40,41,42,43,44)
MR_decl_label4(lexer__get_dot_4_0, 27,26,14,15)
MR_decl_label8(lexer__get_float_decimals_5_0, 122,4,2,6,12,33,31,39)
MR_decl_label7(lexer__get_float_decimals_5_0, 38,37,14,22,20,16,28)
MR_decl_label8(lexer__get_float_exponent_5_0, 4,2,6,12,33,32,31,39)
MR_decl_label5(lexer__get_float_exponent_5_0, 37,14,20,16,28)
MR_decl_label8(lexer__get_float_exponent_2_5_0, 4,2,6,12,21,19,14,16)
MR_decl_label8(lexer__get_float_exponent_3_5_0, 103,4,2,6,12,33,31,14)
MR_decl_label4(lexer__get_float_exponent_3_5_0, 22,20,16,28)
MR_decl_label8(lexer__get_graphic_5_0, 197,4,2,6,12,27,28,29)
MR_decl_label8(lexer__get_graphic_5_0, 30,31,32,33,34,35,36,37)
MR_decl_label8(lexer__get_graphic_5_0, 38,39,40,41,42,43,26,25)
MR_decl_label4(lexer__get_graphic_5_0, 14,18,16,22)
MR_decl_label8(lexer__get_hex_4_0, 4,2,6,12,21,19,14,16)
MR_decl_label8(lexer__get_hex_2_5_0, 106,4,2,6,12,32,30,41)
MR_decl_label5(lexer__get_hex_2_5_0, 14,20,19,16,27)
MR_decl_label8(lexer__get_hex_escape_7_0, 69,4,2,6,12,20,18,24)
MR_decl_label2(lexer__get_hex_escape_7_0, 14,15)
MR_decl_label8(lexer__get_implementation_defined_literal_rest_4_0, 4,2,6,12,21,24,19,31)
MR_decl_label8(lexer__get_implementation_defined_literal_rest_4_0, 32,33,34,35,36,37,38,39)
MR_decl_label8(lexer__get_implementation_defined_literal_rest_4_0, 40,41,42,43,44,45,46,47)
MR_decl_label5(lexer__get_implementation_defined_literal_rest_4_0, 30,29,14,16,13)
MR_decl_label8(lexer__get_int_dot_5_0, 4,2,6,12,32,30,42,41)
MR_decl_label8(lexer__get_int_dot_5_0, 38,48,14,20,19,16,27,13)
MR_decl_label8(lexer__get_name_5_0, 79,4,2,6,12,27,25,14)
MR_decl_label3(lexer__get_name_5_0, 18,16,22)
MR_decl_label8(lexer__get_number_5_0, 135,4,2,6,12,32,30,36)
MR_decl_label8(lexer__get_number_5_0, 41,40,39,50,14,20,19,16)
MR_decl_label1(lexer__get_number_5_0, 27)
MR_decl_label8(lexer__get_octal_4_0, 4,2,6,12,21,19,14,16)
MR_decl_label8(lexer__get_octal_2_5_0, 106,4,2,6,12,32,30,41)
MR_decl_label5(lexer__get_octal_2_5_0, 14,20,19,16,27)
MR_decl_label8(lexer__get_octal_escape_7_0, 69,4,2,6,12,20,18,24)
MR_decl_label2(lexer__get_octal_escape_7_0, 14,15)
MR_decl_label8(lexer__get_quoted_name_6_0, 66,4,2,6,12,18,20,14)
MR_decl_label1(lexer__get_quoted_name_6_0, 15)
MR_decl_label8(lexer__get_quoted_name_escape_6_0, 191,4,2,6,12,18,21,26)
MR_decl_label8(lexer__get_quoted_name_escape_6_0, 27,28,29,30,31,32,33,34)
MR_decl_label8(lexer__get_quoted_name_escape_6_0, 35,25,24,39,42,45,50,49)
MR_decl_label2(lexer__get_quoted_name_escape_6_0, 14,15)
MR_decl_label8(lexer__get_quoted_name_quote_6_0, 4,2,6,12,33,40,14,19)
MR_decl_label3(lexer__get_quoted_name_quote_6_0, 22,16,30)
MR_decl_label8(lexer__get_slash_5_0, 4,2,6,12,19,24,25,26)
MR_decl_label8(lexer__get_slash_5_0, 27,28,29,30,31,32,33,34)
MR_decl_label8(lexer__get_slash_5_0, 35,36,37,38,39,40,23,42)
MR_decl_label5(lexer__get_slash_5_0, 45,22,46,14,16)
MR_decl_label8(lexer__get_source_line_number_6_0, 127,4,2,6,10,12,23,21)
MR_decl_label8(lexer__get_source_line_number_6_0, 34,36,33,38,30,44,27,47)
MR_decl_label7(lexer__get_source_line_number_6_0, 49,56,60,14,15,17,18)
MR_decl_label7(lexer__get_token_5_0, 4,2,6,12,18,14,15)
MR_decl_label7(lexer__get_token_2_5_0, 4,2,6,12,18,14,15)
MR_decl_label1(lexer__get_token_list_3_0, 2)
MR_decl_label8(lexer__get_token_list_2_6_0, 15,24,4,18,7,9,25,11)
MR_decl_label1(lexer__get_token_list_2_6_0, 14)
MR_decl_label8(lexer__get_unicode_escape_8_0, 171,3,8,12,10,15,18,20)
MR_decl_label8(lexer__get_unicode_escape_8_0, 19,22,23,24,25,26,17,30)
MR_decl_label8(lexer__get_unicode_escape_8_0, 16,32,35,36,5,2,43,41)
MR_decl_label6(lexer__get_unicode_escape_8_0, 45,51,59,58,53,54)
MR_decl_label8(lexer__get_variable_5_0, 79,4,2,6,12,27,25,14)
MR_decl_label3(lexer__get_variable_5_0, 18,16,22)
MR_decl_label8(lexer__get_zero_4_0, 4,2,6,12,21,19,25,28)
MR_decl_label8(lexer__get_zero_4_0, 31,34,37,43,42,41,14,16)
MR_decl_label1(lexer__graphic_token_char_1_0, 2)
MR_decl_label8(lexer__skip_to_eol_5_0, 56,4,2,6,12,18,14,15)
MR_decl_label4(lexer__start_quoted_name_6_0, 2,5,3,10)
MR_decl_label5(lexer__string_finish_hex_escape_10_0, 57,9,13,5,6)
MR_decl_label5(lexer__string_finish_octal_escape_10_0, 57,9,13,5,6)
MR_decl_label6(lexer__string_get_binary_7_0, 4,8,33,9,14,3)
MR_decl_label8(lexer__string_get_binary_2_7_0, 50,4,8,51,9,14,16,15)
MR_decl_label3(lexer__string_get_binary_2_7_0, 3,23,22)
MR_decl_label3(lexer__string_get_char_code_7_0, 4,8,3)
MR_decl_label4(lexer__string_get_comment_7_0, 29,4,8,3)
MR_decl_label6(lexer__string_get_comment_2_7_0, 37,4,8,9,12,3)
MR_decl_label8(lexer__string_get_dot_7_0, 4,8,14,12,17,10,20,21)
MR_decl_label8(lexer__string_get_dot_7_0, 22,23,24,25,26,27,28,29)
MR_decl_label8(lexer__string_get_dot_7_0, 30,31,32,33,34,35,36,18)
MR_decl_label2(lexer__string_get_dot_7_0, 39,3)
MR_decl_label8(lexer__string_get_float_decimals_7_0, 80,4,8,11,9,16,14,19)
MR_decl_label3(lexer__string_get_float_decimals_7_0, 21,3,30)
MR_decl_label8(lexer__string_get_float_exponent_7_0, 4,8,10,15,19,22,20,25)
MR_decl_label8(lexer__string_get_float_exponent_7_0, 14,9,32,31,35,3,40,42)
MR_decl_label1(lexer__string_get_float_exponent_7_0, 48)
MR_decl_label8(lexer__string_get_float_exponent_3_7_0, 62,4,11,10,14,16,3,24)
MR_decl_label7(lexer__string_get_graphic_7_0, 112,4,8,113,9,30,3)
MR_decl_label5(lexer__string_get_hex_7_0, 4,11,10,14,3)
MR_decl_label8(lexer__string_get_hex_2_7_0, 50,4,11,10,14,16,15,3)
MR_decl_label2(lexer__string_get_hex_2_7_0, 23,22)
MR_decl_label7(lexer__string_get_hex_escape_10_0, 39,4,8,11,9,15,3)
MR_decl_label8(lexer__string_get_implementation_defined_literal_rest_7_0, 4,8,11,13,9,20,21,22)
MR_decl_label8(lexer__string_get_implementation_defined_literal_rest_7_0, 23,24,25,26,27,28,29,30)
MR_decl_label8(lexer__string_get_implementation_defined_literal_rest_7_0, 31,32,33,34,35,36,18,39)
MR_decl_label2(lexer__string_get_implementation_defined_literal_rest_7_0, 3,177)
MR_decl_label8(lexer__string_get_int_dot_7_0, 4,11,10,14,15,17,3,23)
MR_decl_label2(lexer__string_get_int_dot_7_0, 25,24)
MR_decl_label6(lexer__string_get_name_7_0, 32,4,11,10,14,3)
MR_decl_label8(lexer__string_get_number_7_0, 81,4,8,11,9,14,19,17)
MR_decl_label7(lexer__string_get_number_7_0, 22,24,23,3,33,32,38)
MR_decl_label5(lexer__string_get_octal_7_0, 4,11,10,14,3)
MR_decl_label8(lexer__string_get_octal_2_7_0, 50,4,11,10,14,16,15,3)
MR_decl_label2(lexer__string_get_octal_2_7_0, 23,22)
MR_decl_label8(lexer__string_get_octal_escape_10_0, 40,4,8,11,9,15,18,3)
MR_decl_label6(lexer__string_get_quoted_name_9_0, 36,4,8,9,11,3)
MR_decl_label8(lexer__string_get_quoted_name_escape_9_0, 131,4,8,9,12,17,18,19)
MR_decl_label8(lexer__string_get_quoted_name_escape_9_0, 20,21,22,23,24,25,26,16)
MR_decl_label7(lexer__string_get_quoted_name_escape_9_0, 15,30,33,36,41,39,3)
MR_decl_label8(lexer__string_get_quoted_name_quote_9_0, 4,8,9,12,17,20,14,3)
MR_decl_label3(lexer__string_get_quoted_name_quote_9_0, 33,36,30)
MR_decl_label7(lexer__string_get_slash_7_0, 4,8,9,122,12,33,3)
MR_decl_label8(lexer__string_get_source_line_number_7_0, 89,4,8,11,9,17,16,14)
MR_decl_label6(lexer__string_get_source_line_number_7_0, 26,28,35,39,3,43)
MR_decl_label4(lexer__string_get_token_6_0, 4,8,9,3)
MR_decl_label4(lexer__string_get_token_2_6_0, 4,8,9,3)
MR_decl_label8(lexer__string_get_token_list_max_5_0, 4,8,11,9,3,22,16,18)
MR_decl_label3(lexer__string_get_token_list_max_5_0, 25,19,21)
MR_decl_label8(lexer__string_get_unicode_escape_11_0, 147,3,8,12,10,15,18,20)
MR_decl_label8(lexer__string_get_unicode_escape_11_0, 19,22,23,24,25,26,17,30)
MR_decl_label8(lexer__string_get_unicode_escape_11_0, 16,32,33,36,34,5,40,2)
MR_decl_label7(lexer__string_get_unicode_escape_11_0, 45,49,52,51,56,44,59)
MR_decl_label6(lexer__string_get_variable_7_0, 32,4,11,10,14,3)
MR_decl_label8(lexer__string_get_zero_7_0, 4,8,11,9,14,17,20,23)
MR_decl_label5(lexer__string_get_zero_7_0, 26,31,29,34,3)
MR_decl_label4(lexer__string_skip_to_eol_6_0, 28,4,8,3)
MR_decl_label4(lexer__string_start_quoted_name_9_0, 2,5,3,10)
MR_decl_label1(lexer__string_ungetchar_3_0, 2)
MR_decl_label8(lexer__token_to_string_2_0, 61,42,56,64,3,4,5,6)
MR_decl_label8(lexer__token_to_string_2_0, 7,8,9,13,17,18,90,23)
MR_decl_label8(lexer__token_to_string_2_0, 93,28,92,34,91,37,47,48)
MR_decl_label3(lexer__token_to_string_2_0, 49,50,51)
MR_decl_label8(__Unify___lexer__token_0_0, 26,34,39,11,13,16,18,20)
MR_decl_label6(__Unify___lexer__token_0_0, 22,24,31,32,40,1)
MR_decl_label5(__Unify___lexer__token_list_0_0, 34,14,5,7,1)
MR_decl_label8(__Index___lexer__token_0_0, 24,17,23,27,3,4,5,6)
MR_decl_label8(__Index___lexer__token_0_0, 7,8,9,10,11,12,13,14)
MR_decl_label7(__Index___lexer__token_0_0, 15,16,18,19,20,21,22)
MR_decl_label2(__Compare___lexer__get_token_action_0_0, 2,3)
MR_decl_label2(__Compare___lexer__offset_0_0, 2,3)
MR_decl_label2(__Compare___lexer__scanned_past_whitespace_0_0, 2,3)
MR_decl_label2(__Compare___lexer__string_token_context_0_0, 2,3)
MR_decl_label8(__Compare___lexer__token_0_0, 4,5,6,98,7,62,64,80)
MR_decl_label8(__Compare___lexer__token_0_0, 82,90,16,18,23,25,110,30)
MR_decl_label8(__Compare___lexer__token_0_0, 32,37,39,43,45,49,51,56)
MR_decl_label5(__Compare___lexer__token_0_0, 58,73,75,128,8)
MR_decl_label2(__Compare___lexer__token_context_0_0, 2,3)
MR_decl_label8(__Compare___lexer__token_list_0_0, 64,36,7,5,9,11,16,17)
MR_decl_label2(__Compare___lexer__token_list_0_0, 19,69)
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

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
15872,
-1,
-1,
2147483647
}
},
};

static const struct mercury_type_6 mercury_common_6[8] =
{
{
MR_string_const("\' in \140#\' line number directive", 30),
MR_tbmkword(0, 0)
},
{
MR_string_const("NUL", 3),
MR_TAG_COMMON(1,6,0)
},
{
MR_string_const("invalid character \140", 19),
MR_TAG_COMMON(1,6,1)
},
{
MR_string_const(")", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("\'", 1),
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

static const struct mercury_type_5 mercury_vector_common_5_0[127] =
{
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
13
},
{
8
},
{
10
},
{
12
},
{
7
},
{
13
},
{
8
},
{
5
},
{
5
},
{
13
},
{
13
},
{
5
},
{
13
},
{
6
},
{
9
},
{
3
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
13
},
{
5
},
{
13
},
{
13
},
{
13
},
{
13
},
{
13
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
5
},
{
13
},
{
5
},
{
13
},
{
2
},
{
11
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
5
},
{
5
},
{
5
},
{
13
},
};

static const struct mercury_type_5 mercury_vector_common_5_1[127] =
{
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
13
},
{
8
},
{
10
},
{
12
},
{
7
},
{
13
},
{
8
},
{
5
},
{
5
},
{
13
},
{
13
},
{
5
},
{
13
},
{
6
},
{
9
},
{
3
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
13
},
{
5
},
{
13
},
{
13
},
{
13
},
{
13
},
{
13
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
5
},
{
13
},
{
5
},
{
13
},
{
2
},
{
11
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
5
},
{
5
},
{
5
},
{
13
},
};

static const struct mercury_type_5 mercury_vector_common_5_2[127] =
{
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
13
},
{
8
},
{
10
},
{
12
},
{
7
},
{
13
},
{
8
},
{
5
},
{
5
},
{
13
},
{
13
},
{
5
},
{
13
},
{
6
},
{
9
},
{
3
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
13
},
{
5
},
{
13
},
{
13
},
{
13
},
{
13
},
{
13
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
5
},
{
13
},
{
5
},
{
13
},
{
2
},
{
11
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
5
},
{
5
},
{
5
},
{
13
},
};

static const struct mercury_type_5 mercury_vector_common_5_3[127] =
{
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
13
},
{
8
},
{
10
},
{
12
},
{
7
},
{
13
},
{
8
},
{
5
},
{
5
},
{
13
},
{
13
},
{
5
},
{
13
},
{
6
},
{
9
},
{
3
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
13
},
{
5
},
{
13
},
{
13
},
{
13
},
{
13
},
{
13
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
5
},
{
13
},
{
5
},
{
13
},
{
2
},
{
11
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
5
},
{
5
},
{
5
},
{
13
},
};

static const struct mercury_type_5 mercury_vector_common_5_4[127] =
{
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
13
},
{
8
},
{
10
},
{
12
},
{
7
},
{
13
},
{
8
},
{
5
},
{
5
},
{
13
},
{
13
},
{
5
},
{
13
},
{
6
},
{
9
},
{
3
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
13
},
{
5
},
{
13
},
{
13
},
{
13
},
{
13
},
{
13
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
5
},
{
13
},
{
5
},
{
13
},
{
2
},
{
11
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
5
},
{
5
},
{
5
},
{
13
},
};

static const struct mercury_type_5 mercury_vector_common_5_5[127] =
{
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
13
},
{
8
},
{
10
},
{
12
},
{
7
},
{
13
},
{
8
},
{
5
},
{
5
},
{
13
},
{
13
},
{
5
},
{
13
},
{
6
},
{
9
},
{
3
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
4
},
{
13
},
{
5
},
{
13
},
{
13
},
{
13
},
{
13
},
{
13
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
2
},
{
5
},
{
13
},
{
5
},
{
13
},
{
2
},
{
11
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
1
},
{
5
},
{
5
},
{
5
},
{
13
},
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_lexer__type_ctor_info_token_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
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


MR_BEGIN_MODULE(lexer_module0)
	MR_init_entry1(lexer__get_context_4_0);
MR_BEGIN_CODE

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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 3774 "lexer.c"
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
	MR_init_label1(lexer__graphic_token_char_1_0,2)
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(lexer_module2)
	MR_init_entry1(lexer__get_graphic_5_0);
	MR_init_label8(lexer__get_graphic_5_0,197,4,2,6,12,27,28,29)
	MR_init_label8(lexer__get_graphic_5_0,30,31,32,33,34,35,36,37)
	MR_init_label8(lexer__get_graphic_5_0,38,39,40,41,42,43,26,25)
	MR_init_label4(lexer__get_graphic_5_0,14,18,16,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_graphic_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_graphic_5_0,197)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 3895 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 3933 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_graphic_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 3966 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 3986 "lexer.c"
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
		lexer__get_graphic_5_0_i12);
MR_def_label(lexer__get_graphic_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i22);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i14);
	}
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i27);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
	}
MR_def_label(lexer__get_graphic_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i28);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i29);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i30);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i31);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i32);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i33);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i34);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i35);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i36);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i37);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i38);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i39);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i40);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i41);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i42);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i43);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
MR_def_label(lexer__get_graphic_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
MR_def_label(lexer__get_graphic_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i197);
	}
MR_def_label(lexer__get_graphic_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 4207 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 4266 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_graphic_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(lexer__get_graphic_5_0_i18);
MR_def_label(lexer__get_graphic_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 4328 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_graphic_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(lexer__get_graphic_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_graphic_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_graphic_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_whitespace_1_0);

MR_BEGIN_MODULE(lexer_module3)
	MR_init_entry1(lexer__get_dot_4_0);
	MR_init_label8(lexer__get_dot_4_0,4,2,6,12,23,20,19,28)
	MR_init_label8(lexer__get_dot_4_0,29,30,31,32,33,34,35,36)
	MR_init_label8(lexer__get_dot_4_0,37,38,39,40,41,42,43,44)
	MR_init_label4(lexer__get_dot_4_0,27,26,14,15)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 4392 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 4429 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_dot_4_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_4_0
{
#line 1071 "io.opt"
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
#line 4461 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4481 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_dot_4_0_i12);
MR_def_label(lexer__get_dot_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i15);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i14);
	}
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__get_dot_4_0_i23);
MR_def_label(lexer__get_dot_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,37)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i19);
	}
	}
MR_def_label(lexer__get_dot_4_0,20)
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
#line 1308 "io.opt"

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
#line 4547 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_dot_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i33);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i34);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i36);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i38);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i42);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i43);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i44);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i27);
MR_def_label(lexer__get_dot_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i26);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_dot_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_graphic_5_0);
	}
MR_def_label(lexer__get_dot_4_0,26)
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
#line 1308 "io.opt"

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
#line 4736 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_dot_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_dot_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);

MR_BEGIN_MODULE(lexer_module4)
	MR_init_entry1(lexer__encode_unicode_char_as_utf8_2_0);
	MR_init_label8(lexer__encode_unicode_char_as_utf8_2_0,60,4,3,7,8,9,6,13)
	MR_init_label8(lexer__encode_unicode_char_as_utf8_2_0,14,15,16,17,12,21,22,23)
	MR_init_label5(lexer__encode_unicode_char_as_utf8_2_0,24,25,26,27,1)
MR_BEGIN_CODE

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
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i60);
	}
	if (MR_INT_LE(MR_r1,57343)) {
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i1);
	}
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,60)
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 | (MR_Integer) 128);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i9);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 | (MR_Integer) 224);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i15);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 | (MR_Integer) 128);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i16);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 | (MR_Integer) 128);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i17);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 | (MR_Integer) 128);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i27);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
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
MR_BEGIN_CODE

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
#line 5016 "lexer.c"
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
	MR_init_label8(lexer__get_quoted_name_6_0,66,4,2,6,12,18,20,14)
	MR_init_label1(lexer__get_quoted_name_6_0,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_quoted_name_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__get_quoted_name_6_0,66)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 5060 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 5100 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_6_0_i6);
	MR_r4 = Character;
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
#line 1071 "io.opt"
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
#line 5134 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5154 "lexer.c"
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i15);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i14);
	}
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_quote_6_0);
	}
MR_def_label(lexer__get_quoted_name_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_escape_6_0);
MR_def_label(lexer__get_quoted_name_6_0,20)
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
	MR_GOTO_LAB(lexer__get_quoted_name_6_0_i66);
	}
MR_def_label(lexer__get_quoted_name_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(4), 0);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(lexer_module7)
	MR_init_entry1(lexer__get_quoted_name_quote_6_0);
	MR_init_label8(lexer__get_quoted_name_quote_6_0,4,2,6,12,33,40,14,19)
	MR_init_label3(lexer__get_quoted_name_quote_6_0,22,16,30)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 5264 "lexer.c"
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
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 5303 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i6);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
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
#line 1071 "io.opt"
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
#line 5337 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5357 "lexer.c"
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
		lexer__get_quoted_name_quote_6_0_i12);
MR_def_label(lexer__get_quoted_name_quote_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_r3 = MR_tag(MR_tempr2);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i30);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i14);
	}
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i33);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_6_0);
	}
MR_def_label(lexer__get_quoted_name_quote_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 5421 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(3);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 5480 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(2),39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i40);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__get_quoted_name_quote_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(3);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 5560 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(2),39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__get_quoted_name_quote_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lexer.m: unknown quote character", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__get_quoted_name_quote_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(4), 0);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_octal_digit_1_0);

MR_BEGIN_MODULE(lexer_module8)
	MR_init_entry1(lexer__get_quoted_name_escape_6_0);
	MR_init_label8(lexer__get_quoted_name_escape_6_0,191,4,2,6,12,18,21,26)
	MR_init_label8(lexer__get_quoted_name_escape_6_0,27,28,29,30,31,32,33,34)
	MR_init_label8(lexer__get_quoted_name_escape_6_0,35,25,24,39,42,45,50,49)
	MR_init_label2(lexer__get_quoted_name_escape_6_0,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_quoted_name_escape_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__get_quoted_name_escape_6_0,191)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 5648 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 5688 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i6);
	MR_r4 = Character;
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
#line 1071 "io.opt"
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
#line 5722 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5742 "lexer.c"
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i15);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i14);
	}
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_6_0);
	}
MR_def_label(lexer__get_quoted_name_escape_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i191);
MR_def_label(lexer__get_quoted_name_escape_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i26);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 34;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
MR_def_label(lexer__get_quoted_name_escape_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i27);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 39;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
MR_def_label(lexer__get_quoted_name_escape_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i28);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 92;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
MR_def_label(lexer__get_quoted_name_escape_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i29);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 96;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
MR_def_label(lexer__get_quoted_name_escape_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,97)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i30);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
MR_def_label(lexer__get_quoted_name_escape_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i31);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
MR_def_label(lexer__get_quoted_name_escape_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,102)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i32);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
MR_def_label(lexer__get_quoted_name_escape_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,110)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i33);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
MR_def_label(lexer__get_quoted_name_escape_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,114)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i34);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
MR_def_label(lexer__get_quoted_name_escape_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,116)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i35);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
MR_def_label(lexer__get_quoted_name_escape_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 11;
MR_def_label(lexer__get_quoted_name_escape_6_0,25)
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
MR_def_label(lexer__get_quoted_name_escape_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i39);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_hex_escape_7_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,117)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i42);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_unicode_escape_8_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,85)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 8;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_unicode_escape_8_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_quoted_name_escape_6_0_i50);
MR_def_label(lexer__get_quoted_name_escape_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i49);
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
MR_def_label(lexer__get_quoted_name_escape_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_escape_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_escape_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(4), 0);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__length_2_3_0);
MR_decl_entry(string__base_string_to_int_3_0);
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);
MR_decl_entry(list__reverse_2_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(char__is_hex_digit_1_0);

MR_BEGIN_MODULE(lexer_module9)
	MR_init_entry1(lexer__get_unicode_escape_8_0);
	MR_init_label8(lexer__get_unicode_escape_8_0,171,3,8,12,10,15,18,20)
	MR_init_label8(lexer__get_unicode_escape_8_0,19,22,23,24,25,26,17,30)
	MR_init_label8(lexer__get_unicode_escape_8_0,16,32,35,36,5,2,43,41)
	MR_init_label6(lexer__get_unicode_escape_8_0,45,51,59,58,53,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_unicode_escape_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(lexer__get_unicode_escape_8_0,171)
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
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(5);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 6091 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i5);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_unicode_escape_8_0_i8);
MR_def_label(lexer__get_unicode_escape_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i5);
	}
	{
	MR_Integer	EncodingInt;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
{
#line 1420 "lexer.m"

    EncodingInt = 0;
;}
#line 6114 "lexer.c"
	MR_r3 = EncodingInt;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i12);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i15);
MR_def_label(lexer__get_unicode_escape_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i15);
MR_def_label(lexer__get_unicode_escape_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_unicode_encoding: unexpected Unicode encoding code", 58);
	MR_np_call_localret_ent(require__error_1_0,
		lexer__get_unicode_escape_8_0_i15);
MR_def_label(lexer__get_unicode_escape_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i17);
	}
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i5);
	}
	if (MR_INT_GT(MR_r1,1114111)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i5);
	}
	if (MR_INT_LT(MR_r1,55296)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i18);
	}
	if (MR_INT_LE(MR_r1,57343)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i5);
	}
MR_def_label(lexer__get_unicode_escape_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,65535)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i19);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i20);
MR_def_label(lexer__get_unicode_escape_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i16);
	}
MR_def_label(lexer__get_unicode_escape_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) 2031616 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__get_unicode_escape_8_0_i22);
MR_def_label(lexer__get_unicode_escape_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = ((MR_Integer) 64512 & (MR_Integer) MR_sv(2));
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__get_unicode_escape_8_0_i23);
MR_def_label(lexer__get_unicode_escape_8_0,23)
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
		lexer__get_unicode_escape_8_0_i24);
MR_def_label(lexer__get_unicode_escape_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = ((MR_Integer) 56320 | (MR_Integer) MR_sv(6));
	MR_r1 = (((MR_Integer) 55296 | (MR_Integer) MR_r1) | (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i25);
MR_def_label(lexer__get_unicode_escape_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i26);
MR_def_label(lexer__get_unicode_escape_8_0,26)
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
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i16);
	}
MR_def_label(lexer__get_unicode_escape_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(lexer__encode_unicode_char_as_utf8_2_0,
		lexer__get_unicode_escape_8_0_i30);
MR_def_label(lexer__get_unicode_escape_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i5);
	}
	MR_r1 = MR_r2;
MR_def_label(lexer__get_unicode_escape_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i32);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__get_unicode_escape_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__reverse_2_3_0,
		lexer__get_unicode_escape_8_0_i35);
MR_def_label(lexer__get_unicode_escape_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		lexer__get_unicode_escape_8_0_i36);
MR_def_label(lexer__get_unicode_escape_8_0,36)
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
MR_def_label(lexer__get_unicode_escape_8_0,5)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6308 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i41);
	}
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i43);
MR_def_label(lexer__get_unicode_escape_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i51);
MR_def_label(lexer__get_unicode_escape_8_0,41)
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 6345 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i45);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i51);
MR_def_label(lexer__get_unicode_escape_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
{
#line 1071 "io.opt"
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
#line 6376 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6396 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_tempr1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i51);
MR_def_label(lexer__get_unicode_escape_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i54);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i53);
	}
	MR_sv(6) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_hex_digit_1_0,
		lexer__get_unicode_escape_8_0_i59);
MR_def_label(lexer__get_unicode_escape_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i58);
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
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i171);
	}
MR_def_label(lexer__get_unicode_escape_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,5);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__get_unicode_escape_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__get_unicode_escape_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(6), 0);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_hex_digit_2_0);

MR_BEGIN_MODULE(lexer_module10)
	MR_init_entry1(lexer__get_hex_escape_7_0);
	MR_init_label8(lexer__get_hex_escape_7_0,69,4,2,6,12,20,18,24)
	MR_init_label2(lexer__get_hex_escape_7_0,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_hex_escape_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__get_hex_escape_7_0,69)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6499 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 6540 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_escape_7_0_i6);
	MR_r5 = Character;
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
#line 1071 "io.opt"
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
#line 6575 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6595 "lexer.c"
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i15);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i14);
	}
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_escape_7_0_i20);
MR_def_label(lexer__get_hex_escape_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i18);
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
	MR_GOTO_LAB(lexer__get_hex_escape_7_0_i69);
	}
MR_def_label(lexer__get_hex_escape_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__finish_hex_escape_7_0);
MR_def_label(lexer__get_hex_escape_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_hex_escape_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_hex_escape_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(5), 0);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module11)
	MR_init_entry1(lexer__finish_hex_escape_7_0);
	MR_init_label4(lexer__finish_hex_escape_7_0,57,9,13,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__finish_hex_escape_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(lexer__finish_hex_escape_7_0_i57);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_proceed();
MR_def_label(lexer__finish_hex_escape_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__finish_hex_escape_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_r4;
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 6755 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__finish_hex_escape_7_0_i6);
	MR_tempr1 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 16;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__finish_hex_escape_7_0_i9);
MR_def_label(lexer__finish_hex_escape_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__finish_hex_escape_7_0_i6);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 6794 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__finish_hex_escape_7_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__finish_hex_escape_7_0_i13);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__finish_hex_escape_7_0,13)
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
MR_def_label(lexer__finish_hex_escape_7_0,6)
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
	MR_init_label8(lexer__get_octal_escape_7_0,69,4,2,6,12,20,18,24)
	MR_init_label2(lexer__get_octal_escape_7_0,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_octal_escape_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__get_octal_escape_7_0,69)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6861 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 6901 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_escape_7_0_i6);
	MR_r5 = Character;
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
#line 1071 "io.opt"
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
#line 6936 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6956 "lexer.c"
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i15);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i14);
	}
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_escape_7_0_i20);
MR_def_label(lexer__get_octal_escape_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i18);
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
	MR_GOTO_LAB(lexer__get_octal_escape_7_0_i69);
	}
MR_def_label(lexer__get_octal_escape_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__finish_octal_escape_7_0);
MR_def_label(lexer__get_octal_escape_7_0,24)
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
#line 1308 "io.opt"

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
#line 7044 "lexer.c"
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
MR_def_label(lexer__get_octal_escape_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_octal_escape_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(5), 0);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module13)
	MR_init_entry1(lexer__finish_octal_escape_7_0);
	MR_init_label4(lexer__finish_octal_escape_7_0,57,9,13,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__finish_octal_escape_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(lexer__finish_octal_escape_7_0_i57);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,9);
	MR_proceed();
MR_def_label(lexer__finish_octal_escape_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__finish_octal_escape_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_r4;
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 7154 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__finish_octal_escape_7_0_i6);
	MR_tempr1 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 8;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__finish_octal_escape_7_0_i9);
MR_def_label(lexer__finish_octal_escape_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__finish_octal_escape_7_0_i6);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 7193 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__finish_octal_escape_7_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__finish_octal_escape_7_0_i13);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__finish_octal_escape_7_0,13)
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
MR_def_label(lexer__finish_octal_escape_7_0,6)
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
	MR_init_label4(lexer__start_quoted_name_6_0,2,5,3,10)
MR_BEGIN_CODE

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
	MR_init_label8(lexer__get_name_5_0,79,4,2,6,12,27,25,14)
	MR_init_label3(lexer__get_name_5_0,18,16,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_name_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_name_5_0,79)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 7314 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 7352 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_name_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 7385 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7405 "lexer.c"
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
		lexer__get_name_5_0_i12);
MR_def_label(lexer__get_name_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_name_5_0_i22);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i14);
	}
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__get_name_5_0_i27);
MR_def_label(lexer__get_name_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_name_5_0_i79);
	}
MR_def_label(lexer__get_name_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 7475 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 7534 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_name_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(lexer__get_name_5_0_i18);
MR_def_label(lexer__get_name_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 7596 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_name_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(lexer__get_name_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_name_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,12);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_name_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__lower_upper_2_0);

MR_BEGIN_MODULE(lexer_module16)
	MR_init_entry1(lexer__get_implementation_defined_literal_rest_4_0);
	MR_init_label8(lexer__get_implementation_defined_literal_rest_4_0,4,2,6,12,21,24,19,31)
	MR_init_label8(lexer__get_implementation_defined_literal_rest_4_0,32,33,34,35,36,37,38,39)
	MR_init_label8(lexer__get_implementation_defined_literal_rest_4_0,40,41,42,43,44,45,46,47)
	MR_init_label5(lexer__get_implementation_defined_literal_rest_4_0,30,29,14,16,13)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 7660 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 7697 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_implementation_defined_literal_rest_4_0
{
#line 1071 "io.opt"
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
#line 7729 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_implementation_defined_literal_rest_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7749 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_implementation_defined_literal_rest_4_0_i12);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i14);
	}
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(char__lower_upper_2_0,
		lexer__get_implementation_defined_literal_rest_4_0_i21);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(lexer__get_name_5_0,
		lexer__get_implementation_defined_literal_rest_4_0_i24);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,33)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
	}
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i33);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i34);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i36);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i38);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i42);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i43);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i44);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i45);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i46);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i47);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_graphic_5_0);
	}
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,29)
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
#line 1308 "io.opt"

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
#line 7989 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	}
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
	MR_init_label8(lexer__get_variable_5_0,79,4,2,6,12,27,25,14)
	MR_init_label3(lexer__get_variable_5_0,18,16,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_variable_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_variable_5_0,79)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 8051 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 8089 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_variable_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 8122 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8142 "lexer.c"
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
		lexer__get_variable_5_0_i12);
MR_def_label(lexer__get_variable_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i22);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i14);
	}
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__get_variable_5_0_i27);
MR_def_label(lexer__get_variable_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_variable_5_0_i79);
	}
MR_def_label(lexer__get_variable_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 8212 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 8271 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_variable_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(lexer__get_variable_5_0_i18);
MR_def_label(lexer__get_variable_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 8333 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_variable_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(lexer__get_variable_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_variable_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,13);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_variable_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module18)
	MR_init_entry1(lexer__get_char_code_4_0);
	MR_init_label6(lexer__get_char_code_4_0,4,2,6,12,14,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_char_code_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 8395 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_char_code_4_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	}
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 8432 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_char_code_4_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
{
#line 1071 "io.opt"
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
#line 8463 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8483 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_char_code_4_0_i12);
MR_def_label(lexer__get_char_code_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_char_code_4_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr3),0)) {
		MR_GOTO_LAB(lexer__get_char_code_4_0_i14);
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
	Character = MR_r1;
{
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 8516 "lexer.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(lexer__get_char_code_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,14);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_char_code_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(1), 0);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module19)
	MR_init_entry1(lexer__get_binary_2_5_0);
	MR_init_label8(lexer__get_binary_2_5_0,112,4,2,6,12,32,31,30)
	MR_init_label6(lexer__get_binary_2_5_0,41,14,20,19,16,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_binary_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_binary_2_5_0,112)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 8577 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 8615 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_2_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 8648 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8668 "lexer.c"
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
		lexer__get_binary_2_5_0_i12);
MR_def_label(lexer__get_binary_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i27);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i14);
	}
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i32);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_binary_2_5_0_i31);
	}
MR_def_label(lexer__get_binary_2_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,49)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i30);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
MR_def_label(lexer__get_binary_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_binary_2_5_0_i112);
	}
MR_def_label(lexer__get_binary_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 8745 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 8804 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_2_5_0_i16);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_binary_2_5_0_i41);
MR_def_label(lexer__get_binary_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_binary_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 8881 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_2_5_0_i16);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_binary_2_5_0_i20);
MR_def_label(lexer__get_binary_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_binary_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_binary_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_binary_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module20)
	MR_init_entry1(lexer__get_binary_4_0);
	MR_init_label8(lexer__get_binary_4_0,4,2,6,12,21,20,19,14)
	MR_init_label1(lexer__get_binary_4_0,16)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 8957 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 8994 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_4_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_4_0
{
#line 1071 "io.opt"
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
#line 9026 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9046 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_binary_4_0_i12);
MR_def_label(lexer__get_binary_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i14);
	}
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i21);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_binary_4_0_i20);
	}
MR_def_label(lexer__get_binary_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,49)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i19);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
MR_def_label(lexer__get_binary_4_0,20)
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
MR_def_label(lexer__get_binary_4_0,19)
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
#line 1308 "io.opt"

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
#line 9123 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,17);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_binary_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,17);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_binary_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module21)
	MR_init_entry1(lexer__get_octal_2_5_0);
	MR_init_label8(lexer__get_octal_2_5_0,106,4,2,6,12,32,30,41)
	MR_init_label5(lexer__get_octal_2_5_0,14,20,19,16,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_octal_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_octal_2_5_0,106)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 9183 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 9221 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_2_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 9254 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9274 "lexer.c"
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
		lexer__get_octal_2_5_0_i12);
MR_def_label(lexer__get_octal_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i27);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i14);
	}
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_2_5_0_i32);
MR_def_label(lexer__get_octal_2_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_octal_2_5_0_i106);
	}
MR_def_label(lexer__get_octal_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 9344 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 9403 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_2_5_0_i16);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_octal_2_5_0_i41);
MR_def_label(lexer__get_octal_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_octal_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 9480 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_2_5_0_i16);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_octal_2_5_0_i20);
MR_def_label(lexer__get_octal_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_octal_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_octal_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_octal_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module22)
	MR_init_entry1(lexer__get_octal_4_0);
	MR_init_label8(lexer__get_octal_4_0,4,2,6,12,21,19,14,16)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 9555 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 9592 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_4_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_4_0
{
#line 1071 "io.opt"
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
#line 9624 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9644 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_4_0_i12);
MR_def_label(lexer__get_octal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i14);
	}
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_4_0_i21);
MR_def_label(lexer__get_octal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_octal_2_5_0);
	}
MR_def_label(lexer__get_octal_4_0,19)
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
#line 1308 "io.opt"

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
#line 9714 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_octal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_octal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module23)
	MR_init_entry1(lexer__get_hex_2_5_0);
	MR_init_label8(lexer__get_hex_2_5_0,106,4,2,6,12,32,30,41)
	MR_init_label5(lexer__get_hex_2_5_0,14,20,19,16,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_hex_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_hex_2_5_0,106)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 9774 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 9812 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_2_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 9845 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9865 "lexer.c"
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
		lexer__get_hex_2_5_0_i12);
MR_def_label(lexer__get_hex_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i27);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i14);
	}
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_2_5_0_i32);
MR_def_label(lexer__get_hex_2_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_hex_2_5_0_i106);
	}
MR_def_label(lexer__get_hex_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 9935 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 9994 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_2_5_0_i16);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_hex_2_5_0_i41);
MR_def_label(lexer__get_hex_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_hex_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 10071 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_2_5_0_i16);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_hex_2_5_0_i20);
MR_def_label(lexer__get_hex_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_hex_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_hex_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_hex_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module24)
	MR_init_entry1(lexer__get_hex_4_0);
	MR_init_label8(lexer__get_hex_4_0,4,2,6,12,21,19,14,16)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10146 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 10183 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_4_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_4_0
{
#line 1071 "io.opt"
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
#line 10215 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 10235 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_4_0_i12);
MR_def_label(lexer__get_hex_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i14);
	}
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_4_0_i21);
MR_def_label(lexer__get_hex_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_hex_2_5_0);
	}
MR_def_label(lexer__get_hex_4_0,19)
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
#line 1308 "io.opt"

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
#line 10305 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,19);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_hex_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,19);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_hex_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_digit_1_0);

MR_BEGIN_MODULE(lexer_module25)
	MR_init_entry1(lexer__get_float_exponent_3_5_0);
	MR_init_label8(lexer__get_float_exponent_3_5_0,103,4,2,6,12,33,31,14)
	MR_init_label4(lexer__get_float_exponent_3_5_0,22,20,16,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_float_exponent_3_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_float_exponent_3_5_0,103)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10366 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 10404 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 10437 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 10457 "lexer.c"
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
		lexer__get_float_exponent_3_5_0_i12);
MR_def_label(lexer__get_float_exponent_3_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i28);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i14);
	}
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_3_5_0_i33);
MR_def_label(lexer__get_float_exponent_3_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i103);
	}
MR_def_label(lexer__get_float_exponent_3_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 10527 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 10586 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r3;
{
#line 442 "string.opt"
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
#line 10614 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i20);
	MR_r3 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i22);
MR_def_label(lexer__get_float_exponent_3_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 10676 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r3;
{
#line 442 "string.opt"
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
#line 10704 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i20);
	MR_r3 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(lexer__get_float_exponent_3_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_float_exponent_3_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_3_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_3_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module26)
	MR_init_entry1(lexer__get_float_exponent_2_5_0);
	MR_init_label8(lexer__get_float_exponent_2_5_0,4,2,6,12,21,19,14,16)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10773 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 10811 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i6);
	MR_r3 = Character;
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
#line 1071 "io.opt"
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
#line 10844 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 10864 "lexer.c"
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i14);
	}
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_2_5_0_i21);
MR_def_label(lexer__get_float_exponent_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_3_5_0);
	}
MR_def_label(lexer__get_float_exponent_2_5_0,19)
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
#line 1308 "io.opt"

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
#line 10935 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module27)
	MR_init_entry1(lexer__get_float_exponent_5_0);
	MR_init_label8(lexer__get_float_exponent_5_0,4,2,6,12,33,32,31,39)
	MR_init_label5(lexer__get_float_exponent_5_0,37,14,20,16,28)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10993 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 11031 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 11064 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 11084 "lexer.c"
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
		lexer__get_float_exponent_5_0_i12);
MR_def_label(lexer__get_float_exponent_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i28);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i14);
	}
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i33);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_float_exponent_5_0_i32);
	}
MR_def_label(lexer__get_float_exponent_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i31);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_float_exponent_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_2_5_0);
	}
MR_def_label(lexer__get_float_exponent_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_5_0_i39);
MR_def_label(lexer__get_float_exponent_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_3_5_0);
	}
MR_def_label(lexer__get_float_exponent_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 11182 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 11245 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r3;
{
#line 442 "string.opt"
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
#line 11275 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_5_0_i20);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
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
MR_def_label(lexer__get_float_exponent_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module28)
	MR_init_entry1(lexer__get_float_decimals_5_0);
	MR_init_label8(lexer__get_float_decimals_5_0,122,4,2,6,12,33,31,39)
	MR_init_label7(lexer__get_float_decimals_5_0,38,37,14,22,20,16,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_float_decimals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_float_decimals_5_0,122)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 11343 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 11381 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 11414 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 11434 "lexer.c"
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
		lexer__get_float_decimals_5_0_i12);
MR_def_label(lexer__get_float_decimals_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i28);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i14);
	}
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_decimals_5_0_i33);
MR_def_label(lexer__get_float_decimals_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i122);
	}
MR_def_label(lexer__get_float_decimals_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,69)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i39);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i38);
	}
MR_def_label(lexer__get_float_decimals_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i37);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_float_decimals_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_5_0);
	}
MR_def_label(lexer__get_float_decimals_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 11534 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 11593 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r3;
{
#line 442 "string.opt"
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
#line 11621 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i20);
	MR_r3 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i22);
MR_def_label(lexer__get_float_decimals_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 11683 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r3;
{
#line 442 "string.opt"
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
#line 11711 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i20);
	MR_r3 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(lexer__get_float_decimals_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_float_decimals_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_decimals_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_decimals_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module29)
	MR_init_entry1(lexer__get_int_dot_5_0);
	MR_init_label8(lexer__get_int_dot_5_0,4,2,6,12,32,30,42,41)
	MR_init_label8(lexer__get_int_dot_5_0,38,48,14,20,19,16,27,13)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 11781 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 11819 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_int_dot_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 11852 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 11872 "lexer.c"
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
		lexer__get_int_dot_5_0_i12);
MR_def_label(lexer__get_int_dot_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i27);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i14);
	}
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_int_dot_5_0_i32);
MR_def_label(lexer__get_int_dot_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 46;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_decimals_5_0);
	}
MR_def_label(lexer__get_int_dot_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 11946 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 12005 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_int_dot_5_0_i38);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_int_dot_5_0_i42);
MR_def_label(lexer__get_int_dot_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_int_dot_5_0_i48);
	}
MR_def_label(lexer__get_int_dot_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_GOTO_LAB(lexer__get_int_dot_5_0_i48);
MR_def_label(lexer__get_int_dot_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
MR_def_label(lexer__get_int_dot_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_int_dot_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
#line 1308 "io.opt"

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
#line 12074 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 12133 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_int_dot_5_0_i16);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_int_dot_5_0_i20);
MR_def_label(lexer__get_int_dot_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_int_dot_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_int_dot_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_int_dot_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	}
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
	MR_init_label8(lexer__get_number_5_0,135,4,2,6,12,32,30,36)
	MR_init_label8(lexer__get_number_5_0,41,40,39,50,14,20,19,16)
	MR_init_label1(lexer__get_number_5_0,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_number_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_number_5_0,135)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 12214 "lexer.c"
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 12252 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_number_5_0_i6);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
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
#line 1071 "io.opt"
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
#line 12285 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 12305 "lexer.c"
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
		lexer__get_number_5_0_i12);
MR_def_label(lexer__get_number_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_number_5_0_i27);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i14);
	}
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_number_5_0_i32);
MR_def_label(lexer__get_number_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_number_5_0_i135);
	}
MR_def_label(lexer__get_number_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_int_dot_5_0);
MR_def_label(lexer__get_number_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i41);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_number_5_0_i40);
MR_def_label(lexer__get_number_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i39);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_number_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_5_0);
	}
MR_def_label(lexer__get_number_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1308 "io.opt"

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
#line 12412 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 12471 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_number_5_0_i16);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_number_5_0_i50);
MR_def_label(lexer__get_number_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_number_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 12548 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_number_5_0_i16);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_number_5_0_i20);
MR_def_label(lexer__get_number_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_number_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_number_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_number_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module31)
	MR_init_entry1(lexer__get_zero_4_0);
	MR_init_label8(lexer__get_zero_4_0,4,2,6,12,21,19,25,28)
	MR_init_label8(lexer__get_zero_4_0,31,34,37,43,42,41,14,16)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 12624 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 12661 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_zero_4_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_4_0
{
#line 1071 "io.opt"
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
#line 12693 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 12713 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_zero_4_0_i12);
MR_def_label(lexer__get_zero_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i14);
	}
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_zero_4_0_i21);
MR_def_label(lexer__get_zero_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_number_5_0);
	}
MR_def_label(lexer__get_zero_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_char_code_4_0);
MR_def_label(lexer__get_zero_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_binary_4_0);
MR_def_label(lexer__get_zero_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,111)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_octal_4_0);
MR_def_label(lexer__get_zero_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i34);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_hex_4_0);
MR_def_label(lexer__get_zero_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_int_dot_5_0);
MR_def_label(lexer__get_zero_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i43);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_zero_4_0_i42);
MR_def_label(lexer__get_zero_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_zero_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_float_exponent_5_0);
	}
MR_def_label(lexer__get_zero_4_0,41)
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
#line 1308 "io.opt"

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
#line 12856 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_zero_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_zero_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module32)
	MR_init_entry1(lexer__get_token_5_0);
	MR_init_label7(lexer__get_token_5_0,4,2,6,12,18,14,15)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 12913 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 12950 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_token_5_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
{
#line 1071 "io.opt"
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
#line 12982 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 13002 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_token_5_0_i12);
MR_def_label(lexer__get_token_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(2);
	MR_r4 = MR_tag(MR_tempr3);
	if ((MR_r4 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i15);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr3),0)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i14);
	}
	if (!((((MR_Integer) 1 << ((MR_Integer) MR_r1 & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(4,0), ((MR_Integer) MR_r1 >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i18);
	}
	MR_tempr4 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_0, (MR_Integer) MR_tempr4);
	MR_tempr2 = MR_tempr4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__execute_get_token_action_8_0);
	}
MR_def_label(lexer__get_token_5_0,18)
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 13056 "lexer.c"
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
MR_def_label(lexer__get_token_5_0,14)
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 13085 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(3);
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 13108 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module33)
	MR_init_entry1(lexer__get_token_2_5_0);
	MR_init_label7(lexer__get_token_2_5_0,4,2,6,12,18,14,15)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 13155 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 13192 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_token_2_5_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
{
#line 1071 "io.opt"
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
#line 13224 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 13244 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_token_2_5_0_i12);
MR_def_label(lexer__get_token_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(2);
	MR_r4 = MR_tag(MR_tempr3);
	if ((MR_r4 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i15);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr3),0)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i14);
	}
	if (!((((MR_Integer) 1 << ((MR_Integer) MR_r1 & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(4,0), ((MR_Integer) MR_r1 >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
	}
	MR_tempr4 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_1, (MR_Integer) MR_tempr4);
	MR_tempr2 = MR_tempr4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__execute_get_token_action_8_0);
	}
MR_def_label(lexer__get_token_2_5_0,18)
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 13298 "lexer.c"
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
MR_def_label(lexer__get_token_2_5_0,14)
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 13327 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(3);
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 13350 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module34)
	MR_init_entry1(lexer__execute_get_token_action_8_0);
	MR_init_label8(lexer__execute_get_token_action_8_0,117,118,126,10,127,13,122,16)
	MR_init_label8(lexer__execute_get_token_action_8_0,128,19,22,120,25,123,124,31)
	MR_init_label8(lexer__execute_get_token_action_8_0,32,125,121,36,39,40,41,42)
	MR_init_label8(lexer__execute_get_token_action_8_0,44,45,46,47,38,37,116,119)
	MR_init_label3(lexer__execute_get_token_action_8_0,59,60,115)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__execute_get_token_action_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i116) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i117) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i118) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i119) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i120) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i121) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i122) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i123) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i124) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i125) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i22) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i126) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i127) MR_AND
		MR_LABEL_AP(lexer__execute_get_token_action_8_0_i128));
MR_def_label(lexer__execute_get_token_action_8_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 13420 "lexer.c"
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
MR_def_label(lexer__execute_get_token_action_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 13453 "lexer.c"
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
MR_def_label(lexer__execute_get_token_action_8_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(lexer__execute_get_token_action_8_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(lexer__execute_get_token_action_8_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(lexer__execute_get_token_action_8_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(lexer__execute_get_token_action_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(lexer__get_source_line_number_6_0);
MR_def_label(lexer__execute_get_token_action_8_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(lexer__execute_get_token_action_8_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(lexer__skip_to_eol_5_0);
MR_def_label(lexer__execute_get_token_action_8_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(lexer__execute_get_token_action_8_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(lexer__get_slash_5_0);
MR_def_label(lexer__execute_get_token_action_8_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i115);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i115);
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
MR_def_label(lexer__execute_get_token_action_8_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(lexer__get_token_2_5_0);
MR_def_label(lexer__execute_get_token_action_8_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i59);
MR_def_label(lexer__execute_get_token_action_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_zero_4_0,
		lexer__execute_get_token_action_8_0_i60);
MR_def_label(lexer__execute_get_token_action_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(lexer__execute_get_token_action_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module35)
	MR_init_entry1(lexer__skip_to_eol_5_0);
	MR_init_label8(lexer__skip_to_eol_5_0,56,4,2,6,12,18,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__skip_to_eol_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__skip_to_eol_5_0,56)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 13751 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 13788 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__skip_to_eol_5_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_5_0
{
#line 1071 "io.opt"
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
#line 13820 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 13840 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__skip_to_eol_5_0_i12);
MR_def_label(lexer__skip_to_eol_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i15);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i14);
	}
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_token_2_5_0);
	}
MR_def_label(lexer__skip_to_eol_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__skip_to_eol_5_0_i56);
MR_def_label(lexer__skip_to_eol_5_0,14)
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 13893 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(3);
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 13916 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module36)
	MR_init_entry1(lexer__get_slash_5_0);
	MR_init_label8(lexer__get_slash_5_0,4,2,6,12,19,24,25,26)
	MR_init_label8(lexer__get_slash_5_0,27,28,29,30,31,32,33,34)
	MR_init_label8(lexer__get_slash_5_0,35,36,37,38,39,40,23,42)
	MR_init_label5(lexer__get_slash_5_0,45,22,46,14,16)
MR_BEGIN_CODE

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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 13966 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 14003 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_slash_5_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
{
#line 1071 "io.opt"
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
#line 14035 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 14055 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_slash_5_0_i12);
MR_def_label(lexer__get_slash_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tag(MR_tempr1);
	if ((MR_r4 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i14);
	}
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_comment_5_0);
	}
MR_def_label(lexer__get_slash_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i24);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i25);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i26);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i33);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i34);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i36);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i38);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i23);
MR_def_label(lexer__get_slash_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i22);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_slash_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_slash_5_0_i42);
MR_def_label(lexer__get_slash_5_0,42)
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
		lexer__get_slash_5_0_i45);
MR_def_label(lexer__get_slash_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_slash_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
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
#line 1308 "io.opt"

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
#line 14280 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_slash_5_0_i46);
MR_def_label(lexer__get_slash_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_slash_5_0,14)
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 14316 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_decr_sp_and_return(3);
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 14339 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module37)
	MR_init_entry1(lexer__get_comment_5_0);
	MR_init_label8(lexer__get_comment_5_0,57,4,2,6,12,19,14,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_comment_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_comment_5_0,57)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 14388 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 14425 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_comment_5_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_5_0
{
#line 1071 "io.opt"
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
#line 14457 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 14477 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_comment_5_0_i12);
MR_def_label(lexer__get_comment_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i14);
	}
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_comment_2_5_0);
	}
MR_def_label(lexer__get_comment_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_comment_5_0_i57);
MR_def_label(lexer__get_comment_5_0,14)
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 14530 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_decr_sp_and_return(3);
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 14553 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module38)
	MR_init_entry1(lexer__get_comment_2_5_0);
	MR_init_label8(lexer__get_comment_2_5_0,67,4,2,6,12,19,22,14)
	MR_init_label1(lexer__get_comment_2_5_0,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_comment_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_comment_2_5_0,67)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 14603 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 14640 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_comment_2_5_0_i6);
	MR_r4 = Character;
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_5_0
{
#line 1071 "io.opt"
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
#line 14672 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 14692 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_comment_2_5_0_i12);
MR_def_label(lexer__get_comment_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i16);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i14);
	}
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_token_2_5_0);
	}
MR_def_label(lexer__get_comment_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_comment_2_5_0_i67);
MR_def_label(lexer__get_comment_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_comment_5_0);
MR_def_label(lexer__get_comment_2_5_0,14)
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 14754 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_decr_sp_and_return(3);
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 14777 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__set_line_number_4_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(lexer_module39)
	MR_init_entry1(lexer__get_source_line_number_6_0);
	MR_init_label8(lexer__get_source_line_number_6_0,127,4,2,6,10,12,23,21)
	MR_init_label8(lexer__get_source_line_number_6_0,34,36,33,38,30,44,27,47)
	MR_init_label7(lexer__get_source_line_number_6_0,49,56,60,14,15,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_source_line_number_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_source_line_number_6_0,127)
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
#line 1300 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 14832 "lexer.c"
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 14874 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_source_line_number_6_0_i6);
	MR_r3 = Character;
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
#line 1071 "io.opt"
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
#line 14905 "lexer.c"
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
#line 1012 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 14925 "lexer.c"
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i17);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_source_line_number_6_0_i23);
MR_def_label(lexer__get_source_line_number_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_source_line_number_6_0_i127);
	}
MR_def_label(lexer__get_source_line_number_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	if (MR_INT_NE(MR_r3,10)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i27);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 15041 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_source_line_number_6_0_i30);
	MR_tempr1 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Integer) 10;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_source_line_number_6_0_i34);
MR_def_label(lexer__get_source_line_number_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i33);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_line_number_4_0,
		lexer__get_source_line_number_6_0_i36);
MR_def_label(lexer__get_source_line_number_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_token_5_0);
MR_def_label(lexer__get_source_line_number_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i38);
MR_def_label(lexer__get_source_line_number_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("invalid line number \140", 21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	Strs = MR_tempr2;
{
#line 711 "string.opt"
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
#line 15121 "lexer.c"
	MR_r3 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_r3;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_source_line_number_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i44);
MR_def_label(lexer__get_source_line_number_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_source_line_number_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i47);
MR_def_label(lexer__get_source_line_number_6_0,47)
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
#line 44 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 15167 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_source_line_number_6_0_i49);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_GOTO_LAB(lexer__get_source_line_number_6_0_i60);
MR_def_label(lexer__get_source_line_number_6_0,49)
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
		lexer__get_source_line_number_6_0_i56);
MR_def_label(lexer__get_source_line_number_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("invalid character \140", 19);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_tempr2;
	}
MR_def_label(lexer__get_source_line_number_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	Strs = MR_r1;
{
#line 711 "string.opt"
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
#line 15240 "lexer.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_source_line_number_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(lexer__get_source_line_number_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i18);
MR_def_label(lexer__get_source_line_number_6_0,18)
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
	MR_init_label8(lexer__get_token_list_2_6_0,15,24,4,18,7,9,25,11)
	MR_init_label1(lexer__get_token_list_2_6_0,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__get_token_list_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i15) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i18));
MR_def_label(lexer__get_token_list_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i7) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i9));
MR_def_label(lexer__get_token_list_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(lexer__get_token_5_0,
		lexer__get_token_list_2_6_0_i4);
MR_def_label(lexer__get_token_list_2_6_0,4)
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
		lexer__get_token_list_2_6_0_i14);
MR_def_label(lexer__get_token_list_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i24) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i7) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i7) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_6_0_i25));
MR_def_label(lexer__get_token_list_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(lexer__get_token_list_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(lexer__get_token_list_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 15392 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_dot_4_0,
		lexer__get_token_list_2_6_0_i11);
MR_def_label(lexer__get_token_list_2_6_0,11)
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
		lexer__get_token_list_2_6_0_i14);
MR_def_label(lexer__get_token_list_2_6_0,14)
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
	MR_init_label1(lexer__get_token_list_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__get_token_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_list_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1429 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 15462 "lexer.c"
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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_context_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module43)
	MR_init_entry1(lexer__string_ungetchar_3_0);
	MR_init_label1(lexer__string_ungetchar_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_ungetchar_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_ungetchar_3_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 15539 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_ctfield(0, MR_tempr4, 1);
	MR_r6 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_ungetchar_3_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r6 - (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__string_ungetchar_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r6;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module44)
	MR_init_entry1(lexer__grab_string_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__grab_string_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r2, 2);
	MR_tempr3 = MR_r3;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr3, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15606 "lexer.c"
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
	MR_init_label7(lexer__string_get_graphic_7_0,112,4,8,113,9,30,3)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 15655 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15783 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__string_get_graphic_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15821 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
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
	MR_init_label8(lexer__string_get_dot_7_0,4,8,14,12,17,10,20,21)
	MR_init_label8(lexer__string_get_dot_7_0,22,23,24,25,26,27,28,29)
	MR_init_label8(lexer__string_get_dot_7_0,30,31,32,33,34,35,36,18)
	MR_init_label2(lexer__string_get_dot_7_0,39,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_dot_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r4, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 15872 "lexer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_ctfield(0, MR_tempr4, 1);
	MR_r8 = MR_ctfield(0, MR_tempr4, 0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,37)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_dot_7_0_i17);
MR_def_label(lexer__string_get_dot_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
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
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_dot_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module47)
	MR_init_entry1(lexer__string_get_quoted_name_9_0);
	MR_init_label6(lexer__string_get_quoted_name_9_0,36,4,8,9,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_quoted_name_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_quoted_name_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r6;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 16230 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr3;
	MR_r7 = MR_ctfield(0, MR_tempr5, 1);
	MR_r10 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i36);
	}
MR_def_label(lexer__string_get_quoted_name_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_ctfield(0, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module48)
	MR_init_entry1(lexer__string_get_quoted_name_quote_9_0);
	MR_init_label8(lexer__string_get_quoted_name_quote_9_0,4,8,9,12,17,20,14,3)
	MR_init_label3(lexer__string_get_quoted_name_quote_9_0,33,36,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_quoted_name_quote_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(0, MR_r6, 2);
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_quoted_name_quote_9_0
	Str = (MR_String) MR_r1;
	Index = MR_r7;
{
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 16336 "lexer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r7 + (MR_Integer) 1);
	MR_r9 = MR_tempr2;
	MR_tempr4 = MR_r6;
	MR_r7 = MR_ctfield(0, MR_tempr4, 1);
	MR_r10 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_sv(4) = MR_tempr4;
	MR_r6 = MR_tempr3;
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
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__string_get_quoted_name_quote_9_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 16450 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i14);
	MR_r4 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(1),39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lexer.m: unknown quote character", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r5, 0);
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__string_get_quoted_name_quote_9_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_r4;
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 16555 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i30);
	MR_r4 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i33);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r4;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(lexer__string_get_quoted_name_quote_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_r3 = MR_r6;
	MR_proceed();
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lexer.m: unknown quote character", 32);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_r3 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module49)
	MR_init_entry1(lexer__string_get_quoted_name_escape_9_0);
	MR_init_label8(lexer__string_get_quoted_name_escape_9_0,131,4,8,9,12,17,18,19)
	MR_init_label8(lexer__string_get_quoted_name_escape_9_0,20,21,22,23,24,25,26,16)
	MR_init_label7(lexer__string_get_quoted_name_escape_9_0,15,30,33,36,41,39,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_quoted_name_escape_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_quoted_name_escape_9_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r6;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 16636 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr3;
	MR_r7 = MR_ctfield(0, MR_tempr5, 1);
	MR_r10 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i131);
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
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_ctfield(0, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__reverse_1_0);

MR_BEGIN_MODULE(lexer_module50)
	MR_init_entry1(lexer__string_get_unicode_escape_11_0);
	MR_init_label8(lexer__string_get_unicode_escape_11_0,147,3,8,12,10,15,18,20)
	MR_init_label8(lexer__string_get_unicode_escape_11_0,19,22,23,24,25,26,17,30)
	MR_init_label8(lexer__string_get_unicode_escape_11_0,16,32,33,36,34,5,40,2)
	MR_init_label7(lexer__string_get_unicode_escape_11_0,45,49,52,51,56,44,59)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_unicode_escape_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_unicode_escape_11_0,147)
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
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__string_get_unicode_escape_11_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(6);
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 16998 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i5);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_unicode_escape_11_0_i8);
MR_def_label(lexer__string_get_unicode_escape_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i5);
	}
	{
	MR_Integer	EncodingInt;
#define	MR_PROC_LABEL	mercury__lexer__string_get_unicode_escape_11_0
{
#line 1420 "lexer.m"

    EncodingInt = 0;
;}
#line 17021 "lexer.c"
	MR_r3 = EncodingInt;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i12);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i15);
MR_def_label(lexer__string_get_unicode_escape_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i15);
MR_def_label(lexer__string_get_unicode_escape_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_unicode_encoding: unexpected Unicode encoding code", 58);
	MR_np_call_localret_ent(require__error_1_0,
		lexer__string_get_unicode_escape_11_0_i15);
MR_def_label(lexer__string_get_unicode_escape_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i17);
	}
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i5);
	}
	if (MR_INT_GT(MR_r1,1114111)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i5);
	}
	if (MR_INT_LT(MR_r1,55296)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i18);
	}
	if (MR_INT_LE(MR_r1,57343)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i5);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,65535)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__string_get_unicode_escape_11_0_i20);
MR_def_label(lexer__string_get_unicode_escape_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i16);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) 2031616 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__string_get_unicode_escape_11_0_i22);
MR_def_label(lexer__string_get_unicode_escape_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = ((MR_Integer) 64512 & (MR_Integer) MR_sv(1));
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__string_get_unicode_escape_11_0_i23);
MR_def_label(lexer__string_get_unicode_escape_11_0,23)
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
		lexer__string_get_unicode_escape_11_0_i24);
MR_def_label(lexer__string_get_unicode_escape_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = ((MR_Integer) 56320 | (MR_Integer) MR_sv(9));
	MR_r1 = (((MR_Integer) 55296 | (MR_Integer) MR_r1) | (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__string_get_unicode_escape_11_0_i25);
MR_def_label(lexer__string_get_unicode_escape_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__string_get_unicode_escape_11_0_i26);
MR_def_label(lexer__string_get_unicode_escape_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i16);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__encode_unicode_char_as_utf8_2_0,
		lexer__string_get_unicode_escape_11_0_i30);
MR_def_label(lexer__string_get_unicode_escape_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i5);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		lexer__string_get_unicode_escape_11_0_i32);
MR_def_label(lexer__string_get_unicode_escape_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		lexer__string_get_unicode_escape_11_0_i33);
MR_def_label(lexer__string_get_unicode_escape_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i34);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i36);
MR_def_label(lexer__string_get_unicode_escape_11_0,36)
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
MR_def_label(lexer__string_get_unicode_escape_11_0,34)
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
MR_def_label(lexer__string_get_unicode_escape_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i40);
MR_def_label(lexer__string_get_unicode_escape_11_0,40)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(8);
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
	MR_r2 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i44);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_unicode_escape_11_0
	Str = (MR_String) MR_sv(2);
	Index = MR_tempr1;
{
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 17239 "lexer.c"
	MR_r1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr4, 1);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i45);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(9) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i49);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_1_0,
		lexer__string_get_unicode_escape_11_0_i52);
MR_def_label(lexer__string_get_unicode_escape_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i51);
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
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i147);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i56);
MR_def_label(lexer__string_get_unicode_escape_11_0,56)
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
MR_def_label(lexer__string_get_unicode_escape_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i59);
MR_def_label(lexer__string_get_unicode_escape_11_0,59)
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
	MR_init_label7(lexer__string_get_hex_escape_10_0,39,4,8,11,9,15,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_hex_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_hex_escape_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r7;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 17369 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r9 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r10 = MR_tempr3;
	MR_r8 = MR_ctfield(0, MR_tempr5, 1);
	MR_r11 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_Word MR_tempr1, MR_tempr2;
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
	MR_tempr2 = MR_r7;
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
	MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i39);
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
	MR_r2 = MR_ctfield(0, MR_sv(6), 0);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(lexer__string_get_hex_escape_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module52)
	MR_init_entry1(lexer__string_finish_hex_escape_10_0);
	MR_init_label5(lexer__string_finish_hex_escape_10_0,57,9,13,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_finish_hex_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i57);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(lexer__string_finish_hex_escape_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__string_finish_hex_escape_10_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_r5;
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 17550 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i6);
	MR_tempr1 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = (MR_Integer) 16;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_finish_hex_escape_10_0_i9);
MR_def_label(lexer__string_finish_hex_escape_10_0,9)
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 17592 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i5);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i13);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_r2 = MR_ctfield(0, MR_sv(5), 0);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__string_finish_hex_escape_10_0,13)
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
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
MR_def_label(lexer__string_finish_hex_escape_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,8);
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module53)
	MR_init_entry1(lexer__string_get_octal_escape_10_0);
	MR_init_label8(lexer__string_get_octal_escape_10_0,40,4,8,11,9,15,18,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_octal_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_octal_escape_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r7;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 17675 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r9 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r10 = MR_tempr3;
	MR_r8 = MR_ctfield(0, MR_tempr5, 1);
	MR_r11 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_Word MR_tempr1, MR_tempr2;
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
	MR_tempr2 = MR_r7;
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
	MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i40);
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
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module54)
	MR_init_entry1(lexer__string_finish_octal_escape_10_0);
	MR_init_label5(lexer__string_finish_octal_escape_10_0,57,9,13,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_finish_octal_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i57);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,9);
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(lexer__string_finish_octal_escape_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__string_finish_octal_escape_10_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_r5;
{
#line 385 "string.opt"
{
    MR_Word list_ptr;
    MR_Word size;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_PROC_LABEL);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c;
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[--size] = c;
        list_ptr = MR_list_tail(list_ptr);
    }
};}
#line 17872 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i6);
	MR_tempr1 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = (MR_Integer) 8;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_finish_octal_escape_10_0_i9);
MR_def_label(lexer__string_finish_octal_escape_10_0,9)
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
#line 35 "char.opt"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 17914 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i5);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i13);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_r2 = MR_ctfield(0, MR_sv(5), 0);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__string_finish_octal_escape_10_0,13)
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
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
MR_def_label(lexer__string_finish_octal_escape_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,10);
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module55)
	MR_init_entry1(lexer__string_start_quoted_name_9_0);
	MR_init_label4(lexer__string_start_quoted_name_9_0,2,5,3,10)
MR_BEGIN_CODE

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
	MR_init_label6(lexer__string_get_name_7_0,32,4,11,10,14,3)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 18059 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr6, 1);
	MR_r8 = MR_ctfield(0, MR_tempr6, 0);
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
	MR_tempr5 = MR_tempr6;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__string_get_name_7_0_i11);
MR_def_label(lexer__string_get_name_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 18144 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_name_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 18182 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
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
	MR_init_label8(lexer__string_get_implementation_defined_literal_rest_7_0,4,8,11,13,9,20,21,22)
	MR_init_label8(lexer__string_get_implementation_defined_literal_rest_7_0,23,24,25,26,27,28,29,30)
	MR_init_label8(lexer__string_get_implementation_defined_literal_rest_7_0,31,32,33,34,35,36,18,39)
	MR_init_label2(lexer__string_get_implementation_defined_literal_rest_7_0,3,177)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_implementation_defined_literal_rest_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r4, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 18233 "lexer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_ctfield(0, MR_tempr4, 1);
	MR_r8 = MR_ctfield(0, MR_tempr4, 0);
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
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i177);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
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
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module58)
	MR_init_entry1(lexer__string_get_variable_7_0);
	MR_init_label6(lexer__string_get_variable_7_0,32,4,11,10,14,3)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 18586 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr6, 1);
	MR_r8 = MR_ctfield(0, MR_tempr6, 0);
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
	MR_tempr5 = MR_tempr6;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__string_get_variable_7_0_i11);
MR_def_label(lexer__string_get_variable_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 18671 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_variable_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 18709 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
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
	MR_init_label3(lexer__string_get_char_code_7_0,4,8,3)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 18758 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__string_get_char_code_7_0
	Character = MR_r1;
{
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 18808 "lexer.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(lexer__string_get_char_code_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,14);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
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
	MR_init_label8(lexer__string_get_binary_2_7_0,50,4,8,51,9,14,16,15)
	MR_init_label3(lexer__string_get_binary_2_7_0,3,23,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_binary_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_binary_2_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 18870 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i51);
	}
	if (MR_INT_NE(MR_r5,49)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i9);
	}
MR_def_label(lexer__string_get_binary_2_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i50);
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 2);
	MR_tempr3 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr3, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 18949 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_binary_2_7_0_i16);
MR_def_label(lexer__string_get_binary_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__string_get_binary_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_binary_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 19005 "lexer.c"
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__string_get_binary_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module61)
	MR_init_entry1(lexer__string_get_binary_7_0);
	MR_init_label6(lexer__string_get_binary_7_0,4,8,33,9,14,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_binary_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r4, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 19074 "lexer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_ctfield(0, MR_tempr4, 1);
	MR_r8 = MR_ctfield(0, MR_tempr4, 0);
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
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i33);
	}
	if (MR_INT_NE(MR_r5,49)) {
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i9);
	}
MR_def_label(lexer__string_get_binary_7_0,33)
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
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__string_get_binary_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,17);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module62)
	MR_init_entry1(lexer__string_get_octal_2_7_0);
	MR_init_label8(lexer__string_get_octal_2_7_0,50,4,11,10,14,16,15,3)
	MR_init_label2(lexer__string_get_octal_2_7_0,23,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_octal_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_octal_2_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 19188 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr6, 1);
	MR_r8 = MR_ctfield(0, MR_tempr6, 0);
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
	MR_tempr5 = MR_tempr6;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_2_7_0_i11);
MR_def_label(lexer__string_get_octal_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i50);
MR_def_label(lexer__string_get_octal_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_octal_2_7_0_i14);
MR_def_label(lexer__string_get_octal_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr3 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr3, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 19272 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_octal_2_7_0_i16);
MR_def_label(lexer__string_get_octal_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_octal_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_octal_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 19328 "lexer.c"
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_octal_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module63)
	MR_init_entry1(lexer__string_get_octal_7_0);
	MR_init_label5(lexer__string_get_octal_7_0,4,11,10,14,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_octal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_octal_7_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_7_0
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 19397 "lexer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r4;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_tempr4 = MR_tempr5;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_7_0_i11);
MR_def_label(lexer__string_get_octal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_octal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module64)
	MR_init_entry1(lexer__string_get_hex_2_7_0);
	MR_init_label8(lexer__string_get_hex_2_7_0,50,4,11,10,14,16,15,3)
	MR_init_label2(lexer__string_get_hex_2_7_0,23,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_hex_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_hex_2_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 19517 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr6, 1);
	MR_r8 = MR_ctfield(0, MR_tempr6, 0);
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
	MR_tempr5 = MR_tempr6;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_2_7_0_i11);
MR_def_label(lexer__string_get_hex_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i50);
MR_def_label(lexer__string_get_hex_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_hex_2_7_0_i14);
MR_def_label(lexer__string_get_hex_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr3 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr3, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 19601 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_hex_2_7_0_i16);
MR_def_label(lexer__string_get_hex_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_hex_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_hex_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 19657 "lexer.c"
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_hex_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module65)
	MR_init_entry1(lexer__string_get_hex_7_0);
	MR_init_label5(lexer__string_get_hex_7_0,4,11,10,14,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_hex_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_hex_7_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_7_0
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 19726 "lexer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r4;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_tempr4 = MR_tempr5;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_7_0_i11);
MR_def_label(lexer__string_get_hex_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_hex_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,19);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module66)
	MR_init_entry1(lexer__string_get_float_exponent_3_7_0);
	MR_init_label8(lexer__string_get_float_exponent_3_7_0,62,4,11,10,14,16,3,24)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 19845 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr6, 1);
	MR_r8 = MR_ctfield(0, MR_tempr6, 0);
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
	MR_tempr5 = MR_tempr6;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_3_7_0_i11);
MR_def_label(lexer__string_get_float_exponent_3_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 19930 "lexer.c"
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
#line 442 "string.opt"
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
#line 19955 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i16);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_3_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_3_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr5, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 20007 "lexer.c"
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
#line 442 "string.opt"
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
#line 20032 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i24);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	MR_r3 = MR_tempr5;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_3_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module67)
	MR_init_entry1(lexer__string_get_float_exponent_7_0);
	MR_init_label8(lexer__string_get_float_exponent_7_0,4,8,10,15,19,22,20,25)
	MR_init_label8(lexer__string_get_float_exponent_7_0,14,9,32,31,35,3,40,42)
	MR_init_label1(lexer__string_get_float_exponent_7_0,48)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 20095 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(4);
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
	MR_r2 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i14);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_7_0
	Str = (MR_String) MR_sv(1);
	Index = MR_tempr1;
{
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 20164 "lexer.c"
	MR_r1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr4, 1);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
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
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
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
#line 442 "string.opt"
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
#line 20300 "lexer.c"
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
	MR_init_label8(lexer__string_get_float_decimals_7_0,80,4,8,11,9,16,14,19)
	MR_init_label3(lexer__string_get_float_decimals_7_0,21,3,30)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 20375 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 20487 "lexer.c"
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
#line 442 "string.opt"
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
#line 20512 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i21);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_float_decimals_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_float_decimals_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr5, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 20564 "lexer.c"
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
#line 442 "string.opt"
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
#line 20589 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i30);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	MR_r3 = MR_tempr5;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_float_decimals_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module69)
	MR_init_entry1(lexer__string_get_int_dot_7_0);
	MR_init_label8(lexer__string_get_int_dot_7_0,4,11,10,14,15,17,3,23)
	MR_init_label2(lexer__string_get_int_dot_7_0,25,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_int_dot_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 20651 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr6, 1);
	MR_r8 = MR_ctfield(0, MR_tempr6, 0);
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
	MR_tempr5 = MR_tempr6;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_int_dot_7_0_i11);
MR_def_label(lexer__string_get_int_dot_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr3 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr3, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 20746 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_int_dot_7_0_i17);
MR_def_label(lexer__string_get_int_dot_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr3 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr3, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 20802 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_int_dot_7_0_i25);
MR_def_label(lexer__string_get_int_dot_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_int_dot_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module70)
	MR_init_entry1(lexer__string_get_number_7_0);
	MR_init_label8(lexer__string_get_number_7_0,81,4,8,11,9,14,19,17)
	MR_init_label7(lexer__string_get_number_7_0,22,24,23,3,33,32,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_number_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_number_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 20875 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_GOTO_LAB(lexer__string_get_number_7_0_i81);
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr3 = MR_r1;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr3, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 20998 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_number_7_0_i24);
MR_def_label(lexer__string_get_number_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_number_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_number_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 21054 "lexer.c"
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
	MR_init_label8(lexer__string_get_zero_7_0,4,8,11,9,14,17,20,23)
	MR_init_label5(lexer__string_get_zero_7_0,26,31,29,34,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_zero_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r4, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 21137 "lexer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_ctfield(0, MR_tempr4, 1);
	MR_r8 = MR_ctfield(0, MR_tempr4, 0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_zero_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module72)
	MR_init_entry1(lexer__string_get_token_6_0);
	MR_init_label4(lexer__string_get_token_6_0,4,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_token_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 21339 "lexer.c"
	MR_r4 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr2;
	MR_r8 = MR_ctfield(0, MR_tempr4, 1);
	MR_r10 = MR_ctfield(0, MR_tempr4, 0);
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
	if (!((((MR_Integer) 1 << ((MR_Integer) MR_r4 & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(4,0), ((MR_Integer) MR_r4 >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_2, (MR_Integer) MR_r4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = (MR_Integer) 1;
	MR_np_tailcall_ent(lexer__execute_string_get_token_action_10_0);
	}
MR_def_label(lexer__string_get_token_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r7;
	MR_proceed();
	}
MR_def_label(lexer__string_get_token_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module73)
	MR_init_entry1(lexer__string_get_token_2_6_0);
	MR_init_label4(lexer__string_get_token_2_6_0,4,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_token_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 21434 "lexer.c"
	MR_r4 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr2;
	MR_r8 = MR_ctfield(0, MR_tempr4, 1);
	MR_r10 = MR_ctfield(0, MR_tempr4, 0);
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
	if (!((((MR_Integer) 1 << ((MR_Integer) MR_r4 & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(4,0), ((MR_Integer) MR_r4 >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_3, (MR_Integer) MR_r4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(lexer__execute_string_get_token_action_10_0);
	}
MR_def_label(lexer__string_get_token_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r7;
	MR_proceed();
	}
MR_def_label(lexer__string_get_token_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module74)
	MR_init_entry1(lexer__execute_string_get_token_action_10_0);
	MR_init_label8(lexer__execute_string_get_token_action_10_0,3,5,7,9,11,13,15,17)
	MR_init_label8(lexer__execute_string_get_token_action_10_0,19,21,23,25,28,29,30,31)
	MR_init_label8(lexer__execute_string_get_token_action_10_0,33,34,35,36,27,39,26,45)
	MR_init_label1(lexer__execute_string_get_token_action_10_0,47)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__execute_string_get_token_action_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i45) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i3) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i5) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i47) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i17) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i25) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i11) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i19) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i21) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i23) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i15) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i7) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i9) MR_AND
		MR_LABEL_AP(lexer__execute_string_get_token_action_10_0_i13));
MR_def_label(lexer__execute_string_get_token_action_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_name_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_variable_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(lexer__execute_string_get_token_action_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_implementation_defined_literal_rest_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_dot_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r7;
	MR_r4 = MR_r3;
	MR_np_tailcall_ent(lexer__string_get_source_line_number_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_number_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r7;
	MR_np_tailcall_ent(lexer__string_skip_to_eol_6_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(lexer__string_start_quoted_name_9_0);
	}
MR_def_label(lexer__execute_string_get_token_action_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_slash_7_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r3, 0);
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
MR_def_label(lexer__execute_string_get_token_action_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r7;
	MR_np_tailcall_ent(lexer__string_get_token_2_6_0);
MR_def_label(lexer__execute_string_get_token_action_10_0,47)
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
	MR_init_label4(lexer__string_skip_to_eol_6_0,28,4,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_skip_to_eol_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(lexer__string_skip_to_eol_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 21730 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r6 = MR_tempr3;
	MR_r4 = MR_ctfield(0, MR_tempr5, 1);
	MR_r7 = MR_ctfield(0, MR_tempr5, 0);
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
		MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i28);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__string_get_token_2_6_0);
MR_def_label(lexer__string_skip_to_eol_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module76)
	MR_init_entry1(lexer__string_get_slash_7_0);
	MR_init_label7(lexer__string_get_slash_7_0,4,8,9,122,12,33,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_slash_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r4, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 21816 "lexer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_ctfield(0, MR_tempr4, 1);
	MR_r8 = MR_ctfield(0, MR_tempr4, 0);
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
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,35)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,36)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,38)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,43)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,45)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,46)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,47)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,58)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,60)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,61)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,62)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,63)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,64)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,92)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_EQ(MR_r5,94)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i122);
	}
	if (MR_INT_NE(MR_r5,126)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i12);
	}
MR_def_label(lexer__string_get_slash_7_0,122)
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
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__string_get_slash_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module77)
	MR_init_entry1(lexer__string_get_comment_7_0);
	MR_init_label4(lexer__string_get_comment_7_0,29,4,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_comment_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_comment_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 21985 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
		MR_GOTO_LAB(lexer__string_get_comment_7_0_i29);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_comment_2_7_0);
MR_def_label(lexer__string_get_comment_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module78)
	MR_init_entry1(lexer__string_get_comment_2_7_0);
	MR_init_label6(lexer__string_get_comment_2_7_0,37,4,8,9,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_comment_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_comment_2_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 22076 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i37);
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
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module79)
	MR_init_entry1(lexer__string_get_source_line_number_7_0);
	MR_init_label8(lexer__string_get_source_line_number_7_0,89,4,8,11,9,17,16,14)
	MR_init_label6(lexer__string_get_source_line_number_7_0,26,28,35,39,3,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_source_line_number_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_source_line_number_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 22192 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_tempr2 = MR_r4;
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
	MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i89);
MR_def_label(lexer__string_get_source_line_number_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_sv(5), 2) - (MR_Integer) MR_tempr1);
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
#line 704 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 22275 "lexer.c"
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
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_sv(5), 2);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_token_6_0);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("invalid line number \140", 21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__string_get_source_line_number_7_0
	Strs = MR_tempr2;
{
#line 711 "string.opt"
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
#line 22348 "lexer.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_source_line_number_7_0_i26);
MR_def_label(lexer__string_get_source_line_number_7_0,26)
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
#line 44 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 22383 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i28);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i39);
MR_def_label(lexer__string_get_source_line_number_7_0,28)
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
		lexer__string_get_source_line_number_7_0_i35);
MR_def_label(lexer__string_get_source_line_number_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("invalid character \140", 19);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_tempr2;
	}
MR_def_label(lexer__string_get_source_line_number_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__string_get_source_line_number_7_0
	Strs = MR_r1;
{
#line 711 "string.opt"
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
#line 22459 "lexer.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_source_line_number_7_0_i43);
MR_def_label(lexer__string_get_source_line_number_7_0,43)
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
	MR_init_label8(lexer__string_get_token_list_max_5_0,4,8,11,9,3,22,16,18)
	MR_init_label3(lexer__string_get_token_list_max_5_0,25,19,21)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 22527 "lexer.c"
	MR_r4 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r9 = MR_tempr2;
	MR_r8 = MR_ctfield(0, MR_tempr4, 1);
	MR_r10 = MR_ctfield(0, MR_tempr4, 0);
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
	if (!((((MR_Integer) 1 << ((MR_Integer) MR_r4 & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(4,0), ((MR_Integer) MR_r4 >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_4, (MR_Integer) MR_r4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(lexer__execute_string_get_token_action_10_0,
		lexer__string_get_token_list_max_5_0_i11);
MR_def_label(lexer__string_get_token_list_max_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r8 = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_r7;
	MR_r4 = MR_r8;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i22) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i25));
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
	MR_r5 = MR_ctfield(0, MR_sv(3), 0);
	MR_r4 = MR_r7;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i22) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i25));
	}
MR_def_label(lexer__string_get_token_list_max_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 10);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i22) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i25));
	}
MR_def_label(lexer__string_get_token_list_max_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i19) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i21));
MR_def_label(lexer__string_get_token_list_max_5_0,16)
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
		lexer__string_get_token_list_max_5_0_i18);
MR_def_label(lexer__string_get_token_list_max_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__string_get_token_list_max_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i19) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i19) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i16));
MR_def_label(lexer__string_get_token_list_max_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__string_get_token_list_max_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module81)
	MR_init_entry1(lexer__string_get_token_list_4_0);
MR_BEGIN_CODE

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
#line 214 "string.opt"

    Length = strlen(Str);
;}
#line 22710 "lexer.c"
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
	MR_init_label8(lexer__token_to_string_2_0,61,42,56,64,3,4,5,6)
	MR_init_label8(lexer__token_to_string_2_0,7,8,9,13,17,18,90,23)
	MR_init_label8(lexer__token_to_string_2_0,93,28,92,34,91,37,47,48)
	MR_init_label3(lexer__token_to_string_2_0,49,50,51)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__token_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(lexer__token_to_string_2_0_i61) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i42) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i56) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i64));
MR_def_label(lexer__token_to_string_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(lexer__token_to_string_2_0_i47) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i48) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i3) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i50) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i5) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i49) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i4) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i17) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i6) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i7) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i8));
MR_def_label(lexer__token_to_string_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("token \'", 7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(lexer__token_to_string_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("variable \140", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(lexer__token_to_string_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(lexer__token_to_string_2_0_i90) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i13) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i51) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i18) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i91) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i9) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i92) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i93));
MR_def_label(lexer__token_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140)\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140}\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140]\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140,\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140. \'", 10);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("end-of-file", 11);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("illegal token (", 15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
	Strs = MR_tempr2;
{
#line 711 "string.opt"
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
#line 22867 "lexer.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(lexer__token_to_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	{
	MR_Float	Flt;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
	Flt = MR_word_to_float(MR_tempr1);
{
#line 259 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str);
};}
#line 22892 "lexer.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("float \140", 7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
	Strs = MR_tempr1;
{
#line 711 "string.opt"
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
#line 22935 "lexer.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(lexer__token_to_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140|\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("implementation-defined \140\044", 25);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
	Strs = MR_tempr2;
{
#line 711 "string.opt"
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
#line 22988 "lexer.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(lexer__token_to_string_2_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		lexer__token_to_string_2_0_i23);
MR_def_label(lexer__token_to_string_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("integer \140", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
	Strs = MR_tempr2;
{
#line 711 "string.opt"
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
#line 23045 "lexer.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
	}
MR_def_label(lexer__token_to_string_2_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		lexer__token_to_string_2_0_i28);
MR_def_label(lexer__token_to_string_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("integer \140", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(lexer__token_to_string_2_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(io__error_message_2_0,
		lexer__token_to_string_2_0_i34);
MR_def_label(lexer__token_to_string_2_0,34)
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
MR_def_label(lexer__token_to_string_2_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
	Character = MR_tempr1;
{
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 23109 "lexer.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		lexer__token_to_string_2_0_i37);
MR_def_label(lexer__token_to_string_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("illegal character <<0x", 22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(lexer__token_to_string_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140 (\'", 10);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140(\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140{\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140[\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("string \"", 8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module83)
	MR_init_entry1(__Unify___lexer__get_token_action_0_0);
MR_BEGIN_CODE

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
	MR_init_label2(__Compare___lexer__get_token_action_0_0,2,3)
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_label2(__Compare___lexer__offset_0_0,2,3)
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_label2(__Compare___lexer__scanned_past_whitespace_0_0,2,3)
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_label2(__Compare___lexer__string_token_context_0_0,2,3)
MR_BEGIN_CODE

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
	MR_init_label8(__Unify___lexer__token_0_0,26,34,39,11,13,16,18,20)
	MR_init_label6(__Unify___lexer__token_0_0,22,24,31,32,40,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lexer__token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i40);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___lexer__token_0_0_i31) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i26) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i34) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i39));
MR_def_label(__Unify___lexer__token_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___lexer__token_0_0_i18) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i32) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i16) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i24) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i22) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i20));
MR_def_label(__Unify___lexer__token_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_tempr1));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
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
	MR_init_label8(__Index___lexer__token_0_0,24,17,23,27,3,4,5,6)
	MR_init_label8(__Index___lexer__token_0_0,7,8,9,10,11,12,13,14)
	MR_init_label7(__Index___lexer__token_0_0,15,16,18,19,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___lexer__token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___lexer__token_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i27));
MR_def_label(__Index___lexer__token_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___lexer__token_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i8));
MR_def_label(__Index___lexer__token_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___lexer__token_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i14));
MR_def_label(__Index___lexer__token_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
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
	MR_init_label8(__Compare___lexer__token_0_0,4,5,6,98,7,62,64,80)
	MR_init_label8(__Compare___lexer__token_0_0,82,90,16,18,23,25,110,30)
	MR_init_label8(__Compare___lexer__token_0_0,32,37,39,43,45,49,51,56)
	MR_init_label5(__Compare___lexer__token_0_0,58,73,75,128,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lexer__token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i128);
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
MR_def_label(__Compare___lexer__token_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___lexer__token_0_0_i128) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i80) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i90));
MR_def_label(__Compare___lexer__token_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 23782 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i110);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 23820 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i82);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i110);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___lexer__token_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i73) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i56) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i43));
MR_def_label(__Compare___lexer__token_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 23869 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i110);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r3 = MR_ctfield(3, MR_sv(1), 1);
	if ((MR_word_to_float(MR_r3) >= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r3) <= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i128);
	}
MR_def_label(__Compare___lexer__token_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 23928 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i110);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r3 = MR_ctfield(3, MR_sv(1), 1);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i110);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r3 = MR_ctfield(3, MR_sv(1), 1);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i45);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i110);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 24004 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i51);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i110);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r3 = MR_ctfield(3, MR_sv(1), 1);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i58);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i110);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 24061 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i75);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i98);
	}
MR_def_label(__Compare___lexer__token_0_0,128)
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
MR_BEGIN_CODE

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
	MR_init_label2(__Compare___lexer__token_context_0_0,2,3)
MR_BEGIN_CODE

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
	MR_init_label5(__Unify___lexer__token_list_0_0,34,14,5,7,1)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
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
	MR_init_label8(__Compare___lexer__token_list_0_0,64,36,7,5,9,11,16,17)
	MR_init_label2(__Compare___lexer__token_list_0_0,19,69)
MR_BEGIN_CODE

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
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
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
MR_BEGIN_CODE

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
	MR_init_label2(__Compare___lexer__unicode_encoding_0_0,2,3)
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_label8(lexer__LCMCpr_get_token_list_2_1_6_0,15,3,4,18,7,9,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__LCMCpr_get_token_list_2_1_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i15) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i18));
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i7) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i9));
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(lexer__get_token_5_0,
		lexer__LCMCpr_get_token_list_2_1_6_0_i4);
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	* (MR_Word *) (MR_sv(5)) = MR_tempr1;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r8 = MR_r2;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = (MR_Word) &MR_tfield(1, MR_tempr1, 2);
	MR_succip_word = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i15) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i18));
	}
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i7) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i7) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i10));
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	* (MR_Word *) (MR_r4) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
#line 1445 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 24501 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	}
	MR_np_call_localret_ent(lexer__get_dot_4_0,
		lexer__LCMCpr_get_token_list_2_1_6_0_i11);
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	* (MR_Word *) (MR_sv(5)) = MR_tempr2;
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) &MR_tfield(1, MR_tempr2, 2);
	MR_succip_word = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i15) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i3) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_get_token_list_2_1_6_0_i18));
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module102)
	MR_init_entry1(lexer__LCMCpr_string_get_token_list_max_1_5_0);
	MR_init_label8(lexer__LCMCpr_string_get_token_list_max_1_5_0,39,4,8,11,9,3,22,16)
	MR_init_label3(lexer__LCMCpr_string_get_token_list_max_1_5_0,25,19,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__LCMCpr_string_get_token_list_max_1_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
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
#line 508 "string.opt"

    Ch = Str[Index];
;}
#line 24582 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r9 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r10 = MR_tempr3;
	MR_r8 = MR_ctfield(0, MR_tempr5, 1);
	MR_r11 = MR_ctfield(0, MR_tempr5, 0);
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
	if (!((((MR_Integer) 1 << ((MR_Integer) MR_r4 & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(4,0), ((MR_Integer) MR_r4 >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_5, (MR_Integer) MR_r4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(lexer__execute_string_get_token_action_10_0,
		lexer__LCMCpr_string_get_token_list_max_1_5_0_i11);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r8 = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_r7;
	MR_r4 = MR_r8;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i22) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i25));
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
	MR_r5 = MR_ctfield(0, MR_sv(3), 0);
	MR_r4 = MR_r7;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i22) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i25));
	}
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 10);
	MR_r5 = MR_ctfield(0, MR_r4, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i22) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i25));
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i19) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i21));
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	* (MR_Word *) (MR_sv(4)) = MR_tempr1;
	MR_r3 = (MR_Word) &MR_tfield(1, MR_tempr1, 2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i39);
	}
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i19) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i19) MR_AND
		MR_LABEL_AP(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16));
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Word *) (MR_sv(4)) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
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
		mercury_data_lexer__type_ctor_info_unicode_encoding_0,
		lexer__unicode_encoding_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_token_list_0,
		lexer__token_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_token_context_0,
		lexer__token_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_token_0,
		lexer__token_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_string_token_context_0,
		lexer__string_token_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_scanned_past_whitespace_0,
		lexer__scanned_past_whitespace_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_offset_0,
		lexer__offset_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lexer__type_ctor_info_get_token_action_0,
		lexer__get_token_action_0_0);
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
		&mercury_data_lexer__type_ctor_info_unicode_encoding_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_token_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_token_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_token_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_string_token_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_scanned_past_whitespace_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_offset_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lexer__type_ctor_info_get_token_action_0);
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
