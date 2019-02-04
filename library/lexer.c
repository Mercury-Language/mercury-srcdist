/*
** Automatically generated from `lexer.m'
** by the Mercury compiler,
** version rotd-2011-08-23, configured for x86_64-unknown-linux-gnu.
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
#line 526 "io.int"
#include "io.mh"

#line 28 "lexer.c"
#line 536 "io.int"
#include "string.mh"

#line 32 "lexer.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "lexer.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "lexer.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "lexer.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "lexer.c"
#line 55 "array.opt"
#include "stm_builtin.mh"

#line 52 "lexer.c"
#line 57 "array.opt"
#include "store.mh"

#line 56 "lexer.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "lexer.c"
#line 14 "version_array.opt"
#include "version_array.mh"

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
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 88 "lexer.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "lexer.c"
#line 4 "int.opt"
#include "int.mh"

#line 96 "lexer.c"
#line 156 "io.opt"
#include "dir.mh"

#line 100 "lexer.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 104 "lexer.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 108 "lexer.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "lexer.c"
#line 113 "lexer.c"
#include "lexer.mh"

#line 116 "lexer.c"
#line 117 "lexer.c"
#ifndef LEXER_DECL_GUARD
#define LEXER_DECL_GUARD

#line 121 "lexer.c"
#line 122 "lexer.c"

#endif
#line 125 "lexer.c"

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
	mercury_data_lexer__type_ctor_info_token_list_0;
MR_decl_label6(lexer__LCMCpr_get_token_list_2_1_6_0, 33,3,5,4,9,11)
MR_decl_label10(lexer__LCMCpr_string_get_token_list_max_1_5_0, 152,6,10,13,14,15,16,17,18,19)
MR_decl_label10(lexer__LCMCpr_string_get_token_list_max_1_5_0, 20,21,22,23,24,25,12,27,11,3)
MR_decl_label3(lexer__LCMCpr_string_get_token_list_max_1_5_0, 30,32,33)
MR_decl_label10(lexer__execute_get_token_action_8_0, 3,6,9,11,14,13,17,16,20,23)
MR_decl_label10(lexer__execute_get_token_action_8_0, 22,26,29,30,28,31,34,37,38,39)
MR_decl_label10(lexer__execute_get_token_action_8_0, 40,42,43,44,45,36,35,33,225,56)
MR_decl_label2(lexer__execute_get_token_action_8_0, 57,212)
MR_decl_label10(lexer__execute_string_get_token_action_10_0, 3,5,7,9,11,13,15,17,19,21)
MR_decl_label10(lexer__execute_string_get_token_action_10_0, 23,28,29,30,31,33,34,35,36,27)
MR_decl_label4(lexer__execute_string_get_token_action_10_0, 39,26,25,45)
MR_decl_label5(lexer__finish_hex_escape_7_0, 56,6,8,12,5)
MR_decl_label5(lexer__finish_octal_escape_7_0, 56,6,8,12,5)
MR_decl_label10(lexer__get_binary_4_0, 2,5,3,7,13,30,15,20,19,18)
MR_decl_label1(lexer__get_binary_4_0, 17)
MR_decl_label10(lexer__get_binary_2_5_0, 111,2,5,3,7,11,13,18,21,15)
MR_decl_label9(lexer__get_binary_2_5_0, 31,30,29,35,38,41,40,37,28)
MR_decl_label7(lexer__get_char_code_4_0, 2,5,3,7,13,15,17)
MR_decl_label9(lexer__get_comment_5_0, 55,2,5,3,7,13,15,18,17)
MR_decl_label10(lexer__get_comment_2_5_0, 65,2,5,3,7,13,15,18,21,17)
MR_decl_label10(lexer__get_dot_4_0, 2,5,3,7,13,80,15,22,20,19)
MR_decl_label10(lexer__get_dot_4_0, 18,28,29,30,31,32,33,34,35,36)
MR_decl_label10(lexer__get_dot_4_0, 37,38,39,40,41,42,43,44,27,26)
MR_decl_label2(lexer__get_dot_4_0, 49,16)
MR_decl_label10(lexer__get_float_decimals_5_0, 126,2,5,3,7,11,13,18,15,32)
MR_decl_label9(lexer__get_float_decimals_5_0, 30,38,37,36,42,45,48,44,29)
MR_decl_label10(lexer__get_float_exponent_5_0, 2,5,3,7,11,13,18,21,17,15)
MR_decl_label7(lexer__get_float_exponent_5_0, 32,31,30,38,36,42,29)
MR_decl_label10(lexer__get_float_exponent_2_5_0, 2,5,3,7,13,30,15,20,18,17)
MR_decl_label10(lexer__get_float_exponent_3_5_0, 107,2,5,3,7,11,13,18,15,32)
MR_decl_label6(lexer__get_float_exponent_3_5_0, 30,36,39,42,38,29)
MR_decl_label10(lexer__get_graphic_5_0, 201,2,5,3,7,11,13,18,15,26)
MR_decl_label10(lexer__get_graphic_5_0, 27,28,29,30,31,32,33,34,35,36)
MR_decl_label10(lexer__get_graphic_5_0, 37,38,39,40,41,42,25,24,46,49)
MR_decl_label2(lexer__get_graphic_5_0, 48,23)
MR_decl_label10(lexer__get_hex_4_0, 2,5,3,7,13,30,15,20,18,17)
MR_decl_label10(lexer__get_hex_2_5_0, 105,2,5,3,7,11,13,18,21,15)
MR_decl_label8(lexer__get_hex_2_5_0, 31,29,35,38,41,40,37,28)
MR_decl_label10(lexer__get_hex_escape_7_0, 67,2,5,3,7,13,15,19,17,23)
MR_decl_label1(lexer__get_hex_escape_7_0, 16)
MR_decl_label10(lexer__get_implementation_defined_literal_rest_4_0, 2,5,3,7,13,58,15,20,23,18)
MR_decl_label10(lexer__get_implementation_defined_literal_rest_4_0, 30,31,32,33,34,35,36,37,38,39)
MR_decl_label10(lexer__get_implementation_defined_literal_rest_4_0, 40,41,42,43,44,45,46,29,28,17)
MR_decl_label1(lexer__get_implementation_defined_literal_rest_4_0, 14)
MR_decl_label10(lexer__get_int_dot_5_0, 2,5,3,7,13,16,19,22,21,18)
MR_decl_label10(lexer__get_int_dot_5_0, 15,32,30,37,40,43,42,39,49,29)
MR_decl_label1(lexer__get_int_dot_5_0, 14)
MR_decl_label10(lexer__get_name_5_0, 83,2,5,3,7,11,13,18,15,26)
MR_decl_label5(lexer__get_name_5_0, 24,30,33,32,23)
MR_decl_label10(lexer__get_number_5_0, 134,2,5,3,7,11,13,18,21,15)
MR_decl_label10(lexer__get_number_5_0, 31,29,35,40,39,38,44,47,50,49)
MR_decl_label2(lexer__get_number_5_0, 46,28)
MR_decl_label10(lexer__get_octal_4_0, 2,5,3,7,13,30,15,20,18,17)
MR_decl_label10(lexer__get_octal_2_5_0, 105,2,5,3,7,11,13,18,21,15)
MR_decl_label8(lexer__get_octal_2_5_0, 31,29,35,38,41,40,37,28)
MR_decl_label10(lexer__get_octal_escape_7_0, 64,2,5,3,7,13,15,19,17,42)
MR_decl_label2(lexer__get_octal_escape_7_0, 23,16)
MR_decl_label10(lexer__get_quoted_name_6_0, 64,2,5,3,7,13,15,17,19,16)
MR_decl_label10(lexer__get_quoted_name_escape_6_0, 189,2,5,3,7,13,15,17,20,25)
MR_decl_label10(lexer__get_quoted_name_escape_6_0, 26,27,28,29,30,31,32,33,34,24)
MR_decl_label7(lexer__get_quoted_name_escape_6_0, 23,38,41,44,49,48,16)
MR_decl_label10(lexer__get_quoted_name_quote_6_0, 2,5,3,7,11,13,18,20,15,32)
MR_decl_label6(lexer__get_quoted_name_quote_6_0, 35,38,40,43,37,31)
MR_decl_label10(lexer__get_slash_5_0, 2,5,3,7,13,15,18,23,24,25)
MR_decl_label10(lexer__get_slash_5_0, 26,27,28,29,30,31,32,33,34,35)
MR_decl_label10(lexer__get_slash_5_0, 36,37,38,39,22,43,21,44,45,17)
MR_decl_label10(lexer__get_source_line_number_6_0, 125,2,5,3,7,13,15,20,18,28)
MR_decl_label10(lexer__get_source_line_number_6_0, 31,30,34,27,41,24,44,46,53,58)
MR_decl_label2(lexer__get_source_line_number_6_0, 17,62)
MR_decl_label10(lexer__get_token_5_0, 2,5,3,7,13,15,19,20,21,22)
MR_decl_label10(lexer__get_token_5_0, 23,24,25,26,27,28,29,30,31,18)
MR_decl_label2(lexer__get_token_5_0, 17,16)
MR_decl_label10(lexer__get_token_2_5_0, 2,5,3,7,13,15,19,20,21,22)
MR_decl_label10(lexer__get_token_2_5_0, 23,24,25,26,27,28,29,30,31,18)
MR_decl_label2(lexer__get_token_2_5_0, 17,16)
MR_decl_label1(lexer__get_token_list_3_0, 2)
MR_decl_label6(lexer__get_token_list_2_6_0, 3,5,4,39,11,13)
MR_decl_label10(lexer__get_unicode_escape_8_0, 124,3,5,7,9,12,4,2,20,23)
MR_decl_label7(lexer__get_unicode_escape_8_0, 21,25,31,33,37,36,34)
MR_decl_label10(lexer__get_variable_5_0, 83,2,5,3,7,11,13,18,15,26)
MR_decl_label5(lexer__get_variable_5_0, 24,30,33,32,23)
MR_decl_label10(lexer__get_zero_4_0, 2,5,3,7,13,59,15,20,18,24)
MR_decl_label8(lexer__get_zero_4_0, 27,30,33,36,42,41,40,17)
MR_decl_label1(lexer__graphic_token_char_1_0, 2)
MR_decl_label9(lexer__skip_to_eol_5_0, 54,2,5,3,7,13,15,17,16)
MR_decl_label4(lexer__start_quoted_name_6_0, 2,5,3,10)
MR_decl_label5(lexer__string_finish_hex_escape_10_0, 56,6,8,12,5)
MR_decl_label5(lexer__string_finish_octal_escape_10_0, 56,6,8,12,5)
MR_decl_label6(lexer__string_get_binary_7_0, 6,10,47,11,16,3)
MR_decl_label10(lexer__string_get_binary_2_7_0, 68,6,10,69,11,16,18,17,3,25)
MR_decl_label1(lexer__string_get_binary_2_7_0, 24)
MR_decl_label4(lexer__string_get_comment_7_0, 43,6,10,3)
MR_decl_label6(lexer__string_get_comment_2_7_0, 53,6,10,11,14,3)
MR_decl_label10(lexer__string_get_dot_7_0, 6,10,16,14,19,12,22,23,24,25)
MR_decl_label10(lexer__string_get_dot_7_0, 26,27,28,29,30,31,32,33,34,35)
MR_decl_label6(lexer__string_get_dot_7_0, 36,37,38,20,41,3)
MR_decl_label10(lexer__string_get_float_decimals_7_0, 88,6,10,13,11,18,16,21,23,3)
MR_decl_label1(lexer__string_get_float_decimals_7_0, 32)
MR_decl_label10(lexer__string_get_float_exponent_7_0, 6,10,12,19,23,26,24,16,11,36)
MR_decl_label6(lexer__string_get_float_exponent_7_0, 35,39,3,43,45,51)
MR_decl_label8(lexer__string_get_float_exponent_3_7_0, 70,6,13,12,16,18,3,26)
MR_decl_label7(lexer__string_get_graphic_7_0, 158,6,10,159,11,32,3)
MR_decl_label5(lexer__string_get_hex_7_0, 6,13,12,16,3)
MR_decl_label10(lexer__string_get_hex_2_7_0, 68,6,13,12,16,18,17,3,25,24)
MR_decl_label7(lexer__string_get_hex_escape_10_0, 55,6,10,13,11,17,3)
MR_decl_label10(lexer__string_get_implementation_defined_literal_rest_7_0, 6,10,13,15,11,22,23,24,25,26)
MR_decl_label10(lexer__string_get_implementation_defined_literal_rest_7_0, 27,28,29,30,31,32,33,34,35,36)
MR_decl_label6(lexer__string_get_implementation_defined_literal_rest_7_0, 37,38,20,41,3,207)
MR_decl_label10(lexer__string_get_int_dot_7_0, 6,13,12,16,17,19,3,25,27,26)
MR_decl_label6(lexer__string_get_name_7_0, 46,6,13,12,16,3)
MR_decl_label10(lexer__string_get_number_7_0, 96,6,10,13,11,16,21,19,24,26)
MR_decl_label4(lexer__string_get_number_7_0, 25,3,35,34)
MR_decl_label5(lexer__string_get_octal_7_0, 6,13,12,16,3)
MR_decl_label10(lexer__string_get_octal_2_7_0, 68,6,13,12,16,18,17,3,25,24)
MR_decl_label8(lexer__string_get_octal_escape_10_0, 56,6,10,13,11,17,20,3)
MR_decl_label6(lexer__string_get_quoted_name_9_0, 52,6,10,11,13,3)
MR_decl_label10(lexer__string_get_quoted_name_escape_9_0, 177,6,10,11,14,19,20,21,22,23)
MR_decl_label10(lexer__string_get_quoted_name_escape_9_0, 24,25,26,27,28,18,17,32,35,38)
MR_decl_label3(lexer__string_get_quoted_name_escape_9_0, 43,41,3)
MR_decl_label10(lexer__string_get_quoted_name_quote_9_0, 6,10,11,14,17,19,15,3,33,35)
MR_decl_label2(lexer__string_get_quoted_name_quote_9_0, 38,31)
MR_decl_label7(lexer__string_get_slash_7_0, 6,10,11,170,14,35,3)
MR_decl_label10(lexer__string_get_source_line_number_7_0, 98,6,10,13,11,19,18,26,16,30)
MR_decl_label4(lexer__string_get_source_line_number_7_0, 37,42,3,46)
MR_decl_label10(lexer__string_get_token_6_0, 6,10,13,14,15,16,17,18,19,20)
MR_decl_label8(lexer__string_get_token_6_0, 21,22,23,24,25,12,11,3)
MR_decl_label10(lexer__string_get_token_2_6_0, 6,10,13,14,15,16,17,18,19,20)
MR_decl_label8(lexer__string_get_token_2_6_0, 21,22,23,24,25,12,11,3)
MR_decl_label10(lexer__string_get_token_list_max_5_0, 6,10,13,14,15,16,17,18,19,20)
MR_decl_label10(lexer__string_get_token_list_max_5_0, 21,22,23,24,25,12,27,11,3,30)
MR_decl_label3(lexer__string_get_token_list_max_5_0, 32,33,36)
MR_decl_label10(lexer__string_get_unicode_escape_11_0, 113,3,5,7,9,13,4,2,24,28)
MR_decl_label4(lexer__string_get_unicode_escape_11_0, 31,30,21,37)
MR_decl_label6(lexer__string_get_variable_7_0, 46,6,13,12,16,3)
MR_decl_label10(lexer__string_get_zero_7_0, 6,10,13,11,22,26,19,16,30,33)
MR_decl_label7(lexer__string_get_zero_7_0, 36,39,44,42,47,3,56)
MR_decl_label4(lexer__string_skip_to_eol_6_0, 42,6,10,3)
MR_decl_label4(lexer__string_start_quoted_name_9_0, 2,5,3,10)
MR_decl_label2(lexer__string_ungetchar_3_0, 6,3)
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
MR_decl_static(lexer__get_context_4_0)
MR_def_extern_entry(lexer__graphic_token_char_1_0)
MR_decl_static(lexer__get_graphic_5_0)
MR_decl_static(lexer__get_dot_4_0)
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 1404 "lexer.c"
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

MR_decl_entry(io__read_char_code_2_4_0);
MR_decl_entry(char__det_from_int_2_0);
MR_decl_entry(string__semidet_from_rev_char_list_2_0);
MR_decl_entry(io__putback_char_2_4_0);

MR_BEGIN_MODULE(lexer_module2)
	MR_init_entry1(lexer__get_graphic_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_graphic_5_0);
	MR_init_label10(lexer__get_graphic_5_0,201,2,5,3,7,11,13,18,15,26)
	MR_init_label10(lexer__get_graphic_5_0,27,28,29,30,31,32,33,34,35,36)
	MR_init_label10(lexer__get_graphic_5_0,37,38,39,40,41,42,25,24,46,49)
	MR_init_label2(lexer__get_graphic_5_0,48,23)
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
MR_def_label(lexer__get_graphic_5_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_graphic_5_0_i2);
MR_def_label(lexer__get_graphic_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_graphic_5_0_i5);
MR_def_label(lexer__get_graphic_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i13);
MR_def_label(lexer__get_graphic_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 1555 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_graphic_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_5_0_i13);
MR_def_label(lexer__get_graphic_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
{
#line 968 "io.opt"
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
#line 1587 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 1607 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_graphic_5_0_i11);
MR_def_label(lexer__get_graphic_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_graphic_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_graphic_5_0_i18);
MR_def_label(lexer__get_graphic_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i48);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_graphic_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i23);
	}
	if (MR_INT_NE(MR_r2,33)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i26);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,35)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,36)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,38)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,42)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,43)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,45)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,46)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i33);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,47)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i34);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,58)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,60)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i36);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,61)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,62)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i38);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,63)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,64)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,92)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,94)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i42);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i25);
MR_def_label(lexer__get_graphic_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,126)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i24);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_graphic_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_graphic_5_0_i201);
	}
MR_def_label(lexer__get_graphic_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_graphic_5_0_i46);
MR_def_label(lexer__get_graphic_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_graphic_5_0_i49);
MR_def_label(lexer__get_graphic_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_graphic_5_0_i48);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_graphic_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_graphic_5_0,23)
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
	MR_init_label10(lexer__get_dot_4_0,2,5,3,7,13,80,15,22,20,19)
	MR_init_label10(lexer__get_dot_4_0,18,28,29,30,31,32,33,34,35,36)
	MR_init_label10(lexer__get_dot_4_0,37,38,39,40,41,42,43,44,27,26)
	MR_init_label2(lexer__get_dot_4_0,49,16)
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
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_dot_4_0_i2);
MR_def_label(lexer__get_dot_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_dot_4_0_i5);
MR_def_label(lexer__get_dot_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_dot_4_0_i13);
MR_def_label(lexer__get_dot_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 1885 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_dot_4_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_4_0_i13);
MR_def_label(lexer__get_dot_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_4_0
{
#line 968 "io.opt"
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
#line 1916 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 1936 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_dot_4_0_i13);
MR_def_label(lexer__get_dot_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i15);
	}
MR_def_label(lexer__get_dot_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_dot_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__get_dot_4_0_i22);
MR_def_label(lexer__get_dot_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i20);
	}
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(lexer__get_dot_4_0_i19);
MR_def_label(lexer__get_dot_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__get_dot_4_0_i18);
	}
	MR_r2 = MR_r1;
MR_def_label(lexer__get_dot_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_dot_4_0_i80);
MR_def_label(lexer__get_dot_4_0,18)
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_graphic_5_0);
MR_def_label(lexer__get_dot_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_dot_4_0_i49);
MR_def_label(lexer__get_dot_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_dot_4_0,16)
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


MR_BEGIN_MODULE(lexer_module4)
	MR_init_entry1(lexer__get_quoted_name_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_quoted_name_6_0);
	MR_init_label10(lexer__get_quoted_name_6_0,64,2,5,3,7,13,15,17,19,16)
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
MR_def_label(lexer__get_quoted_name_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_quoted_name_6_0_i2);
MR_def_label(lexer__get_quoted_name_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_6_0_i5);
MR_def_label(lexer__get_quoted_name_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_quoted_name_6_0_i13);
MR_def_label(lexer__get_quoted_name_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 2212 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_6_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_quoted_name_6_0_i13);
MR_def_label(lexer__get_quoted_name_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_6_0
{
#line 968 "io.opt"
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
#line 2243 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 2263 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_6_0_i13);
MR_def_label(lexer__get_quoted_name_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i16);
	}
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_quote_6_0);
MR_def_label(lexer__get_quoted_name_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_quoted_name_6_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_escape_6_0);
MR_def_label(lexer__get_quoted_name_6_0,19)
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
	MR_GOTO_LAB(lexer__get_quoted_name_6_0_i64);
	}
MR_def_label(lexer__get_quoted_name_6_0,16)
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

MR_BEGIN_MODULE(lexer_module5)
	MR_init_entry1(lexer__get_quoted_name_quote_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_quoted_name_quote_6_0);
	MR_init_label10(lexer__get_quoted_name_quote_6_0,2,5,3,7,11,13,18,20,15,32)
	MR_init_label6(lexer__get_quoted_name_quote_6_0,35,38,40,43,37,31)
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_quoted_name_quote_6_0_i2);
MR_def_label(lexer__get_quoted_name_quote_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_quote_6_0_i5);
MR_def_label(lexer__get_quoted_name_quote_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i13);
MR_def_label(lexer__get_quoted_name_quote_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 2386 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i13);
MR_def_label(lexer__get_quoted_name_quote_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
{
#line 968 "io.opt"
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
#line 2418 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 2438 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_quote_6_0_i11);
MR_def_label(lexer__get_quoted_name_quote_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_quoted_name_quote_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_quoted_name_quote_6_0_i18);
MR_def_label(lexer__get_quoted_name_quote_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i37);
	}
	if (MR_INT_NE(MR_sv(2),39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i20);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i43);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i31);
	}
	if ((MR_r2 != MR_sv(2))) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i32);
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
MR_def_label(lexer__get_quoted_name_quote_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_quoted_name_quote_6_0_i35);
MR_def_label(lexer__get_quoted_name_quote_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_quoted_name_quote_6_0_i38);
MR_def_label(lexer__get_quoted_name_quote_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i37);
	}
	if (MR_INT_NE(MR_sv(2),39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i40);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_6_0_i43);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lexer.m: unknown quote character", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__get_quoted_name_quote_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_quote_6_0,31)
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

MR_BEGIN_MODULE(lexer_module6)
	MR_init_entry1(lexer__get_quoted_name_escape_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_quoted_name_escape_6_0);
	MR_init_label10(lexer__get_quoted_name_escape_6_0,189,2,5,3,7,13,15,17,20,25)
	MR_init_label10(lexer__get_quoted_name_escape_6_0,26,27,28,29,30,31,32,33,34,24)
	MR_init_label7(lexer__get_quoted_name_escape_6_0,23,38,41,44,49,48,16)
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
MR_def_label(lexer__get_quoted_name_escape_6_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_quoted_name_escape_6_0_i2);
MR_def_label(lexer__get_quoted_name_escape_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_escape_6_0_i5);
MR_def_label(lexer__get_quoted_name_escape_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i13);
MR_def_label(lexer__get_quoted_name_escape_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 2612 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i13);
MR_def_label(lexer__get_quoted_name_escape_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_6_0
{
#line 968 "io.opt"
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
#line 2643 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 2663 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_quoted_name_escape_6_0_i13);
MR_def_label(lexer__get_quoted_name_escape_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_escape_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i16);
	}
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_quoted_name_6_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i189);
MR_def_label(lexer__get_quoted_name_escape_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i25);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 34;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
MR_def_label(lexer__get_quoted_name_escape_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i26);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 39;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
MR_def_label(lexer__get_quoted_name_escape_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i27);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 92;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
MR_def_label(lexer__get_quoted_name_escape_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i28);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 96;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
MR_def_label(lexer__get_quoted_name_escape_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,97)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i29);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
MR_def_label(lexer__get_quoted_name_escape_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i30);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
MR_def_label(lexer__get_quoted_name_escape_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,102)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i31);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
MR_def_label(lexer__get_quoted_name_escape_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,110)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i32);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
MR_def_label(lexer__get_quoted_name_escape_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,114)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i33);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
MR_def_label(lexer__get_quoted_name_escape_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,116)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i34);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i24);
MR_def_label(lexer__get_quoted_name_escape_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i23);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 11;
MR_def_label(lexer__get_quoted_name_escape_6_0,24)
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
MR_def_label(lexer__get_quoted_name_escape_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i38);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_hex_escape_7_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,117)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i41);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_unicode_escape_8_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,85)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i44);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 8;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__get_unicode_escape_8_0);
MR_def_label(lexer__get_quoted_name_escape_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_quoted_name_escape_6_0_i49);
MR_def_label(lexer__get_quoted_name_escape_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_6_0_i48);
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
MR_def_label(lexer__get_quoted_name_escape_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_quoted_name_escape_6_0,16)
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
MR_decl_entry(char__is_hex_digit_2_0);

MR_BEGIN_MODULE(lexer_module7)
	MR_init_entry1(lexer__get_unicode_escape_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_unicode_escape_8_0);
	MR_init_label10(lexer__get_unicode_escape_8_0,124,3,5,7,9,12,4,2,20,23)
	MR_init_label7(lexer__get_unicode_escape_8_0,21,25,31,33,37,36,34)
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
MR_def_label(lexer__get_unicode_escape_8_0,124)
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
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i4);
	}
	if (MR_INT_GT(MR_r2,1114111)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i4);
	}
	if (MR_INT_LT(MR_r2,55296)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i9);
	}
	if (MR_INT_LE(MR_r2,57343)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i4);
	}
MR_def_label(lexer__get_unicode_escape_8_0,9)
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
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 2990 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i4);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__get_unicode_escape_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
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
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_unicode_escape_8_0_i20);
MR_def_label(lexer__get_unicode_escape_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i23);
MR_def_label(lexer__get_unicode_escape_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i31);
MR_def_label(lexer__get_unicode_escape_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 3053 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i25);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i31);
MR_def_label(lexer__get_unicode_escape_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_8_0
{
#line 968 "io.opt"
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
#line 3084 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 3104 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_8_0_i31);
MR_def_label(lexer__get_unicode_escape_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i33);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__get_unicode_escape_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i34);
	}
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_unicode_escape_8_0_i37);
MR_def_label(lexer__get_unicode_escape_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i36);
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
	MR_GOTO_LAB(lexer__get_unicode_escape_8_0_i124);
	}
MR_def_label(lexer__get_unicode_escape_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,5);
	MR_decr_sp_and_return(7);
MR_def_label(lexer__get_unicode_escape_8_0,34)
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


MR_BEGIN_MODULE(lexer_module8)
	MR_init_entry1(lexer__get_hex_escape_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_hex_escape_7_0);
	MR_init_label10(lexer__get_hex_escape_7_0,67,2,5,3,7,13,15,19,17,23)
	MR_init_label1(lexer__get_hex_escape_7_0,16)
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
MR_def_label(lexer__get_hex_escape_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_hex_escape_7_0_i2);
MR_def_label(lexer__get_hex_escape_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_escape_7_0_i5);
MR_def_label(lexer__get_hex_escape_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_hex_escape_7_0_i13);
MR_def_label(lexer__get_hex_escape_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 3218 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_escape_7_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_hex_escape_7_0_i13);
MR_def_label(lexer__get_hex_escape_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_7_0
{
#line 968 "io.opt"
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
#line 3249 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 3269 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_escape_7_0_i13);
MR_def_label(lexer__get_hex_escape_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,1)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_hex_escape_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i16);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_escape_7_0_i19);
MR_def_label(lexer__get_hex_escape_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i17);
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
	MR_GOTO_LAB(lexer__get_hex_escape_7_0_i67);
	}
MR_def_label(lexer__get_hex_escape_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_hex_escape_7_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__finish_hex_escape_7_0);
MR_def_label(lexer__get_hex_escape_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_hex_escape_7_0,16)
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


MR_BEGIN_MODULE(lexer_module9)
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
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 3398 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module10)
	MR_init_entry1(lexer__get_octal_escape_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_octal_escape_7_0);
	MR_init_label10(lexer__get_octal_escape_7_0,64,2,5,3,7,13,15,19,17,42)
	MR_init_label2(lexer__get_octal_escape_7_0,23,16)
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
MR_def_label(lexer__get_octal_escape_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_octal_escape_7_0_i2);
MR_def_label(lexer__get_octal_escape_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_escape_7_0_i5);
MR_def_label(lexer__get_octal_escape_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_octal_escape_7_0_i13);
MR_def_label(lexer__get_octal_escape_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 3488 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_escape_7_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_octal_escape_7_0_i13);
MR_def_label(lexer__get_octal_escape_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_7_0
{
#line 968 "io.opt"
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
#line 3519 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 3539 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_escape_7_0_i13);
MR_def_label(lexer__get_octal_escape_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,1)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_octal_escape_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i16);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_escape_7_0_i19);
MR_def_label(lexer__get_octal_escape_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i17);
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
	MR_GOTO_LAB(lexer__get_octal_escape_7_0_i64);
	}
MR_def_label(lexer__get_octal_escape_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_octal_escape_7_0_i23);
	}
MR_def_label(lexer__get_octal_escape_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__finish_octal_escape_7_0);
MR_def_label(lexer__get_octal_escape_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_octal_escape_7_0_i42);
MR_def_label(lexer__get_octal_escape_7_0,16)
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
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 3676 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module12)
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
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(lexer__get_quoted_name_6_0,
		lexer__start_quoted_name_6_0_i2);
MR_def_label(lexer__start_quoted_name_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(lexer__start_quoted_name_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(lexer__start_quoted_name_6_0,
		lexer__start_quoted_name_6_0_i5);
MR_def_label(lexer__start_quoted_name_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
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

MR_BEGIN_MODULE(lexer_module13)
	MR_init_entry1(lexer__get_name_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_name_5_0);
	MR_init_label10(lexer__get_name_5_0,83,2,5,3,7,11,13,18,15,26)
	MR_init_label5(lexer__get_name_5_0,24,30,33,32,23)
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
MR_def_label(lexer__get_name_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_name_5_0_i2);
MR_def_label(lexer__get_name_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_name_5_0_i5);
MR_def_label(lexer__get_name_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_name_5_0_i13);
MR_def_label(lexer__get_name_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 3824 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_name_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_name_5_0_i13);
MR_def_label(lexer__get_name_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
{
#line 968 "io.opt"
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
#line 3856 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 3876 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_name_5_0_i11);
MR_def_label(lexer__get_name_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_name_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_name_5_0_i18);
MR_def_label(lexer__get_name_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i32);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_name_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i23);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__get_name_5_0_i26);
MR_def_label(lexer__get_name_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i24);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_name_5_0_i83);
MR_def_label(lexer__get_name_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_name_5_0_i30);
MR_def_label(lexer__get_name_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_name_5_0_i33);
MR_def_label(lexer__get_name_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_name_5_0_i32);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_name_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,12);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_name_5_0,23)
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

MR_BEGIN_MODULE(lexer_module14)
	MR_init_entry1(lexer__get_implementation_defined_literal_rest_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_implementation_defined_literal_rest_4_0);
	MR_init_label10(lexer__get_implementation_defined_literal_rest_4_0,2,5,3,7,13,58,15,20,23,18)
	MR_init_label10(lexer__get_implementation_defined_literal_rest_4_0,30,31,32,33,34,35,36,37,38,39)
	MR_init_label10(lexer__get_implementation_defined_literal_rest_4_0,40,41,42,43,44,45,46,29,28,17)
	MR_init_label1(lexer__get_implementation_defined_literal_rest_4_0,14)
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
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_implementation_defined_literal_rest_4_0_i2);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_implementation_defined_literal_rest_4_0_i5);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i13);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_implementation_defined_literal_rest_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 4019 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i13);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_implementation_defined_literal_rest_4_0
{
#line 968 "io.opt"
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
#line 4050 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4070 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_implementation_defined_literal_rest_4_0_i13);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i15);
	}
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i17);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		lexer__get_implementation_defined_literal_rest_4_0_i20);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(lexer__get_name_5_0,
		lexer__get_implementation_defined_literal_rest_4_0_i23);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i33);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i34);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i36);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i38);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i42);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i43);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i44);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i45);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i46);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i29);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__get_implementation_defined_literal_rest_4_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_graphic_5_0);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_implementation_defined_literal_rest_4_0_i58);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(2), 0);
MR_def_label(lexer__get_implementation_defined_literal_rest_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module15)
	MR_init_entry1(lexer__get_variable_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_variable_5_0);
	MR_init_label10(lexer__get_variable_5_0,83,2,5,3,7,11,13,18,15,26)
	MR_init_label5(lexer__get_variable_5_0,24,30,33,32,23)
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
MR_def_label(lexer__get_variable_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_variable_5_0_i2);
MR_def_label(lexer__get_variable_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_variable_5_0_i5);
MR_def_label(lexer__get_variable_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_variable_5_0_i13);
MR_def_label(lexer__get_variable_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 4352 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_variable_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_variable_5_0_i13);
MR_def_label(lexer__get_variable_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
{
#line 968 "io.opt"
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
#line 4384 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4404 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_variable_5_0_i11);
MR_def_label(lexer__get_variable_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_variable_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_variable_5_0_i18);
MR_def_label(lexer__get_variable_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i32);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_variable_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i23);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__get_variable_5_0_i26);
MR_def_label(lexer__get_variable_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i24);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_variable_5_0_i83);
MR_def_label(lexer__get_variable_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_variable_5_0_i30);
MR_def_label(lexer__get_variable_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_variable_5_0_i33);
MR_def_label(lexer__get_variable_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_variable_5_0_i32);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_variable_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,13);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_variable_5_0,23)
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


MR_BEGIN_MODULE(lexer_module16)
	MR_init_entry1(lexer__get_char_code_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_char_code_4_0);
	MR_init_label7(lexer__get_char_code_4_0,2,5,3,7,13,15,17)
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
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_char_code_4_0_i2);
MR_def_label(lexer__get_char_code_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_char_code_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_char_code_4_0_i5);
MR_def_label(lexer__get_char_code_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_char_code_4_0_i13);
MR_def_label(lexer__get_char_code_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 4542 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_char_code_4_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_char_code_4_0_i13);
MR_def_label(lexer__get_char_code_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
{
#line 968 "io.opt"
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
#line 4573 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4593 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_char_code_4_0_i13);
MR_def_label(lexer__get_char_code_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(lexer__get_char_code_4_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,14);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_char_code_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(lexer__get_char_code_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_4_0
	Character = MR_r1;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 4628 "lexer.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(lexer__get_char_code_4_0,17)
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


MR_BEGIN_MODULE(lexer_module17)
	MR_init_entry1(lexer__get_binary_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_binary_2_5_0);
	MR_init_label10(lexer__get_binary_2_5_0,111,2,5,3,7,11,13,18,21,15)
	MR_init_label9(lexer__get_binary_2_5_0,31,30,29,35,38,41,40,37,28)
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
MR_def_label(lexer__get_binary_2_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_binary_2_5_0_i2);
MR_def_label(lexer__get_binary_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_binary_2_5_0_i5);
MR_def_label(lexer__get_binary_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_binary_2_5_0_i13);
MR_def_label(lexer__get_binary_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 4704 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_2_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_binary_2_5_0_i13);
MR_def_label(lexer__get_binary_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
{
#line 968 "io.opt"
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
#line 4736 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4756 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_binary_2_5_0_i11);
MR_def_label(lexer__get_binary_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_binary_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_binary_2_5_0_i18);
MR_def_label(lexer__get_binary_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i37);
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_binary_2_5_0_i21);
MR_def_label(lexer__get_binary_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i40);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_binary_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i28);
	}
	if (MR_INT_NE(MR_r2,48)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_binary_2_5_0_i30);
MR_def_label(lexer__get_binary_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,49)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_binary_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_binary_2_5_0_i111);
	}
MR_def_label(lexer__get_binary_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_binary_2_5_0_i35);
MR_def_label(lexer__get_binary_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_binary_2_5_0_i38);
MR_def_label(lexer__get_binary_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i37);
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_binary_2_5_0_i41);
MR_def_label(lexer__get_binary_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_5_0_i40);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_binary_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_binary_2_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_binary_2_5_0,28)
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
	MR_init_entry1(lexer__get_binary_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_binary_4_0);
	MR_init_label10(lexer__get_binary_4_0,2,5,3,7,13,30,15,20,19,18)
	MR_init_label1(lexer__get_binary_4_0,17)
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
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_binary_4_0_i2);
MR_def_label(lexer__get_binary_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_binary_4_0_i5);
MR_def_label(lexer__get_binary_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_binary_4_0_i13);
MR_def_label(lexer__get_binary_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 4925 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_4_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_binary_4_0_i13);
MR_def_label(lexer__get_binary_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_4_0
{
#line 968 "io.opt"
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
#line 4956 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4976 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_binary_4_0_i13);
MR_def_label(lexer__get_binary_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i15);
	}
MR_def_label(lexer__get_binary_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,17);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_binary_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i17);
	}
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i20);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(lexer__get_binary_4_0_i19);
MR_def_label(lexer__get_binary_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,49)) {
		MR_GOTO_LAB(lexer__get_binary_4_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_binary_4_0,19)
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
MR_def_label(lexer__get_binary_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_binary_4_0_i30);
MR_def_label(lexer__get_binary_4_0,17)
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


MR_BEGIN_MODULE(lexer_module19)
	MR_init_entry1(lexer__get_octal_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_octal_2_5_0);
	MR_init_label10(lexer__get_octal_2_5_0,105,2,5,3,7,11,13,18,21,15)
	MR_init_label8(lexer__get_octal_2_5_0,31,29,35,38,41,40,37,28)
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
MR_def_label(lexer__get_octal_2_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_octal_2_5_0_i2);
MR_def_label(lexer__get_octal_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_2_5_0_i5);
MR_def_label(lexer__get_octal_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_octal_2_5_0_i13);
MR_def_label(lexer__get_octal_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 5108 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_2_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_octal_2_5_0_i13);
MR_def_label(lexer__get_octal_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
{
#line 968 "io.opt"
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
#line 5140 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5160 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_2_5_0_i11);
MR_def_label(lexer__get_octal_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_octal_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_octal_2_5_0_i18);
MR_def_label(lexer__get_octal_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i37);
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_octal_2_5_0_i21);
MR_def_label(lexer__get_octal_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i40);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_octal_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_2_5_0_i31);
MR_def_label(lexer__get_octal_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i29);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_octal_2_5_0_i105);
MR_def_label(lexer__get_octal_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_octal_2_5_0_i35);
MR_def_label(lexer__get_octal_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_octal_2_5_0_i38);
MR_def_label(lexer__get_octal_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i37);
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_octal_2_5_0_i41);
MR_def_label(lexer__get_octal_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_5_0_i40);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_octal_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_octal_2_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_octal_2_5_0,28)
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
	MR_init_entry1(lexer__get_octal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_octal_4_0);
	MR_init_label10(lexer__get_octal_4_0,2,5,3,7,13,30,15,20,18,17)
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
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_octal_4_0_i2);
MR_def_label(lexer__get_octal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_4_0_i5);
MR_def_label(lexer__get_octal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_octal_4_0_i13);
MR_def_label(lexer__get_octal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 5321 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_4_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_octal_4_0_i13);
MR_def_label(lexer__get_octal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_4_0
{
#line 968 "io.opt"
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
#line 5352 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5372 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_octal_4_0_i13);
MR_def_label(lexer__get_octal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i15);
	}
MR_def_label(lexer__get_octal_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_octal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i17);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_4_0_i20);
MR_def_label(lexer__get_octal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_4_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_octal_2_5_0);
MR_def_label(lexer__get_octal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_octal_4_0_i30);
MR_def_label(lexer__get_octal_4_0,17)
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
	MR_init_entry1(lexer__get_hex_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_hex_2_5_0);
	MR_init_label10(lexer__get_hex_2_5_0,105,2,5,3,7,11,13,18,21,15)
	MR_init_label8(lexer__get_hex_2_5_0,31,29,35,38,41,40,37,28)
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
MR_def_label(lexer__get_hex_2_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_hex_2_5_0_i2);
MR_def_label(lexer__get_hex_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_2_5_0_i5);
MR_def_label(lexer__get_hex_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_hex_2_5_0_i13);
MR_def_label(lexer__get_hex_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 5490 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_2_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_hex_2_5_0_i13);
MR_def_label(lexer__get_hex_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
{
#line 968 "io.opt"
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
#line 5522 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5542 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_2_5_0_i11);
MR_def_label(lexer__get_hex_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_hex_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_hex_2_5_0_i18);
MR_def_label(lexer__get_hex_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i37);
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_hex_2_5_0_i21);
MR_def_label(lexer__get_hex_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i40);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_hex_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_2_5_0_i31);
MR_def_label(lexer__get_hex_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i29);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_hex_2_5_0_i105);
MR_def_label(lexer__get_hex_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_hex_2_5_0_i35);
MR_def_label(lexer__get_hex_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_hex_2_5_0_i38);
MR_def_label(lexer__get_hex_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i37);
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_hex_2_5_0_i41);
MR_def_label(lexer__get_hex_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_5_0_i40);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_hex_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_hex_2_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_hex_2_5_0,28)
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
	MR_init_entry1(lexer__get_hex_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_hex_4_0);
	MR_init_label10(lexer__get_hex_4_0,2,5,3,7,13,30,15,20,18,17)
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
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_hex_4_0_i2);
MR_def_label(lexer__get_hex_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_4_0_i5);
MR_def_label(lexer__get_hex_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_hex_4_0_i13);
MR_def_label(lexer__get_hex_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 5703 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_4_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_hex_4_0_i13);
MR_def_label(lexer__get_hex_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_4_0
{
#line 968 "io.opt"
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
#line 5734 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5754 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_hex_4_0_i13);
MR_def_label(lexer__get_hex_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i15);
	}
MR_def_label(lexer__get_hex_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,19);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_hex_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i17);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_4_0_i20);
MR_def_label(lexer__get_hex_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_4_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_hex_2_5_0);
MR_def_label(lexer__get_hex_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_hex_4_0_i30);
MR_def_label(lexer__get_hex_4_0,17)
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

MR_BEGIN_MODULE(lexer_module23)
	MR_init_entry1(lexer__get_float_exponent_3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_float_exponent_3_5_0);
	MR_init_label10(lexer__get_float_exponent_3_5_0,107,2,5,3,7,11,13,18,15,32)
	MR_init_label6(lexer__get_float_exponent_3_5_0,30,36,39,42,38,29)
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
MR_def_label(lexer__get_float_exponent_3_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_float_exponent_3_5_0_i2);
MR_def_label(lexer__get_float_exponent_3_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_3_5_0_i5);
MR_def_label(lexer__get_float_exponent_3_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i13);
MR_def_label(lexer__get_float_exponent_3_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 5873 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i13);
MR_def_label(lexer__get_float_exponent_3_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
{
#line 968 "io.opt"
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
#line 5905 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5925 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_3_5_0_i11);
MR_def_label(lexer__get_float_exponent_3_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_float_exponent_3_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_float_exponent_3_5_0_i18);
MR_def_label(lexer__get_float_exponent_3_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i38);
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
#line 5979 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i42);
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
MR_def_label(lexer__get_float_exponent_3_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_3_5_0_i32);
MR_def_label(lexer__get_float_exponent_3_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i30);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i107);
MR_def_label(lexer__get_float_exponent_3_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_float_exponent_3_5_0_i36);
MR_def_label(lexer__get_float_exponent_3_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_float_exponent_3_5_0_i39);
MR_def_label(lexer__get_float_exponent_3_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i38);
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
#line 6050 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_5_0_i42);
	MR_r2 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_3_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_3_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_3_5_0,29)
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
	MR_init_entry1(lexer__get_float_exponent_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_float_exponent_2_5_0);
	MR_init_label10(lexer__get_float_exponent_2_5_0,2,5,3,7,13,30,15,20,18,17)
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_float_exponent_2_5_0_i2);
MR_def_label(lexer__get_float_exponent_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_2_5_0_i5);
MR_def_label(lexer__get_float_exponent_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i13);
MR_def_label(lexer__get_float_exponent_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 6130 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i13);
MR_def_label(lexer__get_float_exponent_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_5_0
{
#line 968 "io.opt"
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
#line 6161 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6181 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_2_5_0_i13);
MR_def_label(lexer__get_float_exponent_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i15);
	}
MR_def_label(lexer__get_float_exponent_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i17);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_2_5_0_i20);
MR_def_label(lexer__get_float_exponent_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_5_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_3_5_0);
MR_def_label(lexer__get_float_exponent_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_float_exponent_2_5_0_i30);
MR_def_label(lexer__get_float_exponent_2_5_0,17)
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


MR_BEGIN_MODULE(lexer_module25)
	MR_init_entry1(lexer__get_float_exponent_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_float_exponent_5_0);
	MR_init_label10(lexer__get_float_exponent_5_0,2,5,3,7,11,13,18,21,17,15)
	MR_init_label7(lexer__get_float_exponent_5_0,32,31,30,38,36,42,29)
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_float_exponent_5_0_i2);
MR_def_label(lexer__get_float_exponent_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_5_0_i5);
MR_def_label(lexer__get_float_exponent_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_exponent_5_0_i13);
MR_def_label(lexer__get_float_exponent_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 6297 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_exponent_5_0_i13);
MR_def_label(lexer__get_float_exponent_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
{
#line 968 "io.opt"
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
#line 6329 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6349 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_exponent_5_0_i11);
MR_def_label(lexer__get_float_exponent_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_float_exponent_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_float_exponent_5_0_i18);
MR_def_label(lexer__get_float_exponent_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i17);
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
#line 6403 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_5_0_i21);
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
MR_def_label(lexer__get_float_exponent_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i29);
	}
	if (MR_INT_NE(MR_r2,43)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(lexer__get_float_exponent_5_0_i31);
MR_def_label(lexer__get_float_exponent_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,45)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r2;
MR_def_label(lexer__get_float_exponent_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_2_5_0);
MR_def_label(lexer__get_float_exponent_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_5_0_i38);
MR_def_label(lexer__get_float_exponent_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_5_0_i36);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_3_5_0);
MR_def_label(lexer__get_float_exponent_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_float_exponent_5_0_i42);
MR_def_label(lexer__get_float_exponent_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_exponent_5_0,29)
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
	MR_init_entry1(lexer__get_float_decimals_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_float_decimals_5_0);
	MR_init_label10(lexer__get_float_decimals_5_0,126,2,5,3,7,11,13,18,15,32)
	MR_init_label9(lexer__get_float_decimals_5_0,30,38,37,36,42,45,48,44,29)
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
MR_def_label(lexer__get_float_decimals_5_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_float_decimals_5_0_i2);
MR_def_label(lexer__get_float_decimals_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_decimals_5_0_i5);
MR_def_label(lexer__get_float_decimals_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i13);
MR_def_label(lexer__get_float_decimals_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 6547 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i13);
MR_def_label(lexer__get_float_decimals_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
{
#line 968 "io.opt"
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
#line 6579 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6599 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_float_decimals_5_0_i11);
MR_def_label(lexer__get_float_decimals_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_float_decimals_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_float_decimals_5_0_i18);
MR_def_label(lexer__get_float_decimals_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i44);
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
#line 6653 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i48);
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
MR_def_label(lexer__get_float_decimals_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_decimals_5_0_i32);
MR_def_label(lexer__get_float_decimals_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i30);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i126);
MR_def_label(lexer__get_float_decimals_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	if (MR_INT_NE(MR_r2,69)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i38);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_float_decimals_5_0_i37);
MR_def_label(lexer__get_float_decimals_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,101)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i36);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r2;
MR_def_label(lexer__get_float_decimals_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_5_0);
MR_def_label(lexer__get_float_decimals_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_float_decimals_5_0_i42);
MR_def_label(lexer__get_float_decimals_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_float_decimals_5_0_i45);
MR_def_label(lexer__get_float_decimals_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_5_0_i44);
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
#line 6748 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_5_0_i48);
	MR_r2 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_decimals_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_decimals_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_float_decimals_5_0,29)
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
	MR_init_entry1(lexer__get_int_dot_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_int_dot_5_0);
	MR_init_label10(lexer__get_int_dot_5_0,2,5,3,7,13,16,19,22,21,18)
	MR_init_label10(lexer__get_int_dot_5_0,15,32,30,37,40,43,42,39,49,29)
	MR_init_label1(lexer__get_int_dot_5_0,14)
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_int_dot_5_0_i2);
MR_def_label(lexer__get_int_dot_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_int_dot_5_0_i5);
MR_def_label(lexer__get_int_dot_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_int_dot_5_0_i13);
MR_def_label(lexer__get_int_dot_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 6830 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_int_dot_5_0_i7);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_int_dot_5_0_i13);
MR_def_label(lexer__get_int_dot_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
{
#line 968 "io.opt"
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
#line 6861 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6881 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_int_dot_5_0_i13);
MR_def_label(lexer__get_int_dot_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 46;
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_int_dot_5_0_i16);
MR_def_label(lexer__get_int_dot_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_int_dot_5_0_i19);
MR_def_label(lexer__get_int_dot_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i18);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_int_dot_5_0_i22);
MR_def_label(lexer__get_int_dot_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_int_dot_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_int_dot_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_int_dot_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i29);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_int_dot_5_0_i32);
MR_def_label(lexer__get_int_dot_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i30);
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
MR_def_label(lexer__get_int_dot_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_int_dot_5_0_i37);
MR_def_label(lexer__get_int_dot_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_int_dot_5_0_i40);
MR_def_label(lexer__get_int_dot_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i39);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_int_dot_5_0_i43);
MR_def_label(lexer__get_int_dot_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_int_dot_5_0_i49);
	}
MR_def_label(lexer__get_int_dot_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_GOTO_LAB(lexer__get_int_dot_5_0_i49);
MR_def_label(lexer__get_int_dot_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
MR_def_label(lexer__get_int_dot_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(lexer__get_int_dot_5_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_int_dot_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(1, MR_sv(3), 0);
MR_def_label(lexer__get_int_dot_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module28)
	MR_init_entry1(lexer__get_number_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_number_5_0);
	MR_init_label10(lexer__get_number_5_0,134,2,5,3,7,11,13,18,21,15)
	MR_init_label10(lexer__get_number_5_0,31,29,35,40,39,38,44,47,50,49)
	MR_init_label2(lexer__get_number_5_0,46,28)
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
MR_def_label(lexer__get_number_5_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_number_5_0_i2);
MR_def_label(lexer__get_number_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_number_5_0_i5);
MR_def_label(lexer__get_number_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_number_5_0_i13);
MR_def_label(lexer__get_number_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 7085 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_number_5_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_number_5_0_i13);
MR_def_label(lexer__get_number_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
{
#line 968 "io.opt"
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
#line 7117 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7137 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_number_5_0_i11);
MR_def_label(lexer__get_number_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_number_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i15);
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_number_5_0_i18);
MR_def_label(lexer__get_number_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i46);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_number_5_0_i21);
MR_def_label(lexer__get_number_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i49);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_number_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_number_5_0_i31);
MR_def_label(lexer__get_number_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i29);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_number_5_0_i134);
MR_def_label(lexer__get_number_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	if (MR_INT_NE(MR_r2,46)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i35);
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
MR_def_label(lexer__get_number_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,69)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(lexer__get_number_5_0_i39);
MR_def_label(lexer__get_number_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,101)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i38);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r2;
MR_def_label(lexer__get_number_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_float_exponent_5_0);
MR_def_label(lexer__get_number_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_number_5_0_i44);
MR_def_label(lexer__get_number_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_number_5_0_i47);
MR_def_label(lexer__get_number_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i46);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_number_5_0_i50);
MR_def_label(lexer__get_number_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_5_0_i49);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_number_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_number_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_number_5_0,28)
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
	MR_init_entry1(lexer__get_zero_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_zero_4_0);
	MR_init_label10(lexer__get_zero_4_0,2,5,3,7,13,59,15,20,18,24)
	MR_init_label8(lexer__get_zero_4_0,27,30,33,36,42,41,40,17)
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
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_zero_4_0_i2);
MR_def_label(lexer__get_zero_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_zero_4_0_i5);
MR_def_label(lexer__get_zero_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_zero_4_0_i13);
MR_def_label(lexer__get_zero_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 7339 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_zero_4_0_i7);
	MR_r3 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_zero_4_0_i13);
MR_def_label(lexer__get_zero_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_4_0
{
#line 968 "io.opt"
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
#line 7370 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7390 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_zero_4_0_i13);
MR_def_label(lexer__get_zero_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i15);
	}
MR_def_label(lexer__get_zero_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_zero_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i17);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_zero_4_0_i20);
MR_def_label(lexer__get_zero_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_number_5_0);
MR_def_label(lexer__get_zero_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_char_code_4_0);
MR_def_label(lexer__get_zero_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_binary_4_0);
MR_def_label(lexer__get_zero_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,111)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_octal_4_0);
MR_def_label(lexer__get_zero_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_hex_4_0);
MR_def_label(lexer__get_zero_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_int_dot_5_0);
MR_def_label(lexer__get_zero_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i42);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(lexer__get_zero_4_0_i41);
MR_def_label(lexer__get_zero_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__get_zero_4_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(lexer__get_zero_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_float_exponent_5_0);
MR_def_label(lexer__get_zero_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_zero_4_0_i59);
MR_def_label(lexer__get_zero_4_0,17)
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


MR_BEGIN_MODULE(lexer_module30)
	MR_init_entry1(lexer__get_token_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_token_5_0);
	MR_init_label10(lexer__get_token_5_0,2,5,3,7,13,15,19,20,21,22)
	MR_init_label10(lexer__get_token_5_0,23,24,25,26,27,28,29,30,31,18)
	MR_init_label2(lexer__get_token_5_0,17,16)
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
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_token_5_0_i2);
MR_def_label(lexer__get_token_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_token_5_0_i5);
MR_def_label(lexer__get_token_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_token_5_0_i13);
MR_def_label(lexer__get_token_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 7572 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_token_5_0_i7);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_token_5_0_i13);
MR_def_label(lexer__get_token_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_5_0
{
#line 968 "io.opt"
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
#line 7603 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7623 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_token_5_0_i13);
MR_def_label(lexer__get_token_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i15);
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 7653 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_token_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i16);
	}
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i19);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i20);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i21);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i22);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i23);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i24);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(lexer__get_token_5_0_i25);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) 34) || ((MR_Integer) MR_r1 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i26);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r1 == (MR_Integer) 9) || ((MR_Integer) MR_r1 == (MR_Integer) 10)) || ((MR_Integer) MR_r1 == (MR_Integer) 11)) || ((MR_Integer) MR_r1 == (MR_Integer) 12)) || ((MR_Integer) MR_r1 == (MR_Integer) 13)) || ((MR_Integer) MR_r1 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i27);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r1 == (MR_Integer) 40) || ((MR_Integer) MR_r1 == (MR_Integer) 41)) || ((MR_Integer) MR_r1 == (MR_Integer) 44)) || ((MR_Integer) MR_r1 == (MR_Integer) 59)) || ((MR_Integer) MR_r1 == (MR_Integer) 91)) || ((MR_Integer) MR_r1 == (MR_Integer) 93)) || ((MR_Integer) MR_r1 == (MR_Integer) 123)) || ((MR_Integer) MR_r1 == (MR_Integer) 124)) || ((MR_Integer) MR_r1 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i28);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r1 == (MR_Integer) 49) || ((MR_Integer) MR_r1 == (MR_Integer) 50)) || ((MR_Integer) MR_r1 == (MR_Integer) 51)) || ((MR_Integer) MR_r1 == (MR_Integer) 52)) || ((MR_Integer) MR_r1 == (MR_Integer) 53)) || ((MR_Integer) MR_r1 == (MR_Integer) 54)) || ((MR_Integer) MR_r1 == (MR_Integer) 55)) || ((MR_Integer) MR_r1 == (MR_Integer) 56)) || ((MR_Integer) MR_r1 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i29);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 33) || ((MR_Integer) MR_r1 == (MR_Integer) 38)) || ((MR_Integer) MR_r1 == (MR_Integer) 42)) || ((MR_Integer) MR_r1 == (MR_Integer) 43)) || ((MR_Integer) MR_r1 == (MR_Integer) 45)) || ((MR_Integer) MR_r1 == (MR_Integer) 58)) || ((MR_Integer) MR_r1 == (MR_Integer) 60)) || ((MR_Integer) MR_r1 == (MR_Integer) 61)) || ((MR_Integer) MR_r1 == (MR_Integer) 62)) || ((MR_Integer) MR_r1 == (MR_Integer) 63)) || ((MR_Integer) MR_r1 == (MR_Integer) 64)) || ((MR_Integer) MR_r1 == (MR_Integer) 92)) || ((MR_Integer) MR_r1 == (MR_Integer) 94)) || ((MR_Integer) MR_r1 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i30);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 97) || ((MR_Integer) MR_r1 == (MR_Integer) 98)) || ((MR_Integer) MR_r1 == (MR_Integer) 99)) || ((MR_Integer) MR_r1 == (MR_Integer) 100)) || ((MR_Integer) MR_r1 == (MR_Integer) 101)) || ((MR_Integer) MR_r1 == (MR_Integer) 102)) || ((MR_Integer) MR_r1 == (MR_Integer) 103)) || ((MR_Integer) MR_r1 == (MR_Integer) 104)) || ((MR_Integer) MR_r1 == (MR_Integer) 105)) || ((MR_Integer) MR_r1 == (MR_Integer) 106)) || ((MR_Integer) MR_r1 == (MR_Integer) 107)) || ((MR_Integer) MR_r1 == (MR_Integer) 108)) || ((MR_Integer) MR_r1 == (MR_Integer) 109)) || ((MR_Integer) MR_r1 == (MR_Integer) 110)) || ((MR_Integer) MR_r1 == (MR_Integer) 111)) || ((MR_Integer) MR_r1 == (MR_Integer) 112)) || ((MR_Integer) MR_r1 == (MR_Integer) 113)) || ((MR_Integer) MR_r1 == (MR_Integer) 114)) || ((MR_Integer) MR_r1 == (MR_Integer) 115)) || ((MR_Integer) MR_r1 == (MR_Integer) 116)) || ((MR_Integer) MR_r1 == (MR_Integer) 117)) || ((MR_Integer) MR_r1 == (MR_Integer) 118)) || ((MR_Integer) MR_r1 == (MR_Integer) 119)) || ((MR_Integer) MR_r1 == (MR_Integer) 120)) || ((MR_Integer) MR_r1 == (MR_Integer) 121)) || ((MR_Integer) MR_r1 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i31);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__get_token_5_0_i18);
MR_def_label(lexer__get_token_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 65) || ((MR_Integer) MR_r1 == (MR_Integer) 66)) || ((MR_Integer) MR_r1 == (MR_Integer) 67)) || ((MR_Integer) MR_r1 == (MR_Integer) 68)) || ((MR_Integer) MR_r1 == (MR_Integer) 69)) || ((MR_Integer) MR_r1 == (MR_Integer) 70)) || ((MR_Integer) MR_r1 == (MR_Integer) 71)) || ((MR_Integer) MR_r1 == (MR_Integer) 72)) || ((MR_Integer) MR_r1 == (MR_Integer) 73)) || ((MR_Integer) MR_r1 == (MR_Integer) 74)) || ((MR_Integer) MR_r1 == (MR_Integer) 75)) || ((MR_Integer) MR_r1 == (MR_Integer) 76)) || ((MR_Integer) MR_r1 == (MR_Integer) 77)) || ((MR_Integer) MR_r1 == (MR_Integer) 78)) || ((MR_Integer) MR_r1 == (MR_Integer) 79)) || ((MR_Integer) MR_r1 == (MR_Integer) 80)) || ((MR_Integer) MR_r1 == (MR_Integer) 81)) || ((MR_Integer) MR_r1 == (MR_Integer) 82)) || ((MR_Integer) MR_r1 == (MR_Integer) 83)) || ((MR_Integer) MR_r1 == (MR_Integer) 84)) || ((MR_Integer) MR_r1 == (MR_Integer) 85)) || ((MR_Integer) MR_r1 == (MR_Integer) 86)) || ((MR_Integer) MR_r1 == (MR_Integer) 87)) || ((MR_Integer) MR_r1 == (MR_Integer) 88)) || ((MR_Integer) MR_r1 == (MR_Integer) 89)) || ((MR_Integer) MR_r1 == (MR_Integer) 90)) || ((MR_Integer) MR_r1 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__get_token_5_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(lexer__get_token_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__execute_get_token_action_8_0);
MR_def_label(lexer__get_token_5_0,17)
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 7827 "lexer.c"
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 7856 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module31)
	MR_init_entry1(lexer__get_token_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_token_2_5_0);
	MR_init_label10(lexer__get_token_2_5_0,2,5,3,7,13,15,19,20,21,22)
	MR_init_label10(lexer__get_token_2_5_0,23,24,25,26,27,28,29,30,31,18)
	MR_init_label2(lexer__get_token_2_5_0,17,16)
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
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_token_2_5_0_i2);
MR_def_label(lexer__get_token_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_token_2_5_0_i5);
MR_def_label(lexer__get_token_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_token_2_5_0_i13);
MR_def_label(lexer__get_token_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 7921 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_token_2_5_0_i7);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i13);
MR_def_label(lexer__get_token_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_5_0
{
#line 968 "io.opt"
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
#line 7952 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7972 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_token_2_5_0_i13);
MR_def_label(lexer__get_token_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i15);
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 8002 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_token_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i16);
	}
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i19);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i20);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i21);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i22);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i23);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i24);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i25);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) 34) || ((MR_Integer) MR_r1 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i26);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r1 == (MR_Integer) 9) || ((MR_Integer) MR_r1 == (MR_Integer) 10)) || ((MR_Integer) MR_r1 == (MR_Integer) 11)) || ((MR_Integer) MR_r1 == (MR_Integer) 12)) || ((MR_Integer) MR_r1 == (MR_Integer) 13)) || ((MR_Integer) MR_r1 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i27);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r1 == (MR_Integer) 40) || ((MR_Integer) MR_r1 == (MR_Integer) 41)) || ((MR_Integer) MR_r1 == (MR_Integer) 44)) || ((MR_Integer) MR_r1 == (MR_Integer) 59)) || ((MR_Integer) MR_r1 == (MR_Integer) 91)) || ((MR_Integer) MR_r1 == (MR_Integer) 93)) || ((MR_Integer) MR_r1 == (MR_Integer) 123)) || ((MR_Integer) MR_r1 == (MR_Integer) 124)) || ((MR_Integer) MR_r1 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i28);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r1 == (MR_Integer) 49) || ((MR_Integer) MR_r1 == (MR_Integer) 50)) || ((MR_Integer) MR_r1 == (MR_Integer) 51)) || ((MR_Integer) MR_r1 == (MR_Integer) 52)) || ((MR_Integer) MR_r1 == (MR_Integer) 53)) || ((MR_Integer) MR_r1 == (MR_Integer) 54)) || ((MR_Integer) MR_r1 == (MR_Integer) 55)) || ((MR_Integer) MR_r1 == (MR_Integer) 56)) || ((MR_Integer) MR_r1 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i29);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 33) || ((MR_Integer) MR_r1 == (MR_Integer) 38)) || ((MR_Integer) MR_r1 == (MR_Integer) 42)) || ((MR_Integer) MR_r1 == (MR_Integer) 43)) || ((MR_Integer) MR_r1 == (MR_Integer) 45)) || ((MR_Integer) MR_r1 == (MR_Integer) 58)) || ((MR_Integer) MR_r1 == (MR_Integer) 60)) || ((MR_Integer) MR_r1 == (MR_Integer) 61)) || ((MR_Integer) MR_r1 == (MR_Integer) 62)) || ((MR_Integer) MR_r1 == (MR_Integer) 63)) || ((MR_Integer) MR_r1 == (MR_Integer) 64)) || ((MR_Integer) MR_r1 == (MR_Integer) 92)) || ((MR_Integer) MR_r1 == (MR_Integer) 94)) || ((MR_Integer) MR_r1 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i30);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 97) || ((MR_Integer) MR_r1 == (MR_Integer) 98)) || ((MR_Integer) MR_r1 == (MR_Integer) 99)) || ((MR_Integer) MR_r1 == (MR_Integer) 100)) || ((MR_Integer) MR_r1 == (MR_Integer) 101)) || ((MR_Integer) MR_r1 == (MR_Integer) 102)) || ((MR_Integer) MR_r1 == (MR_Integer) 103)) || ((MR_Integer) MR_r1 == (MR_Integer) 104)) || ((MR_Integer) MR_r1 == (MR_Integer) 105)) || ((MR_Integer) MR_r1 == (MR_Integer) 106)) || ((MR_Integer) MR_r1 == (MR_Integer) 107)) || ((MR_Integer) MR_r1 == (MR_Integer) 108)) || ((MR_Integer) MR_r1 == (MR_Integer) 109)) || ((MR_Integer) MR_r1 == (MR_Integer) 110)) || ((MR_Integer) MR_r1 == (MR_Integer) 111)) || ((MR_Integer) MR_r1 == (MR_Integer) 112)) || ((MR_Integer) MR_r1 == (MR_Integer) 113)) || ((MR_Integer) MR_r1 == (MR_Integer) 114)) || ((MR_Integer) MR_r1 == (MR_Integer) 115)) || ((MR_Integer) MR_r1 == (MR_Integer) 116)) || ((MR_Integer) MR_r1 == (MR_Integer) 117)) || ((MR_Integer) MR_r1 == (MR_Integer) 118)) || ((MR_Integer) MR_r1 == (MR_Integer) 119)) || ((MR_Integer) MR_r1 == (MR_Integer) 120)) || ((MR_Integer) MR_r1 == (MR_Integer) 121)) || ((MR_Integer) MR_r1 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i31);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__get_token_2_5_0_i18);
MR_def_label(lexer__get_token_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) 65) || ((MR_Integer) MR_r1 == (MR_Integer) 66)) || ((MR_Integer) MR_r1 == (MR_Integer) 67)) || ((MR_Integer) MR_r1 == (MR_Integer) 68)) || ((MR_Integer) MR_r1 == (MR_Integer) 69)) || ((MR_Integer) MR_r1 == (MR_Integer) 70)) || ((MR_Integer) MR_r1 == (MR_Integer) 71)) || ((MR_Integer) MR_r1 == (MR_Integer) 72)) || ((MR_Integer) MR_r1 == (MR_Integer) 73)) || ((MR_Integer) MR_r1 == (MR_Integer) 74)) || ((MR_Integer) MR_r1 == (MR_Integer) 75)) || ((MR_Integer) MR_r1 == (MR_Integer) 76)) || ((MR_Integer) MR_r1 == (MR_Integer) 77)) || ((MR_Integer) MR_r1 == (MR_Integer) 78)) || ((MR_Integer) MR_r1 == (MR_Integer) 79)) || ((MR_Integer) MR_r1 == (MR_Integer) 80)) || ((MR_Integer) MR_r1 == (MR_Integer) 81)) || ((MR_Integer) MR_r1 == (MR_Integer) 82)) || ((MR_Integer) MR_r1 == (MR_Integer) 83)) || ((MR_Integer) MR_r1 == (MR_Integer) 84)) || ((MR_Integer) MR_r1 == (MR_Integer) 85)) || ((MR_Integer) MR_r1 == (MR_Integer) 86)) || ((MR_Integer) MR_r1 == (MR_Integer) 87)) || ((MR_Integer) MR_r1 == (MR_Integer) 88)) || ((MR_Integer) MR_r1 == (MR_Integer) 89)) || ((MR_Integer) MR_r1 == (MR_Integer) 90)) || ((MR_Integer) MR_r1 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__get_token_2_5_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(lexer__get_token_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__execute_get_token_action_8_0);
MR_def_label(lexer__get_token_2_5_0,17)
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 8176 "lexer.c"
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 8205 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module32)
	MR_init_entry1(lexer__execute_get_token_action_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__execute_get_token_action_8_0);
	MR_init_label10(lexer__execute_get_token_action_8_0,3,6,9,11,14,13,17,16,20,23)
	MR_init_label10(lexer__execute_get_token_action_8_0,22,26,29,30,28,31,34,37,38,39)
	MR_init_label10(lexer__execute_get_token_action_8_0,40,42,43,44,45,36,35,33,225,56)
	MR_init_label2(lexer__execute_get_token_action_8_0,57,212)
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 8259 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(lexer__get_name_5_0,
		lexer__execute_get_token_action_8_0_i30);
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 8295 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(lexer__get_variable_5_0,
		lexer__execute_get_token_action_8_0_i30);
MR_def_label(lexer__execute_get_token_action_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,11)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i9);
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__execute_get_token_action_8_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 8327 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_proceed();
MR_def_label(lexer__execute_get_token_action_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,12)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i11);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__execute_get_token_action_8_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 8357 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_implementation_defined_literal_rest_4_0,
		lexer__execute_get_token_action_8_0_i30);
MR_def_label(lexer__execute_get_token_action_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,6)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i14);
MR_def_label(lexer__execute_get_token_action_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_dot_4_0,
		lexer__execute_get_token_action_8_0_i30);
MR_def_label(lexer__execute_get_token_action_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,13)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i17);
MR_def_label(lexer__execute_get_token_action_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_graphic_5_0,
		lexer__execute_get_token_action_8_0_i30);
MR_def_label(lexer__execute_get_token_action_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,10)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i20);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(lexer__get_source_line_number_6_0);
MR_def_label(lexer__execute_get_token_action_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i22);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i23);
MR_def_label(lexer__execute_get_token_action_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_number_5_0,
		lexer__execute_get_token_action_8_0_i30);
MR_def_label(lexer__execute_get_token_action_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,7)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i26);
	}
	MR_np_tailcall_ent(lexer__skip_to_eol_5_0);
MR_def_label(lexer__execute_get_token_action_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,8)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i28);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i29);
MR_def_label(lexer__execute_get_token_action_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(lexer__start_quoted_name_6_0,
		lexer__execute_get_token_action_8_0_i30);
MR_def_label(lexer__execute_get_token_action_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__execute_get_token_action_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,9)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i31);
	}
	MR_np_tailcall_ent(lexer__get_slash_5_0);
MR_def_label(lexer__execute_get_token_action_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,5)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i33);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i34);
MR_def_label(lexer__execute_get_token_action_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),40)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i37);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i36);
MR_def_label(lexer__execute_get_token_action_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),41)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i38);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i36);
MR_def_label(lexer__execute_get_token_action_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),44)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i39);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i36);
MR_def_label(lexer__execute_get_token_action_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),59)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i40);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i36);
MR_def_label(lexer__execute_get_token_action_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),91)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i42);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i36);
MR_def_label(lexer__execute_get_token_action_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),93)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i43);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i36);
MR_def_label(lexer__execute_get_token_action_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),123)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i44);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i36);
MR_def_label(lexer__execute_get_token_action_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),124)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i45);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 7);
	MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i36);
MR_def_label(lexer__execute_get_token_action_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),125)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i35);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 6);
MR_def_label(lexer__execute_get_token_action_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i212);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i212);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__execute_get_token_action_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lexer.m, handle_special_token: unknown special token", 52);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__execute_get_token_action_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(lexer__execute_get_token_action_8_0_i225);
	}
	MR_np_tailcall_ent(lexer__get_token_2_5_0);
MR_def_label(lexer__execute_get_token_action_8_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__execute_get_token_action_8_0_i56);
MR_def_label(lexer__execute_get_token_action_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_zero_4_0,
		lexer__execute_get_token_action_8_0_i57);
MR_def_label(lexer__execute_get_token_action_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(lexer__execute_get_token_action_8_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module33)
	MR_init_entry1(lexer__skip_to_eol_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__skip_to_eol_5_0);
	MR_init_label9(lexer__skip_to_eol_5_0,54,2,5,3,7,13,15,17,16)
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
MR_def_label(lexer__skip_to_eol_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__skip_to_eol_5_0_i2);
MR_def_label(lexer__skip_to_eol_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__skip_to_eol_5_0_i5);
MR_def_label(lexer__skip_to_eol_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__skip_to_eol_5_0_i13);
MR_def_label(lexer__skip_to_eol_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 8666 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__skip_to_eol_5_0_i7);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__skip_to_eol_5_0_i13);
MR_def_label(lexer__skip_to_eol_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_5_0
{
#line 968 "io.opt"
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
#line 8697 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8717 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__skip_to_eol_5_0_i13);
MR_def_label(lexer__skip_to_eol_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i15);
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 8747 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__skip_to_eol_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i16);
	}
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__skip_to_eol_5_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_token_2_5_0);
MR_def_label(lexer__skip_to_eol_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__skip_to_eol_5_0_i54);
MR_def_label(lexer__skip_to_eol_5_0,16)
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 8787 "lexer.c"
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
	MR_init_entry1(lexer__get_slash_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_slash_5_0);
	MR_init_label10(lexer__get_slash_5_0,2,5,3,7,13,15,18,23,24,25)
	MR_init_label10(lexer__get_slash_5_0,26,27,28,29,30,31,32,33,34,35)
	MR_init_label10(lexer__get_slash_5_0,36,37,38,39,22,43,21,44,45,17)
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
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_slash_5_0_i2);
MR_def_label(lexer__get_slash_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_slash_5_0_i5);
MR_def_label(lexer__get_slash_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_slash_5_0_i13);
MR_def_label(lexer__get_slash_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 8852 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_slash_5_0_i7);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_slash_5_0_i13);
MR_def_label(lexer__get_slash_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
{
#line 968 "io.opt"
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
#line 8883 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8903 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_slash_5_0_i13);
MR_def_label(lexer__get_slash_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i15);
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 8933 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_slash_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i17);
	}
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_comment_5_0);
MR_def_label(lexer__get_slash_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i23);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i24);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i25);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i26);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i27);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i28);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i29);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i30);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i31);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i32);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i33);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i34);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i35);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i36);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i37);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i38);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i39);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_5_0_i22);
MR_def_label(lexer__get_slash_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__get_slash_5_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_slash_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_5_0
	Stream = (MercuryFilePtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9134 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(lexer__get_graphic_5_0,
		lexer__get_slash_5_0_i43);
MR_def_label(lexer__get_slash_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_slash_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__putback_char_2_4_0,
		lexer__get_slash_5_0_i44);
MR_def_label(lexer__get_slash_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_slash_5_0_i45);
MR_def_label(lexer__get_slash_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_slash_5_0,17)
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9191 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module35)
	MR_init_entry1(lexer__get_comment_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_comment_5_0);
	MR_init_label9(lexer__get_comment_5_0,55,2,5,3,7,13,15,18,17)
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
MR_def_label(lexer__get_comment_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_comment_5_0_i2);
MR_def_label(lexer__get_comment_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_comment_5_0_i5);
MR_def_label(lexer__get_comment_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_comment_5_0_i13);
MR_def_label(lexer__get_comment_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 9256 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_comment_5_0_i7);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_comment_5_0_i13);
MR_def_label(lexer__get_comment_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_5_0
{
#line 968 "io.opt"
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
#line 9287 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9307 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_comment_5_0_i13);
MR_def_label(lexer__get_comment_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i15);
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9337 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_comment_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i17);
	}
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_comment_5_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_comment_2_5_0);
MR_def_label(lexer__get_comment_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_comment_5_0_i55);
MR_def_label(lexer__get_comment_5_0,17)
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9377 "lexer.c"
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
	MR_init_entry1(lexer__get_comment_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_comment_2_5_0);
	MR_init_label10(lexer__get_comment_2_5_0,65,2,5,3,7,13,15,18,21,17)
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
MR_def_label(lexer__get_comment_2_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_comment_2_5_0_i2);
MR_def_label(lexer__get_comment_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_comment_2_5_0_i5);
MR_def_label(lexer__get_comment_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_comment_2_5_0_i13);
MR_def_label(lexer__get_comment_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 9442 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_comment_2_5_0_i7);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_comment_2_5_0_i13);
MR_def_label(lexer__get_comment_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_5_0
{
#line 968 "io.opt"
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
#line 9473 "lexer.c"
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
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9493 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_comment_2_5_0_i13);
MR_def_label(lexer__get_comment_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i15);
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9523 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_comment_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i17);
	}
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_token_2_5_0);
MR_def_label(lexer__get_comment_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__get_comment_2_5_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_comment_2_5_0_i65);
MR_def_label(lexer__get_comment_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_comment_5_0);
MR_def_label(lexer__get_comment_2_5_0,17)
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9572 "lexer.c"
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

MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(lexer_module37)
	MR_init_entry1(lexer__get_source_line_number_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__get_source_line_number_6_0);
	MR_init_label10(lexer__get_source_line_number_6_0,125,2,5,3,7,13,15,20,18,28)
	MR_init_label10(lexer__get_source_line_number_6_0,31,30,34,27,41,24,44,46,53,58)
	MR_init_label2(lexer__get_source_line_number_6_0,17,62)
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
MR_def_label(lexer__get_source_line_number_6_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(io__read_char_code_2_4_0,
		lexer__get_source_line_number_6_0_i2);
MR_def_label(lexer__get_source_line_number_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,-1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_source_line_number_6_0_i5);
MR_def_label(lexer__get_source_line_number_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(lexer__get_source_line_number_6_0_i13);
MR_def_label(lexer__get_source_line_number_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 9642 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_source_line_number_6_0_i7);
	MR_r4 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(lexer__get_source_line_number_6_0_i13);
MR_def_label(lexer__get_source_line_number_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
{
#line 968 "io.opt"
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
#line 9673 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 904 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9693 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_source_line_number_6_0_i13);
MR_def_label(lexer__get_source_line_number_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i15);
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	Stream = (MercuryFilePtr) MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("get_line_number_2");
{
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9723 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_source_line_number_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_source_line_number_6_0_i20);
MR_def_label(lexer__get_source_line_number_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_source_line_number_6_0_i125);
MR_def_label(lexer__get_source_line_number_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i24);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__get_source_line_number_6_0_i28);
MR_def_label(lexer__get_source_line_number_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_6_0_i27);
	}
	MR_sv(3) = MR_r2;
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
	{
	MercuryFilePtr	Stream;
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	Stream = (MercuryFilePtr) MR_sv(2);
	LineNum = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("set_line_number_2");
{
#line 1380 "io.opt"

    MR_line_number(*Stream) = LineNum;
    MR_update_io(IO0, IO);
;}
#line 9790 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("set_line_number_2");
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_token_5_0);
MR_def_label(lexer__get_source_line_number_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i34);
MR_def_label(lexer__get_source_line_number_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("invalid line number \140", 21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__get_source_line_number_6_0_i58);
MR_def_label(lexer__get_source_line_number_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i41);
MR_def_label(lexer__get_source_line_number_6_0,41)
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
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i44);
MR_def_label(lexer__get_source_line_number_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Character = MR_sv(1);
	Int = (MR_Integer) 0;
{
#line 59 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 9854 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_source_line_number_6_0_i46);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__get_source_line_number_6_0_i58);
MR_def_label(lexer__get_source_line_number_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		lexer__get_source_line_number_6_0_i53);
MR_def_label(lexer__get_source_line_number_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("invalid character \140", 19);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__get_source_line_number_6_0_i58);
MR_def_label(lexer__get_source_line_number_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_source_line_number_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_context_4_0,
		lexer__get_source_line_number_6_0_i62);
MR_def_label(lexer__get_source_line_number_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
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


MR_BEGIN_MODULE(lexer_module38)
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 9969 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
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
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
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
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(lexer__get_token_5_0,
		lexer__get_token_list_2_6_0_i11);
MR_def_label(lexer__get_token_list_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
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
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module39)
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
#line 1360 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 10079 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module40)
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


MR_BEGIN_MODULE(lexer_module41)
	MR_init_entry1(lexer__string_ungetchar_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_ungetchar_3_0);
	MR_init_label2(lexer__string_ungetchar_3_0,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_ungetchar'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_ungetchar_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_r3 = MR_tfield(0, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	PrevIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_ungetchar_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r3;
{
#line 603 "string.opt"

    int pos = Index;
    Ch = MR_utf8_prev_get(Str, &pos);
    PrevIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 10168 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_ungetchar_3_0_i3);
	MR_tempr1 = PrevIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_r2, 1);
	MR_r6 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_ungetchar_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_r6 - (MR_Integer) 1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp(1);
	MR_proceed();
	}
MR_def_label(lexer__string_ungetchar_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_r6;
	MR_tfield(0, MR_r1, 1) = MR_r5;
	MR_tfield(0, MR_r1, 2) = MR_r3;
	MR_decr_sp(1);
	MR_proceed();
MR_def_label(lexer__string_ungetchar_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module42)
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
	MR_tempr2 = MR_tfield(0, MR_tempr3, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__grab_string_5_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 10246 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module43)
	MR_init_entry1(lexer__string_get_graphic_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_graphic_7_0);
	MR_init_label7(lexer__string_get_graphic_7_0,158,6,10,159,11,32,3)
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
MR_def_label(lexer__string_get_graphic_7_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_graphic_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 10304 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_graphic_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_sv(3) = MR_tempr4;
	MR_r4 = MR_tempr3;
	MR_GOTO_LAB(lexer__string_get_graphic_7_0_i10);
	}
MR_def_label(lexer__string_get_graphic_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(3) = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_graphic_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,33)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,35)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,36)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,38)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,43)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,45)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,46)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,47)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,58)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,60)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,61)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,62)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,63)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,64)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,92)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_EQ(MR_r5,94)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i159);
	}
	if (MR_INT_NE(MR_r5,126)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i11);
	}
MR_def_label(lexer__string_get_graphic_7_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__string_get_graphic_7_0_i158);
MR_def_label(lexer__string_get_graphic_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_graphic_7_0_i32);
MR_def_label(lexer__string_get_graphic_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_graphic_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 10434 "lexer.c"
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
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_graphic_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 10473 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module44)
	MR_init_entry1(lexer__string_get_dot_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_dot_7_0);
	MR_init_label10(lexer__string_get_dot_7_0,6,10,16,14,19,12,22,23,24,25)
	MR_init_label10(lexer__string_get_dot_7_0,26,27,28,29,30,31,32,33,34,35)
	MR_init_label6(lexer__string_get_dot_7_0,36,37,38,20,41,3)
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
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_dot_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 10529 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_dot_7_0_i3);
	MR_r5 = NextIndex;
	MR_r6 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_r7 = MR_tfield(0, MR_tempr2, 1);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r6,10)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_dot_7_0_i10);
	}
MR_def_label(lexer__string_get_dot_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_dot_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__string_get_dot_7_0_i16);
MR_def_label(lexer__string_get_dot_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i14);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_dot_7_0_i19);
MR_def_label(lexer__string_get_dot_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_dot_7_0_i19);
MR_def_label(lexer__string_get_dot_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_dot_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i22);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i23);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i24);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i25);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i26);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i27);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i28);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i29);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i30);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i31);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i32);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i33);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i34);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i35);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i36);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i37);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i38);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i20);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_dot_7_0_i41);
MR_def_label(lexer__string_get_dot_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
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


MR_BEGIN_MODULE(lexer_module45)
	MR_init_entry1(lexer__string_get_quoted_name_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_quoted_name_9_0);
	MR_init_label6(lexer__string_get_quoted_name_9_0,52,6,10,11,13,3)
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
MR_def_label(lexer__string_get_quoted_name_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r6;
	MR_r7 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_quoted_name_9_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r7;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 10898 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr2;
	MR_r7 = MR_tempr1;
	MR_r9 = MR_tfield(0, MR_tempr4, 1);
	MR_r10 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r9 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_sv(2) = MR_tempr4;
	MR_r6 = MR_tempr3;
	MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i10);
	}
MR_def_label(lexer__string_get_quoted_name_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r9;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_r7 = MR_r8;
	MR_sv(2) = MR_r6;
	MR_r6 = MR_tempr1;
	}
MR_def_label(lexer__string_get_quoted_name_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r7 != MR_r3)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_quote_9_0);
MR_def_label(lexer__string_get_quoted_name_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,92)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i13);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_escape_9_0);
MR_def_label(lexer__string_get_quoted_name_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i52);
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


MR_BEGIN_MODULE(lexer_module46)
	MR_init_entry1(lexer__string_get_quoted_name_quote_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_quoted_name_quote_9_0);
	MR_init_label10(lexer__string_get_quoted_name_quote_9_0,6,10,11,14,17,19,15,3,33,35)
	MR_init_label2(lexer__string_get_quoted_name_quote_9_0,38,31)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r6;
	MR_r7 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_quoted_name_quote_9_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r7;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 11017 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr2;
	MR_r7 = MR_tempr1;
	MR_r9 = MR_tfield(0, MR_tempr4, 1);
	MR_r10 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r9 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr2;
	MR_sv(3) = MR_tempr4;
	MR_r6 = MR_tempr3;
	MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i10);
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r9;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_r8;
	MR_sv(3) = MR_r6;
	MR_r6 = MR_tempr1;
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r3)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i11);
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
MR_def_label(lexer__string_get_quoted_name_quote_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_quoted_name_quote_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(4), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__string_get_quoted_name_quote_9_0_i17);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i15);
	}
	if (MR_INT_NE(MR_sv(1),39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i38);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(4);
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
	MR_sv(4) = MR_r6;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(string__semidet_from_rev_char_list_2_0,
		lexer__string_get_quoted_name_quote_9_0_i33);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i31);
	}
	if (MR_INT_NE(MR_sv(1),39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i35);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i38);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lexer.m: unknown quote character", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
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


MR_BEGIN_MODULE(lexer_module47)
	MR_init_entry1(lexer__string_get_quoted_name_escape_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_quoted_name_escape_9_0);
	MR_init_label10(lexer__string_get_quoted_name_escape_9_0,177,6,10,11,14,19,20,21,22,23)
	MR_init_label10(lexer__string_get_quoted_name_escape_9_0,24,25,26,27,28,18,17,32,35,38)
	MR_init_label3(lexer__string_get_quoted_name_escape_9_0,43,41,3)
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
MR_def_label(lexer__string_get_quoted_name_escape_9_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r6;
	MR_r7 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_quoted_name_escape_9_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r7;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 11226 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr2;
	MR_r7 = MR_tempr1;
	MR_r9 = MR_tfield(0, MR_tempr4, 1);
	MR_r10 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r9 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tempr4;
	MR_r6 = MR_tempr3;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i10);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r9;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r6;
	MR_r6 = MR_tempr1;
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),10)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i11);
	}
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),13)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
	}
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i177);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i19);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 34;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i20);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 39;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),92)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i21);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 92;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),96)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i22);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 96;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),97)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i23);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),98)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i24);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),102)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i25);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),110)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i26);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),114)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i27);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),116)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i28);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),118)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i17);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = (MR_Integer) 11;
MR_def_label(lexer__string_get_quoted_name_escape_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),120)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i32);
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
MR_def_label(lexer__string_get_quoted_name_escape_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),117)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i35);
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
MR_def_label(lexer__string_get_quoted_name_escape_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),85)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i38);
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
MR_def_label(lexer__string_get_quoted_name_escape_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_quoted_name_escape_9_0_i43);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_octal_escape_10_0);
	}
MR_def_label(lexer__string_get_quoted_name_escape_9_0,41)
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


MR_BEGIN_MODULE(lexer_module48)
	MR_init_entry1(lexer__string_get_unicode_escape_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_unicode_escape_11_0);
	MR_init_label10(lexer__string_get_unicode_escape_11_0,113,3,5,7,9,13,4,2,24,28)
	MR_init_label4(lexer__string_get_unicode_escape_11_0,31,30,21,37)
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
MR_def_label(lexer__string_get_unicode_escape_11_0,113)
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
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i4);
	}
	if (MR_INT_GT(MR_r2,1114111)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i4);
	}
	if (MR_INT_LT(MR_r2,55296)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i9);
	}
	if (MR_INT_LE(MR_r2,57343)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i4);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__string_get_unicode_escape_11_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 11585 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i4);
	MR_tempr1 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i13);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_r2 = MR_tfield(0, MR_sv(7), 0);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
MR_def_label(lexer__string_get_unicode_escape_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_r2 = MR_tfield(0, MR_sv(7), 0);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(lexer__string_get_unicode_escape_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(8);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i21);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_unicode_escape_11_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(2);
	Index = MR_r2;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 11649 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i21);
	MR_r2 = NextIndex;
	MR_r1 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i24);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i28);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_unicode_escape_11_0_i31);
MR_def_label(lexer__string_get_unicode_escape_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i30);
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
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i113);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,5);
	MR_r2 = MR_tfield(0, MR_sv(7), 0);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(lexer__string_get_unicode_escape_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i37);
MR_def_label(lexer__string_get_unicode_escape_11_0,37)
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


MR_BEGIN_MODULE(lexer_module49)
	MR_init_entry1(lexer__string_get_hex_escape_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_hex_escape_10_0);
	MR_init_label7(lexer__string_get_hex_escape_10_0,55,6,10,13,11,17,3)
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
MR_def_label(lexer__string_get_hex_escape_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r7;
	MR_r8 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_escape_10_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r8;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 11779 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r9 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_r10 = MR_tfield(0, MR_tempr4, 1);
	MR_r11 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r11 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i10);
	}
MR_def_label(lexer__string_get_hex_escape_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r11;
	MR_tfield(0, MR_tempr1, 1) = MR_r10;
	MR_tfield(0, MR_tempr1, 2) = MR_r8;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_r9;
	MR_r2 = MR_r7;
	}
MR_def_label(lexer__string_get_hex_escape_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_escape_10_0_i13);
MR_def_label(lexer__string_get_hex_escape_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i55);
	}
MR_def_label(lexer__string_get_hex_escape_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i17);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(lexer__string_finish_hex_escape_10_0);
MR_def_label(lexer__string_get_hex_escape_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_r2 = MR_tfield(0, MR_sv(5), 0);
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


MR_BEGIN_MODULE(lexer_module50)
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
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 11948 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module51)
	MR_init_entry1(lexer__string_get_octal_escape_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_octal_escape_10_0);
	MR_init_label8(lexer__string_get_octal_escape_10_0,56,6,10,13,11,17,20,3)
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
MR_def_label(lexer__string_get_octal_escape_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r7;
	MR_r8 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_escape_10_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r8;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 12036 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r9 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_r10 = MR_tfield(0, MR_tempr4, 1);
	MR_r11 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r11 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i10);
	}
MR_def_label(lexer__string_get_octal_escape_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r11;
	MR_tfield(0, MR_tempr1, 1) = MR_r10;
	MR_tfield(0, MR_tempr1, 2) = MR_r8;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_r9;
	MR_r2 = MR_r7;
	}
MR_def_label(lexer__string_get_octal_escape_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_escape_10_0_i13);
MR_def_label(lexer__string_get_octal_escape_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i56);
	}
MR_def_label(lexer__string_get_octal_escape_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i17);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(lexer__string_finish_octal_escape_10_0);
MR_def_label(lexer__string_get_octal_escape_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_octal_escape_10_0_i20);
MR_def_label(lexer__string_get_octal_escape_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
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


MR_BEGIN_MODULE(lexer_module52)
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
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 12221 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module53)
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
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_np_call_localret_ent(lexer__string_get_quoted_name_9_0,
		lexer__string_start_quoted_name_9_0_i2);
MR_def_label(lexer__string_start_quoted_name_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(lexer__string_start_quoted_name_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(lexer__string_start_quoted_name_9_0,
		lexer__string_start_quoted_name_9_0_i5);
MR_def_label(lexer__string_start_quoted_name_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
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


MR_BEGIN_MODULE(lexer_module54)
	MR_init_entry1(lexer__string_get_name_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_name_7_0);
	MR_init_label6(lexer__string_get_name_7_0,46,6,13,12,16,3)
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
MR_def_label(lexer__string_get_name_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_name_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_name_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 12374 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_name_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_name_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__string_get_name_7_0_i13);
MR_def_label(lexer__string_get_name_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__string_get_name_7_0_i13);
MR_def_label(lexer__string_get_name_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_name_7_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_name_7_0_i46);
MR_def_label(lexer__string_get_name_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_name_7_0_i16);
MR_def_label(lexer__string_get_name_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_name_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 12462 "lexer.c"
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
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_name_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 12501 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module55)
	MR_init_entry1(lexer__string_get_implementation_defined_literal_rest_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_implementation_defined_literal_rest_7_0);
	MR_init_label10(lexer__string_get_implementation_defined_literal_rest_7_0,6,10,13,15,11,22,23,24,25,26)
	MR_init_label10(lexer__string_get_implementation_defined_literal_rest_7_0,27,28,29,30,31,32,33,34,35,36)
	MR_init_label6(lexer__string_get_implementation_defined_literal_rest_7_0,37,38,20,41,3,207)
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
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_implementation_defined_literal_rest_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 12557 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i3);
	MR_r5 = NextIndex;
	MR_r6 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_r7 = MR_tfield(0, MR_tempr2, 1);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r6,10)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i10);
	}
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r6;
	MR_sv(5) = MR_r4;
	}
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		lexer__string_get_implementation_defined_literal_rest_7_0_i13);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(lexer__string_get_name_7_0,
		lexer__string_get_implementation_defined_literal_rest_7_0_i15);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i207);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,33)) {
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
	if (MR_INT_NE(MR_r1,35)) {
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
	if (MR_INT_NE(MR_r1,36)) {
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
	if (MR_INT_NE(MR_r1,38)) {
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
	if (MR_INT_NE(MR_r1,42)) {
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
	if (MR_INT_NE(MR_r1,43)) {
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
	if (MR_INT_NE(MR_r1,45)) {
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
	if (MR_INT_NE(MR_r1,46)) {
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
	if (MR_INT_NE(MR_r1,47)) {
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
	if (MR_INT_NE(MR_r1,58)) {
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
	if (MR_INT_NE(MR_r1,60)) {
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
	if (MR_INT_NE(MR_r1,61)) {
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
	if (MR_INT_NE(MR_r1,62)) {
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
	if (MR_INT_NE(MR_r1,63)) {
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
	if (MR_INT_NE(MR_r1,64)) {
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
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__string_get_implementation_defined_literal_rest_7_0_i38);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
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
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_implementation_defined_literal_rest_7_0_i41);
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,41)
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
MR_def_label(lexer__string_get_implementation_defined_literal_rest_7_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module56)
	MR_init_entry1(lexer__string_get_variable_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_variable_7_0);
	MR_init_label6(lexer__string_get_variable_7_0,46,6,13,12,16,3)
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
MR_def_label(lexer__string_get_variable_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_variable_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_variable_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 12925 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_variable_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_variable_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__string_get_variable_7_0_i13);
MR_def_label(lexer__string_get_variable_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__string_get_variable_7_0_i13);
MR_def_label(lexer__string_get_variable_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_variable_7_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_variable_7_0_i46);
MR_def_label(lexer__string_get_variable_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_variable_7_0_i16);
MR_def_label(lexer__string_get_variable_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_variable_7_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13013 "lexer.c"
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
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_variable_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13052 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module57)
	MR_init_entry1(lexer__string_get_binary_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_binary_2_7_0);
	MR_init_label10(lexer__string_get_binary_2_7_0,68,6,10,69,11,16,18,17,3,25)
	MR_init_label1(lexer__string_get_binary_2_7_0,24)
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
MR_def_label(lexer__string_get_binary_2_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_binary_2_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 13114 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_sv(2) = MR_tempr4;
	MR_r4 = MR_tempr3;
	MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i10);
	}
MR_def_label(lexer__string_get_binary_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_binary_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,48)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i69);
	}
	if (MR_INT_NE(MR_r5,49)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i11);
	}
MR_def_label(lexer__string_get_binary_2_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i68);
MR_def_label(lexer__string_get_binary_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_binary_2_7_0_i16);
MR_def_label(lexer__string_get_binary_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_binary_2_7_0
	Str = (MR_String) MR_sv(3);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13195 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_binary_2_7_0_i18);
MR_def_label(lexer__string_get_binary_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_binary_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_binary_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_binary_2_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13248 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_binary_2_7_0_i25);
MR_def_label(lexer__string_get_binary_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_binary_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module58)
	MR_init_entry1(lexer__string_get_binary_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_binary_7_0);
	MR_init_label6(lexer__string_get_binary_7_0,6,10,47,11,16,3)
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
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_binary_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 13319 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_binary_7_0_i3);
	MR_r5 = NextIndex;
	MR_r6 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_r7 = MR_tfield(0, MR_tempr2, 1);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r6,10)) {
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_r5 = MR_r6;
	MR_sv(2) = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_binary_7_0_i10);
	}
MR_def_label(lexer__string_get_binary_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_binary_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,48)) {
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i47);
	}
	if (MR_INT_NE(MR_r5,49)) {
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i11);
	}
MR_def_label(lexer__string_get_binary_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_binary_2_7_0);
MR_def_label(lexer__string_get_binary_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_binary_7_0_i16);
MR_def_label(lexer__string_get_binary_7_0,16)
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


MR_BEGIN_MODULE(lexer_module59)
	MR_init_entry1(lexer__string_get_octal_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_octal_2_7_0);
	MR_init_label10(lexer__string_get_octal_2_7_0,68,6,13,12,16,18,17,3,25,24)
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
MR_def_label(lexer__string_get_octal_2_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_2_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 13446 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_2_7_0_i13);
MR_def_label(lexer__string_get_octal_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_2_7_0_i13);
MR_def_label(lexer__string_get_octal_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i68);
MR_def_label(lexer__string_get_octal_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_octal_2_7_0_i16);
MR_def_label(lexer__string_get_octal_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_2_7_0
	Str = (MR_String) MR_sv(4);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13533 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_octal_2_7_0_i18);
MR_def_label(lexer__string_get_octal_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_octal_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_octal_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_2_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13586 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_octal_2_7_0_i25);
MR_def_label(lexer__string_get_octal_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_octal_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module60)
	MR_init_entry1(lexer__string_get_octal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_octal_7_0);
	MR_init_label5(lexer__string_get_octal_7_0,6,13,12,16,3)
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
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_octal_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 13657 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_octal_7_0_i3);
	MR_r5 = NextIndex;
	MR_r6 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_r7 = MR_tfield(0, MR_tempr2, 1);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r6,10)) {
		MR_GOTO_LAB(lexer__string_get_octal_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_7_0_i13);
MR_def_label(lexer__string_get_octal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_7_0_i13);
MR_def_label(lexer__string_get_octal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_7_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_octal_2_7_0);
MR_def_label(lexer__string_get_octal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_octal_7_0_i16);
MR_def_label(lexer__string_get_octal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
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


MR_BEGIN_MODULE(lexer_module61)
	MR_init_entry1(lexer__string_get_hex_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_hex_2_7_0);
	MR_init_label10(lexer__string_get_hex_2_7_0,68,6,13,12,16,18,17,3,25,24)
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
MR_def_label(lexer__string_get_hex_2_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_2_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 13791 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_2_7_0_i13);
MR_def_label(lexer__string_get_hex_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_2_7_0_i13);
MR_def_label(lexer__string_get_hex_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i68);
MR_def_label(lexer__string_get_hex_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_hex_2_7_0_i16);
MR_def_label(lexer__string_get_hex_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_2_7_0
	Str = (MR_String) MR_sv(4);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13878 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_hex_2_7_0_i18);
MR_def_label(lexer__string_get_hex_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_hex_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_hex_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_2_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13931 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_hex_2_7_0_i25);
MR_def_label(lexer__string_get_hex_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_hex_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module62)
	MR_init_entry1(lexer__string_get_hex_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_hex_7_0);
	MR_init_label5(lexer__string_get_hex_7_0,6,13,12,16,3)
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
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_hex_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 14002 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_hex_7_0_i3);
	MR_r5 = NextIndex;
	MR_r6 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_r7 = MR_tfield(0, MR_tempr2, 1);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r6,10)) {
		MR_GOTO_LAB(lexer__string_get_hex_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_7_0_i13);
MR_def_label(lexer__string_get_hex_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_7_0_i13);
MR_def_label(lexer__string_get_hex_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_7_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_hex_2_7_0);
MR_def_label(lexer__string_get_hex_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_hex_7_0_i16);
MR_def_label(lexer__string_get_hex_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,19);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
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


MR_BEGIN_MODULE(lexer_module63)
	MR_init_entry1(lexer__string_get_float_exponent_3_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_float_exponent_3_7_0);
	MR_init_label8(lexer__string_get_float_exponent_3_7_0,70,6,13,12,16,18,3,26)
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
MR_def_label(lexer__string_get_float_exponent_3_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_3_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 14136 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_3_7_0_i13);
MR_def_label(lexer__string_get_float_exponent_3_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_3_7_0_i13);
MR_def_label(lexer__string_get_float_exponent_3_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i70);
MR_def_label(lexer__string_get_float_exponent_3_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_exponent_3_7_0_i16);
MR_def_label(lexer__string_get_float_exponent_3_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_3_7_0
	Str = (MR_String) MR_sv(4);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 14224 "lexer.c"
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
#line 14249 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i18);
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
MR_def_label(lexer__string_get_float_exponent_3_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
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
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_3_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 14302 "lexer.c"
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
#line 14327 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i26);
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
MR_def_label(lexer__string_get_float_exponent_3_7_0,26)
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


MR_BEGIN_MODULE(lexer_module64)
	MR_init_entry1(lexer__string_get_float_exponent_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_float_exponent_7_0);
	MR_init_label10(lexer__string_get_float_exponent_7_0,6,10,12,19,23,26,24,16,11,36)
	MR_init_label6(lexer__string_get_float_exponent_7_0,35,39,3,43,45,51)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 14397 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i10);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_float_exponent_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,43)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i12);
	}
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i11);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i16);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(3);
	Index = MR_r2;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 14475 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i16);
	MR_r2 = NextIndex;
	MR_r1 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i19);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i23);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__string_get_float_exponent_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_7_0_i26);
MR_def_label(lexer__string_get_float_exponent_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i24);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_3_7_0);
MR_def_label(lexer__string_get_float_exponent_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_exponent_7_0_i39);
MR_def_label(lexer__string_get_float_exponent_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_float_exponent_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_7_0_i36);
MR_def_label(lexer__string_get_float_exponent_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i35);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_3_7_0);
MR_def_label(lexer__string_get_float_exponent_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_exponent_7_0_i39);
MR_def_label(lexer__string_get_float_exponent_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(lexer__grab_string_5_0,
		lexer__string_get_float_exponent_7_0_i43);
MR_def_label(lexer__string_get_float_exponent_7_0,43)
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
#line 14603 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i45);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_float_exponent_7_0_i51);
MR_def_label(lexer__string_get_float_exponent_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_float_exponent_7_0_i51);
MR_def_label(lexer__string_get_float_exponent_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
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


MR_BEGIN_MODULE(lexer_module65)
	MR_init_entry1(lexer__string_get_float_decimals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_float_decimals_7_0);
	MR_init_label10(lexer__string_get_float_decimals_7_0,88,6,10,13,11,18,16,21,23,3)
	MR_init_label1(lexer__string_get_float_decimals_7_0,32)
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
MR_def_label(lexer__string_get_float_decimals_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_decimals_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 14687 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i10);
	}
MR_def_label(lexer__string_get_float_decimals_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_float_decimals_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_decimals_7_0_i13);
MR_def_label(lexer__string_get_float_decimals_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i11);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i88);
MR_def_label(lexer__string_get_float_decimals_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i18);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_float_decimals_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i16);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_float_decimals_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_decimals_7_0_i21);
MR_def_label(lexer__string_get_float_decimals_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_decimals_7_0
	Str = (MR_String) MR_sv(5);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 14802 "lexer.c"
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
#line 14827 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i23);
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
MR_def_label(lexer__string_get_float_decimals_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,20);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
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
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_decimals_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 14880 "lexer.c"
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
#line 14905 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i32);
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
MR_def_label(lexer__string_get_float_decimals_7_0,32)
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


MR_BEGIN_MODULE(lexer_module66)
	MR_init_entry1(lexer__string_get_int_dot_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_int_dot_7_0);
	MR_init_label10(lexer__string_get_int_dot_7_0,6,13,12,16,17,19,3,25,27,26)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_int_dot_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 14974 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_int_dot_7_0_i13);
MR_def_label(lexer__string_get_int_dot_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_int_dot_7_0_i13);
MR_def_label(lexer__string_get_int_dot_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_float_decimals_7_0);
MR_def_label(lexer__string_get_int_dot_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_int_dot_7_0_i16);
MR_def_label(lexer__string_get_int_dot_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_int_dot_7_0_i17);
MR_def_label(lexer__string_get_int_dot_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_int_dot_7_0
	Str = (MR_String) MR_sv(4);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15072 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_int_dot_7_0_i19);
MR_def_label(lexer__string_get_int_dot_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i26);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_int_dot_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_int_dot_7_0_i25);
MR_def_label(lexer__string_get_int_dot_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_int_dot_7_0
	Str = (MR_String) MR_sv(4);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15124 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_int_dot_7_0_i27);
MR_def_label(lexer__string_get_int_dot_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i26);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_int_dot_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module67)
	MR_init_entry1(lexer__string_get_number_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_number_7_0);
	MR_init_label10(lexer__string_get_number_7_0,96,6,10,13,11,16,21,19,24,26)
	MR_init_label4(lexer__string_get_number_7_0,25,3,35,34)
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
MR_def_label(lexer__string_get_number_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_number_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 15202 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_number_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_number_7_0_i10);
	}
MR_def_label(lexer__string_get_number_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_number_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_number_7_0_i13);
MR_def_label(lexer__string_get_number_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i11);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__string_get_number_7_0_i96);
MR_def_label(lexer__string_get_number_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i16);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_int_dot_7_0);
MR_def_label(lexer__string_get_number_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i21);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_number_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i19);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_number_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_number_7_0_i24);
MR_def_label(lexer__string_get_number_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_number_7_0
	Str = (MR_String) MR_sv(5);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15328 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_number_7_0_i26);
MR_def_label(lexer__string_get_number_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i25);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_number_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_number_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_number_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15381 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(3) = MR_tempr4;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_number_7_0_i35);
MR_def_label(lexer__string_get_number_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i34);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_number_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,15);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module68)
	MR_init_entry1(lexer__string_get_zero_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_zero_7_0);
	MR_init_label10(lexer__string_get_zero_7_0,6,10,13,11,22,26,19,16,30,33)
	MR_init_label7(lexer__string_get_zero_7_0,36,39,44,42,47,3,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_get_zero'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_zero_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_zero_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 15458 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_zero_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_zero_7_0_i10);
	}
MR_def_label(lexer__string_get_zero_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_zero_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_zero_7_0_i13);
MR_def_label(lexer__string_get_zero_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i11);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_number_7_0);
MR_def_label(lexer__string_get_zero_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(5);
	MR_r4 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i19);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_zero_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(4);
	Index = MR_r4;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 15549 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_zero_7_0_i19);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r6 = MR_tfield(0, MR_tempr4, 1);
	MR_r7 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i22);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r7 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_zero_7_0_i26);
	}
MR_def_label(lexer__string_get_zero_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r7;
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_r1 = MR_r5;
	}
MR_def_label(lexer__string_get_zero_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__string_get_zero_7_0
	Character = MR_r1;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 15597 "lexer.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_zero_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,14);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_zero_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i30);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_binary_7_0);
MR_def_label(lexer__string_get_zero_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,111)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i33);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_octal_7_0);
MR_def_label(lexer__string_get_zero_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i36);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_hex_7_0);
MR_def_label(lexer__string_get_zero_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i39);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_int_dot_7_0);
MR_def_label(lexer__string_get_zero_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i44);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_zero_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i42);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_zero_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_zero_7_0_i47);
MR_def_label(lexer__string_get_zero_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_zero_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_zero_7_0_i56);
MR_def_label(lexer__string_get_zero_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
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


MR_BEGIN_MODULE(lexer_module69)
	MR_init_entry1(lexer__string_get_token_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_token_6_0);
	MR_init_label10(lexer__string_get_token_6_0,6,10,13,14,15,16,17,18,19,20)
	MR_init_label8(lexer__string_get_token_6_0,21,22,23,24,25,12,11,3)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r8 = MR_tfield(0, MR_tempr3, 2);
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_token_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r8;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 15766 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_token_6_0_i3);
	MR_tempr1 = NextIndex;
	MR_r4 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tfield(0, MR_tempr3, 1);
	MR_r10 = MR_tfield(0, MR_tempr3, 0);
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i10);
	}
MR_def_label(lexer__string_get_token_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r9;
	MR_tfield(0, MR_tempr1, 2) = MR_r8;
	}
MR_def_label(lexer__string_get_token_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,35)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i13);
	}
	MR_r5 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,36)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i14);
	}
	MR_r5 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,37)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i15);
	}
	MR_r5 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,46)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i16);
	}
	MR_r5 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i17);
	}
	MR_r5 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,48)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i18);
	}
	MR_r5 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,96)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i19);
	}
	MR_r5 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r4 == (MR_Integer) 34) || ((MR_Integer) MR_r4 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i20);
	}
	MR_r5 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r4 == (MR_Integer) 9) || ((MR_Integer) MR_r4 == (MR_Integer) 10)) || ((MR_Integer) MR_r4 == (MR_Integer) 11)) || ((MR_Integer) MR_r4 == (MR_Integer) 12)) || ((MR_Integer) MR_r4 == (MR_Integer) 13)) || ((MR_Integer) MR_r4 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i21);
	}
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 40) || ((MR_Integer) MR_r4 == (MR_Integer) 41)) || ((MR_Integer) MR_r4 == (MR_Integer) 44)) || ((MR_Integer) MR_r4 == (MR_Integer) 59)) || ((MR_Integer) MR_r4 == (MR_Integer) 91)) || ((MR_Integer) MR_r4 == (MR_Integer) 93)) || ((MR_Integer) MR_r4 == (MR_Integer) 123)) || ((MR_Integer) MR_r4 == (MR_Integer) 124)) || ((MR_Integer) MR_r4 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i22);
	}
	MR_r5 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 49) || ((MR_Integer) MR_r4 == (MR_Integer) 50)) || ((MR_Integer) MR_r4 == (MR_Integer) 51)) || ((MR_Integer) MR_r4 == (MR_Integer) 52)) || ((MR_Integer) MR_r4 == (MR_Integer) 53)) || ((MR_Integer) MR_r4 == (MR_Integer) 54)) || ((MR_Integer) MR_r4 == (MR_Integer) 55)) || ((MR_Integer) MR_r4 == (MR_Integer) 56)) || ((MR_Integer) MR_r4 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i23);
	}
	MR_r5 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 33) || ((MR_Integer) MR_r4 == (MR_Integer) 38)) || ((MR_Integer) MR_r4 == (MR_Integer) 42)) || ((MR_Integer) MR_r4 == (MR_Integer) 43)) || ((MR_Integer) MR_r4 == (MR_Integer) 45)) || ((MR_Integer) MR_r4 == (MR_Integer) 58)) || ((MR_Integer) MR_r4 == (MR_Integer) 60)) || ((MR_Integer) MR_r4 == (MR_Integer) 61)) || ((MR_Integer) MR_r4 == (MR_Integer) 62)) || ((MR_Integer) MR_r4 == (MR_Integer) 63)) || ((MR_Integer) MR_r4 == (MR_Integer) 64)) || ((MR_Integer) MR_r4 == (MR_Integer) 92)) || ((MR_Integer) MR_r4 == (MR_Integer) 94)) || ((MR_Integer) MR_r4 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i24);
	}
	MR_r5 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 97) || ((MR_Integer) MR_r4 == (MR_Integer) 98)) || ((MR_Integer) MR_r4 == (MR_Integer) 99)) || ((MR_Integer) MR_r4 == (MR_Integer) 100)) || ((MR_Integer) MR_r4 == (MR_Integer) 101)) || ((MR_Integer) MR_r4 == (MR_Integer) 102)) || ((MR_Integer) MR_r4 == (MR_Integer) 103)) || ((MR_Integer) MR_r4 == (MR_Integer) 104)) || ((MR_Integer) MR_r4 == (MR_Integer) 105)) || ((MR_Integer) MR_r4 == (MR_Integer) 106)) || ((MR_Integer) MR_r4 == (MR_Integer) 107)) || ((MR_Integer) MR_r4 == (MR_Integer) 108)) || ((MR_Integer) MR_r4 == (MR_Integer) 109)) || ((MR_Integer) MR_r4 == (MR_Integer) 110)) || ((MR_Integer) MR_r4 == (MR_Integer) 111)) || ((MR_Integer) MR_r4 == (MR_Integer) 112)) || ((MR_Integer) MR_r4 == (MR_Integer) 113)) || ((MR_Integer) MR_r4 == (MR_Integer) 114)) || ((MR_Integer) MR_r4 == (MR_Integer) 115)) || ((MR_Integer) MR_r4 == (MR_Integer) 116)) || ((MR_Integer) MR_r4 == (MR_Integer) 117)) || ((MR_Integer) MR_r4 == (MR_Integer) 118)) || ((MR_Integer) MR_r4 == (MR_Integer) 119)) || ((MR_Integer) MR_r4 == (MR_Integer) 120)) || ((MR_Integer) MR_r4 == (MR_Integer) 121)) || ((MR_Integer) MR_r4 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i25);
	}
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i12);
MR_def_label(lexer__string_get_token_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 65) || ((MR_Integer) MR_r4 == (MR_Integer) 66)) || ((MR_Integer) MR_r4 == (MR_Integer) 67)) || ((MR_Integer) MR_r4 == (MR_Integer) 68)) || ((MR_Integer) MR_r4 == (MR_Integer) 69)) || ((MR_Integer) MR_r4 == (MR_Integer) 70)) || ((MR_Integer) MR_r4 == (MR_Integer) 71)) || ((MR_Integer) MR_r4 == (MR_Integer) 72)) || ((MR_Integer) MR_r4 == (MR_Integer) 73)) || ((MR_Integer) MR_r4 == (MR_Integer) 74)) || ((MR_Integer) MR_r4 == (MR_Integer) 75)) || ((MR_Integer) MR_r4 == (MR_Integer) 76)) || ((MR_Integer) MR_r4 == (MR_Integer) 77)) || ((MR_Integer) MR_r4 == (MR_Integer) 78)) || ((MR_Integer) MR_r4 == (MR_Integer) 79)) || ((MR_Integer) MR_r4 == (MR_Integer) 80)) || ((MR_Integer) MR_r4 == (MR_Integer) 81)) || ((MR_Integer) MR_r4 == (MR_Integer) 82)) || ((MR_Integer) MR_r4 == (MR_Integer) 83)) || ((MR_Integer) MR_r4 == (MR_Integer) 84)) || ((MR_Integer) MR_r4 == (MR_Integer) 85)) || ((MR_Integer) MR_r4 == (MR_Integer) 86)) || ((MR_Integer) MR_r4 == (MR_Integer) 87)) || ((MR_Integer) MR_r4 == (MR_Integer) 88)) || ((MR_Integer) MR_r4 == (MR_Integer) 89)) || ((MR_Integer) MR_r4 == (MR_Integer) 90)) || ((MR_Integer) MR_r4 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i11);
	}
	MR_r5 = (MR_Integer) 2;
MR_def_label(lexer__string_get_token_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 1;
	MR_np_tailcall_ent(lexer__execute_string_get_token_action_10_0);
MR_def_label(lexer__string_get_token_6_0,11)
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


MR_BEGIN_MODULE(lexer_module70)
	MR_init_entry1(lexer__string_get_token_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_token_2_6_0);
	MR_init_label10(lexer__string_get_token_2_6_0,6,10,13,14,15,16,17,18,19,20)
	MR_init_label8(lexer__string_get_token_2_6_0,21,22,23,24,25,12,11,3)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r8 = MR_tfield(0, MR_tempr3, 2);
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_token_2_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r8;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 15959 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_token_2_6_0_i3);
	MR_tempr1 = NextIndex;
	MR_r4 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tfield(0, MR_tempr3, 1);
	MR_r10 = MR_tfield(0, MR_tempr3, 0);
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i10);
	}
MR_def_label(lexer__string_get_token_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r9;
	MR_tfield(0, MR_tempr1, 2) = MR_r8;
	}
MR_def_label(lexer__string_get_token_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,35)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i13);
	}
	MR_r5 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,36)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i14);
	}
	MR_r5 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,37)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i15);
	}
	MR_r5 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,46)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i16);
	}
	MR_r5 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i17);
	}
	MR_r5 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,48)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i18);
	}
	MR_r5 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,96)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i19);
	}
	MR_r5 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r4 == (MR_Integer) 34) || ((MR_Integer) MR_r4 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i20);
	}
	MR_r5 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r4 == (MR_Integer) 9) || ((MR_Integer) MR_r4 == (MR_Integer) 10)) || ((MR_Integer) MR_r4 == (MR_Integer) 11)) || ((MR_Integer) MR_r4 == (MR_Integer) 12)) || ((MR_Integer) MR_r4 == (MR_Integer) 13)) || ((MR_Integer) MR_r4 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i21);
	}
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 40) || ((MR_Integer) MR_r4 == (MR_Integer) 41)) || ((MR_Integer) MR_r4 == (MR_Integer) 44)) || ((MR_Integer) MR_r4 == (MR_Integer) 59)) || ((MR_Integer) MR_r4 == (MR_Integer) 91)) || ((MR_Integer) MR_r4 == (MR_Integer) 93)) || ((MR_Integer) MR_r4 == (MR_Integer) 123)) || ((MR_Integer) MR_r4 == (MR_Integer) 124)) || ((MR_Integer) MR_r4 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i22);
	}
	MR_r5 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 49) || ((MR_Integer) MR_r4 == (MR_Integer) 50)) || ((MR_Integer) MR_r4 == (MR_Integer) 51)) || ((MR_Integer) MR_r4 == (MR_Integer) 52)) || ((MR_Integer) MR_r4 == (MR_Integer) 53)) || ((MR_Integer) MR_r4 == (MR_Integer) 54)) || ((MR_Integer) MR_r4 == (MR_Integer) 55)) || ((MR_Integer) MR_r4 == (MR_Integer) 56)) || ((MR_Integer) MR_r4 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i23);
	}
	MR_r5 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 33) || ((MR_Integer) MR_r4 == (MR_Integer) 38)) || ((MR_Integer) MR_r4 == (MR_Integer) 42)) || ((MR_Integer) MR_r4 == (MR_Integer) 43)) || ((MR_Integer) MR_r4 == (MR_Integer) 45)) || ((MR_Integer) MR_r4 == (MR_Integer) 58)) || ((MR_Integer) MR_r4 == (MR_Integer) 60)) || ((MR_Integer) MR_r4 == (MR_Integer) 61)) || ((MR_Integer) MR_r4 == (MR_Integer) 62)) || ((MR_Integer) MR_r4 == (MR_Integer) 63)) || ((MR_Integer) MR_r4 == (MR_Integer) 64)) || ((MR_Integer) MR_r4 == (MR_Integer) 92)) || ((MR_Integer) MR_r4 == (MR_Integer) 94)) || ((MR_Integer) MR_r4 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i24);
	}
	MR_r5 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 97) || ((MR_Integer) MR_r4 == (MR_Integer) 98)) || ((MR_Integer) MR_r4 == (MR_Integer) 99)) || ((MR_Integer) MR_r4 == (MR_Integer) 100)) || ((MR_Integer) MR_r4 == (MR_Integer) 101)) || ((MR_Integer) MR_r4 == (MR_Integer) 102)) || ((MR_Integer) MR_r4 == (MR_Integer) 103)) || ((MR_Integer) MR_r4 == (MR_Integer) 104)) || ((MR_Integer) MR_r4 == (MR_Integer) 105)) || ((MR_Integer) MR_r4 == (MR_Integer) 106)) || ((MR_Integer) MR_r4 == (MR_Integer) 107)) || ((MR_Integer) MR_r4 == (MR_Integer) 108)) || ((MR_Integer) MR_r4 == (MR_Integer) 109)) || ((MR_Integer) MR_r4 == (MR_Integer) 110)) || ((MR_Integer) MR_r4 == (MR_Integer) 111)) || ((MR_Integer) MR_r4 == (MR_Integer) 112)) || ((MR_Integer) MR_r4 == (MR_Integer) 113)) || ((MR_Integer) MR_r4 == (MR_Integer) 114)) || ((MR_Integer) MR_r4 == (MR_Integer) 115)) || ((MR_Integer) MR_r4 == (MR_Integer) 116)) || ((MR_Integer) MR_r4 == (MR_Integer) 117)) || ((MR_Integer) MR_r4 == (MR_Integer) 118)) || ((MR_Integer) MR_r4 == (MR_Integer) 119)) || ((MR_Integer) MR_r4 == (MR_Integer) 120)) || ((MR_Integer) MR_r4 == (MR_Integer) 121)) || ((MR_Integer) MR_r4 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i25);
	}
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i12);
MR_def_label(lexer__string_get_token_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 65) || ((MR_Integer) MR_r4 == (MR_Integer) 66)) || ((MR_Integer) MR_r4 == (MR_Integer) 67)) || ((MR_Integer) MR_r4 == (MR_Integer) 68)) || ((MR_Integer) MR_r4 == (MR_Integer) 69)) || ((MR_Integer) MR_r4 == (MR_Integer) 70)) || ((MR_Integer) MR_r4 == (MR_Integer) 71)) || ((MR_Integer) MR_r4 == (MR_Integer) 72)) || ((MR_Integer) MR_r4 == (MR_Integer) 73)) || ((MR_Integer) MR_r4 == (MR_Integer) 74)) || ((MR_Integer) MR_r4 == (MR_Integer) 75)) || ((MR_Integer) MR_r4 == (MR_Integer) 76)) || ((MR_Integer) MR_r4 == (MR_Integer) 77)) || ((MR_Integer) MR_r4 == (MR_Integer) 78)) || ((MR_Integer) MR_r4 == (MR_Integer) 79)) || ((MR_Integer) MR_r4 == (MR_Integer) 80)) || ((MR_Integer) MR_r4 == (MR_Integer) 81)) || ((MR_Integer) MR_r4 == (MR_Integer) 82)) || ((MR_Integer) MR_r4 == (MR_Integer) 83)) || ((MR_Integer) MR_r4 == (MR_Integer) 84)) || ((MR_Integer) MR_r4 == (MR_Integer) 85)) || ((MR_Integer) MR_r4 == (MR_Integer) 86)) || ((MR_Integer) MR_r4 == (MR_Integer) 87)) || ((MR_Integer) MR_r4 == (MR_Integer) 88)) || ((MR_Integer) MR_r4 == (MR_Integer) 89)) || ((MR_Integer) MR_r4 == (MR_Integer) 90)) || ((MR_Integer) MR_r4 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i11);
	}
	MR_r5 = (MR_Integer) 2;
MR_def_label(lexer__string_get_token_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(lexer__execute_string_get_token_action_10_0);
MR_def_label(lexer__string_get_token_2_6_0,11)
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


MR_BEGIN_MODULE(lexer_module71)
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


MR_BEGIN_MODULE(lexer_module72)
	MR_init_entry1(lexer__string_skip_to_eol_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_skip_to_eol_6_0);
	MR_init_label4(lexer__string_skip_to_eol_6_0,42,6,10,3)
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
MR_def_label(lexer__string_skip_to_eol_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_r4 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_skip_to_eol_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r4;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 16376 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r6 = MR_tfield(0, MR_tempr4, 1);
	MR_r7 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r7 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_sv(1) = MR_tempr4;
	MR_r3 = MR_tempr3;
	MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i10);
	}
MR_def_label(lexer__string_skip_to_eol_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r7;
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_r4 = MR_r5;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_tempr1;
	}
MR_def_label(lexer__string_skip_to_eol_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i42);
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


MR_BEGIN_MODULE(lexer_module73)
	MR_init_entry1(lexer__string_get_slash_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_slash_7_0);
	MR_init_label7(lexer__string_get_slash_7_0,6,10,11,170,14,35,3)
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
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_slash_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 16470 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_slash_7_0_i3);
	MR_r5 = NextIndex;
	MR_r6 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_r7 = MR_tfield(0, MR_tempr2, 1);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r6,10)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_r5 = MR_r6;
	MR_sv(2) = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_slash_7_0_i10);
	}
MR_def_label(lexer__string_get_slash_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_slash_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_comment_7_0);
MR_def_label(lexer__string_get_slash_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,33)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,35)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,36)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,38)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,43)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,45)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,46)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,47)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,58)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,60)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,61)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,62)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,63)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,64)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,92)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_EQ(MR_r5,94)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i170);
	}
	if (MR_INT_NE(MR_r5,126)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i14);
	}
MR_def_label(lexer__string_get_slash_7_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_slash_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_slash_7_0_i35);
MR_def_label(lexer__string_get_slash_7_0,35)
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


MR_BEGIN_MODULE(lexer_module74)
	MR_init_entry1(lexer__string_get_comment_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_comment_7_0);
	MR_init_label4(lexer__string_get_comment_7_0,43,6,10,3)
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
MR_def_label(lexer__string_get_comment_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_comment_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_comment_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 16653 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_comment_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_comment_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_sv(2) = MR_tempr4;
	MR_r4 = MR_tempr3;
	MR_GOTO_LAB(lexer__string_get_comment_7_0_i10);
	}
MR_def_label(lexer__string_get_comment_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(lexer__string_get_comment_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_comment_7_0_i43);
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


MR_BEGIN_MODULE(lexer_module75)
	MR_init_entry1(lexer__string_get_comment_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_comment_2_7_0);
	MR_init_label6(lexer__string_get_comment_2_7_0,53,6,10,11,14,3)
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
MR_def_label(lexer__string_get_comment_2_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_comment_2_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 16755 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr4;
	MR_r4 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i10);
	}
MR_def_label(lexer__string_get_comment_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_r6;
	MR_r3 = MR_tempr1;
	}
MR_def_label(lexer__string_get_comment_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_token_2_6_0);
MR_def_label(lexer__string_get_comment_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,42)) {
		MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i53);
	}
MR_def_label(lexer__string_get_comment_2_7_0,14)
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


MR_BEGIN_MODULE(lexer_module76)
	MR_init_entry1(lexer__string_get_source_line_number_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_source_line_number_7_0);
	MR_init_label10(lexer__string_get_source_line_number_7_0,98,6,10,13,11,19,18,26,16,30)
	MR_init_label4(lexer__string_get_source_line_number_7_0,37,42,3,46)
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
MR_def_label(lexer__string_get_source_line_number_7_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_source_line_number_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 16883 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i10);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_r4;
	}
MR_def_label(lexer__string_get_source_line_number_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_source_line_number_7_0_i13);
MR_def_label(lexer__string_get_source_line_number_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i98);
MR_def_label(lexer__string_get_source_line_number_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	MR_tempr2 = MR_tfield(0, MR_sv(5), 2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__lexer__string_get_source_line_number_7_0
	Str = (MR_String) MR_sv(3);
	Start = MR_tempr1;
	End = MR_tempr2;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16970 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_source_line_number_7_0_i19);
MR_def_label(lexer__string_get_source_line_number_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i18);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(5), 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_token_6_0);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("invalid line number \140", 21);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_sv(1), 0);
	MR_sv(4) = MR_sv(5);
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__string_get_source_line_number_7_0_i26);
MR_def_label(lexer__string_get_source_line_number_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_sv(1), 0);
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__string_get_source_line_number_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Character = MR_r1;
	Int = (MR_Integer) 0;
{
#line 59 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 17041 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i30);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__string_get_source_line_number_7_0_i42);
MR_def_label(lexer__string_get_source_line_number_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_sv(5);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		lexer__string_get_source_line_number_7_0_i37);
MR_def_label(lexer__string_get_source_line_number_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("invalid character \140", 19);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		lexer__string_get_source_line_number_7_0_i42);
MR_def_label(lexer__string_get_source_line_number_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_source_line_number_7_0_i46);
MR_def_label(lexer__string_get_source_line_number_7_0,46)
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


MR_BEGIN_MODULE(lexer_module77)
	MR_init_entry1(lexer__string_get_token_list_max_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__string_get_token_list_max_5_0);
	MR_init_label10(lexer__string_get_token_list_max_5_0,6,10,13,14,15,16,17,18,19,20)
	MR_init_label10(lexer__string_get_token_list_max_5_0,21,22,23,24,25,12,27,11,3,30)
	MR_init_label3(lexer__string_get_token_list_max_5_0,32,33,36)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r8 = MR_tfield(0, MR_tempr3, 2);
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_token_list_max_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r8;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 17150 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i3);
	MR_tempr1 = NextIndex;
	MR_r4 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tfield(0, MR_tempr3, 1);
	MR_r10 = MR_tfield(0, MR_tempr3, 0);
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i10);
	}
MR_def_label(lexer__string_get_token_list_max_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r10;
	MR_tfield(0, MR_tempr1, 1) = MR_r9;
	MR_tfield(0, MR_tempr1, 2) = MR_r8;
	}
MR_def_label(lexer__string_get_token_list_max_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,35)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i13);
	}
	MR_r5 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,36)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i14);
	}
	MR_r5 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,37)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i15);
	}
	MR_r5 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,46)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i16);
	}
	MR_r5 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i17);
	}
	MR_r5 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,48)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i18);
	}
	MR_r5 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,96)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i19);
	}
	MR_r5 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r4 == (MR_Integer) 34) || ((MR_Integer) MR_r4 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i20);
	}
	MR_r5 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r4 == (MR_Integer) 9) || ((MR_Integer) MR_r4 == (MR_Integer) 10)) || ((MR_Integer) MR_r4 == (MR_Integer) 11)) || ((MR_Integer) MR_r4 == (MR_Integer) 12)) || ((MR_Integer) MR_r4 == (MR_Integer) 13)) || ((MR_Integer) MR_r4 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i21);
	}
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 40) || ((MR_Integer) MR_r4 == (MR_Integer) 41)) || ((MR_Integer) MR_r4 == (MR_Integer) 44)) || ((MR_Integer) MR_r4 == (MR_Integer) 59)) || ((MR_Integer) MR_r4 == (MR_Integer) 91)) || ((MR_Integer) MR_r4 == (MR_Integer) 93)) || ((MR_Integer) MR_r4 == (MR_Integer) 123)) || ((MR_Integer) MR_r4 == (MR_Integer) 124)) || ((MR_Integer) MR_r4 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i22);
	}
	MR_r5 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 49) || ((MR_Integer) MR_r4 == (MR_Integer) 50)) || ((MR_Integer) MR_r4 == (MR_Integer) 51)) || ((MR_Integer) MR_r4 == (MR_Integer) 52)) || ((MR_Integer) MR_r4 == (MR_Integer) 53)) || ((MR_Integer) MR_r4 == (MR_Integer) 54)) || ((MR_Integer) MR_r4 == (MR_Integer) 55)) || ((MR_Integer) MR_r4 == (MR_Integer) 56)) || ((MR_Integer) MR_r4 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i23);
	}
	MR_r5 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 33) || ((MR_Integer) MR_r4 == (MR_Integer) 38)) || ((MR_Integer) MR_r4 == (MR_Integer) 42)) || ((MR_Integer) MR_r4 == (MR_Integer) 43)) || ((MR_Integer) MR_r4 == (MR_Integer) 45)) || ((MR_Integer) MR_r4 == (MR_Integer) 58)) || ((MR_Integer) MR_r4 == (MR_Integer) 60)) || ((MR_Integer) MR_r4 == (MR_Integer) 61)) || ((MR_Integer) MR_r4 == (MR_Integer) 62)) || ((MR_Integer) MR_r4 == (MR_Integer) 63)) || ((MR_Integer) MR_r4 == (MR_Integer) 64)) || ((MR_Integer) MR_r4 == (MR_Integer) 92)) || ((MR_Integer) MR_r4 == (MR_Integer) 94)) || ((MR_Integer) MR_r4 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i24);
	}
	MR_r5 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 97) || ((MR_Integer) MR_r4 == (MR_Integer) 98)) || ((MR_Integer) MR_r4 == (MR_Integer) 99)) || ((MR_Integer) MR_r4 == (MR_Integer) 100)) || ((MR_Integer) MR_r4 == (MR_Integer) 101)) || ((MR_Integer) MR_r4 == (MR_Integer) 102)) || ((MR_Integer) MR_r4 == (MR_Integer) 103)) || ((MR_Integer) MR_r4 == (MR_Integer) 104)) || ((MR_Integer) MR_r4 == (MR_Integer) 105)) || ((MR_Integer) MR_r4 == (MR_Integer) 106)) || ((MR_Integer) MR_r4 == (MR_Integer) 107)) || ((MR_Integer) MR_r4 == (MR_Integer) 108)) || ((MR_Integer) MR_r4 == (MR_Integer) 109)) || ((MR_Integer) MR_r4 == (MR_Integer) 110)) || ((MR_Integer) MR_r4 == (MR_Integer) 111)) || ((MR_Integer) MR_r4 == (MR_Integer) 112)) || ((MR_Integer) MR_r4 == (MR_Integer) 113)) || ((MR_Integer) MR_r4 == (MR_Integer) 114)) || ((MR_Integer) MR_r4 == (MR_Integer) 115)) || ((MR_Integer) MR_r4 == (MR_Integer) 116)) || ((MR_Integer) MR_r4 == (MR_Integer) 117)) || ((MR_Integer) MR_r4 == (MR_Integer) 118)) || ((MR_Integer) MR_r4 == (MR_Integer) 119)) || ((MR_Integer) MR_r4 == (MR_Integer) 120)) || ((MR_Integer) MR_r4 == (MR_Integer) 121)) || ((MR_Integer) MR_r4 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i25);
	}
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
MR_def_label(lexer__string_get_token_list_max_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 65) || ((MR_Integer) MR_r4 == (MR_Integer) 66)) || ((MR_Integer) MR_r4 == (MR_Integer) 67)) || ((MR_Integer) MR_r4 == (MR_Integer) 68)) || ((MR_Integer) MR_r4 == (MR_Integer) 69)) || ((MR_Integer) MR_r4 == (MR_Integer) 70)) || ((MR_Integer) MR_r4 == (MR_Integer) 71)) || ((MR_Integer) MR_r4 == (MR_Integer) 72)) || ((MR_Integer) MR_r4 == (MR_Integer) 73)) || ((MR_Integer) MR_r4 == (MR_Integer) 74)) || ((MR_Integer) MR_r4 == (MR_Integer) 75)) || ((MR_Integer) MR_r4 == (MR_Integer) 76)) || ((MR_Integer) MR_r4 == (MR_Integer) 77)) || ((MR_Integer) MR_r4 == (MR_Integer) 78)) || ((MR_Integer) MR_r4 == (MR_Integer) 79)) || ((MR_Integer) MR_r4 == (MR_Integer) 80)) || ((MR_Integer) MR_r4 == (MR_Integer) 81)) || ((MR_Integer) MR_r4 == (MR_Integer) 82)) || ((MR_Integer) MR_r4 == (MR_Integer) 83)) || ((MR_Integer) MR_r4 == (MR_Integer) 84)) || ((MR_Integer) MR_r4 == (MR_Integer) 85)) || ((MR_Integer) MR_r4 == (MR_Integer) 86)) || ((MR_Integer) MR_r4 == (MR_Integer) 87)) || ((MR_Integer) MR_r4 == (MR_Integer) 88)) || ((MR_Integer) MR_r4 == (MR_Integer) 89)) || ((MR_Integer) MR_r4 == (MR_Integer) 90)) || ((MR_Integer) MR_r4 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i11);
	}
	MR_r5 = (MR_Integer) 2;
MR_def_label(lexer__string_get_token_list_max_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(lexer__execute_string_get_token_action_10_0,
		lexer__string_get_token_list_max_5_0_i27);
MR_def_label(lexer__string_get_token_list_max_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r8 = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_r7;
	MR_r4 = MR_r8;
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i30);
MR_def_label(lexer__string_get_token_list_max_5_0,11)
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
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i30);
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
MR_def_label(lexer__string_get_token_list_max_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,10)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i32);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_token_list_max_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 9)) || ((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 6))))) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i33);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_token_list_max_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_r3 = (MR_Word) &MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(lexer__LCMCpr_string_get_token_list_max_1_5_0,
		lexer__string_get_token_list_max_5_0_i36);
MR_def_label(lexer__string_get_token_list_max_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module78)
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
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 17392 "lexer.c"
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

MR_BEGIN_MODULE(lexer_module79)
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
#line 297 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
};}
#line 17559 "lexer.c"
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
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 17670 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module80)
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


MR_BEGIN_MODULE(lexer_module81)
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


MR_BEGIN_MODULE(lexer_module82)
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


MR_BEGIN_MODULE(lexer_module83)
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


MR_BEGIN_MODULE(lexer_module84)
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


MR_BEGIN_MODULE(lexer_module85)
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


MR_BEGIN_MODULE(lexer_module86)
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


MR_BEGIN_MODULE(lexer_module87)
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


MR_BEGIN_MODULE(lexer_module88)
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


MR_BEGIN_MODULE(lexer_module89)
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

MR_BEGIN_MODULE(lexer_module90)
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
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 18519 "lexer.c"
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
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 18560 "lexer.c"
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
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 18601 "lexer.c"
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
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 18666 "lexer.c"
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
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 18751 "lexer.c"
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
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 18787 "lexer.c"
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
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 18802 "lexer.c"
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
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 18839 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module91)
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


MR_BEGIN_MODULE(lexer_module92)
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


MR_BEGIN_MODULE(lexer_module93)
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


MR_BEGIN_MODULE(lexer_module94)
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


MR_BEGIN_MODULE(lexer_module95)
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


MR_BEGIN_MODULE(lexer_module96)
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
#line 1376 "io.opt"

    LineNum = MR_line_number(*Stream);
    MR_update_io(IO0, IO);
;}
#line 19176 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number_2");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
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
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
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
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(lexer__get_token_5_0,
		lexer__LCMCpr_get_token_list_2_1_6_0_i11);
MR_def_label(lexer__LCMCpr_get_token_list_2_1_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
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


MR_BEGIN_MODULE(lexer_module97)
	MR_init_entry1(lexer__LCMCpr_string_get_token_list_max_1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lexer__LCMCpr_string_get_token_list_max_1_5_0);
	MR_init_label10(lexer__LCMCpr_string_get_token_list_max_1_5_0,152,6,10,13,14,15,16,17,18,19)
	MR_init_label10(lexer__LCMCpr_string_get_token_list_max_1_5_0,20,21,22,23,24,25,12,27,11,3)
	MR_init_label3(lexer__LCMCpr_string_get_token_list_max_1_5_0,30,32,33)
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
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_r8 = MR_tfield(0, MR_tempr4, 2);
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i3);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__LCMCpr_string_get_token_list_max_1_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r8;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 19300 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r9 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_r10 = MR_tfield(0, MR_tempr4, 1);
	MR_r11 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r11 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr2;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i10);
	}
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r11;
	MR_tfield(0, MR_tempr1, 1) = MR_r10;
	MR_tfield(0, MR_tempr1, 2) = MR_r8;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r9;
	}
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,35)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i13);
	}
	MR_r5 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,36)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i14);
	}
	MR_r5 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,37)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i15);
	}
	MR_r5 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,46)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i16);
	}
	MR_r5 = (MR_Integer) 6;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i17);
	}
	MR_r5 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,48)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i18);
	}
	MR_r5 = (MR_Integer) 3;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,96)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i19);
	}
	MR_r5 = (MR_Integer) 11;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r4 == (MR_Integer) 34) || ((MR_Integer) MR_r4 == (MR_Integer) 39)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i20);
	}
	MR_r5 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_Integer) MR_r4 == (MR_Integer) 9) || ((MR_Integer) MR_r4 == (MR_Integer) 10)) || ((MR_Integer) MR_r4 == (MR_Integer) 11)) || ((MR_Integer) MR_r4 == (MR_Integer) 12)) || ((MR_Integer) MR_r4 == (MR_Integer) 13)) || ((MR_Integer) MR_r4 == (MR_Integer) 32)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i21);
	}
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 40) || ((MR_Integer) MR_r4 == (MR_Integer) 41)) || ((MR_Integer) MR_r4 == (MR_Integer) 44)) || ((MR_Integer) MR_r4 == (MR_Integer) 59)) || ((MR_Integer) MR_r4 == (MR_Integer) 91)) || ((MR_Integer) MR_r4 == (MR_Integer) 93)) || ((MR_Integer) MR_r4 == (MR_Integer) 123)) || ((MR_Integer) MR_r4 == (MR_Integer) 124)) || ((MR_Integer) MR_r4 == (MR_Integer) 125)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i22);
	}
	MR_r5 = (MR_Integer) 5;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((MR_Integer) MR_r4 == (MR_Integer) 49) || ((MR_Integer) MR_r4 == (MR_Integer) 50)) || ((MR_Integer) MR_r4 == (MR_Integer) 51)) || ((MR_Integer) MR_r4 == (MR_Integer) 52)) || ((MR_Integer) MR_r4 == (MR_Integer) 53)) || ((MR_Integer) MR_r4 == (MR_Integer) 54)) || ((MR_Integer) MR_r4 == (MR_Integer) 55)) || ((MR_Integer) MR_r4 == (MR_Integer) 56)) || ((MR_Integer) MR_r4 == (MR_Integer) 57)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i23);
	}
	MR_r5 = (MR_Integer) 4;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 33) || ((MR_Integer) MR_r4 == (MR_Integer) 38)) || ((MR_Integer) MR_r4 == (MR_Integer) 42)) || ((MR_Integer) MR_r4 == (MR_Integer) 43)) || ((MR_Integer) MR_r4 == (MR_Integer) 45)) || ((MR_Integer) MR_r4 == (MR_Integer) 58)) || ((MR_Integer) MR_r4 == (MR_Integer) 60)) || ((MR_Integer) MR_r4 == (MR_Integer) 61)) || ((MR_Integer) MR_r4 == (MR_Integer) 62)) || ((MR_Integer) MR_r4 == (MR_Integer) 63)) || ((MR_Integer) MR_r4 == (MR_Integer) 64)) || ((MR_Integer) MR_r4 == (MR_Integer) 92)) || ((MR_Integer) MR_r4 == (MR_Integer) 94)) || ((MR_Integer) MR_r4 == (MR_Integer) 126)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i24);
	}
	MR_r5 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 97) || ((MR_Integer) MR_r4 == (MR_Integer) 98)) || ((MR_Integer) MR_r4 == (MR_Integer) 99)) || ((MR_Integer) MR_r4 == (MR_Integer) 100)) || ((MR_Integer) MR_r4 == (MR_Integer) 101)) || ((MR_Integer) MR_r4 == (MR_Integer) 102)) || ((MR_Integer) MR_r4 == (MR_Integer) 103)) || ((MR_Integer) MR_r4 == (MR_Integer) 104)) || ((MR_Integer) MR_r4 == (MR_Integer) 105)) || ((MR_Integer) MR_r4 == (MR_Integer) 106)) || ((MR_Integer) MR_r4 == (MR_Integer) 107)) || ((MR_Integer) MR_r4 == (MR_Integer) 108)) || ((MR_Integer) MR_r4 == (MR_Integer) 109)) || ((MR_Integer) MR_r4 == (MR_Integer) 110)) || ((MR_Integer) MR_r4 == (MR_Integer) 111)) || ((MR_Integer) MR_r4 == (MR_Integer) 112)) || ((MR_Integer) MR_r4 == (MR_Integer) 113)) || ((MR_Integer) MR_r4 == (MR_Integer) 114)) || ((MR_Integer) MR_r4 == (MR_Integer) 115)) || ((MR_Integer) MR_r4 == (MR_Integer) 116)) || ((MR_Integer) MR_r4 == (MR_Integer) 117)) || ((MR_Integer) MR_r4 == (MR_Integer) 118)) || ((MR_Integer) MR_r4 == (MR_Integer) 119)) || ((MR_Integer) MR_r4 == (MR_Integer) 120)) || ((MR_Integer) MR_r4 == (MR_Integer) 121)) || ((MR_Integer) MR_r4 == (MR_Integer) 122)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i25);
	}
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i12);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((((((((((((((((((MR_Integer) MR_r4 == (MR_Integer) 65) || ((MR_Integer) MR_r4 == (MR_Integer) 66)) || ((MR_Integer) MR_r4 == (MR_Integer) 67)) || ((MR_Integer) MR_r4 == (MR_Integer) 68)) || ((MR_Integer) MR_r4 == (MR_Integer) 69)) || ((MR_Integer) MR_r4 == (MR_Integer) 70)) || ((MR_Integer) MR_r4 == (MR_Integer) 71)) || ((MR_Integer) MR_r4 == (MR_Integer) 72)) || ((MR_Integer) MR_r4 == (MR_Integer) 73)) || ((MR_Integer) MR_r4 == (MR_Integer) 74)) || ((MR_Integer) MR_r4 == (MR_Integer) 75)) || ((MR_Integer) MR_r4 == (MR_Integer) 76)) || ((MR_Integer) MR_r4 == (MR_Integer) 77)) || ((MR_Integer) MR_r4 == (MR_Integer) 78)) || ((MR_Integer) MR_r4 == (MR_Integer) 79)) || ((MR_Integer) MR_r4 == (MR_Integer) 80)) || ((MR_Integer) MR_r4 == (MR_Integer) 81)) || ((MR_Integer) MR_r4 == (MR_Integer) 82)) || ((MR_Integer) MR_r4 == (MR_Integer) 83)) || ((MR_Integer) MR_r4 == (MR_Integer) 84)) || ((MR_Integer) MR_r4 == (MR_Integer) 85)) || ((MR_Integer) MR_r4 == (MR_Integer) 86)) || ((MR_Integer) MR_r4 == (MR_Integer) 87)) || ((MR_Integer) MR_r4 == (MR_Integer) 88)) || ((MR_Integer) MR_r4 == (MR_Integer) 89)) || ((MR_Integer) MR_r4 == (MR_Integer) 90)) || ((MR_Integer) MR_r4 == (MR_Integer) 95)))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i11);
	}
	MR_r5 = (MR_Integer) 2;
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(lexer__execute_string_get_token_action_10_0,
		lexer__LCMCpr_string_get_token_list_max_1_5_0_i27);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r8 = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_r7;
	MR_r4 = MR_r8;
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i30);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,11)
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
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i30);
	}
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 10);
	MR_r5 = MR_tfield(0, MR_r4, 0);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,10)) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i32);
	}
	* (MR_Word *) (MR_sv(4)) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 9)) || ((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 6))))) {
		MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i33);
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
MR_def_label(lexer__LCMCpr_string_get_token_list_max_1_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	* (MR_Word *) (MR_sv(4)) = MR_tempr1;
	MR_r3 = (MR_Word) &MR_tfield(1, MR_tempr1, 2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__LCMCpr_string_get_token_list_max_1_5_0_i152);
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
#ifdef MR_THREADSCOPE
void mercury__lexer__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__lexer__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
