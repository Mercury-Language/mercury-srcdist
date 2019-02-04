/*
** Automatically generated from `pretty_printer.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__pretty_printer__init
REQUIRED_INIT mercury__pretty_printer__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "pretty_printer.c"
#include "pretty_printer.mh"

#line 28 "pretty_printer.c"
#line 534 "io.int"
#include "io.mh"

#line 32 "pretty_printer.c"
#line 542 "io.int"
#include "string.mh"

#line 36 "pretty_printer.c"
#line 149 "array.int"
#include "array.mh"

#line 40 "pretty_printer.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 44 "pretty_printer.c"
#line 28 "time.int2"
#include "time.mh"

#line 48 "pretty_printer.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 52 "pretty_printer.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 56 "pretty_printer.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 60 "pretty_printer.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 64 "pretty_printer.c"
#line 4 "char.opt"
#include "char.mh"

#line 68 "pretty_printer.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 72 "pretty_printer.c"
#line 20 "store.opt"
#include "store.mh"

#line 76 "pretty_printer.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "pretty_printer.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "pretty_printer.c"
#line 4 "int.opt"
#include "int.mh"

#line 88 "pretty_printer.c"
#line 150 "io.opt"
#include "dir.mh"

#line 92 "pretty_printer.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 96 "pretty_printer.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 100 "pretty_printer.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 104 "pretty_printer.c"
#line 105 "pretty_printer.c"
#ifndef PRETTY_PRINTER_DECL_GUARD
#define PRETTY_PRINTER_DECL_GUARD

#line 109 "pretty_printer.c"
#line 887 "pretty_printer.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Unsigned mercury__pretty_printer__mutable_variable_io_formatter_map;
#else
    extern MR_Unsigned mercury__pretty_printer__mutable_variable_io_formatter_map;
#endif

#line 117 "pretty_printer.c"
#line 890 "pretty_printer.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Unsigned mercury__pretty_printer__mutable_variable_io_pp_params;
#else
    extern MR_Unsigned mercury__pretty_printer__mutable_variable_io_pp_params;
#endif

#line 125 "pretty_printer.c"
#line 126 "pretty_printer.c"

#endif
#line 129 "pretty_printer.c"

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
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
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
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_pretty_printer__type_ctor_info_doc_0,
	mercury_data_pretty_printer__type_ctor_info_docs_0,
	mercury_data_pretty_printer__type_ctor_info_formatter_0,
	mercury_data_pretty_printer__type_ctor_info_formatter_map_0,
	mercury_data_pretty_printer__type_ctor_info_formatting_limit_0,
	mercury_data_pretty_printer__type_ctor_info_indents_0,
	mercury_data_pretty_printer__type_ctor_info_pp_internal_0,
	mercury_data_pretty_printer__type_ctor_info_pp_params_0;
MR_decl_label3(pretty_printer__list__foldl__ho24_4_0, 10,3,4)
MR_decl_label3(pretty_printer__list__foldl__ho25_4_0, 10,3,4)
MR_decl_label1(pretty_printer__decrement_limit_2_0, 3)
MR_decl_label8(pretty_printer__expand_docs_11_0, 125,3,9,7,5,31,32,64)
MR_decl_label8(pretty_printer__expand_docs_11_0, 65,12,13,72,15,19,23,27)
MR_decl_label8(pretty_printer__expand_docs_11_0, 28,36,58,47,59,39,41,51)
MR_decl_label4(pretty_printer__expand_docs_11_0, 43,44,56,54)
MR_decl_label8(pretty_printer__expand_docs_11_1, 125,3,9,7,5,31,32,64)
MR_decl_label8(pretty_printer__expand_docs_11_1, 65,12,13,72,15,19,23,27)
MR_decl_label8(pretty_printer__expand_docs_11_1, 28,36,58,47,59,39,41,51)
MR_decl_label4(pretty_printer__expand_docs_11_1, 43,44,56,54)
MR_decl_label7(pretty_printer__expand_format_list_5_0, 60,7,6,5,21,10,33)
MR_decl_label8(pretty_printer__expand_format_op_4_0, 6,8,11,18,5,20,22,24)
MR_decl_label8(pretty_printer__expand_format_op_4_0, 32,4,37,39,41,45,54,55)
MR_decl_label8(pretty_printer__expand_format_op_4_0, 62,67,36,69,71,75,79,85)
MR_decl_label3(pretty_printer__expand_format_op_4_0, 92,93,1)
MR_decl_label6(pretty_printer__expand_format_susp_4_0, 4,3,36,7,10,12)
MR_decl_label8(pretty_printer__expand_format_term_6_0, 4,2,8,7,6,12,10,14)
MR_decl_label3(pretty_printer__expand_format_term_6_0, 33,64,65)
MR_decl_label8(pretty_printer__expand_pp_7_0, 4,3,2,7,8,11,14,16)
MR_decl_label2(pretty_printer__expand_pp_7_0, 6,22)
MR_decl_label8(pretty_printer__expand_pp_7_1, 4,3,2,7,8,11,14,16)
MR_decl_label2(pretty_printer__expand_pp_7_1, 6,22)
MR_decl_label2(pretty_printer__format_nl_8_0, 2,3)
MR_decl_label3(pretty_printer__get_formatter_5_0, 6,8,1)
MR_decl_label7(pretty_printer__initialise_mutable_io_formatter_map_0_0, 3,5,6,7,8,9,10)
MR_decl_label8(pretty_printer__output_current_group_12_0, 67,3,6,4,10,11,8,14)
MR_decl_label2(pretty_printer__output_current_group_12_0, 21,18)
MR_decl_label3(pretty_printer__output_indentation_6_0, 13,4,5)
MR_decl_label1(pretty_printer__set_default_formatter_6_0, 2)
MR_decl_label2(pretty_printer__write_doc_to_stream_9_0, 3,5)
MR_decl_label2(pretty_printer__write_doc_to_stream_9_1, 3,5)
MR_decl_label8(pretty_printer__write_doc_to_stream_17_0, 87,3,5,4,51,25,24,21)
MR_decl_label8(pretty_printer__write_doc_to_stream_17_0, 22,48,49,50,7,8,55,9)
MR_decl_label8(pretty_printer__write_doc_to_stream_17_0, 12,15,18,19,28,42,34,36)
MR_decl_label7(pretty_printer__write_doc_to_stream_17_0, 35,43,38,39,31,41,40)
MR_decl_label8(pretty_printer__write_doc_to_stream_17_1, 87,3,5,4,51,25,24,21)
MR_decl_label8(pretty_printer__write_doc_to_stream_17_1, 22,48,49,50,7,8,55,9)
MR_decl_label8(pretty_printer__write_doc_to_stream_17_1, 12,15,18,19,28,42,34,36)
MR_decl_label7(pretty_printer__write_doc_to_stream_17_1, 35,43,38,39,31,41,40)
MR_decl_label1(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0, 2)
MR_decl_label3(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0, 2,10,1)
MR_decl_label1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__1_2_0, 2)
MR_decl_label1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__2_2_0, 2)
MR_decl_label3(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0, 3,5,2)
MR_decl_label2(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0, 3,2)
MR_decl_label3(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0, 3,5,2)
MR_decl_label2(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0, 3,2)
MR_decl_label1(fn__pretty_printer__add_parens_if_needed_3_0, 2)
MR_decl_label1(fn__pretty_printer__adjust_priority_2_0, 2)
MR_decl_label2(fn__pretty_printer__fmt_array_2_0, 6,2)
MR_decl_label2(fn__pretty_printer__fmt_list_2_0, 6,2)
MR_decl_label2(fn__pretty_printer__fmt_tree234_2_0, 7,2)
MR_decl_label1(fn__pretty_printer__format_1_0, 2)
MR_decl_label1(fn__pretty_printer__format_arg_1_0, 3)
MR_decl_label8(fn__pretty_printer__set_formatter_5_0, 7,10,9,13,15,2,19,21)
MR_decl_label1(fn__pretty_printer__set_formatting_limit_correctly_2_0, 3)
MR_decl_label8(__Unify___pretty_printer__doc_0_0, 102,35,33,5,39,9,11,15)
MR_decl_label5(__Unify___pretty_printer__doc_0_0, 19,23,29,40,1)
MR_decl_label3(__Unify___pretty_printer__formatting_limit_0_0, 12,5,1)
MR_decl_label6(__Unify___pretty_printer__pp_internal_0_0, 16,6,14,10,22,1)
MR_decl_label2(__Unify___pretty_printer__pp_params_0_0, 6,1)
MR_decl_label8(__Compare___pretty_printer__doc_0_0, 276,175,132,105,116,154,170,164)
MR_decl_label8(__Compare___pretty_printer__doc_0_0, 186,165,187,5,17,7,179,22)
MR_decl_label8(__Compare___pretty_printer__doc_0_0, 39,43,25,27,44,56,60,287)
MR_decl_label8(__Compare___pretty_printer__doc_0_0, 61,83,267,87,66,69,70,73)
MR_decl_label3(__Compare___pretty_printer__doc_0_0, 88,137,292)
MR_decl_label7(__Compare___pretty_printer__formatting_limit_0_0, 8,5,32,13,25,14,26)
MR_decl_label8(__Compare___pretty_printer__pp_internal_0_0, 99,47,100,14,52,60,61,19)
MR_decl_label8(__Compare___pretty_printer__pp_internal_0_0, 32,33,22,23,81,93,94,88)
MR_decl_label7(__Compare___pretty_printer__pp_internal_0_0, 121,89,122,66,75,158,72)
MR_decl_label8(__Compare___pretty_printer__pp_params_0_0, 3,2,6,7,9,14,15,17)
MR_decl_label1(__Compare___pretty_printer__pp_params_0_0, 49)
MR_def_extern_entry(fn__pretty_printer__indent_2_0)
MR_def_extern_entry(fn__pretty_printer__indent_1_0)
MR_def_extern_entry(fn__pretty_printer__group_1_0)
MR_def_extern_entry(fn__pretty_printer__format_1_0)
MR_def_extern_entry(fn__pretty_printer__format_arg_1_0)
MR_def_extern_entry(fn__pretty_printer__new_formatter_map_0_0)
MR_def_extern_entry(fn__pretty_printer__set_formatter_5_0)
MR_decl_static(pretty_printer__output_indentation_6_0)
MR_decl_static(pretty_printer__format_nl_8_0)
MR_decl_static(pretty_printer__output_current_group_12_0)
MR_decl_static(pretty_printer__get_formatter_5_0)
MR_decl_static(fn__pretty_printer__add_parens_if_needed_3_0)
MR_decl_static(fn__pretty_printer__adjust_priority_2_0)
MR_decl_static(pretty_printer__expand_format_op_4_0)
MR_decl_static(fn__pretty_printer__set_formatting_limit_correctly_2_0)
MR_decl_static(pretty_printer__decrement_limit_2_0)
MR_decl_static(pretty_printer__expand_format_term_6_0)
MR_decl_static(pretty_printer__expand_pp_7_0)
MR_decl_static(pretty_printer__expand_pp_7_1)
MR_decl_static(pretty_printer__expand_format_list_5_0)
MR_decl_static(pretty_printer__expand_format_susp_4_0)
MR_decl_static(pretty_printer__expand_docs_11_0)
MR_decl_static(pretty_printer__expand_docs_11_1)
MR_def_extern_entry(pretty_printer__write_doc_to_stream_17_0)
MR_def_extern_entry(pretty_printer__write_doc_to_stream_17_1)
MR_def_extern_entry(pretty_printer__write_doc_to_stream_9_0)
MR_def_extern_entry(pretty_printer__write_doc_to_stream_9_1)
MR_def_extern_entry(pretty_printer__lock_io_formatter_map_0_0)
MR_def_extern_entry(pretty_printer__unlock_io_formatter_map_0_0)
MR_def_extern_entry(pretty_printer__unsafe_get_io_formatter_map_1_0)
MR_def_extern_entry(pretty_printer__get_io_formatter_map_3_0)
MR_def_extern_entry(pretty_printer__get_default_formatter_map_3_0)
MR_def_extern_entry(pretty_printer__unsafe_set_io_formatter_map_1_0)
MR_def_extern_entry(pretty_printer__set_io_formatter_map_3_0)
MR_def_extern_entry(pretty_printer__set_default_formatter_map_3_0)
MR_def_extern_entry(pretty_printer__set_default_formatter_6_0)
MR_def_extern_entry(pretty_printer__lock_io_pp_params_0_0)
MR_def_extern_entry(pretty_printer__unlock_io_pp_params_0_0)
MR_def_extern_entry(pretty_printer__unsafe_get_io_pp_params_1_0)
MR_def_extern_entry(pretty_printer__get_io_pp_params_3_0)
MR_def_extern_entry(pretty_printer__get_default_params_3_0)
MR_def_extern_entry(pretty_printer__unsafe_set_io_pp_params_1_0)
MR_def_extern_entry(pretty_printer__set_io_pp_params_3_0)
MR_def_extern_entry(pretty_printer__set_default_params_3_0)
MR_def_extern_entry(pretty_printer__write_doc_4_0)
MR_def_extern_entry(pretty_printer__write_doc_3_0)
MR_decl_static(pretty_printer__pre_initialise_mutable_io_formatter_map_0_0)
MR_decl_static(pretty_printer__initialise_mutable_io_formatter_map_0_0)
MR_decl_static(pretty_printer__pre_initialise_mutable_io_pp_params_0_0)
MR_decl_static(pretty_printer__initialise_mutable_io_pp_params_0_0)
MR_decl_static(fn__pretty_printer__fmt_char_2_0)
MR_decl_static(fn__pretty_printer__fmt_float_2_0)
MR_decl_static(fn__pretty_printer__fmt_int_2_0)
MR_decl_static(fn__pretty_printer__fmt_string_2_0)
MR_decl_static(fn__pretty_printer__fmt_array_2_0)
MR_decl_static(fn__pretty_printer__fmt_list_2_0)
MR_decl_static(fn__pretty_printer__fmt_tree234_2_0)
MR_def_extern_entry(__Unify___pretty_printer__doc_0_0)
MR_def_extern_entry(__Compare___pretty_printer__doc_0_0)
MR_def_extern_entry(__Unify___pretty_printer__docs_0_0)
MR_def_extern_entry(__Compare___pretty_printer__docs_0_0)
MR_def_extern_entry(__Unify___pretty_printer__formatter_0_0)
MR_def_extern_entry(__Compare___pretty_printer__formatter_0_0)
MR_def_extern_entry(__Unify___pretty_printer__formatter_map_0_0)
MR_def_extern_entry(__Compare___pretty_printer__formatter_map_0_0)
MR_def_extern_entry(__Unify___pretty_printer__formatting_limit_0_0)
MR_def_extern_entry(__Compare___pretty_printer__formatting_limit_0_0)
MR_def_extern_entry(__Unify___pretty_printer__indents_0_0)
MR_def_extern_entry(__Compare___pretty_printer__indents_0_0)
MR_def_extern_entry(__Unify___pretty_printer__pp_internal_0_0)
MR_def_extern_entry(__Compare___pretty_printer__pp_internal_0_0)
MR_def_extern_entry(__Unify___pretty_printer__pp_params_0_0)
MR_def_extern_entry(__Compare___pretty_printer__pp_params_0_0)
MR_decl_static(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__1_2_0)
MR_decl_static(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__2_2_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho8_6_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho9_6_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho10_6_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho11_6_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho12_6_0)
MR_decl_static(fn__pretty_printer__list__foldl__ho19_3_0)
MR_decl_static(fn__pretty_printer__list__foldl__ho20_3_0)
MR_decl_static(pretty_printer__list__foldl__ho24_4_0)
MR_decl_static(pretty_printer__list__foldl__ho25_4_0)
MR_decl_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0)
MR_decl_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0)
MR_decl_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0)
MR_decl_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0)
MR_decl_static(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
4,
MR_tbmkword(0, 2)
},
{
4,
MR_TAG_COMMON(1,2,0)
},
{
4,
MR_tbmkword(0, 0)
},
{
4,
MR_tbmkword(0, 1)
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_mercury_op_table_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
static const struct mercury_type_1 mercury_common_1[9] =
{
{
{
MR_TAG_COMMON(3,0,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,3),
MR_tbmkword(0, 0)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__,
MR_CTOR0_ADDR(ops, mercury_op_table)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(type_desc, type_desc)
}
},
{
{
MR_TAG_COMMON(1,2,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,2,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,2,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(type_desc, type_desc)
}
},
{
{
MR_TAG_COMMON(1,2,14),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_2 mercury_common_2[16] =
{
{
MR_string_const("  ", 2)
},
{
MR_string_const("(", 1)
},
{
MR_string_const(")", 1)
},
{
MR_string_const(" ", 1)
},
{
MR_string_const("...", 3)
},
{
MR_string_const("{", 1)
},
{
MR_string_const(", ", 2)
},
{
MR_string_const("}", 1)
},
{
MR_string_const("?array?", 7)
},
{
MR_string_const("?list?", 6)
},
{
MR_string_const("?tree234?", 9)
},
{
MR_string_const("?char?", 6)
},
{
MR_string_const("?float?", 7)
},
{
MR_string_const("?int?", 5)
},
{
MR_string_const("\"", 1)
},
{
MR_string_const("?string?", 8)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
3,
MR_CTOR0_ADDR(univ, univ),
MR_TAG_COMMON(0,1,3),
MR_CTOR0_ADDR(pretty_printer, doc)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,3,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,4,0)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_tbmkword(0, 0)
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,4,2),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,6,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__initialise_mutable_io_formatter_map_0_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_doc_0;
static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__initialise_mutable_io_formatter_map_0_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho8_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho9_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho10_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho11_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho12_6_0_1;
static const struct mercury_type_8 mercury_common_8[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__pretty_printer__initialise_mutable_io_formatter_map_0_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(univ, univ),
MR_COMMON(1,7),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__pretty_printer__initialise_mutable_io_formatter_map_0_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(univ, univ),
MR_COMMON(1,7),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho8_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(univ, univ),
MR_COMMON(1,7),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho9_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(univ, univ),
MR_COMMON(1,7),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho10_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(univ, univ),
MR_COMMON(1,7),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho11_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(univ, univ),
MR_COMMON(1,7),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho12_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(univ, univ),
MR_COMMON(1,7),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
};

static const struct mercury_type_9 mercury_common_9[7] =
{
{
MR_COMMON(8,0),
MR_ENTRY_AP(fn__pretty_printer__fmt_char_2_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(fn__pretty_printer__fmt_float_2_0),
0
},
{
MR_COMMON(8,2),
MR_ENTRY_AP(fn__pretty_printer__fmt_tree234_2_0),
0
},
{
MR_COMMON(8,3),
MR_ENTRY_AP(fn__pretty_printer__fmt_list_2_0),
0
},
{
MR_COMMON(8,4),
MR_ENTRY_AP(fn__pretty_printer__fmt_array_2_0),
0
},
{
MR_COMMON(8,5),
MR_ENTRY_AP(fn__pretty_printer__fmt_string_2_0),
0
},
{
MR_COMMON(8,6),
MR_ENTRY_AP(fn__pretty_printer__fmt_int_2_0),
0
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
100
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
78,
100,
MR_TAG_COMMON(1,10,0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_doc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_doc_0_0 = {
	"str",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_doc_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_doc_0_1 = {
	"nl",
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

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_doc_0_2 = {
	"hard_nl",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_doc_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pretty_printer__type_ctor_info_doc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pretty_printer__type_ctor_info_doc_0
}};

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_doc_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pretty_printer__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_doc_0_3 = {
	"docs",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_doc_0_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_doc_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_doc_0_4 = {
	"format_univ",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	4,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_doc_0_4,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1univ__type_ctor_info_univ_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0
}};

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_doc_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1univ__type_ctor_info_univ_0,
	(MR_PseudoTypeInfo) &mercury_data_pretty_printer__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_doc_0_5 = {
	"format_list",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_doc_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_doc_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_doc_0_6 = {
	"format_term",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	6,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_doc_0_6,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;

static const MR_VA_TypeInfo_Struct1 mercury_data___vti_func_1pretty_printer__type_ctor_info_doc_0 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	1,
{	(MR_TypeInfo) &mercury_data_pretty_printer__type_ctor_info_doc_0
}};

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_doc_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_func_1pretty_printer__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_doc_0_7 = {
	"format_susp",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	7,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_doc_0_7,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_pp_internal_0;

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_doc_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_pretty_printer__type_ctor_info_pp_internal_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_doc_0_8 = {
	"pp_internal",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	8,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_doc_0_8,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_doc_0_0[] = {
	&mercury_data_pretty_printer__du_functor_desc_doc_0_1,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_2

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_doc_0_1[] = {
	&mercury_data_pretty_printer__du_functor_desc_doc_0_0

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_doc_0_2[] = {
	&mercury_data_pretty_printer__du_functor_desc_doc_0_3

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_doc_0_3[] = {
	&mercury_data_pretty_printer__du_functor_desc_doc_0_4,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_5,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_6,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_7,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_8

};

const MR_DuPtagLayout mercury_data_pretty_printer__du_ptag_ordered_doc_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_pretty_printer__du_stag_ordered_doc_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_pretty_printer__du_stag_ordered_doc_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_pretty_printer__du_stag_ordered_doc_0_2 },
	{ 5, MR_SECTAG_REMOTE,
	mercury_data_pretty_printer__du_stag_ordered_doc_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_name_ordered_doc_0[] = {
	&mercury_data_pretty_printer__du_functor_desc_doc_0_3,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_5,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_7,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_6,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_4,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_2,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_1,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_8,
	&mercury_data_pretty_printer__du_functor_desc_doc_0_0
};

const MR_Integer mercury_data_pretty_printer__functor_number_map_doc_0[] = {
	8,
	6,
	5,
	0,
	4,
	1,
	3,
	2,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_doc_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pretty_printer__doc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pretty_printer__doc_0_0)),
	"pretty_printer",
	"doc",
	{ (void *)mercury_data_pretty_printer__du_name_ordered_doc_0 },
	{ (void *)mercury_data_pretty_printer__du_ptag_ordered_doc_0 },
	9,
	4,
	mercury_data_pretty_printer__functor_number_map_doc_0
};

const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_docs_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pretty_printer__docs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pretty_printer__docs_0_0)),
	"pretty_printer",
	"docs",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pretty_printer__type_ctor_info_doc_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_type_desc__type_ctor_info_type_desc_0
}};

static const MR_VA_TypeInfo_Struct3 mercury_data___vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	3,
{	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1type_desc__type_ctor_info_type_desc_0,
	(MR_TypeInfo) &mercury_data_pretty_printer__type_ctor_info_doc_0
}};

const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_formatter_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pretty_printer__formatter_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pretty_printer__formatter_0_0)),
	"pretty_printer",
	"formatter",
	{ 0 },
	{ (void *)&mercury_data___vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data___vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
}};

const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_formatter_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pretty_printer__formatter_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pretty_printer__formatter_map_0_0)),
	"pretty_printer",
	"formatter_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_formatting_limit_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_formatting_limit_0_0 = {
	"linear",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_formatting_limit_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_formatting_limit_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_formatting_limit_0_1 = {
	"triangular",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_formatting_limit_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_formatting_limit_0_0[] = {
	&mercury_data_pretty_printer__du_functor_desc_formatting_limit_0_0

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_formatting_limit_0_1[] = {
	&mercury_data_pretty_printer__du_functor_desc_formatting_limit_0_1

};

const MR_DuPtagLayout mercury_data_pretty_printer__du_ptag_ordered_formatting_limit_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_pretty_printer__du_stag_ordered_formatting_limit_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_pretty_printer__du_stag_ordered_formatting_limit_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_name_ordered_formatting_limit_0[] = {
	&mercury_data_pretty_printer__du_functor_desc_formatting_limit_0_0,
	&mercury_data_pretty_printer__du_functor_desc_formatting_limit_0_1
};

const MR_Integer mercury_data_pretty_printer__functor_number_map_formatting_limit_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_formatting_limit_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pretty_printer__formatting_limit_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pretty_printer__formatting_limit_0_0)),
	"pretty_printer",
	"formatting_limit",
	{ (void *)mercury_data_pretty_printer__du_name_ordered_formatting_limit_0 },
	{ (void *)mercury_data_pretty_printer__du_ptag_ordered_formatting_limit_0 },
	2,
	4,
	mercury_data_pretty_printer__functor_number_map_formatting_limit_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_indents_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pretty_printer__indents_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pretty_printer__indents_0_0)),
	"pretty_printer",
	"indents",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_pp_internal_0_0 = {
	"open_group",
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

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_pp_internal_0_1 = {
	"close_group",
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

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_pp_internal_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_pp_internal_0_2 = {
	"indent",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_pp_internal_0_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_pp_internal_0_3 = {
	"outdent",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_pp_internal_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_pp_internal_0_4 = {
	"set_op_priority",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_pp_internal_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_formatting_limit_0;

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_pp_internal_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_pretty_printer__type_ctor_info_formatting_limit_0
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_pp_internal_0_5 = {
	"set_limit",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_pp_internal_0_5,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_pp_internal_0_0[] = {
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_0,
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_1,
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_3

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_pp_internal_0_1[] = {
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_2

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_pp_internal_0_2[] = {
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_4

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_pp_internal_0_3[] = {
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_5

};

const MR_DuPtagLayout mercury_data_pretty_printer__du_ptag_ordered_pp_internal_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_pretty_printer__du_stag_ordered_pp_internal_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_pretty_printer__du_stag_ordered_pp_internal_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_pretty_printer__du_stag_ordered_pp_internal_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_pretty_printer__du_stag_ordered_pp_internal_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_name_ordered_pp_internal_0[] = {
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_1,
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_2,
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_0,
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_3,
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_5,
	&mercury_data_pretty_printer__du_functor_desc_pp_internal_0_4
};

const MR_Integer mercury_data_pretty_printer__functor_number_map_pp_internal_0[] = {
	2,
	0,
	1,
	3,
	5,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_pp_internal_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pretty_printer__pp_internal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pretty_printer__pp_internal_0_0)),
	"pretty_printer",
	"pp_internal",
	{ (void *)mercury_data_pretty_printer__du_name_ordered_pp_internal_0 },
	{ (void *)mercury_data_pretty_printer__du_ptag_ordered_pp_internal_0 },
	6,
	4,
	mercury_data_pretty_printer__functor_number_map_pp_internal_0
};

const MR_PseudoTypeInfo mercury_data_pretty_printer__field_types_pp_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_pretty_printer__type_ctor_info_formatting_limit_0
};

const MR_ConstString mercury_data_pretty_printer__field_names_pp_params_0_0[] = {
	"pp_line_width",
	"pp_max_lines",
	"pp_limit"
};

static const MR_DuFunctorDesc mercury_data_pretty_printer__du_functor_desc_pp_params_0_0 = {
	"pp_params",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_pretty_printer__field_types_pp_params_0_0,
	mercury_data_pretty_printer__field_names_pp_params_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_stag_ordered_pp_params_0_0[] = {
	&mercury_data_pretty_printer__du_functor_desc_pp_params_0_0

};

const MR_DuPtagLayout mercury_data_pretty_printer__du_ptag_ordered_pp_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_pretty_printer__du_stag_ordered_pp_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_pretty_printer__du_name_ordered_pp_params_0[] = {
	&mercury_data_pretty_printer__du_functor_desc_pp_params_0_0
};

const MR_Integer mercury_data_pretty_printer__functor_number_map_pp_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_pp_params_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pretty_printer__pp_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pretty_printer__pp_params_0_0)),
	"pretty_printer",
	"pp_params",
	{ (void *)mercury_data_pretty_printer__du_name_ordered_pp_params_0 },
	{ (void *)mercury_data_pretty_printer__du_ptag_ordered_pp_params_0 },
	1,
	4,
	mercury_data_pretty_printer__functor_number_map_pp_params_0
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__initialise_mutable_io_formatter_map_0_0_1 = {
{
MR_FUNCTION,
"pretty_printer",
"pretty_printer",
"fmt_char",
3,
0
},
"pretty_printer",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__initialise_mutable_io_formatter_map_0_0_2 = {
{
MR_FUNCTION,
"pretty_printer",
"pretty_printer",
"fmt_float",
3,
0
},
"pretty_printer",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho8_6_0_1 = {
{
MR_FUNCTION,
"pretty_printer",
"pretty_printer",
"fmt_tree234",
3,
0
},
"pretty_printer",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho9_6_0_1 = {
{
MR_FUNCTION,
"pretty_printer",
"pretty_printer",
"fmt_list",
3,
0
},
"pretty_printer",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho10_6_0_1 = {
{
MR_FUNCTION,
"pretty_printer",
"pretty_printer",
"fmt_array",
3,
0
},
"pretty_printer",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho11_6_0_1 = {
{
MR_FUNCTION,
"pretty_printer",
"pretty_printer",
"fmt_string",
3,
0
},
"pretty_printer",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho12_6_0_1 = {
{
MR_FUNCTION,
"pretty_printer",
"pretty_printer",
"fmt_int",
3,
0
},
"pretty_printer",
"",
0,
""
};


MR_BEGIN_MODULE(pretty_printer_module0)
	MR_init_entry1(fn__pretty_printer__indent_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'indent'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pretty_printer__indent_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module1)
	MR_init_entry1(fn__pretty_printer__indent_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'indent'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pretty_printer__indent_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module2)
	MR_init_entry1(fn__pretty_printer__group_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'group'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pretty_printer__group_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_1);

MR_BEGIN_MODULE(pretty_printer_module3)
	MR_init_entry1(fn__pretty_printer__format_1_0);
	MR_init_label1(fn__pretty_printer__format_1_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'format'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pretty_printer__format_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__pretty_printer__format_1_0_i2);
MR_def_label(fn__pretty_printer__format_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(pretty_printer_module4)
	MR_init_entry1(fn__pretty_printer__format_arg_1_0);
	MR_init_label1(fn__pretty_printer__format_arg_1_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'format_arg'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pretty_printer__format_arg_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = (MR_Integer) 9;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pretty_printer__format_arg_1_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__fn__pretty_printer__format_arg_1_0_i3);
MR_def_label(fn__pretty_printer__format_arg_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr3;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module5)
	MR_init_entry1(fn__pretty_printer__new_formatter_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'new_formatter_map'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pretty_printer__new_formatter_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__elem_2_0);
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(pretty_printer_module6)
	MR_init_entry1(fn__pretty_printer__set_formatter_5_0);
	MR_init_label8(fn__pretty_printer__set_formatter_5_0,7,10,9,13,15,2,19,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_formatter'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pretty_printer__set_formatter_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		fn__pretty_printer__set_formatter_5_0_i7);
MR_def_label(fn__pretty_printer__set_formatter_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pretty_printer__set_formatter_5_0_i2);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__map__elem_2_0,
		fn__pretty_printer__set_formatter_5_0_i10);
MR_def_label(fn__pretty_printer__set_formatter_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pretty_printer__set_formatter_5_0_i9);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		fn__pretty_printer__set_formatter_5_0_i13);
MR_def_label(fn__pretty_printer__set_formatter_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		fn__pretty_printer__set_formatter_5_0_i13);
MR_def_label(fn__pretty_printer__set_formatter_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r1;
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		fn__pretty_printer__set_formatter_5_0_i15);
MR_def_label(fn__pretty_printer__set_formatter_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);
	}
MR_def_label(fn__pretty_printer__set_formatter_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		fn__pretty_printer__set_formatter_5_0_i19);
MR_def_label(fn__pretty_printer__set_formatter_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		fn__pretty_printer__set_formatter_5_0_i21);
MR_def_label(fn__pretty_printer__set_formatter_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_3);

MR_BEGIN_MODULE(pretty_printer_module7)
	MR_init_entry1(pretty_printer__output_indentation_6_0);
	MR_init_label3(pretty_printer__output_indentation_6_0,13,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'output_indentation'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__output_indentation_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(pretty_printer__output_indentation_6_0_i13);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(pretty_printer__output_indentation_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_localcall_lab(pretty_printer__output_indentation_6_0,
		pretty_printer__output_indentation_6_0_i4);
MR_def_label(pretty_printer__output_indentation_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__output_indentation_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__pretty_printer__output_indentation_6_0_i5);
MR_def_label(pretty_printer__output_indentation_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__pretty_printer__output_indentation_6_0
	Str = (MR_String) MR_sv(2);
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 1928 "pretty_printer.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_tempr1);
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module8)
	MR_init_entry1(pretty_printer__format_nl_8_0);
	MR_init_label2(pretty_printer__format_nl_8_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'format_nl'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__format_nl_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r5 = MR_r6;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__format_nl_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__pretty_printer__format_nl_8_0_i2);
MR_def_label(pretty_printer__format_nl_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__output_indentation_6_0,
		pretty_printer__format_nl_8_0_i3);
MR_def_label(pretty_printer__format_nl_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module9)
	MR_init_entry1(pretty_printer__output_current_group_12_0);
	MR_init_label8(pretty_printer__output_current_group_12_0,67,3,6,4,10,11,8,14)
	MR_init_label2(pretty_printer__output_current_group_12_0,21,18)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'output_current_group'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__output_current_group_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(pretty_printer__output_current_group_12_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__output_current_group_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r6;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r10 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i4);
	}
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_r9;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__output_current_group_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__pretty_printer__output_current_group_12_0_i6);
MR_def_label(pretty_printer__output_current_group_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__pretty_printer__output_current_group_12_0
	Str = (MR_String) MR_sv(8);
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 2074 "pretty_printer.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_r7 = ((MR_Integer) MR_sv(5) - (MR_Integer) MR_tempr1);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i67);
	}
MR_def_label(pretty_printer__output_current_group_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,1)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(9) = MR_r1;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_np_call_localret_ent(pretty_printer__format_nl_8_0,
		pretty_printer__output_current_group_12_0_i10);
MR_def_label(pretty_printer__output_current_group_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__output_current_group_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i67);
	}
MR_def_label(pretty_printer__output_current_group_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r10,3,4)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r10, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i14);
	}
	MR_r5 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i67);
	}
MR_def_label(pretty_printer__output_current_group_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r10,3,4)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r10, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i18);
	}
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i21);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__output_current_group_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = ((MR_Integer) MR_r5 - (MR_Integer) 1);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i67);
MR_def_label(pretty_printer__output_current_group_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i67);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__search_3_0);
MR_decl_entry(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(pretty_printer_module10)
	MR_init_entry1(pretty_printer__get_formatter_5_0);
	MR_init_label3(pretty_printer__get_formatter_5_0,6,8,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_formatter'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__get_formatter_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		pretty_printer__get_formatter_5_0_i6);
MR_def_label(pretty_printer__get_formatter_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__get_formatter_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		pretty_printer__get_formatter_5_0_i8);
MR_def_label(pretty_printer__get_formatter_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__get_formatter_5_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_def_label(pretty_printer__get_formatter_5_0,1)
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


MR_BEGIN_MODULE(pretty_printer_module11)
	MR_init_entry1(fn__pretty_printer__add_parens_if_needed_3_0);
	MR_init_label1(fn__pretty_printer__add_parens_if_needed_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'add_parens_if_needed'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__add_parens_if_needed_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__pretty_printer__add_parens_if_needed_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__pretty_printer__add_parens_if_needed_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module12)
	MR_init_entry1(fn__pretty_printer__adjust_priority_2_0);
	MR_init_label1(fn__pretty_printer__adjust_priority_2_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'adjust_priority'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__adjust_priority_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__pretty_printer__adjust_priority_2_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
MR_def_label(fn__pretty_printer__adjust_priority_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ops__init_mercury_op_table_0_0);
MR_decl_entry(ops__lookup_prefix_op_4_0);
MR_decl_entry(ops__lookup_postfix_op_4_0);
MR_decl_entry(ops__lookup_infix_op_5_0);
MR_decl_entry(ops__lookup_binary_prefix_op_5_0);

MR_BEGIN_MODULE(pretty_printer_module13)
	MR_init_entry1(pretty_printer__expand_format_op_4_0);
	MR_init_label8(pretty_printer__expand_format_op_4_0,6,8,11,18,5,20,22,24)
	MR_init_label8(pretty_printer__expand_format_op_4_0,32,4,37,39,41,45,54,55)
	MR_init_label8(pretty_printer__expand_format_op_4_0,62,67,36,69,71,75,79,85)
	MR_init_label3(pretty_printer__expand_format_op_4_0,92,93,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_format_op'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__expand_format_op_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i4);
	}
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(fn__ops__init_mercury_op_table_0_0,
		pretty_printer__expand_format_op_4_0_i6);
MR_def_label(pretty_printer__expand_format_op_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ops__lookup_prefix_op_4_0,
		pretty_printer__expand_format_op_4_0_i8);
MR_def_label(pretty_printer__expand_format_op_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i5);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__pretty_printer__adjust_priority_2_0,
		pretty_printer__expand_format_op_4_0_i11);
MR_def_label(pretty_printer__expand_format_op_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__group_1_0,
		pretty_printer__expand_format_op_4_0_i18);
MR_def_label(pretty_printer__expand_format_op_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__add_parens_if_needed_3_0,
		pretty_printer__expand_format_op_4_0_i93);
MR_def_label(pretty_printer__expand_format_op_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ops__init_mercury_op_table_0_0,
		pretty_printer__expand_format_op_4_0_i20);
MR_def_label(pretty_printer__expand_format_op_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ops__lookup_postfix_op_4_0,
		pretty_printer__expand_format_op_4_0_i22);
MR_def_label(pretty_printer__expand_format_op_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__pretty_printer__adjust_priority_2_0,
		pretty_printer__expand_format_op_4_0_i24);
MR_def_label(pretty_printer__expand_format_op_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__pretty_printer__group_1_0,
		pretty_printer__expand_format_op_4_0_i32);
MR_def_label(pretty_printer__expand_format_op_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__add_parens_if_needed_3_0,
		pretty_printer__expand_format_op_4_0_i93);
MR_def_label(pretty_printer__expand_format_op_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i1);
	}
	MR_sv(6) = MR_ctfield(1, MR_r2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(fn__ops__init_mercury_op_table_0_0,
		pretty_printer__expand_format_op_4_0_i37);
MR_def_label(pretty_printer__expand_format_op_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ops__lookup_infix_op_5_0,
		pretty_printer__expand_format_op_4_0_i39);
MR_def_label(pretty_printer__expand_format_op_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__pretty_printer__adjust_priority_2_0,
		pretty_printer__expand_format_op_4_0_i41);
MR_def_label(pretty_printer__expand_format_op_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(6);
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i45);
	}
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i54);
	}
MR_def_label(pretty_printer__expand_format_op_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_sv(6), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(6), 0) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r3;
	}
MR_def_label(pretty_printer__expand_format_op_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__pretty_printer__adjust_priority_2_0,
		pretty_printer__expand_format_op_4_0_i55);
MR_def_label(pretty_printer__expand_format_op_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__indent_1_0,
		pretty_printer__expand_format_op_4_0_i62);
MR_def_label(pretty_printer__expand_format_op_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__group_1_0,
		pretty_printer__expand_format_op_4_0_i67);
MR_def_label(pretty_printer__expand_format_op_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__add_parens_if_needed_3_0,
		pretty_printer__expand_format_op_4_0_i93);
MR_def_label(pretty_printer__expand_format_op_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ops__init_mercury_op_table_0_0,
		pretty_printer__expand_format_op_4_0_i69);
MR_def_label(pretty_printer__expand_format_op_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ops__lookup_binary_prefix_op_5_0,
		pretty_printer__expand_format_op_4_0_i71);
MR_def_label(pretty_printer__expand_format_op_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_tempr2 = MR_r2;
	MR_sv(7) = MR_tempr2;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__pretty_printer__adjust_priority_2_0,
		pretty_printer__expand_format_op_4_0_i75);
MR_def_label(pretty_printer__expand_format_op_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__pretty_printer__adjust_priority_2_0,
		pretty_printer__expand_format_op_4_0_i79);
MR_def_label(pretty_printer__expand_format_op_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__pretty_printer__indent_1_0,
		pretty_printer__expand_format_op_4_0_i85);
MR_def_label(pretty_printer__expand_format_op_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(4);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__group_1_0,
		pretty_printer__expand_format_op_4_0_i92);
MR_def_label(pretty_printer__expand_format_op_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__add_parens_if_needed_3_0,
		pretty_printer__expand_format_op_4_0_i93);
MR_def_label(pretty_printer__expand_format_op_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(pretty_printer__expand_format_op_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module14)
	MR_init_entry1(fn__pretty_printer__set_formatting_limit_correctly_2_0);
	MR_init_label1(fn__pretty_printer__set_formatting_limit_correctly_2_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_formatting_limit_correctly'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__set_formatting_limit_correctly_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__pretty_printer__set_formatting_limit_correctly_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__pretty_printer__set_formatting_limit_correctly_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module15)
	MR_init_entry1(pretty_printer__decrement_limit_2_0);
	MR_init_label1(pretty_printer__decrement_limit_2_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'decrement_limit'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__decrement_limit_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(pretty_printer__decrement_limit_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(0, MR_r1, 0) - (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(pretty_printer__decrement_limit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(1, MR_r1, 0) - (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term_io__quoted_atom_agt_2_0);

MR_BEGIN_MODULE(pretty_printer_module16)
	MR_init_entry1(pretty_printer__expand_format_term_6_0);
	MR_init_label8(pretty_printer__expand_format_term_6_0,4,2,8,7,6,12,10,14)
	MR_init_label3(pretty_printer__expand_format_term_6_0,33,64,65)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_format_term'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__expand_format_term_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i2);
	}
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__term_io__quoted_atom_agt_2_0,
		pretty_printer__expand_format_term_6_0_i4);
MR_def_label(pretty_printer__expand_format_term_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(pretty_printer__decrement_limit_2_0,
		pretty_printer__expand_format_term_6_0_i64);
MR_def_label(pretty_printer__expand_format_term_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_GT(MR_r5,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r4;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i7);
	}
MR_def_label(pretty_printer__expand_format_term_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_INT_GT(MR_tempr1,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r1 = MR_tempr3;
	}
MR_def_label(pretty_printer__expand_format_term_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_np_call_localret_ent(pretty_printer__decrement_limit_2_0,
		pretty_printer__expand_format_term_6_0_i64);
MR_def_label(pretty_printer__expand_format_term_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(pretty_printer__expand_format_op_4_0,
		pretty_printer__expand_format_term_6_0_i12);
MR_def_label(pretty_printer__expand_format_term_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(pretty_printer__decrement_limit_2_0,
		pretty_printer__expand_format_term_6_0_i64);
MR_def_label(pretty_printer__expand_format_term_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(1,2,6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(1), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(1), 0) = MR_tempr2;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(pretty_printer__decrement_limit_2_0,
		pretty_printer__expand_format_term_6_0_i64);
MR_def_label(pretty_printer__expand_format_term_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__term_io__quoted_atom_agt_2_0,
		pretty_printer__expand_format_term_6_0_i33);
MR_def_label(pretty_printer__expand_format_term_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_TAG_COMMON(1,2,6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(1), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(1), 0) = MR_tempr2;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(pretty_printer__decrement_limit_2_0,
		pretty_printer__expand_format_term_6_0_i64);
MR_def_label(pretty_printer__expand_format_term_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__set_formatting_limit_correctly_2_0,
		pretty_printer__expand_format_term_6_0_i65);
MR_def_label(pretty_printer__expand_format_term_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);
MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(deconstruct__deconstruct_5_1);

MR_BEGIN_MODULE(pretty_printer_module17)
	MR_init_entry1(pretty_printer__expand_pp_7_0);
	MR_init_label8(pretty_printer__expand_pp_7_0,4,3,2,7,8,11,14,16)
	MR_init_label2(pretty_printer__expand_pp_7_0,6,22)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_pp'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__expand_pp_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_GT(MR_r6,0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i3);
	}
MR_def_label(pretty_printer__expand_pp_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_GT(MR_r6,0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_tempr1;
	}
MR_def_label(pretty_printer__expand_pp_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_decr_sp_and_return(9);
MR_def_label(pretty_printer__expand_pp_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pretty_printer__expand_pp_7_0
	TypeInfo_for_T = MR_tempr1;
{
#line 47 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 3136 "pretty_printer.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__pretty_printer__expand_pp_7_0
	TypeDesc = MR_tempr1;
{
#line 67 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 3160 "pretty_printer.c"
	MR_tempr1 = TypeCtorDesc;
	MR_tempr2 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__pretty_printer__expand_pp_7_0
	TypeCtorDesc = MR_tempr1;
{
#line 133 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 3203 "pretty_printer.c"
	MR_tempr3 = (MR_Word) TypeCtorModuleName;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__pretty_printer__expand_pp_7_0
	TypeCtorDesc = MR_tempr1;
{
#line 133 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 3245 "pretty_printer.c"
	MR_tempr4 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_tempr4;
	MR_sv(8) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		pretty_printer__expand_pp_7_0_i7);
MR_def_label(pretty_printer__expand_pp_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__get_formatter_5_0,
		pretty_printer__expand_pp_7_0_i8);
MR_def_label(pretty_printer__expand_pp_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i11);
	}
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = ((MR_Integer) MR_ctfield(0, MR_sv(8), 0) - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_pp_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pretty_printer__expand_pp_7_0_i14);
MR_def_label(pretty_printer__expand_pp_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = ((MR_Integer) MR_ctfield(1, MR_sv(8), 0) - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_pp_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pretty_printer__expand_pp_7_0_i14);
MR_def_label(pretty_printer__expand_pp_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i16);
	}
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(pretty_printer__expand_pp_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tempr4 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_decr_sp_and_return(9);
	}
MR_def_label(pretty_printer__expand_pp_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		pretty_printer__expand_pp_7_0_i22);
MR_def_label(pretty_printer__expand_pp_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(pretty_printer__expand_format_term_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__deconstruct_5_2);

MR_BEGIN_MODULE(pretty_printer_module18)
	MR_init_entry1(pretty_printer__expand_pp_7_1);
	MR_init_label8(pretty_printer__expand_pp_7_1,4,3,2,7,8,11,14,16)
	MR_init_label2(pretty_printer__expand_pp_7_1,6,22)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_pp'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__expand_pp_7_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_GT(MR_r6,0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i3);
	}
MR_def_label(pretty_printer__expand_pp_7_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_GT(MR_r6,0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_tempr1;
	}
MR_def_label(pretty_printer__expand_pp_7_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_decr_sp_and_return(9);
MR_def_label(pretty_printer__expand_pp_7_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pretty_printer__expand_pp_7_1
	TypeInfo_for_T = MR_tempr1;
{
#line 47 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 3445 "pretty_printer.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__pretty_printer__expand_pp_7_1
	TypeDesc = MR_tempr1;
{
#line 67 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 3469 "pretty_printer.c"
	MR_tempr1 = TypeCtorDesc;
	MR_tempr2 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__pretty_printer__expand_pp_7_1
	TypeCtorDesc = MR_tempr1;
{
#line 133 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 3512 "pretty_printer.c"
	MR_tempr3 = (MR_Word) TypeCtorModuleName;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__pretty_printer__expand_pp_7_1
	TypeCtorDesc = MR_tempr1;
{
#line 133 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 3554 "pretty_printer.c"
	MR_tempr4 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_tempr4;
	MR_sv(8) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		pretty_printer__expand_pp_7_1_i7);
MR_def_label(pretty_printer__expand_pp_7_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__get_formatter_5_0,
		pretty_printer__expand_pp_7_1_i8);
MR_def_label(pretty_printer__expand_pp_7_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i11);
	}
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = ((MR_Integer) MR_ctfield(0, MR_sv(8), 0) - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_pp_7_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pretty_printer__expand_pp_7_1_i14);
MR_def_label(pretty_printer__expand_pp_7_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = ((MR_Integer) MR_ctfield(1, MR_sv(8), 0) - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_pp_7_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pretty_printer__expand_pp_7_1_i14);
MR_def_label(pretty_printer__expand_pp_7_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i16);
	}
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(pretty_printer__expand_pp_7_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tempr4 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_decr_sp_and_return(9);
	}
MR_def_label(pretty_printer__expand_pp_7_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		pretty_printer__expand_pp_7_1_i22);
MR_def_label(pretty_printer__expand_pp_7_1,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(pretty_printer__expand_format_term_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module19)
	MR_init_entry1(pretty_printer__expand_format_list_5_0);
	MR_init_label7(pretty_printer__expand_format_list_5_0,60,7,6,5,21,10,33)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_format_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__expand_format_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i60);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(pretty_printer__expand_format_list_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i7);
	}
	MR_tempr2 = MR_r3;
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_GT(MR_r5,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r1 = MR_r4;
	MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i6);
	}
MR_def_label(pretty_printer__expand_format_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_INT_GT(MR_tempr1,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr2 = MR_r4;
	}
MR_def_label(pretty_printer__expand_format_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_decr_sp_and_return(4);
MR_def_label(pretty_printer__expand_format_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr2;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(fn__pretty_printer__format_arg_1_0,
		pretty_printer__expand_format_list_5_0_i21);
MR_def_label(pretty_printer__expand_format_list_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(pretty_printer__expand_format_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr4 = MR_r2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr3;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(fn__pretty_printer__format_arg_1_0,
		pretty_printer__expand_format_list_5_0_i33);
MR_def_label(pretty_printer__expand_format_list_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr3;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_0);

MR_BEGIN_MODULE(pretty_printer_module20)
	MR_init_entry1(pretty_printer__expand_format_susp_4_0);
	MR_init_label6(pretty_printer__expand_format_susp_4_0,4,3,36,7,10,12)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_format_susp'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__expand_format_susp_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_susp_4_0_i4);
	}
	MR_r3 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_GT(MR_r3,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_susp_4_0_i36);
	}
	MR_GOTO_LAB(pretty_printer__expand_format_susp_4_0_i3);
MR_def_label(pretty_printer__expand_format_susp_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_GT(MR_tempr1,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_susp_4_0_i36);
	}
	}
MR_def_label(pretty_printer__expand_format_susp_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_proceed();
MR_def_label(pretty_printer__expand_format_susp_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_susp_4_0_i7);
	}
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = ((MR_Integer) MR_ctfield(0, MR_r2, 0) - (MR_Integer) 1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_format_susp_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__pretty_printer__expand_format_susp_4_0_i10);
MR_def_label(pretty_printer__expand_format_susp_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = ((MR_Integer) MR_ctfield(1, MR_r2, 0) - (MR_Integer) 1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_format_susp_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__pretty_printer__expand_format_susp_4_0_i10);
MR_def_label(pretty_printer__expand_format_susp_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_susp_4_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(pretty_printer__expand_format_susp_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tempr4 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__length_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(pretty_printer_module21)
	MR_init_entry1(pretty_printer__expand_docs_11_0);
	MR_init_label8(pretty_printer__expand_docs_11_0,125,3,9,7,5,31,32,64)
	MR_init_label8(pretty_printer__expand_docs_11_0,65,12,13,72,15,19,23,27)
	MR_init_label8(pretty_printer__expand_docs_11_0,28,36,58,47,59,39,41,51)
	MR_init_label4(pretty_printer__expand_docs_11_0,43,44,56,54)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_docs'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__expand_docs_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(pretty_printer__expand_docs_11_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__expand_docs_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i7);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__expand_docs_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__expand_docs_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r7,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__expand_docs_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(8)),
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i31) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i64) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i12) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i72));
MR_def_label(pretty_printer__expand_docs_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i32);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__expand_docs_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i41);
MR_def_label(pretty_printer__expand_docs_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_ctfield(1, MR_sv(8), 0);
	MR_np_call_localret_ent(fn__string__length_1_0,
		pretty_printer__expand_docs_11_0_i65);
MR_def_label(pretty_printer__expand_docs_11_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = ((MR_Integer) MR_sv(7) - (MR_Integer) MR_tempr1);
	}
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i44);
MR_def_label(pretty_printer__expand_docs_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_ctfield(2, MR_sv(8), 0);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		pretty_printer__expand_docs_11_0_i13);
MR_def_label(pretty_printer__expand_docs_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i125);
	}
MR_def_label(pretty_printer__expand_docs_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(8), 0),
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i27) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i15) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i23) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i19) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i36));
MR_def_label(pretty_printer__expand_docs_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_list_5_0,
		pretty_printer__expand_docs_11_0_i28);
MR_def_label(pretty_printer__expand_docs_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_ctfield(3, MR_sv(8), 1);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(pretty_printer__expand_format_susp_4_0,
		pretty_printer__expand_docs_11_0_i28);
MR_def_label(pretty_printer__expand_docs_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_tempr2 = MR_sv(8);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_term_6_0,
		pretty_printer__expand_docs_11_0_i28);
MR_def_label(pretty_printer__expand_docs_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_r3 = MR_ctfield(3, MR_sv(8), 1);
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_pp_7_0,
		pretty_printer__expand_docs_11_0_i28);
MR_def_label(pretty_printer__expand_docs_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i125);
	}
MR_def_label(pretty_printer__expand_docs_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_ctfield(3, MR_sv(8), 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r8),
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i58) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i43) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i56) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_0_i54));
MR_def_label(pretty_printer__expand_docs_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_unmkbody(MR_r8);
	if (MR_INT_NE(MR_r10,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i59);
	}
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i47);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i44);
MR_def_label(pretty_printer__expand_docs_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 0);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i44);
MR_def_label(pretty_printer__expand_docs_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r10,1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i51);
	}
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i39);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i41);
MR_def_label(pretty_printer__expand_docs_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 0);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i41);
MR_def_label(pretty_printer__expand_docs_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__expand_docs_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i44);
MR_def_label(pretty_printer__expand_docs_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i44);
MR_def_label(pretty_printer__expand_docs_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__expand_docs_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r6 = MR_ctfield(2, MR_r8, 0);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i125);
MR_def_label(pretty_printer__expand_docs_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r5 = MR_ctfield(3, MR_r8, 0);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i125);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module22)
	MR_init_entry1(pretty_printer__expand_docs_11_1);
	MR_init_label8(pretty_printer__expand_docs_11_1,125,3,9,7,5,31,32,64)
	MR_init_label8(pretty_printer__expand_docs_11_1,65,12,13,72,15,19,23,27)
	MR_init_label8(pretty_printer__expand_docs_11_1,28,36,58,47,59,39,41,51)
	MR_init_label4(pretty_printer__expand_docs_11_1,43,44,56,54)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_docs'/11 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__expand_docs_11_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(pretty_printer__expand_docs_11_1,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__expand_docs_11_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i7);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__expand_docs_11_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__expand_docs_11_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r7,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__expand_docs_11_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(8)),
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i31) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i64) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i12) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i72));
MR_def_label(pretty_printer__expand_docs_11_1,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i32);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__expand_docs_11_1,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i41);
MR_def_label(pretty_printer__expand_docs_11_1,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_ctfield(1, MR_sv(8), 0);
	MR_np_call_localret_ent(fn__string__length_1_0,
		pretty_printer__expand_docs_11_1_i65);
MR_def_label(pretty_printer__expand_docs_11_1,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = ((MR_Integer) MR_sv(7) - (MR_Integer) MR_tempr1);
	}
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i44);
MR_def_label(pretty_printer__expand_docs_11_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_ctfield(2, MR_sv(8), 0);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		pretty_printer__expand_docs_11_1_i13);
MR_def_label(pretty_printer__expand_docs_11_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i125);
	}
MR_def_label(pretty_printer__expand_docs_11_1,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(8), 0),
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i27) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i15) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i23) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i19) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i36));
MR_def_label(pretty_printer__expand_docs_11_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_list_5_0,
		pretty_printer__expand_docs_11_1_i28);
MR_def_label(pretty_printer__expand_docs_11_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_ctfield(3, MR_sv(8), 1);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(pretty_printer__expand_format_susp_4_0,
		pretty_printer__expand_docs_11_1_i28);
MR_def_label(pretty_printer__expand_docs_11_1,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_tempr2 = MR_sv(8);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_term_6_0,
		pretty_printer__expand_docs_11_1_i28);
MR_def_label(pretty_printer__expand_docs_11_1,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_r3 = MR_ctfield(3, MR_sv(8), 1);
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_pp_7_1,
		pretty_printer__expand_docs_11_1_i28);
MR_def_label(pretty_printer__expand_docs_11_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i125);
	}
MR_def_label(pretty_printer__expand_docs_11_1,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_ctfield(3, MR_sv(8), 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r8),
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i58) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i43) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i56) MR_AND
		MR_LABEL_AP(pretty_printer__expand_docs_11_1_i54));
MR_def_label(pretty_printer__expand_docs_11_1,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_unmkbody(MR_r8);
	if (MR_INT_NE(MR_r10,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i59);
	}
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i47);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i44);
MR_def_label(pretty_printer__expand_docs_11_1,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 0);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i44);
MR_def_label(pretty_printer__expand_docs_11_1,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r10,1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i51);
	}
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i39);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i41);
MR_def_label(pretty_printer__expand_docs_11_1,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 0);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i41);
MR_def_label(pretty_printer__expand_docs_11_1,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__expand_docs_11_1,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i44);
MR_def_label(pretty_printer__expand_docs_11_1,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i44);
MR_def_label(pretty_printer__expand_docs_11_1,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__expand_docs_11_1,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r6 = MR_ctfield(2, MR_r8, 0);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i125);
MR_def_label(pretty_printer__expand_docs_11_1,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r5 = MR_ctfield(3, MR_r8, 0);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i125);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stream__put_4_0);
MR_decl_entry(fn__list__det_tail_1_0);

MR_BEGIN_MODULE(pretty_printer_module23)
	MR_init_entry1(pretty_printer__write_doc_to_stream_17_0);
	MR_init_label8(pretty_printer__write_doc_to_stream_17_0,87,3,5,4,51,25,24,21)
	MR_init_label8(pretty_printer__write_doc_to_stream_17_0,22,48,49,50,7,8,55,9)
	MR_init_label8(pretty_printer__write_doc_to_stream_17_0,12,15,18,19,28,42,34,36)
	MR_init_label7(pretty_printer__write_doc_to_stream_17_0,35,43,38,39,31,41,40)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'write_doc_to_stream'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__write_doc_to_stream_17_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(pretty_printer__write_doc_to_stream_17_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_decr_sp_and_return(13);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 1);
	MR_r13 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_GT(MR_r9,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i4);
	}
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_r3 = (MR_Word) MR_string_const("...", 3);
	MR_r4 = MR_r12;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		pretty_printer__write_doc_to_stream_17_0_i5);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r13),
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i51) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i48) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i7) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i55));
MR_def_label(pretty_printer__write_doc_to_stream_17_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r13),0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i21);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__pretty_printer__list__foldl__ho20_3_0,
		pretty_printer__write_doc_to_stream_17_0_i25);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = ((MR_Integer) MR_tempr2 - (MR_Integer) MR_r1);
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i24);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(pretty_printer__format_nl_8_0,
		pretty_printer__write_doc_to_stream_17_0_i22);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(6) = MR_tempr2;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(12) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r9;
	MR_r6 = MR_r12;
	}
	MR_np_call_localret_ent(pretty_printer__format_nl_8_0,
		pretty_printer__write_doc_to_stream_17_0_i22);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_r1;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_tempr2;
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_ctfield(1, MR_r13, 0);
	MR_sv(12) = MR_r1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_r12;
	MR_np_call_localret_ent(stream__put_4_0,
		pretty_printer__write_doc_to_stream_17_0_i49);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__length_1_0,
		pretty_printer__write_doc_to_stream_17_0_i50);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = ((MR_Integer) MR_sv(5) - (MR_Integer) MR_r1);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_ctfield(2, MR_r13, 0);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		pretty_printer__write_doc_to_stream_17_0_i8);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r13, 0),
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i18) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i9) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i15) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i12) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i28));
MR_def_label(pretty_printer__write_doc_to_stream_17_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r13;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r10;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_list_5_0,
		pretty_printer__write_doc_to_stream_17_0_i19);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r13, 1);
	MR_r2 = MR_r10;
	MR_np_call_localret_ent(pretty_printer__expand_format_susp_4_0,
		pretty_printer__write_doc_to_stream_17_0_i19);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r11;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_tempr2 = MR_r13;
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r3 = MR_r10;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_term_6_0,
		pretty_printer__write_doc_to_stream_17_0_i19);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_tempr3 = MR_r11;
	MR_sv(9) = MR_tempr3;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(3, MR_r13, 1);
	MR_r4 = MR_r10;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(pretty_printer__expand_pp_7_0,
		pretty_printer__write_doc_to_stream_17_0_i19);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tempr2;
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(3, MR_r13, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i42) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i31) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i41) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_0_i40));
MR_def_label(pretty_printer__write_doc_to_stream_17_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r14 = MR_unmkbody(MR_r6);
	if (MR_INT_NE(MR_r14,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i43);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(10) = MR_r12;
	MR_sv(8) = (MR_Integer) 1;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	}
	MR_np_call_localret_ent(pretty_printer__expand_docs_11_0,
		pretty_printer__write_doc_to_stream_17_0_i34);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r3;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_sv(10);
	}
	MR_np_call_localret_ent(pretty_printer__output_current_group_12_0,
		pretty_printer__write_doc_to_stream_17_0_i36);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(7);
	MR_r12 = MR_tempr3;
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r14,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i38);
	}
	MR_r6 = MR_sv(11);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r8;
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		pretty_printer__write_doc_to_stream_17_0_i39);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_r1;
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r6, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r8;
	MR_r6 = MR_sv(11);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(11);
	MR_r11 = MR_ctfield(2, MR_tempr1, 0);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(11);
	MR_r10 = MR_ctfield(3, MR_tempr1, 0);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i87);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module24)
	MR_init_entry1(pretty_printer__write_doc_to_stream_17_1);
	MR_init_label8(pretty_printer__write_doc_to_stream_17_1,87,3,5,4,51,25,24,21)
	MR_init_label8(pretty_printer__write_doc_to_stream_17_1,22,48,49,50,7,8,55,9)
	MR_init_label8(pretty_printer__write_doc_to_stream_17_1,12,15,18,19,28,42,34,36)
	MR_init_label7(pretty_printer__write_doc_to_stream_17_1,35,43,38,39,31,41,40)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'write_doc_to_stream'/17 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__write_doc_to_stream_17_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(pretty_printer__write_doc_to_stream_17_1,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_decr_sp_and_return(13);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 1);
	MR_r13 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_GT(MR_r9,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i4);
	}
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_r3 = (MR_Word) MR_string_const("...", 3);
	MR_r4 = MR_r12;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		pretty_printer__write_doc_to_stream_17_1_i5);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r13),
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i51) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i48) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i7) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i55));
MR_def_label(pretty_printer__write_doc_to_stream_17_1,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r13),0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i21);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__pretty_printer__list__foldl__ho19_3_0,
		pretty_printer__write_doc_to_stream_17_1_i25);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = ((MR_Integer) MR_tempr2 - (MR_Integer) MR_r1);
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i24);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(pretty_printer__format_nl_8_0,
		pretty_printer__write_doc_to_stream_17_1_i22);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(6) = MR_tempr2;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(12) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r9;
	MR_r6 = MR_r12;
	}
	MR_np_call_localret_ent(pretty_printer__format_nl_8_0,
		pretty_printer__write_doc_to_stream_17_1_i22);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_r1;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_tempr2;
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_ctfield(1, MR_r13, 0);
	MR_sv(12) = MR_r1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_r12;
	MR_np_call_localret_ent(stream__put_4_0,
		pretty_printer__write_doc_to_stream_17_1_i49);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__length_1_0,
		pretty_printer__write_doc_to_stream_17_1_i50);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = ((MR_Integer) MR_sv(5) - (MR_Integer) MR_r1);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_ctfield(2, MR_r13, 0);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		pretty_printer__write_doc_to_stream_17_1_i8);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r13, 0),
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i18) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i9) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i15) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i12) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i28));
MR_def_label(pretty_printer__write_doc_to_stream_17_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r13;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r10;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_list_5_0,
		pretty_printer__write_doc_to_stream_17_1_i19);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r13, 1);
	MR_r2 = MR_r10;
	MR_np_call_localret_ent(pretty_printer__expand_format_susp_4_0,
		pretty_printer__write_doc_to_stream_17_1_i19);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r11;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_tempr2 = MR_r13;
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r3 = MR_r10;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_term_6_0,
		pretty_printer__write_doc_to_stream_17_1_i19);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_tempr3 = MR_r11;
	MR_sv(9) = MR_tempr3;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(3, MR_r13, 1);
	MR_r4 = MR_r10;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(pretty_printer__expand_pp_7_1,
		pretty_printer__write_doc_to_stream_17_1_i19);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tempr2;
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(3, MR_r13, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i42) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i31) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i41) MR_AND
		MR_LABEL_AP(pretty_printer__write_doc_to_stream_17_1_i40));
MR_def_label(pretty_printer__write_doc_to_stream_17_1,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r14 = MR_unmkbody(MR_r6);
	if (MR_INT_NE(MR_r14,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i43);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(10) = MR_r12;
	MR_sv(8) = (MR_Integer) 1;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	}
	MR_np_call_localret_ent(pretty_printer__expand_docs_11_1,
		pretty_printer__write_doc_to_stream_17_1_i34);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r3;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_sv(10);
	}
	MR_np_call_localret_ent(pretty_printer__output_current_group_12_0,
		pretty_printer__write_doc_to_stream_17_1_i36);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(7);
	MR_r12 = MR_tempr3;
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r14,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i38);
	}
	MR_r6 = MR_sv(11);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r8;
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		pretty_printer__write_doc_to_stream_17_1_i39);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_r1;
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r6, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r8;
	MR_r6 = MR_sv(11);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(11);
	MR_r11 = MR_ctfield(2, MR_tempr1, 0);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(11);
	MR_r10 = MR_ctfield(3, MR_tempr1, 0);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i87);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module25)
	MR_init_entry1(pretty_printer__write_doc_to_stream_9_0);
	MR_init_label2(pretty_printer__write_doc_to_stream_9_0,3,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'write_doc_to_stream'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__write_doc_to_stream_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__write_doc_to_stream_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__pretty_printer__write_doc_to_stream_9_0_i3);
MR_def_label(pretty_printer__write_doc_to_stream_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_r5;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_r11 = MR_tempr2;
	MR_r12 = MR_sv(8);
	}
	MR_np_call_localret_ent(pretty_printer__write_doc_to_stream_17_0,
		pretty_printer__write_doc_to_stream_9_0_i5);
MR_def_label(pretty_printer__write_doc_to_stream_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module26)
	MR_init_entry1(pretty_printer__write_doc_to_stream_9_1);
	MR_init_label2(pretty_printer__write_doc_to_stream_9_1,3,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'write_doc_to_stream'/9 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__write_doc_to_stream_9_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__write_doc_to_stream_9_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__pretty_printer__write_doc_to_stream_9_1_i3);
MR_def_label(pretty_printer__write_doc_to_stream_9_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_r5;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_r11 = MR_tempr2;
	MR_r12 = MR_sv(8);
	}
	MR_np_call_localret_ent(pretty_printer__write_doc_to_stream_17_1,
		pretty_printer__write_doc_to_stream_9_1_i5);
MR_def_label(pretty_printer__write_doc_to_stream_9_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module27)
	MR_init_entry1(pretty_printer__lock_io_formatter_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'lock_io_formatter_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__lock_io_formatter_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__lock_io_formatter_map_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module28)
	MR_init_entry1(pretty_printer__unlock_io_formatter_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'unlock_io_formatter_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__unlock_io_formatter_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__unlock_io_formatter_map_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module29)
	MR_init_entry1(pretty_printer__unsafe_get_io_formatter_map_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_io_formatter_map'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__unsafe_get_io_formatter_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__unsafe_get_io_formatter_map_1_0
{
#line 887 "pretty_printer.m"
MR_get_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_formatter_map);
;}
#line 5879 "pretty_printer.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module30)
	MR_init_entry1(pretty_printer__get_io_formatter_map_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_io_formatter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__get_io_formatter_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__get_io_formatter_map_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__get_io_formatter_map_3_0
{
#line 887 "pretty_printer.m"
MR_get_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_formatter_map);
;}
#line 5917 "pretty_printer.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__get_io_formatter_map_3_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module31)
	MR_init_entry1(pretty_printer__get_default_formatter_map_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_default_formatter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__get_default_formatter_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_formatter_map_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_formatter_map_3_0
{
#line 887 "pretty_printer.m"
MR_get_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_formatter_map);
;}
#line 5961 "pretty_printer.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_formatter_map_3_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module32)
	MR_init_entry1(pretty_printer__unsafe_set_io_formatter_map_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_io_formatter_map'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__unsafe_set_io_formatter_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__unsafe_set_io_formatter_map_1_0
	X = MR_r1;
{
#line 887 "pretty_printer.m"
MR_set_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_formatter_map);
;}
#line 6000 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module33)
	MR_init_entry1(pretty_printer__set_io_formatter_map_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_io_formatter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__set_io_formatter_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_io_formatter_map_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_io_formatter_map_3_0
	X = MR_r1;
{
#line 887 "pretty_printer.m"
MR_set_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_formatter_map);
;}
#line 6036 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_io_formatter_map_3_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module34)
	MR_init_entry1(pretty_printer__set_default_formatter_map_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_default_formatter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__set_default_formatter_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_map_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_map_3_0
	X = MR_r1;
{
#line 887 "pretty_printer.m"
MR_set_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_formatter_map);
;}
#line 6076 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_map_3_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module35)
	MR_init_entry1(pretty_printer__set_default_formatter_6_0);
	MR_init_label1(pretty_printer__set_default_formatter_6_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_default_formatter'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__set_default_formatter_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_6_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_6_0
{
#line 887 "pretty_printer.m"
MR_get_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_formatter_map);
;}
#line 6120 "pretty_printer.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_6_0
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__set_formatter_5_0,
		pretty_printer__set_default_formatter_6_0_i2);
MR_def_label(pretty_printer__set_default_formatter_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_6_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_6_0
	X = MR_r1;
{
#line 887 "pretty_printer.m"
MR_set_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_formatter_map);
;}
#line 6146 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_6_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module36)
	MR_init_entry1(pretty_printer__lock_io_pp_params_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'lock_io_pp_params'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__lock_io_pp_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__lock_io_pp_params_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module37)
	MR_init_entry1(pretty_printer__unlock_io_pp_params_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'unlock_io_pp_params'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__unlock_io_pp_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__unlock_io_pp_params_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module38)
	MR_init_entry1(pretty_printer__unsafe_get_io_pp_params_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_io_pp_params'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__unsafe_get_io_pp_params_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__unsafe_get_io_pp_params_1_0
{
#line 890 "pretty_printer.m"
MR_get_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_pp_params);
;}
#line 6231 "pretty_printer.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module39)
	MR_init_entry1(pretty_printer__get_io_pp_params_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_io_pp_params'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__get_io_pp_params_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__get_io_pp_params_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__get_io_pp_params_3_0
{
#line 890 "pretty_printer.m"
MR_get_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_pp_params);
;}
#line 6269 "pretty_printer.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__get_io_pp_params_3_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module40)
	MR_init_entry1(pretty_printer__get_default_params_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_default_params'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__get_default_params_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_params_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_params_3_0
{
#line 890 "pretty_printer.m"
MR_get_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_pp_params);
;}
#line 6313 "pretty_printer.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_params_3_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module41)
	MR_init_entry1(pretty_printer__unsafe_set_io_pp_params_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_io_pp_params'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__unsafe_set_io_pp_params_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__unsafe_set_io_pp_params_1_0
	X = MR_r1;
{
#line 890 "pretty_printer.m"
MR_set_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_pp_params);
;}
#line 6352 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module42)
	MR_init_entry1(pretty_printer__set_io_pp_params_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_io_pp_params'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__set_io_pp_params_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_io_pp_params_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_io_pp_params_3_0
	X = MR_r1;
{
#line 890 "pretty_printer.m"
MR_set_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_pp_params);
;}
#line 6388 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_io_pp_params_3_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module43)
	MR_init_entry1(pretty_printer__set_default_params_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_default_params'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__set_default_params_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_params_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_params_3_0
	X = MR_r1;
{
#line 890 "pretty_printer.m"
MR_set_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_pp_params);
;}
#line 6428 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_params_3_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module44)
	MR_init_entry1(pretty_printer__write_doc_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'write_doc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__write_doc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
{
#line 887 "pretty_printer.m"
MR_get_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_formatter_map);
;}
#line 6467 "pretty_printer.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
{
#line 890 "pretty_printer.m"
MR_get_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_pp_params);
;}
#line 6488 "pretty_printer.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 2;
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_ctfield(0, MR_tempr1, 1);
	MR_r7 = MR_ctfield(0, MR_tempr1, 2);
	MR_r8 = MR_tempr3;
	MR_np_tailcall_ent(pretty_printer__write_doc_to_stream_9_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module45)
	MR_init_entry1(pretty_printer__write_doc_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'write_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__write_doc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_3_0
{
#line 1385 "io.opt"

    Stream = &mercury_stdout;
;}
#line 6537 "pretty_printer.c"
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_np_tailcall_ent(pretty_printer__write_doc_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module46)
	MR_init_entry1(pretty_printer__pre_initialise_mutable_io_formatter_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_io_formatter_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__pre_initialise_mutable_io_formatter_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__pre_initialise_mutable_io_formatter_map_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_io_formatter_map");
{
#line 887 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_formatter_map = MR_new_thread_local_mutable_index();
;}
#line 6573 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_io_formatter_map");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module47)
	MR_init_entry1(pretty_printer__initialise_mutable_io_formatter_map_0_0);
	MR_init_label7(pretty_printer__initialise_mutable_io_formatter_map_0_0,3,5,6,7,8,9,10)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_io_formatter_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__initialise_mutable_io_formatter_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_formatter_map_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_io_formatter_map");
{
#line 887 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_formatter_map = MR_new_thread_local_mutable_index();
;}
#line 6608 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_io_formatter_map");
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("builtin", 7);
	MR_r2 = (MR_Word) MR_string_const("character", 9);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__pretty_printer__set_formatter_5_0,
		pretty_printer__initialise_mutable_io_formatter_map_0_0_i3);
MR_def_label(pretty_printer__initialise_mutable_io_formatter_map_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("builtin", 7);
	MR_r2 = (MR_Word) MR_string_const("float", 5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__set_formatter_5_0,
		pretty_printer__initialise_mutable_io_formatter_map_0_0_i5);
MR_def_label(pretty_printer__initialise_mutable_io_formatter_map_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("builtin", 7);
	MR_r2 = (MR_Word) MR_string_const("int", 3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho12_6_0,
		pretty_printer__initialise_mutable_io_formatter_map_0_0_i6);
MR_def_label(pretty_printer__initialise_mutable_io_formatter_map_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("builtin", 7);
	MR_r2 = (MR_Word) MR_string_const("string", 6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho11_6_0,
		pretty_printer__initialise_mutable_io_formatter_map_0_0_i7);
MR_def_label(pretty_printer__initialise_mutable_io_formatter_map_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("array", 5);
	MR_r2 = (MR_Word) MR_string_const("array", 5);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho10_6_0,
		pretty_printer__initialise_mutable_io_formatter_map_0_0_i8);
MR_def_label(pretty_printer__initialise_mutable_io_formatter_map_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("list", 4);
	MR_r2 = (MR_Word) MR_string_const("list", 4);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho9_6_0,
		pretty_printer__initialise_mutable_io_formatter_map_0_0_i9);
MR_def_label(pretty_printer__initialise_mutable_io_formatter_map_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("tree234", 7);
	MR_r2 = (MR_Word) MR_string_const("tree234", 7);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho8_6_0,
		pretty_printer__initialise_mutable_io_formatter_map_0_0_i10);
MR_def_label(pretty_printer__initialise_mutable_io_formatter_map_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_formatter_map_0_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_formatter_map_0_0
	X = MR_r1;
{
#line 887 "pretty_printer.m"
MR_set_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_formatter_map);
;}
#line 6706 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_formatter_map_0_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module48)
	MR_init_entry1(pretty_printer__pre_initialise_mutable_io_pp_params_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_io_pp_params'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__pre_initialise_mutable_io_pp_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_io_pp_params");
{
#line 890 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = MR_new_thread_local_mutable_index();
;}
#line 6741 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_io_pp_params");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module49)
	MR_init_entry1(pretty_printer__initialise_mutable_io_pp_params_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_io_pp_params'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__initialise_mutable_io_pp_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_pp_params_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_io_pp_params");
{
#line 890 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = MR_new_thread_local_mutable_index();
;}
#line 6773 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_io_pp_params");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_pp_params_0_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_pp_params_0_0
	X = (MR_Word) MR_TAG_COMMON(0,11,0);
{
#line 890 "pretty_printer.m"
MR_set_thread_local_mutable(MR_Word, X, mercury__pretty_printer__mutable_variable_io_pp_params);
;}
#line 6789 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_pp_params_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module50)
	MR_init_entry1(fn__pretty_printer__fmt_char_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'fmt_char'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__fmt_char_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module51)
	MR_init_entry1(fn__pretty_printer__fmt_float_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'fmt_float'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__fmt_float_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module52)
	MR_init_entry1(fn__pretty_printer__fmt_int_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'fmt_int'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__fmt_int_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module53)
	MR_init_entry1(fn__pretty_printer__fmt_string_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'fmt_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__fmt_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
MR_decl_entry(private_builtin__typed_unify_2_1);
MR_decl_entry(fn__array__array_to_doc_1_0);

MR_BEGIN_MODULE(pretty_printer_module54)
	MR_init_entry1(fn__pretty_printer__fmt_array_2_0);
	MR_init_label2(fn__pretty_printer__fmt_array_2_0,6,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'fmt_array'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__fmt_array_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_array_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_array_2_0_i2);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pretty_printer__fmt_array_2_0
	TypeInfo = MR_tempr1;
{
#line 63 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 6928 "pretty_printer.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		fn__pretty_printer__fmt_array_2_0_i6);
MR_def_label(fn__pretty_printer__fmt_array_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_array_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__array__array_to_doc_1_0);
MR_def_label(fn__pretty_printer__fmt_array_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__list_to_doc_1_0);

MR_BEGIN_MODULE(pretty_printer_module55)
	MR_init_entry1(fn__pretty_printer__fmt_list_2_0);
	MR_init_label2(fn__pretty_printer__fmt_list_2_0,6,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'fmt_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__fmt_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_list_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_list_2_0_i2);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pretty_printer__fmt_list_2_0
	TypeInfo = MR_tempr1;
{
#line 63 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 7001 "pretty_printer.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		fn__pretty_printer__fmt_list_2_0_i6);
MR_def_label(fn__pretty_printer__fmt_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_list_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__list__list_to_doc_1_0);
MR_def_label(fn__pretty_printer__fmt_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__tree234__tree234_to_doc_1_0);

MR_BEGIN_MODULE(pretty_printer_module56)
	MR_init_entry1(fn__pretty_printer__fmt_tree234_2_0);
	MR_init_label2(fn__pretty_printer__fmt_tree234_2_0,7,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'fmt_tree234'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__fmt_tree234_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_tree234_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_tree234_2_0_i2);
	}
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_tree234_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pretty_printer__fmt_tree234_2_0
	TypeInfo = MR_tempr2;
{
#line 63 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 7079 "pretty_printer.c"
	MR_tempr2 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_ctfield(1, MR_r4, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pretty_printer__fmt_tree234_2_0
	TypeInfo = MR_tempr3;
{
#line 63 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 7094 "pretty_printer.c"
	MR_tempr4 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr5, 2) = MR_tempr4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		fn__pretty_printer__fmt_tree234_2_0_i7);
MR_def_label(fn__pretty_printer__fmt_tree234_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_tree234_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__tree234__tree234_to_doc_1_0);
	}
MR_def_label(fn__pretty_printer__fmt_tree234_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___univ__univ_0_0);

MR_BEGIN_MODULE(pretty_printer_module57)
	MR_init_entry1(__Unify___pretty_printer__doc_0_0);
	MR_init_label8(__Unify___pretty_printer__doc_0_0,102,35,33,5,39,9,11,15)
	MR_init_label5(__Unify___pretty_printer__doc_0_0,19,23,29,40,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pretty_printer__doc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Unify___pretty_printer__doc_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i40);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___pretty_printer__doc_0_0_i35) MR_AND
		MR_LABEL_AP(__Unify___pretty_printer__doc_0_0_i33) MR_AND
		MR_LABEL_AP(__Unify___pretty_printer__doc_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___pretty_printer__doc_0_0_i39));
MR_def_label(__Unify___pretty_printer__doc_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___pretty_printer__doc_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___pretty_printer__doc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___pretty_printer__doc_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___pretty_printer__doc_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___pretty_printer__doc_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___pretty_printer__doc_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___pretty_printer__doc_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___pretty_printer__doc_0_0_i29));
MR_def_label(__Unify___pretty_printer__doc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___pretty_printer__doc_0_0_i11);
MR_def_label(__Unify___pretty_printer__doc_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i102);
MR_def_label(__Unify___pretty_printer__doc_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
MR_def_label(__Unify___pretty_printer__doc_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_ctfield(3, MR_tempr3, 2);
	MR_r3 = MR_ctfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___pretty_printer__doc_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___univ__univ_0_0);
MR_def_label(__Unify___pretty_printer__doc_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___pretty_printer__pp_internal_0_0);
MR_def_label(__Unify___pretty_printer__doc_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___pretty_printer__doc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___univ__univ_0_0);

MR_BEGIN_MODULE(pretty_printer_module58)
	MR_init_entry1(__Compare___pretty_printer__doc_0_0);
	MR_init_label8(__Compare___pretty_printer__doc_0_0,276,175,132,105,116,154,170,164)
	MR_init_label8(__Compare___pretty_printer__doc_0_0,186,165,187,5,17,7,179,22)
	MR_init_label8(__Compare___pretty_printer__doc_0_0,39,43,25,27,44,56,60,287)
	MR_init_label8(__Compare___pretty_printer__doc_0_0,61,83,267,87,66,69,70,73)
	MR_init_label3(__Compare___pretty_printer__doc_0_0,88,137,292)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pretty_printer__doc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Compare___pretty_printer__doc_0_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i187);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i175) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i154) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i179));
MR_def_label(__Compare___pretty_printer__doc_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(1)),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i105);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i132) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186));
MR_def_label(__Compare___pretty_printer__doc_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i186);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i116) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186));
MR_def_label(__Compare___pretty_printer__doc_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i187);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i170) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186));
MR_def_label(__Compare___pretty_printer__doc_0_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i186);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___pretty_printer__doc_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_tempr1;
{
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 7390 "pretty_printer.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i165);
	}
	}
MR_def_label(__Compare___pretty_printer__doc_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i267);
	}
MR_def_label(__Compare___pretty_printer__doc_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i17) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186));
MR_def_label(__Compare___pretty_printer__doc_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i267);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___pretty_printer__doc_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i88) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i61) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i44) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i137));
MR_def_label(__Compare___pretty_printer__doc_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i39) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i43));
MR_def_label(__Compare___pretty_printer__doc_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i267);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i25) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186));
MR_def_label(__Compare___pretty_printer__doc_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	MR_r3 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___pretty_printer__doc_0_0_i27);
MR_def_label(__Compare___pretty_printer__doc_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i292);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i276);
MR_def_label(__Compare___pretty_printer__doc_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i56) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i60));
MR_def_label(__Compare___pretty_printer__doc_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i267);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i287) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186));
MR_def_label(__Compare___pretty_printer__doc_0_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
MR_def_label(__Compare___pretty_printer__doc_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i83) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i87));
MR_def_label(__Compare___pretty_printer__doc_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___pretty_printer__doc_0_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i66) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__doc_0_0_i186));
MR_def_label(__Compare___pretty_printer__doc_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_r5 = MR_ctfield(3, MR_tempr2, 2);
	MR_r6 = MR_ctfield(3, MR_tempr1, 1);
	MR_r7 = MR_ctfield(3, MR_tempr2, 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___pretty_printer__doc_0_0
	S1 = (MR_String) MR_r6;
	S2 = (MR_String) MR_r7;
{
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 7560 "pretty_printer.c"
	MR_r6 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r6,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i69);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i73);
	}
MR_def_label(__Compare___pretty_printer__doc_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i70);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i73);
MR_def_label(__Compare___pretty_printer__doc_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r4;
MR_def_label(__Compare___pretty_printer__doc_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i292);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
MR_def_label(__Compare___pretty_printer__doc_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i267);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i186);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___univ__univ_0_0);
MR_def_label(__Compare___pretty_printer__doc_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i267);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),4)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i267);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___pretty_printer__pp_internal_0_0);
MR_def_label(__Compare___pretty_printer__doc_0_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module59)
	MR_init_entry1(__Unify___pretty_printer__docs_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pretty_printer__docs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module60)
	MR_init_entry1(__Compare___pretty_printer__docs_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pretty_printer__docs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module61)
	MR_init_entry1(__Unify___pretty_printer__formatter_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pretty_printer__formatter_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module62)
	MR_init_entry1(__Compare___pretty_printer__formatter_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pretty_printer__formatter_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(pretty_printer_module63)
	MR_init_entry1(__Unify___pretty_printer__formatter_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pretty_printer__formatter_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(pretty_printer_module64)
	MR_init_entry1(__Compare___pretty_printer__formatter_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pretty_printer__formatter_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module65)
	MR_init_entry1(__Unify___pretty_printer__formatting_limit_0_0);
	MR_init_label3(__Unify___pretty_printer__formatting_limit_0_0,12,5,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pretty_printer__formatting_limit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__formatting_limit_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___pretty_printer__formatting_limit_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___pretty_printer__formatting_limit_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___pretty_printer__formatting_limit_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___pretty_printer__formatting_limit_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__formatting_limit_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___pretty_printer__formatting_limit_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module66)
	MR_init_entry1(__Compare___pretty_printer__formatting_limit_0_0);
	MR_init_label7(__Compare___pretty_printer__formatting_limit_0_0,8,5,32,13,25,14,26)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pretty_printer__formatting_limit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__formatting_limit_0_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__formatting_limit_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__formatting_limit_0_0_i25);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__formatting_limit_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___pretty_printer__formatting_limit_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__formatting_limit_0_0_i32);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___pretty_printer__formatting_limit_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__formatting_limit_0_0_i13);
	}
MR_def_label(__Compare___pretty_printer__formatting_limit_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___pretty_printer__formatting_limit_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__formatting_limit_0_0_i14);
	}
MR_def_label(__Compare___pretty_printer__formatting_limit_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___pretty_printer__formatting_limit_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__formatting_limit_0_0_i32);
	}
MR_def_label(__Compare___pretty_printer__formatting_limit_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module67)
	MR_init_entry1(__Unify___pretty_printer__indents_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pretty_printer__indents_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module68)
	MR_init_entry1(__Compare___pretty_printer__indents_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pretty_printer__indents_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module69)
	MR_init_entry1(__Unify___pretty_printer__pp_internal_0_0);
	MR_init_label6(__Unify___pretty_printer__pp_internal_0_0,16,6,14,10,22,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pretty_printer__pp_internal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i22);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___pretty_printer__pp_internal_0_0_i16) MR_AND
		MR_LABEL_AP(__Unify___pretty_printer__pp_internal_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___pretty_printer__pp_internal_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___pretty_printer__pp_internal_0_0_i10));
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_unmkbody(MR_tempr2);
	MR_r1 = (MR_sv(2) == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 0);
	MR_r2 = MR_ctfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___pretty_printer__formatting_limit_0_0);
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module70)
	MR_init_entry1(__Compare___pretty_printer__pp_internal_0_0);
	MR_init_label8(__Compare___pretty_printer__pp_internal_0_0,99,47,100,14,52,60,61,19)
	MR_init_label8(__Compare___pretty_printer__pp_internal_0_0,32,33,22,23,81,93,94,88)
	MR_init_label7(__Compare___pretty_printer__pp_internal_0_0,121,89,122,66,75,158,72)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pretty_printer__pp_internal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i122);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i99) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i66));
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(1));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i100);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i121);
	}
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i47);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i121);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i52);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i121);
	}
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i121);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i60) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i121));
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i122);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i32) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i121));
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i33);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i121);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___pretty_printer__pp_internal_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 8227 "pretty_printer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i158);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i93) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i88) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i121));
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i94);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i158);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i89);
	}
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i158);
	}
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i75) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___pretty_printer__pp_internal_0_0_i72));
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_sv(2));
	}
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 0);
	MR_r2 = MR_ctfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___pretty_printer__formatting_limit_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module71)
	MR_init_entry1(__Unify___pretty_printer__pp_params_0_0);
	MR_init_label2(__Unify___pretty_printer__pp_params_0_0,6,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pretty_printer__pp_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_params_0_0_i6);
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
		MR_GOTO_LAB(__Unify___pretty_printer__pp_params_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_params_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___pretty_printer__formatting_limit_0_0);
	}
MR_def_label(__Unify___pretty_printer__pp_params_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___pretty_printer__pp_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module72)
	MR_init_entry1(__Compare___pretty_printer__pp_params_0_0);
	MR_init_label8(__Compare___pretty_printer__pp_params_0_0,3,2,6,7,9,14,15,17)
	MR_init_label1(__Compare___pretty_printer__pp_params_0_0,49)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pretty_printer__pp_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i2);
MR_def_label(__Compare___pretty_printer__pp_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___pretty_printer__pp_params_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i9);
	}
MR_def_label(__Compare___pretty_printer__pp_params_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i9);
MR_def_label(__Compare___pretty_printer__pp_params_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___pretty_printer__pp_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i49);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i17);
MR_def_label(__Compare___pretty_printer__pp_params_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i17);
MR_def_label(__Compare___pretty_printer__pp_params_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___pretty_printer__pp_params_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_params_0_0_i49);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___pretty_printer__formatting_limit_0_0);
MR_def_label(__Compare___pretty_printer__pp_params_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module73)
	MR_init_entry1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__1_2_0);
	MR_init_label1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__1_2_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__write_doc_to_stream__386__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__length_1_0,
		fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__1_2_0_i2);
MR_def_label(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module74)
	MR_init_entry1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__2_2_0);
	MR_init_label1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__2_2_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__write_doc_to_stream__386__2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__length_1_0,
		fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__2_2_0_i2);
MR_def_label(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module75)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho8_6_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_formatter_sv__ho8'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__set_formatter_sv__ho8_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module76)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho9_6_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_formatter_sv__ho9'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__set_formatter_sv__ho9_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,3);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module77)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho10_6_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_formatter_sv__ho10'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__set_formatter_sv__ho10_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,4);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module78)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho11_6_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_formatter_sv__ho11'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__set_formatter_sv__ho11_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,5);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module79)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho12_6_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_formatter_sv__ho12'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__set_formatter_sv__ho12_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,6);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module80)
	MR_init_entry1(fn__pretty_printer__list__foldl__ho19_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho19'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__list__foldl__ho19_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(pretty_printer__list__foldl__ho25_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module81)
	MR_init_entry1(fn__pretty_printer__list__foldl__ho20_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho20'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__list__foldl__ho20_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(pretty_printer__list__foldl__ho24_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module82)
	MR_init_entry1(pretty_printer__list__foldl__ho24_4_0);
	MR_init_label3(pretty_printer__list__foldl__ho24_4_0,10,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho24'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__list__foldl__ho24_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(pretty_printer__list__foldl__ho24_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(pretty_printer__list__foldl__ho24_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(pretty_printer__list__foldl__ho24_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__1_2_0,
		pretty_printer__list__foldl__ho24_4_0_i4);
MR_def_label(pretty_printer__list__foldl__ho24_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(pretty_printer__list__foldl__ho24_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module83)
	MR_init_entry1(pretty_printer__list__foldl__ho25_4_0);
	MR_init_label3(pretty_printer__list__foldl__ho25_4_0,10,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho25'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__list__foldl__ho25_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(pretty_printer__list__foldl__ho25_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(pretty_printer__list__foldl__ho25_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(pretty_printer__list__foldl__ho25_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__386__2_2_0,
		pretty_printer__list__foldl__ho25_4_0_i4);
MR_def_label(pretty_printer__list__foldl__ho25_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(pretty_printer__list__foldl__ho25_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(univ__type_to_univ_2_2);
MR_decl_entry(fn__term_io__quoted_char_1_0);

MR_BEGIN_MODULE(pretty_printer_module84)
	MR_init_entry1(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0);
	MR_init_label3(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0,3,5,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__fmt_char__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0_i3);
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__term_io__quoted_char_1_0,
		fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

MR_BEGIN_MODULE(pretty_printer_module85)
	MR_init_entry1(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0);
	MR_init_label2(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0,3,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__fmt_float__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0_i3);
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Float	Flt;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0
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
#line 8908 "pretty_printer.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,12);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);

MR_BEGIN_MODULE(pretty_printer_module86)
	MR_init_entry1(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0);
	MR_init_label3(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0,3,5,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__fmt_int__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0_i3);
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,13);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module87)
	MR_init_entry1(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0);
	MR_init_label2(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0,3,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__fmt_string__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0_i3);
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,8);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,2,14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(pretty_printer_module88)
	MR_init_entry1(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_init_label1(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__builtin_compare_pred__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 9060 "pretty_printer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order comparison", 33);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module89)
	MR_init_entry1(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_init_label3(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2,10,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__builtin_unify_pred__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 9103 "pretty_printer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order unification", 34);
	MR_np_call_localret_ent(require__error_1_0,
		f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i10);
MR_def_label(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 9126 "pretty_printer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module90)
	MR_init_entry1(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 890 "pretty_printer.m"
MR_Unsigned mercury__pretty_printer__mutable_variable_io_pp_params;

#line 9172 "pretty_printer.c"
#line 887 "pretty_printer.m"
MR_Unsigned mercury__pretty_printer__mutable_variable_io_formatter_map;

#line 9176 "pretty_printer.c"

MR_declare_static(mercury__pretty_printer__initialise_mutable_io_pp_params_0_0);

void
mercury__pretty_printer__user_init_pred_1(void);

void
mercury__pretty_printer__user_init_pred_1(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__pretty_printer__initialise_mutable_io_pp_params_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__pretty_printer__initialise_mutable_io_pp_params_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__pretty_printer__initialise_mutable_io_formatter_map_0_0);

void
mercury__pretty_printer__user_init_pred_0(void);

void
mercury__pretty_printer__user_init_pred_0(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__pretty_printer__initialise_mutable_io_formatter_map_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__pretty_printer__initialise_mutable_io_formatter_map_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__pretty_printer_maybe_bunch_0(void)
{
	pretty_printer_module0();
	pretty_printer_module1();
	pretty_printer_module2();
	pretty_printer_module3();
	pretty_printer_module4();
	pretty_printer_module5();
	pretty_printer_module6();
	pretty_printer_module7();
	pretty_printer_module8();
	pretty_printer_module9();
	pretty_printer_module10();
	pretty_printer_module11();
	pretty_printer_module12();
	pretty_printer_module13();
	pretty_printer_module14();
	pretty_printer_module15();
	pretty_printer_module16();
	pretty_printer_module17();
	pretty_printer_module18();
	pretty_printer_module19();
	pretty_printer_module20();
	pretty_printer_module21();
	pretty_printer_module22();
	pretty_printer_module23();
	pretty_printer_module24();
	pretty_printer_module25();
	pretty_printer_module26();
	pretty_printer_module27();
	pretty_printer_module28();
	pretty_printer_module29();
	pretty_printer_module30();
	pretty_printer_module31();
	pretty_printer_module32();
	pretty_printer_module33();
	pretty_printer_module34();
	pretty_printer_module35();
	pretty_printer_module36();
	pretty_printer_module37();
	pretty_printer_module38();
	pretty_printer_module39();
}

static void mercury__pretty_printer_maybe_bunch_1(void)
{
	pretty_printer_module40();
	pretty_printer_module41();
	pretty_printer_module42();
	pretty_printer_module43();
	pretty_printer_module44();
	pretty_printer_module45();
	pretty_printer_module46();
	pretty_printer_module47();
	pretty_printer_module48();
	pretty_printer_module49();
	pretty_printer_module50();
	pretty_printer_module51();
	pretty_printer_module52();
	pretty_printer_module53();
	pretty_printer_module54();
	pretty_printer_module55();
	pretty_printer_module56();
	pretty_printer_module57();
	pretty_printer_module58();
	pretty_printer_module59();
	pretty_printer_module60();
	pretty_printer_module61();
	pretty_printer_module62();
	pretty_printer_module63();
	pretty_printer_module64();
	pretty_printer_module65();
	pretty_printer_module66();
	pretty_printer_module67();
	pretty_printer_module68();
	pretty_printer_module69();
	pretty_printer_module70();
	pretty_printer_module71();
	pretty_printer_module72();
	pretty_printer_module73();
	pretty_printer_module74();
	pretty_printer_module75();
	pretty_printer_module76();
	pretty_printer_module77();
	pretty_printer_module78();
	pretty_printer_module79();
}

static void mercury__pretty_printer_maybe_bunch_2(void)
{
	pretty_printer_module80();
	pretty_printer_module81();
	pretty_printer_module82();
	pretty_printer_module83();
	pretty_printer_module84();
	pretty_printer_module85();
	pretty_printer_module86();
	pretty_printer_module87();
	pretty_printer_module88();
	pretty_printer_module89();
	pretty_printer_module90();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__pretty_printer__init(void);
void mercury__pretty_printer__init_type_tables(void);
void mercury__pretty_printer__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__pretty_printer__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__pretty_printer__init_complexity_procs(void);
#endif
void mercury__pretty_printer__required_init(void);

void mercury__pretty_printer__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__pretty_printer_maybe_bunch_0();
	mercury__pretty_printer_maybe_bunch_1();
	mercury__pretty_printer_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pretty_printer__type_ctor_info_doc_0,
		pretty_printer__doc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pretty_printer__type_ctor_info_docs_0,
		pretty_printer__docs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pretty_printer__type_ctor_info_formatter_0,
		pretty_printer__formatter_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pretty_printer__type_ctor_info_formatter_map_0,
		pretty_printer__formatter_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pretty_printer__type_ctor_info_formatting_limit_0,
		pretty_printer__formatting_limit_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pretty_printer__type_ctor_info_indents_0,
		pretty_printer__indents_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pretty_printer__type_ctor_info_pp_internal_0,
		pretty_printer__pp_internal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pretty_printer__type_ctor_info_pp_params_0,
		pretty_printer__pp_params_0_0);
	mercury__pretty_printer__init_debugger();
}

void mercury__pretty_printer__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_pretty_printer__type_ctor_info_doc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_pretty_printer__type_ctor_info_docs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_pretty_printer__type_ctor_info_formatter_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_pretty_printer__type_ctor_info_formatter_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_pretty_printer__type_ctor_info_formatting_limit_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_pretty_printer__type_ctor_info_indents_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_pretty_printer__type_ctor_info_pp_internal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_pretty_printer__type_ctor_info_pp_params_0);
	}
}


void mercury__pretty_printer__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__pretty_printer__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__pretty_printer);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__pretty_printer__init_complexity_procs(void)
{
}

#endif

void mercury__pretty_printer__required_init(void)
{
	mercury__pretty_printer__user_init_pred_0();
	mercury__pretty_printer__user_init_pred_1();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
