/*
** Automatically generated from `lexer.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
#line 530 "io.int"
#include "io.mh"

#line 31 "lexer.c"
#line 538 "io.int"
#include "string.mh"

#line 35 "lexer.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "lexer.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "lexer.c"
#line 30 "array.int2"
#include "array.mh"

#line 47 "lexer.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "lexer.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "lexer.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 59 "lexer.c"
#line 23 "store.opt"
#include "store.mh"

#line 63 "lexer.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "lexer.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "lexer.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 75 "lexer.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 79 "lexer.c"
#line 4 "char.opt"
#include "char.mh"

#line 83 "lexer.c"
#line 4 "int.opt"
#include "int.mh"

#line 87 "lexer.c"
#line 148 "io.opt"
#include "dir.mh"

#line 91 "lexer.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 95 "lexer.c"
#line 3 "list.opt"
#include "list.mh"

#line 99 "lexer.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "lexer.c"
#line 104 "lexer.c"
#ifndef LEXER_DECL_GUARD
#define LEXER_DECL_GUARD

#line 108 "lexer.c"
#line 109 "lexer.c"

#endif
#line 112 "lexer.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
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
	mercury_data_lexer__type_ctor_info_unicode_encoding_0,
	mercury_data_lexer__type_ctor_info_token_list_0,
	mercury_data_lexer__type_ctor_info_token_context_0,
	mercury_data_lexer__type_ctor_info_token_0,
	mercury_data_lexer__type_ctor_info_string_token_context_0,
	mercury_data_lexer__type_ctor_info_offset_0;
MR_decl_label8(lexer__encode_unicode_char_as_utf8_2_0, 50,4,3,6,7,8,5,10)
MR_decl_label8(lexer__encode_unicode_char_as_utf8_2_0, 11,12,13,14,9,15,16,17)
MR_decl_label5(lexer__encode_unicode_char_as_utf8_2_0, 18,19,20,21,1)
MR_decl_label4(lexer__finish_hex_escape_6_0, 53,8,12,5)
MR_decl_label4(lexer__finish_octal_escape_6_0, 53,8,12,5)
MR_decl_label8(lexer__get_binary_3_0, 2,5,9,19,12,15,14,64)
MR_decl_label8(lexer__get_binary_2_4_0, 99,2,5,9,34,28,12,15)
MR_decl_label5(lexer__get_binary_2_4_0, 14,13,23,22,19)
MR_decl_label5(lexer__get_char_code_3_0, 2,5,9,13,12)
MR_decl_label6(lexer__get_comment_4_0, 2,5,9,18,12,57)
MR_decl_label7(lexer__get_comment_2_4_0, 2,5,9,22,12,13,69)
MR_decl_label8(lexer__get_dot_3_0, 2,5,9,44,196,18,15,14)
MR_decl_label8(lexer__get_dot_3_0, 23,24,25,26,27,28,29,30)
MR_decl_label8(lexer__get_dot_3_0, 31,32,33,34,35,36,37,38)
MR_decl_label3(lexer__get_dot_3_0, 39,22,21)
MR_decl_label8(lexer__get_float_decimals_4_0, 108,2,5,9,35,12,15,13)
MR_decl_label6(lexer__get_float_decimals_4_0, 20,19,18,30,28,24)
MR_decl_label8(lexer__get_float_exponent_4_0, 2,5,9,31,27,25,12,14)
MR_decl_label3(lexer__get_float_exponent_4_0, 13,20,19)
MR_decl_label7(lexer__get_float_exponent_2_4_0, 2,5,9,19,12,15,13)
MR_decl_label8(lexer__get_float_exponent_3_4_0, 90,2,5,9,29,12,15,13)
MR_decl_label3(lexer__get_float_exponent_3_4_0, 25,23,19)
MR_decl_label8(lexer__get_graphic_4_0, 186,2,5,9,40,12,15,16)
MR_decl_label8(lexer__get_graphic_4_0, 17,18,19,20,21,22,23,24)
MR_decl_label8(lexer__get_graphic_4_0, 25,26,27,28,29,30,31,14)
MR_decl_label3(lexer__get_graphic_4_0, 13,37,35)
MR_decl_label7(lexer__get_hex_3_0, 2,5,9,19,56,15,13)
MR_decl_label8(lexer__get_hex_2_4_0, 93,2,5,9,34,28,12,15)
MR_decl_label4(lexer__get_hex_2_4_0, 13,23,22,19)
MR_decl_label8(lexer__get_hex_escape_6_0, 61,2,5,9,23,12,15,13)
MR_decl_label1(lexer__get_hex_escape_6_0, 18)
MR_decl_label8(lexer__get_int_dot_4_0, 2,5,9,38,37,34,32,12)
MR_decl_label8(lexer__get_int_dot_4_0, 15,13,18,24,23,20,27,10)
MR_decl_label8(lexer__get_name_4_0, 68,2,5,9,24,12,15,13)
MR_decl_label2(lexer__get_name_4_0, 21,19)
MR_decl_label8(lexer__get_number_4_0, 121,2,5,9,44,38,12,15)
MR_decl_label8(lexer__get_number_4_0, 13,18,23,22,21,31,30,27)
MR_decl_label7(lexer__get_octal_3_0, 2,5,9,19,56,15,13)
MR_decl_label8(lexer__get_octal_2_4_0, 93,2,5,9,34,28,12,15)
MR_decl_label4(lexer__get_octal_2_4_0, 13,23,22,19)
MR_decl_label8(lexer__get_octal_escape_6_0, 62,2,5,9,24,12,15,13)
MR_decl_label1(lexer__get_octal_escape_6_0, 18)
MR_decl_label8(lexer__get_quoted_name_5_0, 59,2,5,9,21,12,13,15)
MR_decl_label8(lexer__get_quoted_name_escape_5_0, 182,2,5,9,54,12,13,16)
MR_decl_label8(lexer__get_quoted_name_escape_5_0, 21,22,23,24,25,26,27,28)
MR_decl_label8(lexer__get_quoted_name_escape_5_0, 29,30,20,19,33,36,39,44)
MR_decl_label1(lexer__get_quoted_name_escape_5_0, 43)
MR_decl_label8(lexer__get_quoted_name_quote_5_0, 2,5,9,33,28,12,13,19)
MR_decl_label2(lexer__get_quoted_name_quote_5_0, 21,16)
MR_decl_label8(lexer__get_slash_4_0, 2,5,9,40,12,188,18,19)
MR_decl_label8(lexer__get_slash_4_0, 20,21,22,23,24,25,26,27)
MR_decl_label8(lexer__get_slash_4_0, 28,29,30,31,32,33,34,17)
MR_decl_label3(lexer__get_slash_4_0, 36,16,37)
MR_decl_label8(lexer__get_source_line_number_5_0, 106,2,5,9,44,42,43,12)
MR_decl_label8(lexer__get_source_line_number_5_0, 15,13,25,24,28,21,30,18)
MR_decl_label4(lexer__get_source_line_number_5_0, 32,34,37,39)
MR_decl_label8(lexer__get_token_4_0, 2,5,9,96,94,95,12,15)
MR_decl_label8(lexer__get_token_4_0, 13,23,20,26,19,30,32,28)
MR_decl_label8(lexer__get_token_4_0, 36,34,40,42,38,46,48,49)
MR_decl_label8(lexer__get_token_4_0, 44,54,52,56,61,63,59,65)
MR_decl_label8(lexer__get_token_4_0, 68,73,71,76,78,79,74,80)
MR_decl_label8(lexer__get_token_2_4_0, 209,2,5,9,93,91,92,12)
MR_decl_label8(lexer__get_token_2_4_0, 15,13,23,20,26,19,30,32)
MR_decl_label8(lexer__get_token_2_4_0, 28,36,34,40,42,38,46,48)
MR_decl_label8(lexer__get_token_2_4_0, 44,51,49,53,58,60,56,62)
MR_decl_label8(lexer__get_token_2_4_0, 65,70,68,73,75,76,71,77)
MR_decl_label1(lexer__get_token_list_3_0, 2)
MR_decl_label8(lexer__get_token_list_2_5_0, 47,7,11,4,14,15,12,16)
MR_decl_label1(lexer__get_token_list_2_5_0, 17)
MR_decl_label8(lexer__get_unicode_escape_7_0, 158,3,8,12,10,15,18,17)
MR_decl_label8(lexer__get_unicode_escape_7_0, 20,22,21,23,24,25,26,27)
MR_decl_label8(lexer__get_unicode_escape_7_0, 16,29,31,32,5,2,36,39)
MR_decl_label5(lexer__get_unicode_escape_7_0, 43,53,46,49,48)
MR_decl_label8(lexer__get_variable_4_0, 68,2,5,9,24,12,15,13)
MR_decl_label2(lexer__get_variable_4_0, 21,19)
MR_decl_label8(lexer__get_zero_3_0, 2,5,9,45,130,15,13,18)
MR_decl_label7(lexer__get_zero_3_0, 21,24,27,30,35,34,33)
MR_decl_label1(lexer__graphic_token_char_1_0, 2)
MR_decl_label6(lexer__skip_to_eol_4_0, 2,5,9,18,12,57)
MR_decl_label8(lexer__special_token_2_0, 3,4,5,6,7,8,9,10)
MR_decl_label1(lexer__special_token_2_0, 1)
MR_decl_label4(lexer__start_quoted_name_5_0, 2,5,3,9)
MR_decl_label5(lexer__string_finish_hex_escape_10_0, 53,8,12,4,5)
MR_decl_label5(lexer__string_finish_octal_escape_10_0, 53,8,12,4,5)
MR_decl_label6(lexer__string_get_binary_7_0, 4,6,29,7,12,3)
MR_decl_label8(lexer__string_get_binary_2_7_0, 44,4,6,45,7,12,14,13)
MR_decl_label3(lexer__string_get_binary_2_7_0, 3,19,18)
MR_decl_label3(lexer__string_get_char_code_7_0, 4,6,3)
MR_decl_label4(lexer__string_get_comment_7_0, 26,4,6,3)
MR_decl_label6(lexer__string_get_comment_2_7_0, 34,4,6,7,10,3)
MR_decl_label8(lexer__string_get_dot_7_0, 4,6,12,10,15,8,18,19)
MR_decl_label8(lexer__string_get_dot_7_0, 20,21,22,23,24,25,26,27)
MR_decl_label8(lexer__string_get_dot_7_0, 28,29,30,31,32,33,34,16)
MR_decl_label2(lexer__string_get_dot_7_0, 37,3)
MR_decl_label8(lexer__string_get_float_decimals_7_0, 74,4,6,9,7,14,12,17)
MR_decl_label3(lexer__string_get_float_decimals_7_0, 19,3,26)
MR_decl_label8(lexer__string_get_float_exponent_7_0, 4,6,8,13,15,18,16,21)
MR_decl_label8(lexer__string_get_float_exponent_7_0, 12,7,26,25,29,3,33,35)
MR_decl_label1(lexer__string_get_float_exponent_7_0, 39)
MR_decl_label8(lexer__string_get_float_exponent_3_7_0, 56,4,9,8,12,14,3,20)
MR_decl_label7(lexer__string_get_graphic_7_0, 108,4,6,109,7,28,3)
MR_decl_label5(lexer__string_get_hex_7_0, 4,9,8,12,3)
MR_decl_label8(lexer__string_get_hex_2_7_0, 44,4,9,8,12,14,13,3)
MR_decl_label2(lexer__string_get_hex_2_7_0, 19,18)
MR_decl_label7(lexer__string_get_hex_escape_10_0, 35,4,6,9,7,12,3)
MR_decl_label8(lexer__string_get_int_dot_7_0, 4,9,8,12,13,15,3,19)
MR_decl_label2(lexer__string_get_int_dot_7_0, 21,20)
MR_decl_label6(lexer__string_get_name_7_0, 28,4,9,8,12,3)
MR_decl_label8(lexer__string_get_number_7_0, 75,4,6,9,7,12,17,15)
MR_decl_label7(lexer__string_get_number_7_0, 20,22,21,3,29,28,32)
MR_decl_label5(lexer__string_get_octal_7_0, 4,9,8,12,3)
MR_decl_label8(lexer__string_get_octal_2_7_0, 44,4,9,8,12,14,13,3)
MR_decl_label2(lexer__string_get_octal_2_7_0, 19,18)
MR_decl_label8(lexer__string_get_octal_escape_10_0, 37,4,6,9,7,12,15,3)
MR_decl_label6(lexer__string_get_quoted_name_9_0, 33,4,6,7,9,3)
MR_decl_label8(lexer__string_get_quoted_name_escape_9_0, 126,4,6,7,10,15,16,17)
MR_decl_label8(lexer__string_get_quoted_name_escape_9_0, 18,19,20,21,22,23,24,14)
MR_decl_label7(lexer__string_get_quoted_name_escape_9_0, 13,27,30,33,38,36,3)
MR_decl_label8(lexer__string_get_quoted_name_quote_9_0, 4,6,7,9,14,16,11,3)
MR_decl_label3(lexer__string_get_quoted_name_quote_9_0, 27,29,24)
MR_decl_label7(lexer__string_get_slash_7_0, 4,6,7,118,10,31,3)
MR_decl_label8(lexer__string_get_source_line_number_7_0, 73,4,6,9,7,15,14,12)
MR_decl_label6(lexer__string_get_source_line_number_7_0, 19,21,24,25,3,28)
MR_decl_label8(lexer__string_get_token_6_0, 4,6,9,7,17,15,13,23)
MR_decl_label8(lexer__string_get_token_6_0, 21,26,31,29,36,37,38,39)
MR_decl_label8(lexer__string_get_token_6_0, 40,41,42,43,35,34,48,51)
MR_decl_label8(lexer__string_get_token_6_0, 56,55,54,59,62,65,69,70)
MR_decl_label8(lexer__string_get_token_6_0, 71,72,73,74,75,76,77,78)
MR_decl_label8(lexer__string_get_token_6_0, 79,80,81,82,83,84,85,67)
MR_decl_label2(lexer__string_get_token_6_0, 3,351)
MR_decl_label8(lexer__string_get_token_2_6_0, 310,4,6,9,7,17,15,13)
MR_decl_label8(lexer__string_get_token_2_6_0, 23,21,26,31,29,36,37,38)
MR_decl_label8(lexer__string_get_token_2_6_0, 39,40,41,42,43,35,34,45)
MR_decl_label8(lexer__string_get_token_2_6_0, 48,53,52,51,56,59,62,66)
MR_decl_label8(lexer__string_get_token_2_6_0, 67,68,69,70,71,72,73,74)
MR_decl_label8(lexer__string_get_token_2_6_0, 75,76,77,78,79,80,81,82)
MR_decl_label2(lexer__string_get_token_2_6_0, 64,3)
MR_decl_label6(lexer__string_get_token_list_max_5_0, 2,3,8,12,5,13)
MR_decl_label8(lexer__string_get_unicode_escape_11_0, 144,3,8,12,10,15,18,17)
MR_decl_label8(lexer__string_get_unicode_escape_11_0, 20,22,21,23,24,25,26,27)
MR_decl_label8(lexer__string_get_unicode_escape_11_0, 16,29,30,33,31,5,36,2)
MR_decl_label7(lexer__string_get_unicode_escape_11_0, 40,42,45,44,48,39,50)
MR_decl_label6(lexer__string_get_variable_7_0, 28,4,9,8,12,3)
MR_decl_label8(lexer__string_get_zero_7_0, 4,6,9,7,12,15,18,21)
MR_decl_label5(lexer__string_get_zero_7_0, 24,29,27,32,3)
MR_decl_label4(lexer__string_skip_to_eol_6_0, 26,4,6,3)
MR_decl_label4(lexer__string_start_quoted_name_9_0, 2,5,3,9)
MR_decl_label1(lexer__string_ungetchar_3_0, 2)
MR_decl_label8(lexer__token_to_string_2_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(lexer__token_to_string_2_0, 12,13,14,15,16,17,19,66)
MR_decl_label8(lexer__token_to_string_2_0, 21,22,23,67,25,26,27,68)
MR_decl_label1(lexer__token_to_string_2_0, 30)
MR_decl_label8(__Unify___lexer__token_0_0, 17,18,20,22,23,25,27,29)
MR_decl_label5(__Unify___lexer__token_0_0, 31,33,35,67,1)
MR_decl_label5(__Unify___lexer__token_list_0_0, 34,14,5,7,1)
MR_decl_label8(__Index___lexer__token_0_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(__Index___lexer__token_0_0, 12,13,14,15,16,17,18,19)
MR_decl_label6(__Index___lexer__token_0_0, 20,21,22,23,24,25)
MR_decl_label2(__Compare___lexer__offset_0_0, 2,3)
MR_decl_label2(__Compare___lexer__string_token_context_0_0, 2,3)
MR_decl_label8(__Compare___lexer__token_0_0, 4,5,6,7,23,25,30,32)
MR_decl_label8(__Compare___lexer__token_0_0, 37,38,40,44,46,102,50,52)
MR_decl_label8(__Compare___lexer__token_0_0, 57,59,63,65,70,72,77,79)
MR_decl_label2(__Compare___lexer__token_0_0, 117,8)
MR_decl_label2(__Compare___lexer__token_context_0_0, 2,3)
MR_decl_label8(__Compare___lexer__token_list_0_0, 64,36,7,5,9,11,16,17)
MR_decl_label2(__Compare___lexer__token_list_0_0, 19,69)
MR_decl_label2(__Compare___lexer__unicode_encoding_0_0, 2,3)
MR_decl_static(lexer__get_context_3_0)
MR_def_extern_entry(lexer__graphic_token_char_1_0)
MR_decl_static(lexer__special_token_2_0)
MR_decl_static(lexer__get_graphic_4_0)
MR_decl_static(lexer__get_dot_3_0)
MR_decl_static(lexer__encode_unicode_char_as_utf8_2_0)
MR_decl_static(fn__lexer__backend_unicode_encoding_int_0_0)
MR_decl_static(lexer__get_quoted_name_5_0)
MR_decl_static(lexer__get_quoted_name_quote_5_0)
MR_decl_static(lexer__get_quoted_name_escape_5_0)
MR_decl_static(lexer__get_unicode_escape_7_0)
MR_decl_static(lexer__get_hex_escape_6_0)
MR_decl_static(lexer__finish_hex_escape_6_0)
MR_decl_static(lexer__get_octal_escape_6_0)
MR_decl_static(lexer__finish_octal_escape_6_0)
MR_decl_static(lexer__start_quoted_name_5_0)
MR_decl_static(lexer__get_name_4_0)
MR_decl_static(lexer__get_variable_4_0)
MR_decl_static(lexer__get_char_code_3_0)
MR_decl_static(lexer__get_binary_2_4_0)
MR_decl_static(lexer__get_binary_3_0)
MR_decl_static(lexer__get_octal_2_4_0)
MR_decl_static(lexer__get_octal_3_0)
MR_decl_static(lexer__get_hex_2_4_0)
MR_decl_static(lexer__get_hex_3_0)
MR_decl_static(lexer__get_float_exponent_3_4_0)
MR_decl_static(lexer__get_float_exponent_2_4_0)
MR_decl_static(lexer__get_float_exponent_4_0)
MR_decl_static(lexer__get_float_decimals_4_0)
MR_decl_static(lexer__get_int_dot_4_0)
MR_decl_static(lexer__get_number_4_0)
MR_decl_static(lexer__get_zero_3_0)
MR_def_extern_entry(lexer__get_token_4_0)
MR_decl_static(lexer__get_token_2_4_0)
MR_decl_static(lexer__skip_to_eol_4_0)
MR_decl_static(lexer__get_slash_4_0)
MR_decl_static(lexer__get_comment_4_0)
MR_decl_static(lexer__get_comment_2_4_0)
MR_decl_static(lexer__get_source_line_number_5_0)
MR_def_extern_entry(lexer__get_token_list_2_5_0)
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
MR_decl_static(lexer__string_skip_to_eol_6_0)
MR_decl_static(lexer__string_get_slash_7_0)
MR_decl_static(lexer__string_get_comment_7_0)
MR_decl_static(lexer__string_get_comment_2_7_0)
MR_decl_static(lexer__string_get_source_line_number_7_0)
MR_def_extern_entry(lexer__string_get_token_list_max_5_0)
MR_def_extern_entry(lexer__string_get_token_list_4_0)
MR_def_extern_entry(lexer__token_to_string_2_0)
MR_def_extern_entry(__Unify___lexer__offset_0_0)
MR_def_extern_entry(__Compare___lexer__offset_0_0)
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

static const struct mercury_type_0 mercury_common_0[4] =
{
{
MR_string_const(";", 1)
},
{
MR_string_const(".", 1)
},
{
MR_string_const("\140", 1)
},
{
MR_string_const("/", 1)
},
};

static const struct mercury_type_1 mercury_common_1[25] =
{
{
4,
MR_string_const("invalid character in graphic token", 34)
},
{
4,
MR_string_const("invalid character in quoted name", 32)
},
{
4,
MR_string_const("invalid escape character", 24)
},
{
4,
MR_string_const("null character is illegal in strings and names", 46)
},
{
4,
MR_string_const("invalid Unicode character code", 30)
},
{
4,
MR_string_const("invalid hex character in Unicode escape", 39)
},
{
4,
MR_string_const("unterminated hex escape", 23)
},
{
4,
MR_string_const("empty hex escape", 16)
},
{
4,
MR_string_const("invalid hex escape", 18)
},
{
4,
MR_string_const("empty octal escape", 18)
},
{
4,
MR_string_const("invalid octal escape", 20)
},
{
4,
MR_string_const("unterminated quote", 18)
},
{
4,
MR_string_const("invalid character in name", 25)
},
{
4,
MR_string_const("invalid character in variable", 29)
},
{
4,
MR_string_const("unterminated char code constant", 31)
},
{
4,
MR_string_const("invalid integer token", 21)
},
{
4,
MR_string_const("invalid character in int", 24)
},
{
4,
MR_string_const("unterminated binary constant", 28)
},
{
4,
MR_string_const("unterminated octal constant", 27)
},
{
4,
MR_string_const("unterminated hex constant", 25)
},
{
4,
MR_string_const("invalid float token", 19)
},
{
4,
MR_string_const("unterminated exponent in float token", 36)
},
{
4,
MR_string_const("unterminated \'/*\' comment", 25)
},
{
4,
MR_string_const("invalid character in \140#\' line number directive", 46)
},
{
4,
MR_string_const("unexpected end-of-file in \140#\' line number directive", 51)
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
46,
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
MR_string_const("\"", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const(">>", 2),
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

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_5 = {
	"open",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_6 = {
	"open_ct",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_7 = {
	"close",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_8 = {
	"open_list",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_9 = {
	"close_list",
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

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_10 = {
	"open_curly",
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

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_11 = {
	"close_curly",
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

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_12 = {
	"ht_sep",
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

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_13 = {
	"comma",
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

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_14 = {
	"end",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_15 = {
	"junk",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	15,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_15,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_16 = {
	"error",
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
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_17 = {
	"io_error",
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

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_18 = {
	"eof",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	18,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_lexer__field_types_token_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_lexer__du_functor_desc_token_0_19 = {
	"integer_dot",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	19,
	(MR_PseudoTypeInfo *) mercury_data_lexer__field_types_token_0_19,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_lexer__du_stag_ordered_token_0_0[] = {
	&mercury_data_lexer__du_functor_desc_token_0_5,
	&mercury_data_lexer__du_functor_desc_token_0_6,
	&mercury_data_lexer__du_functor_desc_token_0_7,
	&mercury_data_lexer__du_functor_desc_token_0_8,
	&mercury_data_lexer__du_functor_desc_token_0_9,
	&mercury_data_lexer__du_functor_desc_token_0_10,
	&mercury_data_lexer__du_functor_desc_token_0_11,
	&mercury_data_lexer__du_functor_desc_token_0_12,
	&mercury_data_lexer__du_functor_desc_token_0_13,
	&mercury_data_lexer__du_functor_desc_token_0_14,
	&mercury_data_lexer__du_functor_desc_token_0_18

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
	&mercury_data_lexer__du_functor_desc_token_0_15,
	&mercury_data_lexer__du_functor_desc_token_0_16,
	&mercury_data_lexer__du_functor_desc_token_0_17,
	&mercury_data_lexer__du_functor_desc_token_0_19

};

const MR_DuPtagLayout mercury_data_lexer__du_ptag_ordered_token_0[] = {
	{ 11, MR_SECTAG_LOCAL,
	mercury_data_lexer__du_stag_ordered_token_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_lexer__du_stag_ordered_token_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_lexer__du_stag_ordered_token_0_2 },
	{ 7, MR_SECTAG_REMOTE,
	mercury_data_lexer__du_stag_ordered_token_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_lexer__du_name_ordered_token_0[] = {
	&mercury_data_lexer__du_functor_desc_token_0_7,
	&mercury_data_lexer__du_functor_desc_token_0_11,
	&mercury_data_lexer__du_functor_desc_token_0_9,
	&mercury_data_lexer__du_functor_desc_token_0_13,
	&mercury_data_lexer__du_functor_desc_token_0_14,
	&mercury_data_lexer__du_functor_desc_token_0_18,
	&mercury_data_lexer__du_functor_desc_token_0_16,
	&mercury_data_lexer__du_functor_desc_token_0_3,
	&mercury_data_lexer__du_functor_desc_token_0_12,
	&mercury_data_lexer__du_functor_desc_token_0_2,
	&mercury_data_lexer__du_functor_desc_token_0_19,
	&mercury_data_lexer__du_functor_desc_token_0_17,
	&mercury_data_lexer__du_functor_desc_token_0_15,
	&mercury_data_lexer__du_functor_desc_token_0_0,
	&mercury_data_lexer__du_functor_desc_token_0_5,
	&mercury_data_lexer__du_functor_desc_token_0_6,
	&mercury_data_lexer__du_functor_desc_token_0_10,
	&mercury_data_lexer__du_functor_desc_token_0_8,
	&mercury_data_lexer__du_functor_desc_token_0_4,
	&mercury_data_lexer__du_functor_desc_token_0_1
};

const MR_Integer mercury_data_lexer__functor_number_map_token_0[] = {
	13,
	19,
	9,
	7,
	18,
	14,
	15,
	0,
	17,
	2,
	16,
	1,
	8,
	3,
	4,
	12,
	6,
	11,
	5,
	10 };
	
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
	20,
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


MR_BEGIN_MODULE(lexer_module0)
	MR_init_entry1(lexer__get_context_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_context_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_context_3_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 1203 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
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


MR_BEGIN_MODULE(lexer_module2)
	MR_init_entry1(lexer__special_token_2_0);
	MR_init_label8(lexer__special_token_2_0,3,4,5,6,7,8,9,10)
	MR_init_label1(lexer__special_token_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__special_token_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,40)) {
		MR_GOTO_LAB(lexer__special_token_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(lexer__special_token_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,41)) {
		MR_GOTO_LAB(lexer__special_token_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(lexer__special_token_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,44)) {
		MR_GOTO_LAB(lexer__special_token_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(lexer__special_token_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,59)) {
		MR_GOTO_LAB(lexer__special_token_2_0_i6);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(lexer__special_token_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,91)) {
		MR_GOTO_LAB(lexer__special_token_2_0_i7);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(lexer__special_token_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,93)) {
		MR_GOTO_LAB(lexer__special_token_2_0_i8);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(lexer__special_token_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,123)) {
		MR_GOTO_LAB(lexer__special_token_2_0_i9);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(lexer__special_token_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,124)) {
		MR_GOTO_LAB(lexer__special_token_2_0_i10);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(lexer__special_token_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,125)) {
		MR_GOTO_LAB(lexer__special_token_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(lexer__special_token_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module3)
	MR_init_entry1(lexer__get_graphic_4_0);
	MR_init_label8(lexer__get_graphic_4_0,186,2,5,9,40,12,15,16)
	MR_init_label8(lexer__get_graphic_4_0,17,18,19,20,21,22,23,24)
	MR_init_label8(lexer__get_graphic_4_0,25,26,27,28,29,30,31,14)
	MR_init_label3(lexer__get_graphic_4_0,13,37,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_graphic_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(lexer__get_graphic_4_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 1414 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 1433 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_graphic_4_0_i9);
MR_def_label(lexer__get_graphic_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_4_0
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
#line 1465 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_graphic_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i9);
	}
MR_def_label(lexer__get_graphic_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_4_0
{
#line 1038 "io.opt"
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
#line 1500 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 1520 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_graphic_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i40);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 1593 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_graphic_4_0_i35);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(lexer__get_graphic_4_0_i37);
MR_def_label(lexer__get_graphic_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(lexer__get_graphic_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,33)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i15);
	}
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
	}
MR_def_label(lexer__get_graphic_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,35)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i16);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,36)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i17);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,38)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i18);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,42)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i19);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,43)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i20);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,45)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i21);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,46)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i22);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,47)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i23);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,58)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i24);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,60)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i25);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,61)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i26);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,62)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i27);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,63)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i28);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,64)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i29);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,92)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i30);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,94)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i31);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_graphic_4_0_i14);
MR_def_label(lexer__get_graphic_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,126)) {
		MR_GOTO_LAB(lexer__get_graphic_4_0_i13);
	}
	MR_r1 = MR_r3;
MR_def_label(lexer__get_graphic_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(lexer__get_graphic_4_0_i186);
	}
MR_def_label(lexer__get_graphic_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 1766 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_4_0
	Stream = (MercuryFilePtr) MR_r4;
	Character = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 1794 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_graphic_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 1853 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_graphic_4_0_i35);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(lexer__get_graphic_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_graphic_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_whitespace_1_0);

MR_BEGIN_MODULE(lexer_module4)
	MR_init_entry1(lexer__get_dot_3_0);
	MR_init_label8(lexer__get_dot_3_0,2,5,9,44,196,18,15,14)
	MR_init_label8(lexer__get_dot_3_0,23,24,25,26,27,28,29,30)
	MR_init_label8(lexer__get_dot_3_0,31,32,33,34,35,36,37,38)
	MR_init_label3(lexer__get_dot_3_0,39,22,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_dot_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 1903 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_3_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 1922 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_dot_3_0_i9);
MR_def_label(lexer__get_dot_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_3_0
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
#line 1953 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_dot_3_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_dot_3_0_i9);
	}
MR_def_label(lexer__get_dot_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_3_0
{
#line 1038 "io.opt"
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
#line 1987 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 2007 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_dot_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i196);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i44);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_proceed();
MR_def_label(lexer__get_dot_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__get_dot_3_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__get_dot_3_0_i18);
MR_def_label(lexer__get_dot_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,37)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i14);
	}
	}
MR_def_label(lexer__get_dot_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 2080 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_3_0
	Stream = (MercuryFilePtr) MR_tempr1;
	Character = MR_sv(1);
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 2108 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_decr_sp_and_return(2);
	}
MR_def_label(lexer__get_dot_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,33)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i23);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,35)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i24);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,36)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i25);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,38)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i26);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,42)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i27);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,43)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i28);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,45)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i29);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,46)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i30);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,47)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i31);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,58)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i32);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,60)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i33);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,61)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i34);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,62)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i35);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,63)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i36);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,64)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i37);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,92)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i38);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,94)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i39);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_dot_3_0_i22);
MR_def_label(lexer__get_dot_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,126)) {
		MR_GOTO_LAB(lexer__get_dot_3_0_i21);
	}
	MR_sv(1) = MR_r3;
MR_def_label(lexer__get_dot_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_graphic_4_0);
MR_def_label(lexer__get_dot_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 2267 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_dot_3_0
	Stream = (MercuryFilePtr) MR_tempr1;
	Character = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 2295 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__det_from_int_2_0);
MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);

MR_BEGIN_MODULE(lexer_module5)
	MR_init_entry1(lexer__encode_unicode_char_as_utf8_2_0);
	MR_init_label8(lexer__encode_unicode_char_as_utf8_2_0,50,4,3,6,7,8,5,10)
	MR_init_label8(lexer__encode_unicode_char_as_utf8_2_0,11,12,13,14,9,15,16,17)
	MR_init_label5(lexer__encode_unicode_char_as_utf8_2_0,18,19,20,21,1)
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
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i50);
	}
	if (MR_INT_LE(MR_r1,57343)) {
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i1);
	}
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,50)
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
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) 1984 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i6);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) 63 & (MR_Integer) MR_sv(1));
	MR_r1 = ((MR_Integer) MR_r1 | (MR_Integer) 192);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i7);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 | (MR_Integer) 128);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i8);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,8)
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
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,65535)) {
		MR_GOTO_LAB(lexer__encode_unicode_char_as_utf8_2_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) 61440 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i10);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) 4032 & (MR_Integer) MR_sv(1));
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i11);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) 63 & (MR_Integer) MR_sv(1));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 | (MR_Integer) 224);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i12);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 | (MR_Integer) 128);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i13);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 | (MR_Integer) 128);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i14);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,14)
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
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) 1835008 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 18;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i15);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) 258048 & (MR_Integer) MR_sv(1));
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i16);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = ((MR_Integer) 4032 & (MR_Integer) MR_sv(1));
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i17);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) 63 & (MR_Integer) MR_sv(1));
	MR_sv(4) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(2) | (MR_Integer) 240);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i18);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(3) | (MR_Integer) 128);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i19);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(4) | (MR_Integer) 128);
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i20);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 | (MR_Integer) 128);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__encode_unicode_char_as_utf8_2_0_i21);
MR_def_label(lexer__encode_unicode_char_as_utf8_2_0,21)
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


MR_BEGIN_MODULE(lexer_module6)
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
#line 1202 "lexer.m"

    EncodingInt = 0;
;}
#line 2563 "lexer.c"
	MR_r1 = EncodingInt;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module7)
	MR_init_entry1(lexer__get_quoted_name_5_0);
	MR_init_label8(lexer__get_quoted_name_5_0,59,2,5,9,21,12,13,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_quoted_name_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_quoted_name_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_5_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 2602 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_5_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 2621 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_quoted_name_5_0_i9);
MR_def_label(lexer__get_quoted_name_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_5_0
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
#line 2654 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_5_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_quoted_name_5_0_i9);
	}
MR_def_label(lexer__get_quoted_name_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_5_0
{
#line 1038 "io.opt"
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
#line 2692 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 2712 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	}
MR_def_label(lexer__get_quoted_name_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_5_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_quoted_name_5_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_quoted_name_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_quoted_name_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	if ((MR_r4 != MR_sv(1))) {
		MR_GOTO_LAB(lexer__get_quoted_name_5_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_quoted_name_quote_5_0);
MR_def_label(lexer__get_quoted_name_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(lexer__get_quoted_name_5_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_quoted_name_escape_5_0);
MR_def_label(lexer__get_quoted_name_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_quoted_name_5_0_i59);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(lexer_module8)
	MR_init_entry1(lexer__get_quoted_name_quote_5_0);
	MR_init_label8(lexer__get_quoted_name_quote_5_0,2,5,9,33,28,12,13,19)
	MR_init_label2(lexer__get_quoted_name_quote_5_0,21,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_quoted_name_quote_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_5_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 2809 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_5_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 2828 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i9);
MR_def_label(lexer__get_quoted_name_quote_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_5_0
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
#line 2861 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i9);
	}
MR_def_label(lexer__get_quoted_name_quote_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_5_0
{
#line 1038 "io.opt"
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
#line 2897 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 2917 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_quoted_name_quote_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i28);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 392 "string.opt"
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
#line 2991 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(1),39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i33);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_quoted_name_quote_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_quoted_name_quote_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_quoted_name_quote_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if ((MR_tempr1 != MR_sv(1))) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_quoted_name_5_0);
	}
MR_def_label(lexer__get_quoted_name_quote_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_5_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 3055 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_5_0
	Stream = (MercuryFilePtr) MR_r3;
	Character = MR_r4;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 3083 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_quote_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(2);
{
#line 392 "string.opt"
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
#line 3142 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i16);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(1),39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_quoted_name_quote_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_quote_5_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_quoted_name_quote_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lexer.m: unknown quote character", 32);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__get_quoted_name_quote_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_octal_digit_1_0);

MR_BEGIN_MODULE(lexer_module9)
	MR_init_entry1(lexer__get_quoted_name_escape_5_0);
	MR_init_label8(lexer__get_quoted_name_escape_5_0,182,2,5,9,54,12,13,16)
	MR_init_label8(lexer__get_quoted_name_escape_5_0,21,22,23,24,25,26,27,28)
	MR_init_label8(lexer__get_quoted_name_escape_5_0,29,30,20,19,33,36,39,44)
	MR_init_label1(lexer__get_quoted_name_escape_5_0,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_quoted_name_escape_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__get_quoted_name_escape_5_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_5_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 3212 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_5_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 3231 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i9);
MR_def_label(lexer__get_quoted_name_escape_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_5_0
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
#line 3264 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i9);
	}
MR_def_label(lexer__get_quoted_name_escape_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_5_0
{
#line 1038 "io.opt"
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
#line 3300 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_quoted_name_escape_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 3320 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_quoted_name_escape_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i54);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_quoted_name_escape_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_quoted_name_escape_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_sv(3),10)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_quoted_name_5_0);
MR_def_label(lexer__get_quoted_name_escape_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),13)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i182);
MR_def_label(lexer__get_quoted_name_escape_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),34)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 34;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i20);
MR_def_label(lexer__get_quoted_name_escape_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),39)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 39;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i20);
MR_def_label(lexer__get_quoted_name_escape_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),92)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 92;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i20);
MR_def_label(lexer__get_quoted_name_escape_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),96)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 96;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i20);
MR_def_label(lexer__get_quoted_name_escape_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),97)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i20);
MR_def_label(lexer__get_quoted_name_escape_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),98)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i20);
MR_def_label(lexer__get_quoted_name_escape_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),102)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i20);
MR_def_label(lexer__get_quoted_name_escape_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),110)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i20);
MR_def_label(lexer__get_quoted_name_escape_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),114)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i20);
MR_def_label(lexer__get_quoted_name_escape_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),116)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i20);
MR_def_label(lexer__get_quoted_name_escape_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),118)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 11;
MR_def_label(lexer__get_quoted_name_escape_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_quoted_name_5_0);
	}
MR_def_label(lexer__get_quoted_name_escape_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),120)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_hex_escape_6_0);
MR_def_label(lexer__get_quoted_name_escape_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),117)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i36);
	}
	MR_r1 = (MR_Integer) 4;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_unicode_escape_7_0);
MR_def_label(lexer__get_quoted_name_escape_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),85)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i39);
	}
	MR_r1 = (MR_Integer) 8;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_unicode_escape_7_0);
MR_def_label(lexer__get_quoted_name_escape_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_quoted_name_escape_5_0_i44);
MR_def_label(lexer__get_quoted_name_escape_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_quoted_name_escape_5_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(lexer__get_octal_escape_6_0);
	}
MR_def_label(lexer__get_quoted_name_escape_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_decr_sp_and_return(4);
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
MR_decl_entry(list__append_3_1);
MR_decl_entry(char__is_hex_digit_1_0);

MR_BEGIN_MODULE(lexer_module10)
	MR_init_entry1(lexer__get_unicode_escape_7_0);
	MR_init_label8(lexer__get_unicode_escape_7_0,158,3,8,12,10,15,18,17)
	MR_init_label8(lexer__get_unicode_escape_7_0,20,22,21,23,24,25,26,27)
	MR_init_label8(lexer__get_unicode_escape_7_0,16,29,31,32,5,2,36,39)
	MR_init_label5(lexer__get_unicode_escape_7_0,43,53,46,49,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_unicode_escape_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__get_unicode_escape_7_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		lexer__get_unicode_escape_7_0_i3);
MR_def_label(lexer__get_unicode_escape_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i2);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(4);
{
#line 392 "string.opt"
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
#line 3636 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i5);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_unicode_escape_7_0_i8);
MR_def_label(lexer__get_unicode_escape_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i5);
	}
	{
	MR_Integer	EncodingInt;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_7_0
{
#line 1202 "lexer.m"

    EncodingInt = 0;
;}
#line 3659 "lexer.c"
	MR_r3 = EncodingInt;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i12);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i15);
MR_def_label(lexer__get_unicode_escape_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i15);
MR_def_label(lexer__get_unicode_escape_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_unicode_encoding: unexpected Unicode encoding code", 58);
	MR_np_call_localret_ent(require__error_1_0,
		lexer__get_unicode_escape_7_0_i15);
MR_def_label(lexer__get_unicode_escape_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__encode_unicode_char_as_utf8_2_0,
		lexer__get_unicode_escape_7_0_i18);
MR_def_label(lexer__get_unicode_escape_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i5);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i16);
MR_def_label(lexer__get_unicode_escape_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i5);
	}
	if (MR_INT_GT(MR_r1,1114111)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i5);
	}
	if (MR_INT_LT(MR_r1,55296)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i20);
	}
	if (MR_INT_LE(MR_r1,57343)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i5);
	}
MR_def_label(lexer__get_unicode_escape_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,65535)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_7_0_i22);
MR_def_label(lexer__get_unicode_escape_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i16);
	}
MR_def_label(lexer__get_unicode_escape_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) 2031616 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__get_unicode_escape_7_0_i23);
MR_def_label(lexer__get_unicode_escape_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = ((MR_Integer) 64512 & (MR_Integer) MR_sv(1));
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__get_unicode_escape_7_0_i24);
MR_def_label(lexer__get_unicode_escape_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = ((MR_Integer) 1023 & (MR_Integer) MR_sv(1));
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r2 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		lexer__get_unicode_escape_7_0_i25);
MR_def_label(lexer__get_unicode_escape_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = ((MR_Integer) 56320 | (MR_Integer) MR_sv(5));
	MR_r1 = (((MR_Integer) 55296 | (MR_Integer) MR_r1) | (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_7_0_i26);
MR_def_label(lexer__get_unicode_escape_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__get_unicode_escape_7_0_i27);
MR_def_label(lexer__get_unicode_escape_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
MR_def_label(lexer__get_unicode_escape_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_unicode_escape_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__reverse_2_3_0,
		lexer__get_unicode_escape_7_0_i31);
MR_def_label(lexer__get_unicode_escape_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		lexer__get_unicode_escape_7_0_i32);
MR_def_label(lexer__get_unicode_escape_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__get_quoted_name_5_0);
MR_def_label(lexer__get_unicode_escape_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_unicode_escape_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_7_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 3834 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_7_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 3853 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i43);
MR_def_label(lexer__get_unicode_escape_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_7_0
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
#line 3884 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i39);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i43);
	}
MR_def_label(lexer__get_unicode_escape_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_7_0
{
#line 1038 "io.opt"
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
#line 3920 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_unicode_escape_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 3940 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
MR_def_label(lexer__get_unicode_escape_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i46);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i53);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__get_unicode_escape_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__get_unicode_escape_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(char__is_hex_digit_1_0,
		lexer__get_unicode_escape_7_0_i49);
MR_def_label(lexer__get_unicode_escape_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i48);
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
	MR_GOTO_LAB(lexer__get_unicode_escape_7_0_i158);
	}
MR_def_label(lexer__get_unicode_escape_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_hex_digit_2_0);

MR_BEGIN_MODULE(lexer_module11)
	MR_init_entry1(lexer__get_hex_escape_6_0);
	MR_init_label8(lexer__get_hex_escape_6_0,61,2,5,9,23,12,15,13)
	MR_init_label1(lexer__get_hex_escape_6_0,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_hex_escape_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__get_hex_escape_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_6_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 4032 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_6_0
	Stream = (MercuryFilePtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 4051 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r4 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(lexer__get_hex_escape_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_hex_escape_6_0_i9);
MR_def_label(lexer__get_hex_escape_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_6_0
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
#line 4085 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_escape_6_0_i5);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_hex_escape_6_0_i9);
	}
MR_def_label(lexer__get_hex_escape_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_6_0
{
#line 1038 "io.opt"
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
#line 4124 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_escape_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4144 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr3;
	}
MR_def_label(lexer__get_hex_escape_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_hex_escape_6_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_hex_escape_6_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_hex_escape_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__get_hex_escape_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_escape_6_0_i15);
MR_def_label(lexer__get_hex_escape_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_escape_6_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__get_hex_escape_6_0_i61);
	}
MR_def_label(lexer__get_hex_escape_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	if (MR_INT_NE(MR_r3,92)) {
		MR_GOTO_LAB(lexer__get_hex_escape_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__finish_hex_escape_6_0);
MR_def_label(lexer__get_hex_escape_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,6);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module12)
	MR_init_entry1(lexer__finish_hex_escape_6_0);
	MR_init_label4(lexer__finish_hex_escape_6_0,53,8,12,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__finish_hex_escape_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(lexer__finish_hex_escape_6_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,7);
	MR_proceed();
MR_def_label(lexer__finish_hex_escape_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__finish_hex_escape_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_r3;
{
#line 392 "string.opt"
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
#line 4299 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__finish_hex_escape_6_0_i5);
	MR_tempr1 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 16;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__finish_hex_escape_6_0_i8);
MR_def_label(lexer__finish_hex_escape_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__finish_hex_escape_6_0_i5);
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__finish_hex_escape_6_0
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
#line 4337 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__finish_hex_escape_6_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__finish_hex_escape_6_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__finish_hex_escape_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_quoted_name_5_0);
	}
MR_def_label(lexer__finish_hex_escape_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,8);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module13)
	MR_init_entry1(lexer__get_octal_escape_6_0);
	MR_init_label8(lexer__get_octal_escape_6_0,62,2,5,9,24,12,15,13)
	MR_init_label1(lexer__get_octal_escape_6_0,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_octal_escape_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__get_octal_escape_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_6_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 4401 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_6_0
	Stream = (MercuryFilePtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 4420 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r4 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(lexer__get_octal_escape_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_octal_escape_6_0_i9);
MR_def_label(lexer__get_octal_escape_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_6_0
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
#line 4454 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_escape_6_0_i5);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_octal_escape_6_0_i9);
	}
MR_def_label(lexer__get_octal_escape_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_6_0
{
#line 1038 "io.opt"
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
#line 4491 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r4);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r4, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4511 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r4 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_octal_escape_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_octal_escape_6_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_octal_escape_6_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__get_octal_escape_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__get_octal_escape_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_escape_6_0_i15);
MR_def_label(lexer__get_octal_escape_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_escape_6_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__get_octal_escape_6_0_i62);
	}
MR_def_label(lexer__get_octal_escape_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	if (MR_INT_NE(MR_r3,92)) {
		MR_GOTO_LAB(lexer__get_octal_escape_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__finish_octal_escape_6_0);
MR_def_label(lexer__get_octal_escape_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_6_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 4600 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_escape_6_0
	Stream = (MercuryFilePtr) MR_tempr1;
	Character = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 4628 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__finish_octal_escape_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module14)
	MR_init_entry1(lexer__finish_octal_escape_6_0);
	MR_init_label4(lexer__finish_octal_escape_6_0,53,8,12,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__finish_octal_escape_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(lexer__finish_octal_escape_6_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,9);
	MR_proceed();
MR_def_label(lexer__finish_octal_escape_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__finish_octal_escape_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_r3;
{
#line 392 "string.opt"
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
#line 4723 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__finish_octal_escape_6_0_i5);
	MR_tempr1 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 8;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__finish_octal_escape_6_0_i8);
MR_def_label(lexer__finish_octal_escape_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__finish_octal_escape_6_0_i5);
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__finish_octal_escape_6_0
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
#line 4761 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__finish_octal_escape_6_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__finish_octal_escape_6_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__finish_octal_escape_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_quoted_name_5_0);
	}
MR_def_label(lexer__finish_octal_escape_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,10);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module15)
	MR_init_entry1(lexer__start_quoted_name_5_0);
	MR_init_label4(lexer__start_quoted_name_5_0,2,5,3,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__start_quoted_name_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(lexer__get_quoted_name_5_0,
		lexer__start_quoted_name_5_0_i2);
MR_def_label(lexer__start_quoted_name_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(lexer__start_quoted_name_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(lexer__start_quoted_name_5_0,
		lexer__start_quoted_name_5_0_i5);
MR_def_label(lexer__start_quoted_name_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__start_quoted_name_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(lexer__start_quoted_name_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,11);
MR_def_label(lexer__start_quoted_name_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_alnum_or_underscore_1_0);

MR_BEGIN_MODULE(lexer_module16)
	MR_init_entry1(lexer__get_name_4_0);
	MR_init_label8(lexer__get_name_4_0,68,2,5,9,24,12,15,13)
	MR_init_label2(lexer__get_name_4_0,21,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_name_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 4877 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 4896 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_name_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_name_4_0_i9);
MR_def_label(lexer__get_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_name_4_0
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
#line 4928 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_name_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_name_4_0_i9);
	}
MR_def_label(lexer__get_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_4_0
{
#line 1038 "io.opt"
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
#line 4963 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 4983 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_name_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_name_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_name_4_0_i24);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_name_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 5056 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_name_4_0_i19);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(lexer__get_name_4_0_i21);
MR_def_label(lexer__get_name_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__get_name_4_0_i15);
MR_def_label(lexer__get_name_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_name_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_name_4_0_i68);
MR_def_label(lexer__get_name_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 5109 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_name_4_0
	Stream = (MercuryFilePtr) MR_r4;
	Character = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 5137 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_name_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 5196 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_name_4_0_i19);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(lexer__get_name_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_name_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,12);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module17)
	MR_init_entry1(lexer__get_variable_4_0);
	MR_init_label8(lexer__get_variable_4_0,68,2,5,9,24,12,15,13)
	MR_init_label2(lexer__get_variable_4_0,21,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_variable_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_variable_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 5247 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 5266 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_variable_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_variable_4_0_i9);
MR_def_label(lexer__get_variable_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_4_0
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
#line 5298 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_variable_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_variable_4_0_i9);
	}
MR_def_label(lexer__get_variable_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_4_0
{
#line 1038 "io.opt"
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
#line 5333 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5353 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_variable_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_variable_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_variable_4_0_i24);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 5426 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_variable_4_0_i19);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(lexer__get_variable_4_0_i21);
MR_def_label(lexer__get_variable_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_variable_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		lexer__get_variable_4_0_i15);
MR_def_label(lexer__get_variable_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_variable_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_variable_4_0_i68);
MR_def_label(lexer__get_variable_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 5479 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_4_0
	Stream = (MercuryFilePtr) MR_r4;
	Character = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 5507 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_variable_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 5566 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_variable_4_0_i19);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(lexer__get_variable_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_variable_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,13);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module18)
	MR_init_entry1(lexer__get_char_code_3_0);
	MR_init_label5(lexer__get_char_code_3_0,2,5,9,13,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_char_code_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 5612 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_3_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 5631 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_char_code_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_char_code_3_0_i9);
MR_def_label(lexer__get_char_code_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_3_0
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
#line 5662 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_char_code_3_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_char_code_3_0_i9);
	}
MR_def_label(lexer__get_char_code_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_3_0
{
#line 1038 "io.opt"
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
#line 5698 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5718 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
MR_def_label(lexer__get_char_code_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_char_code_3_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_char_code_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,14);
	MR_proceed();
MR_def_label(lexer__get_char_code_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__get_char_code_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_char_code_3_0
	Character = MR_tempr1;
{
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 5762 "lexer.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module19)
	MR_init_entry1(lexer__get_binary_2_4_0);
	MR_init_label8(lexer__get_binary_2_4_0,99,2,5,9,34,28,12,15)
	MR_init_label5(lexer__get_binary_2_4_0,14,13,23,22,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_binary_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(lexer__get_binary_2_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 5806 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 5825 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_binary_2_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_binary_2_4_0_i9);
MR_def_label(lexer__get_binary_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_4_0
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
#line 5857 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_2_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_binary_2_4_0_i9);
	}
MR_def_label(lexer__get_binary_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_4_0
{
#line 1038 "io.opt"
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
#line 5892 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5912 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_binary_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_binary_2_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_binary_2_4_0_i28);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 5985 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_2_4_0_i19);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_binary_2_4_0_i34);
MR_def_label(lexer__get_binary_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_4_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_binary_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(lexer__get_binary_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,48)) {
		MR_GOTO_LAB(lexer__get_binary_2_4_0_i15);
	}
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_binary_2_4_0_i14);
	}
MR_def_label(lexer__get_binary_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,49)) {
		MR_GOTO_LAB(lexer__get_binary_2_4_0_i13);
	}
	MR_r1 = MR_r3;
MR_def_label(lexer__get_binary_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(lexer__get_binary_2_4_0_i99);
	}
MR_def_label(lexer__get_binary_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 6057 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_4_0
	Stream = (MercuryFilePtr) MR_r4;
	Character = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 6085 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 6144 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_2_4_0_i19);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_binary_2_4_0_i23);
MR_def_label(lexer__get_binary_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_binary_2_4_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_binary_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_binary_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module20)
	MR_init_entry1(lexer__get_binary_3_0);
	MR_init_label8(lexer__get_binary_3_0,2,5,9,19,12,15,14,64)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_binary_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 6201 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_3_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6220 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_binary_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_binary_3_0_i9);
MR_def_label(lexer__get_binary_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_3_0
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
#line 6251 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_binary_3_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_binary_3_0_i9);
	}
MR_def_label(lexer__get_binary_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_3_0
{
#line 1038 "io.opt"
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
#line 6285 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6305 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_binary_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_binary_3_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_binary_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,17);
	MR_proceed();
MR_def_label(lexer__get_binary_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__get_binary_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,48)) {
		MR_GOTO_LAB(lexer__get_binary_3_0_i15);
	}
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_binary_3_0_i14);
	}
MR_def_label(lexer__get_binary_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,49)) {
		MR_GOTO_LAB(lexer__get_binary_3_0_i64);
	}
	MR_r1 = MR_r3;
MR_def_label(lexer__get_binary_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(lexer__get_binary_2_4_0);
	}
MR_def_label(lexer__get_binary_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 6383 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_binary_3_0
	Stream = (MercuryFilePtr) MR_tempr1;
	Character = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 6411 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,17);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module21)
	MR_init_entry1(lexer__get_octal_2_4_0);
	MR_init_label8(lexer__get_octal_2_4_0,93,2,5,9,34,28,12,15)
	MR_init_label4(lexer__get_octal_2_4_0,13,23,22,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_octal_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_octal_2_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 6456 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6475 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_octal_2_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_octal_2_4_0_i9);
MR_def_label(lexer__get_octal_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_4_0
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
#line 6507 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_2_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_octal_2_4_0_i9);
	}
MR_def_label(lexer__get_octal_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_4_0
{
#line 1038 "io.opt"
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
#line 6542 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6562 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_octal_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_octal_2_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_octal_2_4_0_i28);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 6635 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_2_4_0_i19);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_octal_2_4_0_i34);
MR_def_label(lexer__get_octal_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_4_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_octal_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_octal_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_2_4_0_i15);
MR_def_label(lexer__get_octal_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_octal_2_4_0_i93);
MR_def_label(lexer__get_octal_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 6699 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_4_0
	Stream = (MercuryFilePtr) MR_r3;
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 6727 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 6786 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_2_4_0_i19);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_octal_2_4_0_i23);
MR_def_label(lexer__get_octal_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_2_4_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_octal_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_octal_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module22)
	MR_init_entry1(lexer__get_octal_3_0);
	MR_init_label7(lexer__get_octal_3_0,2,5,9,19,56,15,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_octal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 6843 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_3_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 6862 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_octal_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_octal_3_0_i9);
MR_def_label(lexer__get_octal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_3_0
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
#line 6893 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_octal_3_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_octal_3_0_i9);
	}
MR_def_label(lexer__get_octal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_3_0
{
#line 1038 "io.opt"
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
#line 6927 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 6947 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_octal_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_octal_3_0_i56);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_octal_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,18);
	MR_proceed();
MR_def_label(lexer__get_octal_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__get_octal_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__get_octal_3_0_i15);
MR_def_label(lexer__get_octal_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_octal_3_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_octal_2_4_0);
MR_def_label(lexer__get_octal_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 7019 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr2 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_octal_3_0
	Stream = (MercuryFilePtr) MR_tempr2;
	Character = MR_tempr1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 7047 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,18);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module23)
	MR_init_entry1(lexer__get_hex_2_4_0);
	MR_init_label8(lexer__get_hex_2_4_0,93,2,5,9,34,28,12,15)
	MR_init_label4(lexer__get_hex_2_4_0,13,23,22,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_hex_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_hex_2_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 7092 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 7111 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_hex_2_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_hex_2_4_0_i9);
MR_def_label(lexer__get_hex_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_4_0
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
#line 7143 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_2_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_hex_2_4_0_i9);
	}
MR_def_label(lexer__get_hex_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_4_0
{
#line 1038 "io.opt"
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
#line 7178 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7198 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_hex_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_hex_2_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_hex_2_4_0_i28);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 7271 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_2_4_0_i19);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_hex_2_4_0_i34);
MR_def_label(lexer__get_hex_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_4_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_hex_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_hex_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_2_4_0_i15);
MR_def_label(lexer__get_hex_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_hex_2_4_0_i93);
MR_def_label(lexer__get_hex_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 7335 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_4_0
	Stream = (MercuryFilePtr) MR_r3;
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 7363 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 7422 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_2_4_0_i19);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_hex_2_4_0_i23);
MR_def_label(lexer__get_hex_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_2_4_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_hex_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_hex_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module24)
	MR_init_entry1(lexer__get_hex_3_0);
	MR_init_label7(lexer__get_hex_3_0,2,5,9,19,56,15,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_hex_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 7479 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_3_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 7498 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_hex_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_hex_3_0_i9);
MR_def_label(lexer__get_hex_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_3_0
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
#line 7529 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_hex_3_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_hex_3_0_i9);
	}
MR_def_label(lexer__get_hex_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_3_0
{
#line 1038 "io.opt"
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
#line 7563 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7583 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_hex_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_hex_3_0_i56);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_hex_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,19);
	MR_proceed();
MR_def_label(lexer__get_hex_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__get_hex_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__get_hex_3_0_i15);
MR_def_label(lexer__get_hex_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_hex_3_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_hex_2_4_0);
MR_def_label(lexer__get_hex_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 7655 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr2 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_hex_3_0
	Stream = (MercuryFilePtr) MR_tempr2;
	Character = MR_tempr1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 7683 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,19);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_digit_1_0);

MR_BEGIN_MODULE(lexer_module25)
	MR_init_entry1(lexer__get_float_exponent_3_4_0);
	MR_init_label8(lexer__get_float_exponent_3_4_0,90,2,5,9,29,12,15,13)
	MR_init_label3(lexer__get_float_exponent_3_4_0,25,23,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_float_exponent_3_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_float_exponent_3_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 7729 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 7748 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i9);
MR_def_label(lexer__get_float_exponent_3_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
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
#line 7780 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i9);
	}
MR_def_label(lexer__get_float_exponent_3_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
{
#line 1038 "io.opt"
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
#line 7815 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 7835 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_float_exponent_3_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i29);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 7908 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i19);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r3;
{
#line 449 "string.opt"
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
#line 7936 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i23);
	MR_r3 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i25);
MR_def_label(lexer__get_float_exponent_3_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_float_exponent_3_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_3_4_0_i15);
MR_def_label(lexer__get_float_exponent_3_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i90);
MR_def_label(lexer__get_float_exponent_3_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 7989 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
	Stream = (MercuryFilePtr) MR_r4;
	Character = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 8017 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 8076 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i19);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_3_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r3;
{
#line 449 "string.opt"
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
#line 8104 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_3_4_0_i23);
	MR_r3 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(lexer__get_float_exponent_3_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_float_exponent_3_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_float_exponent_3_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module26)
	MR_init_entry1(lexer__get_float_exponent_2_4_0);
	MR_init_label7(lexer__get_float_exponent_2_4_0,2,5,9,19,12,15,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_float_exponent_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 8157 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 8176 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_float_exponent_2_4_0_i9);
MR_def_label(lexer__get_float_exponent_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_4_0
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
#line 8208 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_2_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_float_exponent_2_4_0_i9);
	}
MR_def_label(lexer__get_float_exponent_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_4_0
{
#line 1038 "io.opt"
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
#line 8243 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8263 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_float_exponent_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_4_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_float_exponent_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_float_exponent_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_2_4_0_i15);
MR_def_label(lexer__get_float_exponent_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_2_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_float_exponent_3_4_0);
MR_def_label(lexer__get_float_exponent_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 8334 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr2 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_2_4_0
	Stream = (MercuryFilePtr) MR_tempr2;
	Character = MR_tempr1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 8362 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module27)
	MR_init_entry1(lexer__get_float_exponent_4_0);
	MR_init_label8(lexer__get_float_exponent_4_0,2,5,9,31,27,25,12,14)
	MR_init_label3(lexer__get_float_exponent_4_0,13,20,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_float_exponent_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 8405 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 8424 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_float_exponent_4_0_i9);
MR_def_label(lexer__get_float_exponent_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_4_0
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
#line 8456 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_float_exponent_4_0_i9);
	}
MR_def_label(lexer__get_float_exponent_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_4_0
{
#line 1038 "io.opt"
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
#line 8491 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8511 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_float_exponent_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_float_exponent_4_0_i25);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 8584 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_4_0_i27);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r3;
{
#line 449 "string.opt"
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
#line 8614 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_exponent_4_0_i31);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_float_exponent_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_float_exponent_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_float_exponent_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_float_exponent_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,43)) {
		MR_GOTO_LAB(lexer__get_float_exponent_4_0_i14);
	}
	if (MR_INT_NE(MR_tempr1,45)) {
		MR_GOTO_LAB(lexer__get_float_exponent_4_0_i13);
	}
	}
MR_def_label(lexer__get_float_exponent_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_float_exponent_2_4_0);
MR_def_label(lexer__get_float_exponent_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_exponent_4_0_i20);
MR_def_label(lexer__get_float_exponent_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_exponent_4_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_float_exponent_3_4_0);
MR_def_label(lexer__get_float_exponent_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 8697 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_exponent_4_0
	Stream = (MercuryFilePtr) MR_tempr1;
	Character = MR_sv(2);
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 8725 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module28)
	MR_init_entry1(lexer__get_float_decimals_4_0);
	MR_init_label8(lexer__get_float_decimals_4_0,108,2,5,9,35,12,15,13)
	MR_init_label6(lexer__get_float_decimals_4_0,20,19,18,30,28,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_float_decimals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_float_decimals_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 8770 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 8789 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_float_decimals_4_0_i9);
MR_def_label(lexer__get_float_decimals_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
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
#line 8821 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_float_decimals_4_0_i9);
	}
MR_def_label(lexer__get_float_decimals_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
{
#line 1038 "io.opt"
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
#line 8856 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 8876 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_float_decimals_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_float_decimals_4_0_i35);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 8949 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_4_0_i24);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r3;
{
#line 449 "string.opt"
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
#line 8977 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_4_0_i28);
	MR_r3 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(lexer__get_float_decimals_4_0_i30);
MR_def_label(lexer__get_float_decimals_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_float_decimals_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_float_decimals_4_0_i15);
MR_def_label(lexer__get_float_decimals_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_float_decimals_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_float_decimals_4_0_i108);
MR_def_label(lexer__get_float_decimals_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,69)) {
		MR_GOTO_LAB(lexer__get_float_decimals_4_0_i20);
	}
	MR_GOTO_LAB(lexer__get_float_decimals_4_0_i19);
	}
MR_def_label(lexer__get_float_decimals_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,101)) {
		MR_GOTO_LAB(lexer__get_float_decimals_4_0_i18);
	}
	MR_sv(2) = MR_r3;
MR_def_label(lexer__get_float_decimals_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_float_exponent_4_0);
MR_def_label(lexer__get_float_decimals_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 9054 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
	Stream = (MercuryFilePtr) MR_r4;
	Character = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 9082 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 9141 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_4_0_i24);
	MR_r3 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__lexer__get_float_decimals_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r3;
{
#line 449 "string.opt"
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
#line 9169 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_float_decimals_4_0_i28);
	MR_r3 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(lexer__get_float_decimals_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_float_decimals_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_float_decimals_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__putback_char_3_0);

MR_BEGIN_MODULE(lexer_module29)
	MR_init_entry1(lexer__get_int_dot_4_0);
	MR_init_label8(lexer__get_int_dot_4_0,2,5,9,38,37,34,32,12)
	MR_init_label8(lexer__get_int_dot_4_0,15,13,18,24,23,20,27,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_int_dot_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 9224 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 9243 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_int_dot_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_int_dot_4_0_i9);
MR_def_label(lexer__get_int_dot_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_4_0
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
#line 9275 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_int_dot_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_int_dot_4_0_i9);
	}
MR_def_label(lexer__get_int_dot_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_4_0
{
#line 1038 "io.opt"
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
#line 9310 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9330 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_int_dot_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_int_dot_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_int_dot_4_0_i32);
	}
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 9363 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_4_0
	Stream = (MercuryFilePtr) MR_r3;
	Character = (MR_Integer) 46;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 9391 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 9450 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_int_dot_4_0_i34);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_int_dot_4_0_i38);
MR_def_label(lexer__get_int_dot_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_4_0_i37);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_int_dot_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_int_dot_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_int_dot_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_int_dot_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_int_dot_4_0_i15);
MR_def_label(lexer__get_int_dot_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 46;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_float_decimals_4_0);
	}
MR_def_label(lexer__get_int_dot_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__putback_char_3_0,
		lexer__get_int_dot_4_0_i18);
MR_def_label(lexer__get_int_dot_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_int_dot_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 9574 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_int_dot_4_0_i20);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_int_dot_4_0_i24);
MR_def_label(lexer__get_int_dot_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_int_dot_4_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_int_dot_4_0_i27);
	}
MR_def_label(lexer__get_int_dot_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_GOTO_LAB(lexer__get_int_dot_4_0_i27);
MR_def_label(lexer__get_int_dot_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,16);
MR_def_label(lexer__get_int_dot_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(lexer__get_int_dot_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_int_dot_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module30)
	MR_init_entry1(lexer__get_number_4_0);
	MR_init_label8(lexer__get_number_4_0,121,2,5,9,44,38,12,15)
	MR_init_label8(lexer__get_number_4_0,13,18,23,22,21,31,30,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_number_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_number_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 9656 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_4_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 9675 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_number_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_number_4_0_i9);
MR_def_label(lexer__get_number_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_number_4_0
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
#line 9707 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_number_4_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_number_4_0_i9);
	}
MR_def_label(lexer__get_number_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_4_0
{
#line 1038 "io.opt"
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
#line 9742 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 9762 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_number_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_number_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_number_4_0_i38);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_number_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 9835 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_number_4_0_i27);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_number_4_0_i44);
MR_def_label(lexer__get_number_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_4_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_number_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_number_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_number_4_0_i15);
MR_def_label(lexer__get_number_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_number_4_0_i121);
MR_def_label(lexer__get_number_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	if (MR_INT_NE(MR_r2,46)) {
		MR_GOTO_LAB(lexer__get_number_4_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_int_dot_4_0);
MR_def_label(lexer__get_number_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,69)) {
		MR_GOTO_LAB(lexer__get_number_4_0_i23);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(lexer__get_number_4_0_i22);
MR_def_label(lexer__get_number_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,101)) {
		MR_GOTO_LAB(lexer__get_number_4_0_i21);
	}
	MR_sv(2) = MR_r2;
MR_def_label(lexer__get_number_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_float_exponent_4_0);
MR_def_label(lexer__get_number_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 9929 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_number_4_0
	Stream = (MercuryFilePtr) MR_r3;
	Character = MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 9957 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_number_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 10016 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_number_4_0_i27);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_number_4_0_i31);
MR_def_label(lexer__get_number_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_number_4_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_number_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_number_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module31)
	MR_init_entry1(lexer__get_zero_3_0);
	MR_init_label8(lexer__get_zero_3_0,2,5,9,45,130,15,13,18)
	MR_init_label7(lexer__get_zero_3_0,21,24,27,30,35,34,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_zero_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 10074 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r3 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_3_0
	Stream = (MercuryFilePtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10093 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r3 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,-1)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_zero_3_0_i9);
MR_def_label(lexer__get_zero_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_3_0
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
#line 10124 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_zero_3_0_i5);
	MR_r3 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_zero_3_0_i9);
	}
MR_def_label(lexer__get_zero_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_3_0
{
#line 1038 "io.opt"
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
#line 10158 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r3, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 10178 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	}
MR_def_label(lexer__get_zero_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i130);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_proceed();
MR_def_label(lexer__get_zero_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__get_zero_3_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_zero_3_0_i15);
MR_def_label(lexer__get_zero_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_number_4_0);
MR_def_label(lexer__get_zero_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	if (MR_INT_NE(MR_r3,39)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i18);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_char_code_3_0);
MR_def_label(lexer__get_zero_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,98)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i21);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_binary_3_0);
MR_def_label(lexer__get_zero_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,111)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i24);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_octal_3_0);
MR_def_label(lexer__get_zero_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,120)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i27);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_hex_3_0);
MR_def_label(lexer__get_zero_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,46)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i30);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_int_dot_4_0);
MR_def_label(lexer__get_zero_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,69)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i35);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(lexer__get_zero_3_0_i34);
MR_def_label(lexer__get_zero_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,101)) {
		MR_GOTO_LAB(lexer__get_zero_3_0_i33);
	}
	MR_sv(1) = MR_r3;
MR_def_label(lexer__get_zero_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_float_exponent_4_0);
MR_def_label(lexer__get_zero_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 10312 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_zero_3_0
	Stream = (MercuryFilePtr) MR_tempr1;
	Character = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("putback_char_2");
{
#line 1275 "io.opt"

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
#line 10340 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("putback_char_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_upper_1_0);
MR_decl_entry(char__is_lower_1_0);

MR_BEGIN_MODULE(lexer_module32)
	MR_init_entry1(lexer__get_token_4_0);
	MR_init_label8(lexer__get_token_4_0,2,5,9,96,94,95,12,15)
	MR_init_label8(lexer__get_token_4_0,13,23,20,26,19,30,32,28)
	MR_init_label8(lexer__get_token_4_0,36,34,40,42,38,46,48,49)
	MR_init_label8(lexer__get_token_4_0,44,54,52,56,61,63,59,65)
	MR_init_label8(lexer__get_token_4_0,68,73,71,76,78,79,74,80)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__get_token_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 10388 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r2 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_4_0
	Stream = (MercuryFilePtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10407 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i2);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_token_4_0_i9);
MR_def_label(lexer__get_token_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_token_4_0
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
#line 10438 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_token_4_0_i5);
	MR_r2 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_token_4_0_i9);
	}
MR_def_label(lexer__get_token_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_4_0
{
#line 1038 "io.opt"
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
#line 10474 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 10494 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_token_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i94);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i96);
MR_def_label(lexer__get_token_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_token_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_r2, 0);
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i95);
MR_def_label(lexer__get_token_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
MR_def_label(lexer__get_token_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__get_token_4_0_i15);
MR_def_label(lexer__get_token_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i13);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_token_2_4_0);
MR_def_label(lexer__get_token_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_upper_1_0,
		lexer__get_token_4_0_i23);
MR_def_label(lexer__get_token_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(lexer__get_token_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,95)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i19);
	}
	}
MR_def_label(lexer__get_token_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i26);
MR_def_label(lexer__get_token_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_variable_4_0,
		lexer__get_token_4_0_i79);
MR_def_label(lexer__get_token_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_lower_1_0,
		lexer__get_token_4_0_i30);
MR_def_label(lexer__get_token_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i28);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i32);
MR_def_label(lexer__get_token_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_name_4_0,
		lexer__get_token_4_0_i79);
MR_def_label(lexer__get_token_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	if (MR_INT_NE(MR_r3,48)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i34);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i36);
MR_def_label(lexer__get_token_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__get_zero_3_0,
		lexer__get_token_4_0_i79);
MR_def_label(lexer__get_token_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_token_4_0_i40);
MR_def_label(lexer__get_token_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i38);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i42);
MR_def_label(lexer__get_token_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_number_4_0,
		lexer__get_token_4_0_i79);
MR_def_label(lexer__get_token_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__special_token_2_0,
		lexer__get_token_4_0_i46);
MR_def_label(lexer__get_token_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i44);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i48);
MR_def_label(lexer__get_token_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i49);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_token_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_token_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	if (MR_INT_NE(MR_r3,46)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i52);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i54);
MR_def_label(lexer__get_token_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__get_dot_3_0,
		lexer__get_token_4_0_i79);
MR_def_label(lexer__get_token_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,37)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i56);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__skip_to_eol_4_0);
MR_def_label(lexer__get_token_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,34)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i61);
	}
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i63);
MR_def_label(lexer__get_token_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,39)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i59);
	}
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i63);
MR_def_label(lexer__get_token_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(lexer__start_quoted_name_5_0,
		lexer__get_token_4_0_i79);
MR_def_label(lexer__get_token_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,47)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i65);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_slash_4_0);
MR_def_label(lexer__get_token_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,35)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i68);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_source_line_number_5_0);
MR_def_label(lexer__get_token_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,96)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i71);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i73);
MR_def_label(lexer__get_token_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_token_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__graphic_token_char_1_0,
		lexer__get_token_4_0_i76);
MR_def_label(lexer__get_token_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_token_4_0_i74);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i78);
MR_def_label(lexer__get_token_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_graphic_4_0,
		lexer__get_token_4_0_i79);
MR_def_label(lexer__get_token_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_token_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_4_0_i80);
MR_def_label(lexer__get_token_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module33)
	MR_init_entry1(lexer__get_token_2_4_0);
	MR_init_label8(lexer__get_token_2_4_0,209,2,5,9,93,91,92,12)
	MR_init_label8(lexer__get_token_2_4_0,15,13,23,20,26,19,30,32)
	MR_init_label8(lexer__get_token_2_4_0,28,36,34,40,42,38,46,48)
	MR_init_label8(lexer__get_token_2_4_0,44,51,49,53,58,60,56,62)
	MR_init_label8(lexer__get_token_2_4_0,65,70,68,73,75,76,71,77)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_token_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(lexer__get_token_2_4_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 10862 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r2 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_4_0
	Stream = (MercuryFilePtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 10881 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i2);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_token_2_4_0_i9);
MR_def_label(lexer__get_token_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_4_0
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
#line 10912 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_token_2_4_0_i5);
	MR_r2 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_token_2_4_0_i9);
	}
MR_def_label(lexer__get_token_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_4_0
{
#line 1038 "io.opt"
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
#line 10948 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_2_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 10968 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__get_token_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i91);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i93);
MR_def_label(lexer__get_token_2_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_token_2_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_r2, 0);
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i92);
MR_def_label(lexer__get_token_2_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
MR_def_label(lexer__get_token_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__get_token_2_4_0_i15);
MR_def_label(lexer__get_token_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i13);
	}
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(lexer__get_token_2_4_0_i209);
MR_def_label(lexer__get_token_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_upper_1_0,
		lexer__get_token_2_4_0_i23);
MR_def_label(lexer__get_token_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,95)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i19);
	}
	}
MR_def_label(lexer__get_token_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i26);
MR_def_label(lexer__get_token_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_variable_4_0,
		lexer__get_token_2_4_0_i76);
MR_def_label(lexer__get_token_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_lower_1_0,
		lexer__get_token_2_4_0_i30);
MR_def_label(lexer__get_token_2_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i28);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i32);
MR_def_label(lexer__get_token_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_name_4_0,
		lexer__get_token_2_4_0_i76);
MR_def_label(lexer__get_token_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	if (MR_INT_NE(MR_r3,48)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i34);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i36);
MR_def_label(lexer__get_token_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__get_zero_3_0,
		lexer__get_token_2_4_0_i76);
MR_def_label(lexer__get_token_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_token_2_4_0_i40);
MR_def_label(lexer__get_token_2_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i38);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i42);
MR_def_label(lexer__get_token_2_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_number_4_0,
		lexer__get_token_2_4_0_i76);
MR_def_label(lexer__get_token_2_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__special_token_2_0,
		lexer__get_token_2_4_0_i46);
MR_def_label(lexer__get_token_2_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i44);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i48);
MR_def_label(lexer__get_token_2_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_token_2_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	if (MR_INT_NE(MR_r3,46)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i49);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i51);
MR_def_label(lexer__get_token_2_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__get_dot_3_0,
		lexer__get_token_2_4_0_i76);
MR_def_label(lexer__get_token_2_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,37)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i53);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__skip_to_eol_4_0);
MR_def_label(lexer__get_token_2_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,34)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i58);
	}
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i60);
MR_def_label(lexer__get_token_2_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,39)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i56);
	}
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i60);
MR_def_label(lexer__get_token_2_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(lexer__start_quoted_name_5_0,
		lexer__get_token_2_4_0_i76);
MR_def_label(lexer__get_token_2_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,47)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i62);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_slash_4_0);
MR_def_label(lexer__get_token_2_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,35)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i65);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(lexer__get_source_line_number_5_0);
MR_def_label(lexer__get_token_2_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,96)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i68);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i70);
MR_def_label(lexer__get_token_2_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_token_2_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__graphic_token_char_1_0,
		lexer__get_token_2_4_0_i73);
MR_def_label(lexer__get_token_2_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_token_2_4_0_i71);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i75);
MR_def_label(lexer__get_token_2_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_graphic_4_0,
		lexer__get_token_2_4_0_i76);
MR_def_label(lexer__get_token_2_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_token_2_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_token_2_4_0_i77);
MR_def_label(lexer__get_token_2_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module34)
	MR_init_entry1(lexer__skip_to_eol_4_0);
	MR_init_label6(lexer__skip_to_eol_4_0,2,5,9,18,12,57)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__skip_to_eol_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 11319 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_4_0
	Stream = (MercuryFilePtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 11338 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r4 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(lexer__skip_to_eol_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__skip_to_eol_4_0_i9);
MR_def_label(lexer__skip_to_eol_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_4_0
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
#line 11369 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__skip_to_eol_4_0_i5);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__skip_to_eol_4_0_i9);
	}
MR_def_label(lexer__skip_to_eol_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_4_0
{
#line 1038 "io.opt"
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
#line 11405 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 11425 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
MR_def_label(lexer__skip_to_eol_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__skip_to_eol_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__skip_to_eol_4_0_i18);
	}
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_4_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 11454 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_proceed();
MR_def_label(lexer__skip_to_eol_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__skip_to_eol_4_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 11475 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__skip_to_eol_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(lexer__skip_to_eol_4_0_i57);
	}
	MR_np_tailcall_ent(lexer__get_token_2_4_0);
	}
MR_def_label(lexer__skip_to_eol_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localtailcall(lexer__skip_to_eol_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module35)
	MR_init_entry1(lexer__get_slash_4_0);
	MR_init_label8(lexer__get_slash_4_0,2,5,9,40,12,188,18,19)
	MR_init_label8(lexer__get_slash_4_0,20,21,22,23,24,25,26,27)
	MR_init_label8(lexer__get_slash_4_0,28,29,30,31,32,33,34,17)
	MR_init_label3(lexer__get_slash_4_0,36,16,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_slash_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 11534 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_4_0
	Stream = (MercuryFilePtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 11553 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r4 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_slash_4_0_i9);
MR_def_label(lexer__get_slash_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_4_0
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
#line 11584 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_slash_4_0_i5);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_slash_4_0_i9);
	}
MR_def_label(lexer__get_slash_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_4_0
{
#line 1038 "io.opt"
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
#line 11620 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 11640 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
MR_def_label(lexer__get_slash_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i40);
	}
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_4_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 11669 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_proceed();
MR_def_label(lexer__get_slash_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_4_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 11690 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__get_slash_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,42)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i188);
	}
	MR_np_tailcall_ent(lexer__get_comment_4_0);
MR_def_label(lexer__get_slash_4_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,33)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i18);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,35)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i19);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,36)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i20);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,38)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i21);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,42)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i22);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,43)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i23);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,45)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i24);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,46)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i25);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,47)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i26);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,58)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i27);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,60)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i28);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,61)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i29);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,62)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i30);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,63)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i31);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,64)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i32);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,92)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i33);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,94)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i34);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(lexer__get_slash_4_0_i17);
MR_def_label(lexer__get_slash_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,126)) {
		MR_GOTO_LAB(lexer__get_slash_4_0_i16);
	}
	MR_r1 = MR_r3;
MR_def_label(lexer__get_slash_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_4_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 11853 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(lexer__get_graphic_4_0,
		lexer__get_slash_4_0_i36);
MR_def_label(lexer__get_slash_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(lexer__get_slash_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__putback_char_3_0,
		lexer__get_slash_4_0_i37);
MR_def_label(lexer__get_slash_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_slash_4_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 11889 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module36)
	MR_init_entry1(lexer__get_comment_4_0);
	MR_init_label6(lexer__get_comment_4_0,2,5,9,18,12,57)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_comment_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 11926 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_4_0
	Stream = (MercuryFilePtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 11945 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r4 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(lexer__get_comment_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_comment_4_0_i9);
MR_def_label(lexer__get_comment_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_4_0
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
#line 11976 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_comment_4_0_i5);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_comment_4_0_i9);
	}
MR_def_label(lexer__get_comment_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_4_0
{
#line 1038 "io.opt"
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
#line 12012 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 12032 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
MR_def_label(lexer__get_comment_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_comment_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_comment_4_0_i18);
	}
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_4_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 12061 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,22);
	MR_proceed();
MR_def_label(lexer__get_comment_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_4_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 12082 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__get_comment_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,42)) {
		MR_GOTO_LAB(lexer__get_comment_4_0_i57);
	}
	MR_np_tailcall_ent(lexer__get_comment_2_4_0);
	}
MR_def_label(lexer__get_comment_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localtailcall(lexer__get_comment_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module37)
	MR_init_entry1(lexer__get_comment_2_4_0);
	MR_init_label7(lexer__get_comment_2_4_0,2,5,9,22,12,13,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_comment_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 12138 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r4 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_4_0
	Stream = (MercuryFilePtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 12157 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r4 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(lexer__get_comment_2_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_comment_2_4_0_i9);
MR_def_label(lexer__get_comment_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_4_0
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
#line 12188 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_comment_2_4_0_i5);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_comment_2_4_0_i9);
	}
MR_def_label(lexer__get_comment_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_4_0
{
#line 1038 "io.opt"
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
#line 12224 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_tempr1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 12244 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
MR_def_label(lexer__get_comment_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(lexer__get_comment_2_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(lexer__get_comment_2_4_0_i22);
	}
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 12273 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,22);
	MR_proceed();
MR_def_label(lexer__get_comment_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_comment_2_4_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 12294 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_r2 = LineNum;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(lexer__get_comment_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,47)) {
		MR_GOTO_LAB(lexer__get_comment_2_4_0_i13);
	}
	MR_np_tailcall_ent(lexer__get_token_2_4_0);
MR_def_label(lexer__get_comment_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,42)) {
		MR_GOTO_LAB(lexer__get_comment_2_4_0_i69);
	}
	MR_np_localtailcall(lexer__get_comment_2_4_0);
MR_def_label(lexer__get_comment_2_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(lexer__get_comment_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(lexer_module38)
	MR_init_entry1(lexer__get_source_line_number_5_0);
	MR_init_label8(lexer__get_source_line_number_5_0,106,2,5,9,44,42,43,12)
	MR_init_label8(lexer__get_source_line_number_5_0,15,13,25,24,28,21,30,18)
	MR_init_label4(lexer__get_source_line_number_5_0,32,34,37,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__get_source_line_number_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__get_source_line_number_5_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_5_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 12361 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_r2 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Integer	CharCode;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_5_0
	Stream = (MercuryFilePtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("read_char_code_2");
{
#line 1267 "io.opt"

    CharCode = mercury_getc(Stream);
    MR_update_io(IO0, IO);
;}
#line 12380 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("read_char_code_2");
	MR_r2 = CharCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__get_source_line_number_5_0_i9);
MR_def_label(lexer__get_source_line_number_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_5_0
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
#line 12412 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_source_line_number_5_0_i5);
	MR_r2 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(lexer__get_source_line_number_5_0_i9);
	}
MR_def_label(lexer__get_source_line_number_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_5_0
{
#line 1038 "io.opt"
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
#line 12449 "lexer.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r2, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("read failed: ", 13);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 12469 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r2 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr2;
	}
MR_def_label(lexer__get_source_line_number_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_5_0_i12);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(lexer__get_source_line_number_5_0_i42);
	}
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_source_line_number_5_0_i44);
MR_def_label(lexer__get_source_line_number_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,24);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_source_line_number_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_r2, 0);
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_source_line_number_5_0_i43);
MR_def_label(lexer__get_source_line_number_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_source_line_number_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__get_source_line_number_5_0_i15);
MR_def_label(lexer__get_source_line_number_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_5_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(lexer__get_source_line_number_5_0_i106);
MR_def_label(lexer__get_source_line_number_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	if (MR_INT_NE(MR_r3,10)) {
		MR_GOTO_LAB(lexer__get_source_line_number_5_0_i18);
	}
	{
	MR_Word	Chars;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Chars = MR_sv(1);
{
#line 392 "string.opt"
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
#line 12590 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_source_line_number_5_0_i21);
	MR_r2 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__get_source_line_number_5_0_i25);
MR_def_label(lexer__get_source_line_number_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__get_source_line_number_5_0_i24);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__get_source_line_number_5_0_i24);
	}
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_5_0
	LineNum = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("set_line_number");
{
#line 625 "io.opt"

    MR_line_number(*mercury_current_text_input()) = LineNum;
    MR_update_io(IO0, IO);
;}
#line 12622 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("set_line_number");
#undef	MR_PROC_LABEL
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__get_token_4_0);
MR_def_label(lexer__get_source_line_number_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_source_line_number_5_0_i28);
MR_def_label(lexer__get_source_line_number_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("invalid line number \140", 21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_5_0
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
#line 12677 "lexer.c"
	MR_r3 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__get_source_line_number_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_source_line_number_5_0_i30);
MR_def_label(lexer__get_source_line_number_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,23);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__get_source_line_number_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(lexer__get_context_3_0,
		lexer__get_source_line_number_5_0_i32);
MR_def_label(lexer__get_source_line_number_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__get_source_line_number_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Character = MR_sv(2);
	Int = (MR_Integer) 0;
{
#line 44 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 12718 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__get_source_line_number_5_0_i34);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_np_call_localret_ent(string__append_list_2_0,
		lexer__get_source_line_number_5_0_i39);
MR_def_label(lexer__get_source_line_number_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		lexer__get_source_line_number_5_0_i37);
MR_def_label(lexer__get_source_line_number_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("invalid character \140", 19);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		lexer__get_source_line_number_5_0_i39);
MR_def_label(lexer__get_source_line_number_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module39)
	MR_init_entry1(lexer__get_token_list_2_5_0);
	MR_init_label8(lexer__get_token_list_2_5_0,47,7,11,4,14,15,12,16)
	MR_init_label1(lexer__get_token_list_2_5_0,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__get_token_list_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(lexer__get_token_list_2_5_0_i47);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(lexer__get_token_list_2_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(lexer__get_token_list_2_5_0_i7);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r1),9)) {
		MR_GOTO_LAB(lexer__get_token_list_2_5_0_i11);
	}
	MR_GOTO_LAB(lexer__get_token_list_2_5_0_i4);
MR_def_label(lexer__get_token_list_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(lexer__get_token_list_2_5_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(lexer__get_token_list_2_5_0_i4) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_5_0_i4) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_5_0_i4) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_5_0_i4) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_5_0_i11) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_5_0_i11) MR_AND
		MR_LABEL_AP(lexer__get_token_list_2_5_0_i4));
MR_def_label(lexer__get_token_list_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__get_token_list_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(lexer__get_token_list_2_5_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	LineNum;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__lexer__get_token_list_2_5_0
	MR_OBTAIN_GLOBAL_LOCK("get_line_number");
{
#line 618 "io.opt"

    LineNum = MR_line_number(*mercury_current_text_input());
    MR_update_io(IO0, IO);
;}
#line 12841 "lexer.c"
	MR_RELEASE_GLOBAL_LOCK("get_line_number");
	MR_tempr1 = LineNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_dot_3_0,
		lexer__get_token_list_2_5_0_i14);
MR_def_label(lexer__get_token_list_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(lexer__get_token_list_2_5_0,
		lexer__get_token_list_2_5_0_i15);
MR_def_label(lexer__get_token_list_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(lexer__get_token_list_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(lexer__get_token_4_0,
		lexer__get_token_list_2_5_0_i16);
MR_def_label(lexer__get_token_list_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(lexer__get_token_list_2_5_0,
		lexer__get_token_list_2_5_0_i17);
MR_def_label(lexer__get_token_list_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module40)
	MR_init_entry1(lexer__get_token_list_3_0);
	MR_init_label1(lexer__get_token_list_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__get_token_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(lexer__get_token_4_0,
		lexer__get_token_list_3_0_i2);
MR_def_label(lexer__get_token_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(lexer__get_token_list_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module41)
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


MR_BEGIN_MODULE(lexer_module42)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = ((MR_Integer) MR_ctfield(0, MR_tempr3, 2) - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_ungetchar_3_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr1;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 12973 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_ctfield(0, MR_tempr3, 1);
	MR_r6 = MR_ctfield(0, MR_tempr3, 0);
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


MR_BEGIN_MODULE(lexer_module43)
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13035 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module44)
	MR_init_entry1(lexer__string_get_graphic_7_0);
	MR_init_label7(lexer__string_get_graphic_7_0,108,4,6,109,7,28,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_graphic_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_graphic_7_0,108)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 13084 "lexer.c"
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
	MR_sv(3) = MR_tempr5;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_graphic_7_0_i6);
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
MR_def_label(lexer__string_get_graphic_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,33)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,35)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,36)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,38)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,43)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,45)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,46)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,47)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,58)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,60)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,61)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,62)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,63)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,64)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,92)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_EQ(MR_r5,94)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i109);
	}
	if (MR_INT_NE(MR_r5,126)) {
		MR_GOTO_LAB(lexer__string_get_graphic_7_0_i7);
	}
MR_def_label(lexer__string_get_graphic_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__string_get_graphic_7_0_i108);
MR_def_label(lexer__string_get_graphic_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_graphic_7_0_i28);
MR_def_label(lexer__string_get_graphic_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13210 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 13247 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module45)
	MR_init_entry1(lexer__string_get_dot_7_0);
	MR_init_label8(lexer__string_get_dot_7_0,4,6,12,10,15,8,18,19)
	MR_init_label8(lexer__string_get_dot_7_0,20,21,22,23,24,25,26,27)
	MR_init_label8(lexer__string_get_dot_7_0,28,29,30,31,32,33,34,16)
	MR_init_label2(lexer__string_get_dot_7_0,37,3)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 13298 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_dot_7_0_i6);
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
MR_def_label(lexer__string_get_dot_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__string_get_dot_7_0_i12);
MR_def_label(lexer__string_get_dot_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_dot_7_0_i15);
MR_def_label(lexer__string_get_dot_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_dot_7_0_i15);
MR_def_label(lexer__string_get_dot_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_dot_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
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
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
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
	if (MR_INT_NE(MR_r1,38)) {
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
	if (MR_INT_NE(MR_r1,42)) {
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
	if (MR_INT_NE(MR_r1,43)) {
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
	if (MR_INT_NE(MR_r1,45)) {
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
	if (MR_INT_NE(MR_r1,46)) {
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
	if (MR_INT_NE(MR_r1,47)) {
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
	if (MR_INT_NE(MR_r1,58)) {
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
	if (MR_INT_NE(MR_r1,60)) {
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
	if (MR_INT_NE(MR_r1,61)) {
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
	if (MR_INT_NE(MR_r1,62)) {
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
	if (MR_INT_NE(MR_r1,63)) {
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
	if (MR_INT_NE(MR_r1,64)) {
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
	if (MR_INT_NE(MR_r1,92)) {
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
	if (MR_INT_NE(MR_r1,94)) {
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
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__string_get_dot_7_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_dot_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_dot_7_0_i37);
MR_def_label(lexer__string_get_dot_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_decr_sp_and_return(6);
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


MR_BEGIN_MODULE(lexer_module46)
	MR_init_entry1(lexer__string_get_quoted_name_9_0);
	MR_init_label6(lexer__string_get_quoted_name_9_0,33,4,6,7,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_quoted_name_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_quoted_name_9_0,33)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 13644 "lexer.c"
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
	MR_sv(2) = MR_tempr5;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i6);
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
MR_def_label(lexer__string_get_quoted_name_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r7 != MR_r3)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i7);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_quote_9_0);
MR_def_label(lexer__string_get_quoted_name_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,92)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i9);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_escape_9_0);
MR_def_label(lexer__string_get_quoted_name_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_quoted_name_9_0_i33);
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


MR_BEGIN_MODULE(lexer_module47)
	MR_init_entry1(lexer__string_get_quoted_name_quote_9_0);
	MR_init_label8(lexer__string_get_quoted_name_quote_9_0,4,6,7,9,14,16,11,3)
	MR_init_label3(lexer__string_get_quoted_name_quote_9_0,27,29,24)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 13749 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i6);
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
MR_def_label(lexer__string_get_quoted_name_quote_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r3)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i7);
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
MR_def_label(lexer__string_get_quoted_name_quote_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_quoted_name_quote_9_0_i9);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,9)
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
#line 392 "string.opt"
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
#line 13863 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i11);
	MR_r4 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(1),39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_quoted_name_quote_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lexer.m: unknown quote character", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_decr_sp_and_return(5);
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
#line 392 "string.opt"
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
#line 13962 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i24);
	MR_r4 = (MR_Word) Str;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i27);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r4;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(lexer__string_get_quoted_name_quote_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_quote_9_0_i29);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r4;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(lexer__string_get_quoted_name_quote_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lexer.m: unknown quote character", 32);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(lexer__string_get_quoted_name_quote_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_r3 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module48)
	MR_init_entry1(lexer__string_get_quoted_name_escape_9_0);
	MR_init_label8(lexer__string_get_quoted_name_escape_9_0,126,4,6,7,10,15,16,17)
	MR_init_label8(lexer__string_get_quoted_name_escape_9_0,18,19,20,21,22,23,24,14)
	MR_init_label7(lexer__string_get_quoted_name_escape_9_0,13,27,30,33,38,36,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_quoted_name_escape_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_quoted_name_escape_9_0,126)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 14039 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i6);
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
MR_def_label(lexer__string_get_quoted_name_escape_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),10)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i7);
	}
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),13)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i10);
	}
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i126);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),34)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i15);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 34;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),39)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i16);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 39;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),92)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i17);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 92;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),96)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i18);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 96;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),97)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i19);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 7;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),98)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i20);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 8;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),102)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i21);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 12;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),110)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i22);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 10;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),114)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i23);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 13;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),116)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i24);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 9;
	MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i14);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),118)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i13);
	}
	MR_sv(4) = MR_r4;
	MR_r4 = (MR_Integer) 11;
MR_def_label(lexer__string_get_quoted_name_escape_9_0,14)
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
MR_def_label(lexer__string_get_quoted_name_escape_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),120)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i27);
	}
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_hex_escape_10_0);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),117)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i30);
	}
	MR_r7 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 4;
	MR_r8 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_unicode_escape_11_0);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),85)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i33);
	}
	MR_r7 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 8;
	MR_r8 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(lexer__string_get_unicode_escape_11_0);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_quoted_name_escape_9_0_i38);
MR_def_label(lexer__string_get_quoted_name_escape_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_quoted_name_escape_9_0_i36);
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
MR_def_label(lexer__string_get_quoted_name_escape_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,2);
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
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(lexer_module49)
	MR_init_entry1(lexer__string_get_unicode_escape_11_0);
	MR_init_label8(lexer__string_get_unicode_escape_11_0,144,3,8,12,10,15,18,17)
	MR_init_label8(lexer__string_get_unicode_escape_11_0,20,22,21,23,24,25,26,27)
	MR_init_label8(lexer__string_get_unicode_escape_11_0,16,29,30,33,31,5,36,2)
	MR_init_label7(lexer__string_get_unicode_escape_11_0,40,42,45,44,48,39,50)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_unicode_escape_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_unicode_escape_11_0,144)
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
#line 392 "string.opt"
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
#line 14379 "lexer.c"
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
#line 1202 "lexer.m"

    EncodingInt = 0;
;}
#line 14402 "lexer.c"
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
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(lexer__encode_unicode_char_as_utf8_2_0,
		lexer__string_get_unicode_escape_11_0_i18);
MR_def_label(lexer__string_get_unicode_escape_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i5);
	}
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i16);
MR_def_label(lexer__string_get_unicode_escape_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i5);
	}
	if (MR_INT_GT(MR_r1,1114111)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i5);
	}
	if (MR_INT_LT(MR_r1,55296)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i20);
	}
	if (MR_INT_LE(MR_r1,57343)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i5);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,65535)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__string_get_unicode_escape_11_0_i22);
MR_def_label(lexer__string_get_unicode_escape_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i16);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) 2031616 & (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__string_get_unicode_escape_11_0_i23);
MR_def_label(lexer__string_get_unicode_escape_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = ((MR_Integer) 64512 & (MR_Integer) MR_sv(1));
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		lexer__string_get_unicode_escape_11_0_i24);
MR_def_label(lexer__string_get_unicode_escape_11_0,24)
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
		lexer__string_get_unicode_escape_11_0_i25);
MR_def_label(lexer__string_get_unicode_escape_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = ((MR_Integer) 56320 | (MR_Integer) MR_sv(9));
	MR_r1 = (((MR_Integer) 55296 | (MR_Integer) MR_r1) | (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__string_get_unicode_escape_11_0_i26);
MR_def_label(lexer__string_get_unicode_escape_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		lexer__string_get_unicode_escape_11_0_i27);
MR_def_label(lexer__string_get_unicode_escape_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		lexer__string_get_unicode_escape_11_0_i29);
MR_def_label(lexer__string_get_unicode_escape_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		lexer__string_get_unicode_escape_11_0_i30);
MR_def_label(lexer__string_get_unicode_escape_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i31);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i33);
MR_def_label(lexer__string_get_unicode_escape_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_decr_sp_and_return(10);
MR_def_label(lexer__string_get_unicode_escape_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(lexer__string_get_quoted_name_9_0);
MR_def_label(lexer__string_get_unicode_escape_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i36);
MR_def_label(lexer__string_get_unicode_escape_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_decr_sp_and_return(10);
MR_def_label(lexer__string_get_unicode_escape_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(8);
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
	MR_r2 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i39);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_unicode_escape_11_0
	Str = (MR_String) MR_sv(2);
	Index = MR_tempr1;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 14601 "lexer.c"
	MR_r1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr4, 1);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i40);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(9) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i42);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_1_0,
		lexer__string_get_unicode_escape_11_0_i45);
MR_def_label(lexer__string_get_unicode_escape_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i44);
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
	MR_GOTO_LAB(lexer__string_get_unicode_escape_11_0_i144);
	}
MR_def_label(lexer__string_get_unicode_escape_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i48);
MR_def_label(lexer__string_get_unicode_escape_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_decr_sp_and_return(10);
MR_def_label(lexer__string_get_unicode_escape_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_unicode_escape_11_0_i50);
MR_def_label(lexer__string_get_unicode_escape_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module50)
	MR_init_entry1(lexer__string_get_hex_escape_10_0);
	MR_init_label7(lexer__string_get_hex_escape_10_0,35,4,6,9,7,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_hex_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_hex_escape_10_0,35)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 14721 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i6);
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
MR_def_label(lexer__string_get_hex_escape_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		lexer__string_get_hex_escape_10_0_i9);
MR_def_label(lexer__string_get_hex_escape_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i7);
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
	MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i35);
	}
MR_def_label(lexer__string_get_hex_escape_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_hex_escape_10_0_i12);
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
MR_def_label(lexer__string_get_hex_escape_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,6);
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


MR_BEGIN_MODULE(lexer_module51)
	MR_init_entry1(lexer__string_finish_hex_escape_10_0);
	MR_init_label5(lexer__string_finish_hex_escape_10_0,53,8,12,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_finish_hex_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,7);
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(lexer__string_finish_hex_escape_10_0,53)
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
#line 392 "string.opt"
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
#line 14902 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i5);
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
		lexer__string_finish_hex_escape_10_0_i8);
MR_def_label(lexer__string_finish_hex_escape_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i4);
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
#line 14944 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i4);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_finish_hex_escape_10_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_r2 = MR_ctfield(0, MR_sv(5), 0);
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
MR_def_label(lexer__string_finish_hex_escape_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
MR_def_label(lexer__string_finish_hex_escape_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,8);
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module52)
	MR_init_entry1(lexer__string_get_octal_escape_10_0);
	MR_init_label8(lexer__string_get_octal_escape_10_0,37,4,6,9,7,12,15,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_octal_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_octal_escape_10_0,37)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 15027 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i6);
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
MR_def_label(lexer__string_get_octal_escape_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(char__is_octal_digit_1_0,
		lexer__string_get_octal_escape_10_0_i9);
MR_def_label(lexer__string_get_octal_escape_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i7);
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
	MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i37);
	}
MR_def_label(lexer__string_get_octal_escape_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_octal_escape_10_0_i12);
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
MR_def_label(lexer__string_get_octal_escape_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_octal_escape_10_0_i15);
MR_def_label(lexer__string_get_octal_escape_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(lexer__string_finish_octal_escape_10_0);
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


MR_BEGIN_MODULE(lexer_module53)
	MR_init_entry1(lexer__string_finish_octal_escape_10_0);
	MR_init_label5(lexer__string_finish_octal_escape_10_0,53,8,12,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_finish_octal_escape_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,9);
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(lexer__string_finish_octal_escape_10_0,53)
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
#line 392 "string.opt"
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
#line 15220 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i5);
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
		lexer__string_finish_octal_escape_10_0_i8);
MR_def_label(lexer__string_finish_octal_escape_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i4);
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
#line 15262 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i4);
	MR_r4 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_finish_octal_escape_10_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_r2 = MR_ctfield(0, MR_sv(5), 0);
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
MR_def_label(lexer__string_finish_octal_escape_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
MR_def_label(lexer__string_finish_octal_escape_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,10);
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module54)
	MR_init_entry1(lexer__string_start_quoted_name_9_0);
	MR_init_label4(lexer__string_start_quoted_name_9_0,2,5,3,9)
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
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(lexer__string_start_quoted_name_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
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
		MR_GOTO_LAB(lexer__string_start_quoted_name_9_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,11);
MR_def_label(lexer__string_start_quoted_name_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module55)
	MR_init_entry1(lexer__string_get_name_7_0);
	MR_init_label6(lexer__string_get_name_7_0,28,4,9,8,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_name_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_name_7_0,28)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 15405 "lexer.c"
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
		lexer__string_get_name_7_0_i9);
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
		lexer__string_get_name_7_0_i9);
MR_def_label(lexer__string_get_name_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_name_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_name_7_0_i28);
MR_def_label(lexer__string_get_name_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_name_7_0_i12);
MR_def_label(lexer__string_get_name_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15489 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15526 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module56)
	MR_init_entry1(lexer__string_get_variable_7_0);
	MR_init_label6(lexer__string_get_variable_7_0,28,4,9,8,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_variable_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_variable_7_0,28)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 15578 "lexer.c"
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
		lexer__string_get_variable_7_0_i9);
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
		lexer__string_get_variable_7_0_i9);
MR_def_label(lexer__string_get_variable_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_variable_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_variable_7_0_i28);
MR_def_label(lexer__string_get_variable_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_variable_7_0_i12);
MR_def_label(lexer__string_get_variable_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15662 "lexer.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15699 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module57)
	MR_init_entry1(lexer__string_get_char_code_7_0);
	MR_init_label3(lexer__string_get_char_code_7_0,4,6,3)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 15748 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_char_code_7_0_i6);
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
MR_def_label(lexer__string_get_char_code_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__lexer__string_get_char_code_7_0
	Character = MR_r1;
{
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 15798 "lexer.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(lexer__string_get_char_code_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,14);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module58)
	MR_init_entry1(lexer__string_get_binary_2_7_0);
	MR_init_label8(lexer__string_get_binary_2_7_0,44,4,6,45,7,12,14,13)
	MR_init_label3(lexer__string_get_binary_2_7_0,3,19,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_binary_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_binary_2_7_0,44)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 15859 "lexer.c"
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
	MR_sv(3) = MR_tempr5;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i6);
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
MR_def_label(lexer__string_get_binary_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,48)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i45);
	}
	if (MR_INT_NE(MR_r5,49)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i7);
	}
MR_def_label(lexer__string_get_binary_2_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i44);
MR_def_label(lexer__string_get_binary_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_binary_2_7_0_i12);
MR_def_label(lexer__string_get_binary_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15936 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_binary_2_7_0_i14);
MR_def_label(lexer__string_get_binary_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_binary_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 15988 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr4;
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_binary_2_7_0_i19);
MR_def_label(lexer__string_get_binary_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_binary_2_7_0_i18);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(lexer__string_get_binary_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module59)
	MR_init_entry1(lexer__string_get_binary_7_0);
	MR_init_label6(lexer__string_get_binary_7_0,4,6,29,7,12,3)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 16053 "lexer.c"
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
	MR_sv(2) = MR_tempr4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_binary_7_0_i6);
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
MR_def_label(lexer__string_get_binary_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,48)) {
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i29);
	}
	if (MR_INT_NE(MR_r5,49)) {
		MR_GOTO_LAB(lexer__string_get_binary_7_0_i7);
	}
MR_def_label(lexer__string_get_binary_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_binary_2_7_0);
MR_def_label(lexer__string_get_binary_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_binary_7_0_i12);
MR_def_label(lexer__string_get_binary_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,17);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__string_get_binary_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,17);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module60)
	MR_init_entry1(lexer__string_get_octal_2_7_0);
	MR_init_label8(lexer__string_get_octal_2_7_0,44,4,9,8,12,14,13,3)
	MR_init_label2(lexer__string_get_octal_2_7_0,19,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_octal_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_octal_2_7_0,44)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 16162 "lexer.c"
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
		lexer__string_get_octal_2_7_0_i9);
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
		lexer__string_get_octal_2_7_0_i9);
MR_def_label(lexer__string_get_octal_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i44);
MR_def_label(lexer__string_get_octal_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_octal_2_7_0_i12);
MR_def_label(lexer__string_get_octal_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16245 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_octal_2_7_0_i14);
MR_def_label(lexer__string_get_octal_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_octal_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16297 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_octal_2_7_0_i19);
MR_def_label(lexer__string_get_octal_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_2_7_0_i18);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_octal_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module61)
	MR_init_entry1(lexer__string_get_octal_7_0);
	MR_init_label5(lexer__string_get_octal_7_0,4,9,8,12,3)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 16362 "lexer.c"
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
		lexer__string_get_octal_7_0_i9);
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
		lexer__string_get_octal_7_0_i9);
MR_def_label(lexer__string_get_octal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_octal_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_octal_2_7_0);
MR_def_label(lexer__string_get_octal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_octal_7_0_i12);
MR_def_label(lexer__string_get_octal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,18);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_octal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,18);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module62)
	MR_init_entry1(lexer__string_get_hex_2_7_0);
	MR_init_label8(lexer__string_get_hex_2_7_0,44,4,9,8,12,14,13,3)
	MR_init_label2(lexer__string_get_hex_2_7_0,19,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_hex_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_hex_2_7_0,44)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 16478 "lexer.c"
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
		lexer__string_get_hex_2_7_0_i9);
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
		lexer__string_get_hex_2_7_0_i9);
MR_def_label(lexer__string_get_hex_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i44);
MR_def_label(lexer__string_get_hex_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_hex_2_7_0_i12);
MR_def_label(lexer__string_get_hex_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16561 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_hex_2_7_0_i14);
MR_def_label(lexer__string_get_hex_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_hex_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16613 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_hex_2_7_0_i19);
MR_def_label(lexer__string_get_hex_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_2_7_0_i18);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_hex_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module63)
	MR_init_entry1(lexer__string_get_hex_7_0);
	MR_init_label5(lexer__string_get_hex_7_0,4,9,8,12,3)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 16678 "lexer.c"
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
		lexer__string_get_hex_7_0_i9);
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
		lexer__string_get_hex_7_0_i9);
MR_def_label(lexer__string_get_hex_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_hex_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_hex_2_7_0);
MR_def_label(lexer__string_get_hex_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_hex_7_0_i12);
MR_def_label(lexer__string_get_hex_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,19);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_hex_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,19);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module64)
	MR_init_entry1(lexer__string_get_float_exponent_3_7_0);
	MR_init_label8(lexer__string_get_float_exponent_3_7_0,56,4,9,8,12,14,3,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_float_exponent_3_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_float_exponent_3_7_0,56)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 16793 "lexer.c"
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
		lexer__string_get_float_exponent_3_7_0_i9);
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
		lexer__string_get_float_exponent_3_7_0_i9);
MR_def_label(lexer__string_get_float_exponent_3_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i56);
MR_def_label(lexer__string_get_float_exponent_3_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_exponent_3_7_0_i12);
MR_def_label(lexer__string_get_float_exponent_3_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16877 "lexer.c"
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
#line 449 "string.opt"
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
#line 16902 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i14);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_3_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_float_exponent_3_7_0,3)
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
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_3_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 16949 "lexer.c"
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
#line 449 "string.opt"
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
#line 16974 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_3_7_0_i20);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr4;
	MR_decr_sp_and_return(5);
	}
MR_def_label(lexer__string_get_float_exponent_3_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module65)
	MR_init_entry1(lexer__string_get_float_exponent_7_0);
	MR_init_label8(lexer__string_get_float_exponent_7_0,4,6,8,13,15,18,16,21)
	MR_init_label8(lexer__string_get_float_exponent_7_0,12,7,26,25,29,3,33,35)
	MR_init_label1(lexer__string_get_float_exponent_7_0,39)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 17036 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i6);
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
MR_def_label(lexer__string_get_float_exponent_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,43)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i8);
	}
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i7);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(4);
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
	MR_r2 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i12);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_exponent_7_0
	Str = (MR_String) MR_sv(1);
	Index = MR_tempr1;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 17105 "lexer.c"
	MR_r1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr4, 1);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i15);
	}
MR_def_label(lexer__string_get_float_exponent_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_r2 = MR_tempr1;
	}
MR_def_label(lexer__string_get_float_exponent_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_7_0_i18);
MR_def_label(lexer__string_get_float_exponent_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_3_7_0);
MR_def_label(lexer__string_get_float_exponent_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_exponent_7_0_i21);
MR_def_label(lexer__string_get_float_exponent_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_float_exponent_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_float_exponent_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_exponent_7_0_i26);
MR_def_label(lexer__string_get_float_exponent_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_3_7_0);
MR_def_label(lexer__string_get_float_exponent_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_exponent_7_0_i29);
MR_def_label(lexer__string_get_float_exponent_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_float_exponent_7_0_i39);
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
		lexer__string_get_float_exponent_7_0_i33);
MR_def_label(lexer__string_get_float_exponent_7_0,33)
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
#line 449 "string.opt"
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
#line 17233 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_exponent_7_0_i35);
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
		lexer__string_get_float_exponent_7_0_i39);
MR_def_label(lexer__string_get_float_exponent_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_float_exponent_7_0_i39);
MR_def_label(lexer__string_get_float_exponent_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module66)
	MR_init_entry1(lexer__string_get_float_decimals_7_0);
	MR_init_label8(lexer__string_get_float_decimals_7_0,74,4,6,9,7,14,12,17)
	MR_init_label3(lexer__string_get_float_decimals_7_0,19,3,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_float_decimals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_float_decimals_7_0,74)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 17303 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i6);
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
MR_def_label(lexer__string_get_float_decimals_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_float_decimals_7_0_i9);
MR_def_label(lexer__string_get_float_decimals_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i74);
MR_def_label(lexer__string_get_float_decimals_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,69)) {
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
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_float_decimals_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_float_decimals_7_0_i17);
MR_def_label(lexer__string_get_float_decimals_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 17414 "lexer.c"
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
#line 449 "string.opt"
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
#line 17439 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i19);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_float_decimals_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_float_decimals_7_0,3)
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
#define	MR_PROC_LABEL	mercury__lexer__string_get_float_decimals_7_0
	Str = (MR_String) MR_r1;
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 17486 "lexer.c"
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
#line 449 "string.opt"
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
#line 17511 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_float_decimals_7_0_i26);
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr4;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_float_decimals_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module67)
	MR_init_entry1(lexer__string_get_int_dot_7_0);
	MR_init_label8(lexer__string_get_int_dot_7_0,4,9,8,12,13,15,3,19)
	MR_init_label2(lexer__string_get_int_dot_7_0,21,20)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 17572 "lexer.c"
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
		lexer__string_get_int_dot_7_0_i9);
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
		lexer__string_get_int_dot_7_0_i9);
MR_def_label(lexer__string_get_int_dot_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(lexer__string_get_float_decimals_7_0);
MR_def_label(lexer__string_get_int_dot_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_int_dot_7_0_i12);
MR_def_label(lexer__string_get_int_dot_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_int_dot_7_0_i13);
MR_def_label(lexer__string_get_int_dot_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 17662 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_int_dot_7_0_i15);
MR_def_label(lexer__string_get_int_dot_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i20);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_int_dot_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_int_dot_7_0_i19);
MR_def_label(lexer__string_get_int_dot_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 17713 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_int_dot_7_0_i21);
MR_def_label(lexer__string_get_int_dot_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_int_dot_7_0_i20);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(lexer__string_get_int_dot_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module68)
	MR_init_entry1(lexer__string_get_number_7_0);
	MR_init_label8(lexer__string_get_number_7_0,75,4,6,9,7,12,17,15)
	MR_init_label7(lexer__string_get_number_7_0,20,22,21,3,29,28,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_number_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_number_7_0,75)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 17782 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_number_7_0_i6);
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
MR_def_label(lexer__string_get_number_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_number_7_0_i9);
MR_def_label(lexer__string_get_number_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__string_get_number_7_0_i75);
MR_def_label(lexer__string_get_number_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_int_dot_7_0);
MR_def_label(lexer__string_get_number_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
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
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_number_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_number_7_0_i20);
MR_def_label(lexer__string_get_number_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_r1, 2) - (MR_Integer) MR_tempr1);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 17904 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_number_7_0_i22);
MR_def_label(lexer__string_get_number_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_number_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,15);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 17956 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_number_7_0_i29);
MR_def_label(lexer__string_get_number_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_number_7_0_i28);
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
		lexer__string_get_number_7_0_i32);
MR_def_label(lexer__string_get_number_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_number_7_0_i32);
MR_def_label(lexer__string_get_number_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module69)
	MR_init_entry1(lexer__string_get_zero_7_0);
	MR_init_label8(lexer__string_get_zero_7_0,4,6,9,7,12,15,18,21)
	MR_init_label5(lexer__string_get_zero_7_0,24,29,27,32,3)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 18034 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_zero_7_0_i6);
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
MR_def_label(lexer__string_get_zero_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_zero_7_0_i9);
MR_def_label(lexer__string_get_zero_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_number_7_0);
MR_def_label(lexer__string_get_zero_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_char_code_7_0);
MR_def_label(lexer__string_get_zero_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_binary_7_0);
MR_def_label(lexer__string_get_zero_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,111)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_octal_7_0);
MR_def_label(lexer__string_get_zero_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_hex_7_0);
MR_def_label(lexer__string_get_zero_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_int_dot_7_0);
MR_def_label(lexer__string_get_zero_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
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
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(lexer__string_get_zero_7_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_float_exponent_7_0);
MR_def_label(lexer__string_get_zero_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_zero_7_0_i32);
MR_def_label(lexer__string_get_zero_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_decr_sp_and_return(6);
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

MR_decl_entry(char__lower_upper_2_1);
MR_decl_entry(char__lower_upper_2_0);

MR_BEGIN_MODULE(lexer_module70)
	MR_init_entry1(lexer__string_get_token_6_0);
	MR_init_label8(lexer__string_get_token_6_0,4,6,9,7,17,15,13,23)
	MR_init_label8(lexer__string_get_token_6_0,21,26,31,29,36,37,38,39)
	MR_init_label8(lexer__string_get_token_6_0,40,41,42,43,35,34,48,51)
	MR_init_label8(lexer__string_get_token_6_0,56,55,54,59,62,65,69,70)
	MR_init_label8(lexer__string_get_token_6_0,71,72,73,74,75,76,77,78)
	MR_init_label8(lexer__string_get_token_6_0,79,80,81,82,83,84,85,67)
	MR_init_label2(lexer__string_get_token_6_0,3,351)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_token_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r3, 2);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__lexer__string_get_token_6_0
	Str = (MR_String) MR_r1;
	Index = MR_r4;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 18240 "lexer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r4 = MR_ctfield(0, MR_tempr4, 1);
	MR_r7 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_r7 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_sv(4) = MR_tempr4;
	MR_GOTO_LAB(lexer__string_get_token_6_0_i6);
	}
MR_def_label(lexer__string_get_token_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r7;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r6;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r5;
	MR_sv(4) = MR_r3;
	}
MR_def_label(lexer__string_get_token_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__string_get_token_6_0_i9);
MR_def_label(lexer__string_get_token_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_token_2_6_0);
MR_def_label(lexer__string_get_token_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(char__lower_upper_2_1,
		lexer__string_get_token_6_0_i17);
MR_def_label(lexer__string_get_token_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_variable_7_0);
MR_def_label(lexer__string_get_token_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_INT_NE(MR_r1,95)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_variable_7_0);
MR_def_label(lexer__string_get_token_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		lexer__string_get_token_6_0_i23);
MR_def_label(lexer__string_get_token_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_name_7_0);
MR_def_label(lexer__string_get_token_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_zero_7_0);
MR_def_label(lexer__string_get_token_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_token_6_0_i31);
MR_def_label(lexer__string_get_token_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_number_7_0);
MR_def_label(lexer__string_get_token_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_INT_NE(MR_r1,40)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_6_0_i35);
MR_def_label(lexer__string_get_token_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,41)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i37);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_6_0_i35);
MR_def_label(lexer__string_get_token_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,44)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i38);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_6_0_i35);
MR_def_label(lexer__string_get_token_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,59)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i39);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_6_0_i35);
MR_def_label(lexer__string_get_token_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,91)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i40);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_6_0_i35);
MR_def_label(lexer__string_get_token_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,93)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i41);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_6_0_i35);
MR_def_label(lexer__string_get_token_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,123)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i42);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_6_0_i35);
MR_def_label(lexer__string_get_token_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,124)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i43);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 7);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_6_0_i35);
MR_def_label(lexer__string_get_token_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,125)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i34);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 6);
	MR_r3 = MR_sv(5);
MR_def_label(lexer__string_get_token_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i351);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_token_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i48);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_dot_7_0);
MR_def_label(lexer__string_get_token_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i51);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_skip_to_eol_6_0);
MR_def_label(lexer__string_get_token_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i56);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_6_0_i55);
MR_def_label(lexer__string_get_token_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i54);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
MR_def_label(lexer__string_get_token_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_start_quoted_name_9_0);
MR_def_label(lexer__string_get_token_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i59);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_slash_7_0);
MR_def_label(lexer__string_get_token_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i62);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r3;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_source_line_number_7_0);
MR_def_label(lexer__string_get_token_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i65);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_token_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i69);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i70);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i71);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i72);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i73);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i74);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i75);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i76);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i77);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i78);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i79);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i80);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i81);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i82);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i83);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i84);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i85);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__string_get_token_6_0_i67);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_token_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_proceed();
MR_def_label(lexer__string_get_token_6_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module71)
	MR_init_entry1(lexer__string_get_token_2_6_0);
	MR_init_label8(lexer__string_get_token_2_6_0,310,4,6,9,7,17,15,13)
	MR_init_label8(lexer__string_get_token_2_6_0,23,21,26,31,29,36,37,38)
	MR_init_label8(lexer__string_get_token_2_6_0,39,40,41,42,43,35,34,45)
	MR_init_label8(lexer__string_get_token_2_6_0,48,53,52,51,56,59,62,66)
	MR_init_label8(lexer__string_get_token_2_6_0,67,68,69,70,71,72,73,74)
	MR_init_label8(lexer__string_get_token_2_6_0,75,76,77,78,79,80,81,82)
	MR_init_label2(lexer__string_get_token_2_6_0,64,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_token_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_token_2_6_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
	MR_r4 = MR_tempr1;
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 18844 "lexer.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r6 = MR_tempr3;
	MR_r4 = MR_ctfield(0, MR_tempr5, 1);
	MR_r7 = MR_ctfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr2,10)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_r7 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_sv(4) = MR_tempr5;
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i6);
	}
MR_def_label(lexer__string_get_token_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r7;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r6;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r5;
	MR_sv(4) = MR_r3;
	}
MR_def_label(lexer__string_get_token_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		lexer__string_get_token_2_6_0_i9);
MR_def_label(lexer__string_get_token_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i310);
MR_def_label(lexer__string_get_token_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(char__lower_upper_2_1,
		lexer__string_get_token_2_6_0_i17);
MR_def_label(lexer__string_get_token_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_variable_7_0);
MR_def_label(lexer__string_get_token_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_INT_NE(MR_r1,95)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_variable_7_0);
MR_def_label(lexer__string_get_token_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		lexer__string_get_token_2_6_0_i23);
MR_def_label(lexer__string_get_token_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_name_7_0);
MR_def_label(lexer__string_get_token_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_zero_7_0);
MR_def_label(lexer__string_get_token_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_token_2_6_0_i31);
MR_def_label(lexer__string_get_token_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_number_7_0);
MR_def_label(lexer__string_get_token_2_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_INT_NE(MR_r1,40)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i35);
MR_def_label(lexer__string_get_token_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,41)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i37);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i35);
MR_def_label(lexer__string_get_token_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,44)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i38);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i35);
MR_def_label(lexer__string_get_token_2_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,59)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i39);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i35);
MR_def_label(lexer__string_get_token_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,91)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i40);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i35);
MR_def_label(lexer__string_get_token_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,93)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i41);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i35);
MR_def_label(lexer__string_get_token_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,123)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i42);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i35);
MR_def_label(lexer__string_get_token_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,124)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i43);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 7);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i35);
MR_def_label(lexer__string_get_token_2_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,125)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i34);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 6);
	MR_r3 = MR_sv(5);
MR_def_label(lexer__string_get_token_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_token_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_dot_7_0);
MR_def_label(lexer__string_get_token_2_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i48);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_skip_to_eol_6_0);
MR_def_label(lexer__string_get_token_2_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i53);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_GOTO_LAB(lexer__string_get_token_2_6_0_i52);
MR_def_label(lexer__string_get_token_2_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i51);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
MR_def_label(lexer__string_get_token_2_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_start_quoted_name_9_0);
MR_def_label(lexer__string_get_token_2_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i56);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_slash_7_0);
MR_def_label(lexer__string_get_token_2_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i59);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r3;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_source_line_number_7_0);
MR_def_label(lexer__string_get_token_2_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i62);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(lexer__string_get_token_2_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i66);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i67);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i68);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i69);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i70);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i71);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i72);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i73);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i74);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i75);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i76);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i77);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i78);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i79);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i80);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i81);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i82);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(lexer__string_get_token_2_6_0_i64);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_token_2_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_token_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module72)
	MR_init_entry1(lexer__string_skip_to_eol_6_0);
	MR_init_label4(lexer__string_skip_to_eol_6_0,26,4,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_skip_to_eol_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(lexer__string_skip_to_eol_6_0,26)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 19433 "lexer.c"
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
	MR_sv(1) = MR_tempr5;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr2;
	MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i6);
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
MR_def_label(lexer__string_skip_to_eol_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(lexer__string_skip_to_eol_6_0_i26);
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


MR_BEGIN_MODULE(lexer_module73)
	MR_init_entry1(lexer__string_get_slash_7_0);
	MR_init_label7(lexer__string_get_slash_7_0,4,6,7,118,10,31,3)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 19518 "lexer.c"
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
	MR_sv(2) = MR_tempr4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr1;
	MR_GOTO_LAB(lexer__string_get_slash_7_0_i6);
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
MR_def_label(lexer__string_get_slash_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i7);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_comment_7_0);
MR_def_label(lexer__string_get_slash_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r5,33)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,35)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,36)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,38)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,43)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,45)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,46)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,47)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,58)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,60)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,61)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,62)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,63)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,64)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,92)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_EQ(MR_r5,94)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i118);
	}
	if (MR_INT_NE(MR_r5,126)) {
		MR_GOTO_LAB(lexer__string_get_slash_7_0_i10);
	}
MR_def_label(lexer__string_get_slash_7_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_graphic_7_0);
MR_def_label(lexer__string_get_slash_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_ungetchar_3_0,
		lexer__string_get_slash_7_0_i31);
MR_def_label(lexer__string_get_slash_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_decr_sp_and_return(3);
MR_def_label(lexer__string_get_slash_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module74)
	MR_init_entry1(lexer__string_get_comment_7_0);
	MR_init_label4(lexer__string_get_comment_7_0,26,4,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_comment_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_comment_7_0,26)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 19682 "lexer.c"
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
	MR_sv(2) = MR_tempr5;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr2;
	MR_GOTO_LAB(lexer__string_get_comment_7_0_i6);
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
MR_def_label(lexer__string_get_comment_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,42)) {
		MR_GOTO_LAB(lexer__string_get_comment_7_0_i26);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_comment_2_7_0);
MR_def_label(lexer__string_get_comment_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,22);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module75)
	MR_init_entry1(lexer__string_get_comment_2_7_0);
	MR_init_label6(lexer__string_get_comment_2_7_0,34,4,6,7,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_comment_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_comment_2_7_0,34)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 19772 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i6);
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
MR_def_label(lexer__string_get_comment_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i7);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_token_2_6_0);
MR_def_label(lexer__string_get_comment_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,42)) {
		MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i10);
	}
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_GOTO_LAB(lexer__string_get_comment_2_7_0_i34);
MR_def_label(lexer__string_get_comment_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(lexer__string_get_comment_7_0);
MR_def_label(lexer__string_get_comment_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,22);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module76)
	MR_init_entry1(lexer__string_get_source_line_number_7_0);
	MR_init_label8(lexer__string_get_source_line_number_7_0,73,4,6,9,7,15,14,12)
	MR_init_label6(lexer__string_get_source_line_number_7_0,19,21,24,25,3,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(lexer__string_get_source_line_number_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(lexer__string_get_source_line_number_7_0,73)
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
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 19880 "lexer.c"
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
	MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i6);
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
MR_def_label(lexer__string_get_source_line_number_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(char__is_digit_1_0,
		lexer__string_get_source_line_number_7_0_i9);
MR_def_label(lexer__string_get_source_line_number_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i73);
MR_def_label(lexer__string_get_source_line_number_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i12);
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
#line 699 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 19963 "lexer.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		lexer__string_get_source_line_number_7_0_i15);
MR_def_label(lexer__string_get_source_line_number_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i14);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i14);
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
MR_def_label(lexer__string_get_source_line_number_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("invalid line number \140", 21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__string_get_source_line_number_7_0
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
#line 20036 "lexer.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_source_line_number_7_0_i19);
MR_def_label(lexer__string_get_source_line_number_7_0,19)
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
#line 20070 "lexer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i21);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_GOTO_LAB(lexer__string_get_source_line_number_7_0_i25);
MR_def_label(lexer__string_get_source_line_number_7_0,21)
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
		lexer__string_get_source_line_number_7_0_i24);
MR_def_label(lexer__string_get_source_line_number_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("invalid character \140", 19);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_tempr2;
	}
MR_def_label(lexer__string_get_source_line_number_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__string_get_source_line_number_7_0
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
#line 20145 "lexer.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(lexer__string_get_source_line_number_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(lexer__string_get_context_4_0,
		lexer__string_get_source_line_number_7_0_i28);
MR_def_label(lexer__string_get_source_line_number_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,24);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module77)
	MR_init_entry1(lexer__string_get_token_list_max_5_0);
	MR_init_label6(lexer__string_get_token_list_max_5_0,2,3,8,12,5,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__string_get_token_list_max_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(lexer__string_get_token_6_0,
		lexer__string_get_token_list_max_5_0_i2);
MR_def_label(lexer__string_get_token_list_max_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(lexer__string_get_token_list_max_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i8);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r1),9)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i12);
	}
	MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i5);
MR_def_label(lexer__string_get_token_list_max_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(lexer__string_get_token_list_max_5_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i5) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i5) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i5) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i5) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i12) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i12) MR_AND
		MR_LABEL_AP(lexer__string_get_token_list_max_5_0_i5));
MR_def_label(lexer__string_get_token_list_max_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_tempr2 = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(lexer__string_get_token_list_max_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	}
	MR_np_localcall_lab(lexer__string_get_token_list_max_5_0,
		lexer__string_get_token_list_max_5_0_i13);
MR_def_label(lexer__string_get_token_list_max_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lexer_module78)
	MR_init_entry1(lexer__string_get_token_list_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__string_get_token_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__lexer__string_get_token_list_4_0
	Str = (MR_String) MR_r1;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 20287 "lexer.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(lexer__string_get_token_list_max_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(lexer_module79)
	MR_init_entry1(lexer__token_to_string_2_0);
	MR_init_label8(lexer__token_to_string_2_0,4,5,6,7,8,9,10,11)
	MR_init_label8(lexer__token_to_string_2_0,12,13,14,15,16,17,19,66)
	MR_init_label8(lexer__token_to_string_2_0,21,22,23,67,25,26,27,68)
	MR_init_label1(lexer__token_to_string_2_0,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lexer__token_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(lexer__token_to_string_2_0_i4) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i16) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i17) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i19));
MR_def_label(lexer__token_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(lexer__token_to_string_2_0_i5) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i6) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i7) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i8) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i9) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i10) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i11) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i12) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i13) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i14) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i15));
MR_def_label(lexer__token_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140 (\'", 10);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140(\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140)\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140[\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140]\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140{\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140}\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140|\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140,\'", 9);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("token \140. \'", 10);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("end-of-file", 11);
	MR_proceed();
MR_def_label(lexer__token_to_string_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("token \'", 7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
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
#line 20424 "lexer.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(lexer__token_to_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("variable \140", 10);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(lexer__token_to_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(lexer__token_to_string_2_0_i66) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i22) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i23) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i67) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i26) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i27) MR_AND
		MR_LABEL_AP(lexer__token_to_string_2_0_i68));
MR_def_label(lexer__token_to_string_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		lexer__token_to_string_2_0_i21);
MR_def_label(lexer__token_to_string_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("integer \140", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
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
#line 20503 "lexer.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
	}
MR_def_label(lexer__token_to_string_2_0,22)
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
#line 266 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str);
};}
#line 20528 "lexer.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("float \140", 7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
	Strs = MR_tempr1;
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
#line 20571 "lexer.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(lexer__token_to_string_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("string \"", 8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
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
#line 20620 "lexer.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(lexer__token_to_string_2_0,67)
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
#line 20643 "lexer.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		lexer__token_to_string_2_0_i25);
MR_def_label(lexer__token_to_string_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("illegal character <<0x", 22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
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
#line 20694 "lexer.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
	}
MR_def_label(lexer__token_to_string_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("illegal token (", 15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
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
#line 20743 "lexer.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(lexer__token_to_string_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("I/O error: ", 11);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(string__append_3_2);
	}
MR_def_label(lexer__token_to_string_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		lexer__token_to_string_2_0_i30);
MR_def_label(lexer__token_to_string_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("integer \140", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__lexer__token_to_string_2_0
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
#line 20809 "lexer.c"
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


MR_BEGIN_MODULE(lexer_module80)
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


MR_BEGIN_MODULE(lexer_module81)
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


MR_BEGIN_MODULE(lexer_module82)
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


MR_BEGIN_MODULE(lexer_module83)
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


MR_BEGIN_MODULE(lexer_module84)
	MR_init_entry1(__Unify___lexer__token_0_0);
	MR_init_label8(__Unify___lexer__token_0_0,17,18,20,22,23,25,27,29)
	MR_init_label5(__Unify___lexer__token_0_0,31,33,35,67,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lexer__token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i67);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___lexer__token_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i18) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i20) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i22));
MR_def_label(__Unify___lexer__token_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___lexer__token_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Unify___lexer__token_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i27) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i29) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i31) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i33) MR_AND
		MR_LABEL_AP(__Unify___lexer__token_0_0_i35));
MR_def_label(__Unify___lexer__token_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_word_to_float(MR_tempr1) == MR_word_to_float(MR_r1));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___lexer__token_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___lexer__token_0_0,67)
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


MR_BEGIN_MODULE(lexer_module85)
	MR_init_entry1(__Index___lexer__token_0_0);
	MR_init_label8(__Index___lexer__token_0_0,4,5,6,7,8,9,10,11)
	MR_init_label8(__Index___lexer__token_0_0,12,13,14,15,16,17,18,19)
	MR_init_label6(__Index___lexer__token_0_0,20,21,22,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___lexer__token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___lexer__token_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i18));
MR_def_label(__Index___lexer__token_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___lexer__token_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i15));
MR_def_label(__Index___lexer__token_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___lexer__token_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___lexer__token_0_0_i25));
MR_def_label(__Index___lexer__token_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___lexer__token_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(lexer_module86)
	MR_init_entry1(__Compare___lexer__token_0_0);
	MR_init_label8(__Compare___lexer__token_0_0,4,5,6,7,23,25,30,32)
	MR_init_label8(__Compare___lexer__token_0_0,37,38,40,44,46,102,50,52)
	MR_init_label8(__Compare___lexer__token_0_0,57,59,63,65,70,72,77,79)
	MR_init_label2(__Compare___lexer__token_0_0,117,8)
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
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i117);
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
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___lexer__token_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i37));
MR_def_label(__Compare___lexer__token_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 21306 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i102);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 21344 "lexer.c"
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
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i102);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(__Compare___lexer__token_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i44) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i57) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i63) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i70) MR_AND
		MR_LABEL_AP(__Compare___lexer__token_0_0_i77));
MR_def_label(__Compare___lexer__token_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_r4 = MR_ctfield(3, MR_r2, 1);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i102);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_r4 = MR_ctfield(3, MR_r2, 1);
	if ((MR_word_to_float(MR_r4) >= MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r4) <= MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i117);
	}
MR_def_label(__Compare___lexer__token_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 21432 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i102);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_r4 = MR_ctfield(3, MR_r2, 1);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i59);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i102);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 21489 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i65);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i102);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___lexer__token_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 21527 "lexer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i72);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___lexer__token_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i102);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i8);
	}
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_r4 = MR_ctfield(3, MR_r2, 1);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i79);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lexer__token_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r3)) {
		MR_GOTO_LAB(__Compare___lexer__token_0_0_i102);
	}
MR_def_label(__Compare___lexer__token_0_0,117)
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


MR_BEGIN_MODULE(lexer_module87)
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


MR_BEGIN_MODULE(lexer_module88)
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


MR_BEGIN_MODULE(lexer_module89)
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


MR_BEGIN_MODULE(lexer_module90)
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


MR_BEGIN_MODULE(lexer_module91)
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


MR_BEGIN_MODULE(lexer_module92)
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


MR_BEGIN_MODULE(lexer_module93)
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__lexer__init(void);
void mercury__lexer__init_type_tables(void);
void mercury__lexer__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__lexer__write_out_proc_statics(FILE *fp);
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
		mercury_data_lexer__type_ctor_info_offset_0,
		lexer__offset_0_0);
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
		&mercury_data_lexer__type_ctor_info_offset_0);
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

void mercury__lexer__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__lexer__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
