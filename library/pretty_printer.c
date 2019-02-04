/*
** Automatically generated from `pretty_printer.m'
** by the Mercury compiler,
** version rotd-2011-10-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__pretty_printer__init
REQUIRED_INIT mercury__pretty_printer__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 26 "pretty_printer.c"
#include "pretty_printer.mh"

#line 29 "pretty_printer.c"
#line 526 "io.int"
#include "io.mh"

#line 33 "pretty_printer.c"
#line 536 "io.int"
#include "time.mh"

#line 37 "pretty_printer.c"
#line 537 "io.int"
#include "string.mh"

#line 41 "pretty_printer.c"
#line 248 "array.int"
#include "array.mh"

#line 45 "pretty_printer.c"
#line 70 "version_array.int"
#include "version_array.mh"

#line 49 "pretty_printer.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 53 "pretty_printer.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 57 "pretty_printer.c"
#line 58 "array.opt"
#include "store.mh"

#line 61 "pretty_printer.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 65 "pretty_printer.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 69 "pretty_printer.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 73 "pretty_printer.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 77 "pretty_printer.c"
#line 4 "char.opt"
#include "char.mh"

#line 81 "pretty_printer.c"
#line 3 "float.opt"
#include "float.mh"

#line 85 "pretty_printer.c"
#line 3 "math.opt"
#include "math.mh"

#line 89 "pretty_printer.c"
#line 4 "int.opt"
#include "int.mh"

#line 93 "pretty_printer.c"
#line 157 "io.opt"
#include "dir.mh"

#line 97 "pretty_printer.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 101 "pretty_printer.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 105 "pretty_printer.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 109 "pretty_printer.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 113 "pretty_printer.c"
#line 114 "pretty_printer.c"
#ifndef PRETTY_PRINTER_DECL_GUARD
#define PRETTY_PRINTER_DECL_GUARD

#line 118 "pretty_printer.c"
#line 890 "pretty_printer.m"

    extern MR_Bool ML_pretty_printer_is_initialised;
    extern MR_Word ML_pretty_printer_default_formatter_map;

#line 124 "pretty_printer.c"
#line 878 "pretty_printer.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word mercury__pretty_printer__mutable_variable_io_pp_params;
#else
    extern MR_Word mercury__pretty_printer__mutable_variable_io_pp_params;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock mercury__pretty_printer__mutable_variable_io_pp_params_lock;
#endif

#line 135 "pretty_printer.c"
#line 136 "pretty_printer.c"

#endif
#line 139 "pretty_printer.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[5];
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
MR_decl_label3(pretty_printer__list__foldl__ho23_4_0, 10,3,4)
MR_decl_label3(pretty_printer__list__foldl__ho24_4_0, 10,3,4)
MR_decl_label1(pretty_printer__decrement_limit_2_0, 3)
MR_decl_label10(pretty_printer__expand_docs_11_0, 182,3,9,7,5,13,12,16,15,21)
MR_decl_label10(pretty_printer__expand_docs_11_0, 20,25,24,29,28,33,32,37,36,42)
MR_decl_label8(pretty_printer__expand_docs_11_0, 44,41,47,46,51,55,54,57)
MR_decl_label10(pretty_printer__expand_docs_11_1, 182,3,9,7,5,13,12,16,15,21)
MR_decl_label10(pretty_printer__expand_docs_11_1, 20,25,24,29,28,33,32,37,36,42)
MR_decl_label8(pretty_printer__expand_docs_11_1, 44,41,47,46,51,55,54,57)
MR_decl_label7(pretty_printer__expand_format_list_5_0, 75,7,6,5,21,10,33)
MR_decl_label10(pretty_printer__expand_format_op_4_0, 6,8,11,18,5,20,22,24,32,4)
MR_decl_label10(pretty_printer__expand_format_op_4_0, 37,39,41,45,54,55,62,67,36,69)
MR_decl_label7(pretty_printer__expand_format_op_4_0, 71,75,79,85,92,93,1)
MR_decl_label6(pretty_printer__expand_format_susp_4_0, 4,3,48,7,10,12)
MR_decl_label10(pretty_printer__expand_format_term_6_0, 4,2,8,7,6,12,10,14,33,64)
MR_decl_label1(pretty_printer__expand_format_term_6_0, 65)
MR_decl_label10(pretty_printer__expand_pp_7_0, 4,3,2,7,8,11,14,16,6,22)
MR_decl_label10(pretty_printer__expand_pp_7_1, 4,3,2,7,8,11,14,16,6,22)
MR_decl_label2(pretty_printer__format_nl_8_0, 2,3)
MR_decl_label2(pretty_printer__get_default_formatter_map_3_0, 4,3)
MR_decl_label3(pretty_printer__get_formatter_5_0, 6,8,1)
MR_decl_label10(pretty_printer__output_current_group_12_0, 87,3,6,7,4,11,12,13,9,16)
MR_decl_label2(pretty_printer__output_current_group_12_0, 23,20)
MR_decl_label4(pretty_printer__output_indentation_6_0, 14,4,5,6)
MR_decl_label3(pretty_printer__set_default_formatter_6_0, 4,3,5)
MR_decl_label3(pretty_printer__write_doc_4_0, 4,3,2)
MR_decl_label2(pretty_printer__write_doc_to_stream_9_0, 3,5)
MR_decl_label2(pretty_printer__write_doc_to_stream_9_1, 3,5)
MR_decl_label10(pretty_printer__write_doc_to_stream_17_0, 114,3,5,4,8,7,11,12,10,9)
MR_decl_label10(pretty_printer__write_doc_to_stream_17_0, 15,14,17,18,16,20,19,23,22,26)
MR_decl_label10(pretty_printer__write_doc_to_stream_17_0, 25,29,28,32,34,36,35,33,39,38)
MR_decl_label2(pretty_printer__write_doc_to_stream_17_0, 40,42)
MR_decl_label10(pretty_printer__write_doc_to_stream_17_1, 114,3,5,4,8,7,11,12,10,9)
MR_decl_label10(pretty_printer__write_doc_to_stream_17_1, 15,14,17,18,16,20,19,23,22,26)
MR_decl_label10(pretty_printer__write_doc_to_stream_17_1, 25,29,28,32,34,36,35,33,39,38)
MR_decl_label2(pretty_printer__write_doc_to_stream_17_1, 40,42)
MR_decl_label1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_0, 2)
MR_decl_label1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_0, 2)
MR_decl_label3(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0, 3,5,2)
MR_decl_label2(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0, 3,2)
MR_decl_label3(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0, 3,5,2)
MR_decl_label2(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0, 3,2)
MR_decl_label1(fn__pretty_printer__add_parens_if_needed_3_0, 2)
MR_decl_label1(fn__pretty_printer__adjust_priority_2_0, 2)
MR_decl_label2(fn__pretty_printer__fmt_array_2_0, 6,2)
MR_decl_label2(fn__pretty_printer__fmt_list_2_0, 6,2)
MR_decl_label2(fn__pretty_printer__fmt_tree234_2_0, 7,2)
MR_decl_label2(fn__pretty_printer__fmt_version_array_2_0, 6,2)
MR_decl_label1(fn__pretty_printer__format_1_0, 2)
MR_decl_label1(fn__pretty_printer__format_arg_1_0, 3)
MR_decl_label7(fn__pretty_printer__initial_formatter_map_0_0, 3,4,5,6,7,8,9)
MR_decl_label8(fn__pretty_printer__set_formatter_5_0, 7,10,9,13,15,2,19,21)
MR_decl_label1(fn__pretty_printer__set_formatting_limit_correctly_2_0, 3)
MR_decl_label10(__Unify___pretty_printer__doc_0_0, 116,5,6,7,11,15,13,19,23,59)
MR_decl_label2(__Unify___pretty_printer__doc_0_0, 27,1)
MR_decl_label3(__Unify___pretty_printer__formatting_limit_0_0, 12,5,1)
MR_decl_label7(__Unify___pretty_printer__pp_internal_0_0, 5,6,7,8,28,10,1)
MR_decl_label2(__Unify___pretty_printer__pp_params_0_0, 6,1)
MR_decl_label10(__Compare___pretty_printer__doc_0_0, 547,7,8,9,10,11,12,13,5,17)
MR_decl_label10(__Compare___pretty_printer__doc_0_0, 18,19,20,21,22,23,15,27,28,29)
MR_decl_label10(__Compare___pretty_printer__doc_0_0, 31,32,33,34,25,38,39,40,42,242)
MR_decl_label10(__Compare___pretty_printer__doc_0_0, 41,47,48,49,36,53,54,55,56,59)
MR_decl_label10(__Compare___pretty_printer__doc_0_0, 57,64,65,51,69,70,71,72,73,74)
MR_decl_label10(__Compare___pretty_printer__doc_0_0, 76,67,80,81,82,83,84,85,89,90)
MR_decl_label10(__Compare___pretty_printer__doc_0_0, 93,86,78,101,102,103,195,104,105,106)
MR_decl_label10(__Compare___pretty_printer__doc_0_0, 284,107,99,111,112,113,114,115,116,117)
MR_decl_label2(__Compare___pretty_printer__doc_0_0, 118,622)
MR_decl_label7(__Compare___pretty_printer__formatting_limit_0_0, 8,5,32,13,25,14,26)
MR_decl_label10(__Compare___pretty_printer__pp_internal_0_0, 7,8,9,10,5,14,15,16,17,12)
MR_decl_label10(__Compare___pretty_printer__pp_internal_0_0, 21,22,23,24,19,28,29,30,32,31)
MR_decl_label10(__Compare___pretty_printer__pp_internal_0_0, 26,40,41,42,88,43,38,47,48,49)
MR_decl_label6(__Compare___pretty_printer__pp_internal_0_0, 93,50,51,95,52,96)
MR_decl_label9(__Compare___pretty_printer__pp_params_0_0, 3,2,6,7,9,14,15,17,49)
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
MR_def_extern_entry(pretty_printer__set_default_formatter_map_3_0)
MR_def_extern_entry(pretty_printer__pretty_printer_is_initialised_3_0)
MR_def_extern_entry(pretty_printer__unsafe_get_default_formatter_map_3_0)
MR_def_extern_entry(fn__pretty_printer__initial_formatter_map_0_0)
MR_def_extern_entry(pretty_printer__get_default_formatter_map_3_0)
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
MR_decl_static(pretty_printer__pre_initialise_mutable_io_pp_params_0_0)
MR_decl_static(pretty_printer__initialise_mutable_io_pp_params_0_0)
MR_decl_static(fn__pretty_printer__fmt_char_2_0)
MR_decl_static(fn__pretty_printer__fmt_float_2_0)
MR_decl_static(fn__pretty_printer__fmt_int_2_0)
MR_decl_static(fn__pretty_printer__fmt_string_2_0)
MR_decl_static(fn__pretty_printer__fmt_array_2_0)
MR_decl_static(fn__pretty_printer__fmt_version_array_2_0)
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
MR_decl_static(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_0)
MR_decl_static(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho6_6_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho7_6_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho8_6_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho9_6_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho10_6_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho11_6_0)
MR_decl_static(pretty_printer__set_formatter_sv__ho12_6_0)
MR_decl_static(fn__pretty_printer__list__foldl__ho18_3_0)
MR_decl_static(fn__pretty_printer__list__foldl__ho19_3_0)
MR_decl_static(pretty_printer__list__foldl__ho23_4_0)
MR_decl_static(pretty_printer__list__foldl__ho24_4_0)
MR_decl_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0)
MR_decl_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0)
MR_decl_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0)
MR_decl_static(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0)
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
MR_TAG_COMMON(1,2,15),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_2 mercury_common_2[17] =
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
MR_string_const("\?array\?", 7)
},
{
MR_string_const("\?version_array\?", 15)
},
{
MR_string_const("\?list\?", 6)
},
{
MR_string_const("\?tree234\?", 9)
},
{
MR_string_const("\?char\?", 6)
},
{
MR_string_const("\?float\?", 7)
},
{
MR_string_const("\?int\?", 5)
},
{
MR_string_const("\"", 1)
},
{
MR_string_const("\?string\?", 8)
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

static const MR_UserClosureId
mercury_data__closure_layout__fn__pretty_printer__initial_formatter_map_0_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_doc_0;
static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho6_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho7_6_0_1;
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
static const struct mercury_type_6 mercury_common_6[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__pretty_printer__initial_formatter_map_0_0_1,
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
(MR_Word *) &mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho6_6_0_1,
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
(MR_Word *) &mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho7_6_0_1,
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

static const struct mercury_type_7 mercury_common_7[8] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__pretty_printer__fmt_char_2_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(fn__pretty_printer__fmt_version_array_2_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(fn__pretty_printer__fmt_tree234_2_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(fn__pretty_printer__fmt_list_2_0),
0
},
{
MR_COMMON(6,4),
MR_ENTRY_AP(fn__pretty_printer__fmt_array_2_0),
0
},
{
MR_COMMON(6,5),
MR_ENTRY_AP(fn__pretty_printer__fmt_string_2_0),
0
},
{
MR_COMMON(6,6),
MR_ENTRY_AP(fn__pretty_printer__fmt_int_2_0),
0
},
{
MR_COMMON(6,7),
MR_ENTRY_AP(fn__pretty_printer__fmt_float_2_0),
0
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_8 mercury_common_8[1] =
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
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,8,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
	15,
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
	NULL,
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
	15,
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
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho12_6_0_1 = {
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
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho11_6_0_1 = {
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
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho10_6_0_1 = {
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
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho9_6_0_1 = {
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
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho8_6_0_1 = {
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
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho7_6_0_1 = {
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
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__pretty_printer__set_formatter_sv__ho6_6_0_1 = {
{
MR_FUNCTION,
"pretty_printer",
"pretty_printer",
"fmt_version_array",
3,
0
},
"pretty_printer",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__pretty_printer__initial_formatter_map_0_0_1 = {
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
"-1"
};



MR_BEGIN_MODULE(pretty_printer_module0)
	MR_init_entry1(fn__pretty_printer__indent_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__indent_2_0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__indent_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'indent'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pretty_printer__indent_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module2)
	MR_init_entry1(fn__pretty_printer__group_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__group_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pretty_printer__group_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__format_1_0);
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
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(pretty_printer_module4)
	MR_init_entry1(fn__pretty_printer__format_arg_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__format_arg_1_0);
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
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module5)
	MR_init_entry1(fn__pretty_printer__new_formatter_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__new_formatter_map_0_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__set_formatter_5_0);
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
MR_decl_entry(string__count_codepoints_2_0);

MR_BEGIN_MODULE(pretty_printer_module7)
	MR_init_entry1(pretty_printer__output_indentation_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__output_indentation_6_0);
	MR_init_label4(pretty_printer__output_indentation_6_0,14,4,5,6)
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
		MR_GOTO_LAB(pretty_printer__output_indentation_6_0_i14);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(pretty_printer__output_indentation_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(pretty_printer__output_indentation_6_0,
		pretty_printer__output_indentation_6_0_i4);
MR_def_label(pretty_printer__output_indentation_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__output_indentation_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__pretty_printer__output_indentation_6_0_i5);
MR_def_label(pretty_printer__output_indentation_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		pretty_printer__output_indentation_6_0_i6);
MR_def_label(pretty_printer__output_indentation_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_r1);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module8)
	MR_init_entry1(pretty_printer__format_nl_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__format_nl_8_0);
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
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r5 = MR_r6;
	MR_r2 = (MR_Integer) 1;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__output_current_group_12_0);
	MR_init_label10(pretty_printer__output_current_group_12_0,87,3,6,7,4,11,12,13,9,16)
	MR_init_label2(pretty_printer__output_current_group_12_0,23,20)
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
MR_def_label(pretty_printer__output_current_group_12_0,87)
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_r10 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_r9;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__output_current_group_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__pretty_printer__output_current_group_12_0_i6);
MR_def_label(pretty_printer__output_current_group_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		pretty_printer__output_current_group_12_0_i7);
MR_def_label(pretty_printer__output_current_group_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_r7 = ((MR_Integer) MR_sv(5) - (MR_Integer) MR_tempr1);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i87);
	}
MR_def_label(pretty_printer__output_current_group_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,1)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i9);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r8;
	MR_sv(9) = MR_r1;
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r5 = MR_r9;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__output_current_group_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__pretty_printer__output_current_group_12_0_i11);
MR_def_label(pretty_printer__output_current_group_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__output_indentation_6_0,
		pretty_printer__output_current_group_12_0_i12);
MR_def_label(pretty_printer__output_current_group_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	if (MR_INT_GT(MR_r3,0)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__output_current_group_12_0,13)
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
	MR_r8 = MR_tempr3;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i87);
	}
MR_def_label(pretty_printer__output_current_group_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r10,3,4)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r10, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i16);
	}
	MR_r5 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i87);
	}
MR_def_label(pretty_printer__output_current_group_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r10,3,4)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r10, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i20);
	}
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i23);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__output_current_group_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = ((MR_Integer) MR_r5 - (MR_Integer) 1);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i87);
MR_def_label(pretty_printer__output_current_group_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__output_current_group_12_0_i87);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__search_3_0);
MR_decl_entry(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(pretty_printer_module10)
	MR_init_entry1(pretty_printer__get_formatter_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__get_formatter_5_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__add_parens_if_needed_3_0);
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r3;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__adjust_priority_2_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__expand_format_op_4_0);
	MR_init_label10(pretty_printer__expand_format_op_4_0,6,8,11,18,5,20,22,24,32,4)
	MR_init_label10(pretty_printer__expand_format_op_4_0,37,39,41,45,54,55,62,67,36,69)
	MR_init_label7(pretty_printer__expand_format_op_4_0,71,75,79,85,92,93,1)
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
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i4);
	}
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__ops__init_mercury_op_table_0_0,
		pretty_printer__expand_format_op_4_0_i6);
MR_def_label(pretty_printer__expand_format_op_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ops__lookup_prefix_op_4_0,
		pretty_printer__expand_format_op_4_0_i8);
MR_def_label(pretty_printer__expand_format_op_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i5);
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__pretty_printer__adjust_priority_2_0,
		pretty_printer__expand_format_op_4_0_i11);
MR_def_label(pretty_printer__expand_format_op_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__pretty_printer__group_1_0,
		pretty_printer__expand_format_op_4_0_i18);
MR_def_label(pretty_printer__expand_format_op_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
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
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ops__lookup_postfix_op_4_0,
		pretty_printer__expand_format_op_4_0_i22);
MR_def_label(pretty_printer__expand_format_op_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__pretty_printer__adjust_priority_2_0,
		pretty_printer__expand_format_op_4_0_i24);
MR_def_label(pretty_printer__expand_format_op_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__pretty_printer__group_1_0,
		pretty_printer__expand_format_op_4_0_i32);
MR_def_label(pretty_printer__expand_format_op_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__add_parens_if_needed_3_0,
		pretty_printer__expand_format_op_4_0_i93);
MR_def_label(pretty_printer__expand_format_op_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i1);
	}
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r3;
	}
	MR_np_call_localret_ent(fn__ops__init_mercury_op_table_0_0,
		pretty_printer__expand_format_op_4_0_i37);
MR_def_label(pretty_printer__expand_format_op_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ops__lookup_infix_op_5_0,
		pretty_printer__expand_format_op_4_0_i39);
MR_def_label(pretty_printer__expand_format_op_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i36);
	}
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
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
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i45);
	}
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i54);
	}
MR_def_label(pretty_printer__expand_format_op_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_sv(6), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(6), 0) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r3;
	}
MR_def_label(pretty_printer__expand_format_op_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__pretty_printer__adjust_priority_2_0,
		pretty_printer__expand_format_op_4_0_i55);
MR_def_label(pretty_printer__expand_format_op_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__pretty_printer__indent_1_0,
		pretty_printer__expand_format_op_4_0_i62);
MR_def_label(pretty_printer__expand_format_op_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__pretty_printer__group_1_0,
		pretty_printer__expand_format_op_4_0_i67);
MR_def_label(pretty_printer__expand_format_op_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
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
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ops__lookup_binary_prefix_op_5_0,
		pretty_printer__expand_format_op_4_0_i71);
MR_def_label(pretty_printer__expand_format_op_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_format_op_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_sv(7) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_r2;
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
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__pretty_printer__indent_1_0,
		pretty_printer__expand_format_op_4_0_i85);
MR_def_label(pretty_printer__expand_format_op_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__pretty_printer__group_1_0,
		pretty_printer__expand_format_op_4_0_i92);
MR_def_label(pretty_printer__expand_format_op_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__set_formatting_limit_correctly_2_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__decrement_limit_2_0);
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
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tfield(0, MR_r1, 0) - (MR_Integer) 1);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(pretty_printer__decrement_limit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = ((MR_Integer) MR_tfield(1, MR_r1, 0) - (MR_Integer) 1);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term_io__quoted_atom_agt_2_0);

MR_BEGIN_MODULE(pretty_printer_module16)
	MR_init_entry1(pretty_printer__expand_format_term_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__expand_format_term_6_0);
	MR_init_label10(pretty_printer__expand_format_term_6_0,4,2,8,7,6,12,10,14,33,64)
	MR_init_label1(pretty_printer__expand_format_term_6_0,65)
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
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__term_io__quoted_atom_agt_2_0,
		pretty_printer__expand_format_term_6_0_i4);
MR_def_label(pretty_printer__expand_format_term_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_GT(MR_r5,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r4;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i7);
	}
MR_def_label(pretty_printer__expand_format_term_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_GT(MR_tempr1,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r4;
	MR_r1 = MR_tempr2;
	}
MR_def_label(pretty_printer__expand_format_term_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_np_call_localret_ent(pretty_printer__decrement_limit_2_0,
		pretty_printer__expand_format_term_6_0_i64);
MR_def_label(pretty_printer__expand_format_term_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(pretty_printer__expand_format_op_4_0,
		pretty_printer__expand_format_term_6_0_i12);
MR_def_label(pretty_printer__expand_format_term_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i10);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(pretty_printer__decrement_limit_2_0,
		pretty_printer__expand_format_term_6_0_i64);
MR_def_label(pretty_printer__expand_format_term_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_term_6_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(1,2,6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(3), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(3), 0) = MR_r2;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(pretty_printer__decrement_limit_2_0,
		pretty_printer__expand_format_term_6_0_i64);
MR_def_label(pretty_printer__expand_format_term_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__term_io__quoted_atom_agt_2_0,
		pretty_printer__expand_format_term_6_0_i33);
MR_def_label(pretty_printer__expand_format_term_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
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
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_sv(3), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(3), 0) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(pretty_printer__decrement_limit_2_0,
		pretty_printer__expand_format_term_6_0_i64);
MR_def_label(pretty_printer__expand_format_term_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__set_formatting_limit_correctly_2_0,
		pretty_printer__expand_format_term_6_0_i65);
MR_def_label(pretty_printer__expand_format_term_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__expand_pp_7_0);
	MR_init_label10(pretty_printer__expand_pp_7_0,4,3,2,7,8,11,14,16,6,22)
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
	MR_r6 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_GT(MR_r6,0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i2);
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i3);
	}
MR_def_label(pretty_printer__expand_pp_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_GT(MR_r6,0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i2);
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
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
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pretty_printer__expand_pp_7_0
	TypeInfo_for_T = MR_tempr1;
{
#line 58 "type_desc.opt"
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
#line 3159 "pretty_printer.c"
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
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 3183 "pretty_printer.c"
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
#line 144 "type_desc.opt"
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
#line 3226 "pretty_printer.c"
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
#line 144 "type_desc.opt"
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
#line 3268 "pretty_printer.c"
	MR_tempr4 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr4;
	MR_sv(7) = MR_r4;
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
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__get_formatter_5_0,
		pretty_printer__expand_pp_7_0_i8);
MR_def_label(pretty_printer__expand_pp_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i11);
	}
	MR_tag_alloc_heap(MR_sv(8), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(8), 0) = ((MR_Integer) MR_tfield(0, MR_sv(7), 0) - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_pp_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pretty_printer__expand_pp_7_0_i14);
MR_def_label(pretty_printer__expand_pp_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(8), 0) = ((MR_Integer) MR_tfield(1, MR_sv(7), 0) - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_pp_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pretty_printer__expand_pp_7_0_i14);
MR_def_label(pretty_printer__expand_pp_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_0_i16);
	}
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(pretty_printer__expand_pp_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tempr4 = MR_sv(8);
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
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		pretty_printer__expand_pp_7_0_i22);
MR_def_label(pretty_printer__expand_pp_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__expand_pp_7_1);
	MR_init_label10(pretty_printer__expand_pp_7_1,4,3,2,7,8,11,14,16,6,22)
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
	MR_r6 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_GT(MR_r6,0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i2);
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i3);
	}
MR_def_label(pretty_printer__expand_pp_7_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_GT(MR_r6,0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i2);
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
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
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pretty_printer__expand_pp_7_1
	TypeInfo_for_T = MR_tempr1;
{
#line 58 "type_desc.opt"
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
#line 3467 "pretty_printer.c"
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
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 3491 "pretty_printer.c"
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
#line 144 "type_desc.opt"
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
#line 3534 "pretty_printer.c"
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
#line 144 "type_desc.opt"
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
#line 3576 "pretty_printer.c"
	MR_tempr4 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr4;
	MR_sv(7) = MR_r4;
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
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__get_formatter_5_0,
		pretty_printer__expand_pp_7_1_i8);
MR_def_label(pretty_printer__expand_pp_7_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i11);
	}
	MR_tag_alloc_heap(MR_sv(8), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(8), 0) = ((MR_Integer) MR_tfield(0, MR_sv(7), 0) - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_pp_7_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pretty_printer__expand_pp_7_1_i14);
MR_def_label(pretty_printer__expand_pp_7_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(8), 0) = ((MR_Integer) MR_tfield(1, MR_sv(7), 0) - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_pp_7_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pretty_printer__expand_pp_7_1_i14);
MR_def_label(pretty_printer__expand_pp_7_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(pretty_printer__expand_pp_7_1_i16);
	}
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(pretty_printer__expand_pp_7_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tempr4 = MR_sv(8);
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
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		pretty_printer__expand_pp_7_1_i22);
MR_def_label(pretty_printer__expand_pp_7_1,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__expand_format_list_5_0);
	MR_init_label7(pretty_printer__expand_format_list_5_0,75,7,6,5,21,10,33)
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
		MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i75);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(pretty_printer__expand_format_list_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_GT(MR_r5,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_r4;
	MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i6);
	}
MR_def_label(pretty_printer__expand_format_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_GT(MR_tempr1,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_list_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r1 = MR_r4;
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
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
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
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(fn__pretty_printer__format_arg_1_0,
		pretty_printer__expand_format_list_5_0_i33);
MR_def_label(pretty_printer__expand_format_list_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__expand_format_susp_4_0);
	MR_init_label6(pretty_printer__expand_format_susp_4_0,4,3,48,7,10,12)
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
	MR_r3 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_GT(MR_r3,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_susp_4_0_i48);
	}
	MR_GOTO_LAB(pretty_printer__expand_format_susp_4_0_i3);
MR_def_label(pretty_printer__expand_format_susp_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_GT(MR_tempr1,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_susp_4_0_i48);
	}
	}
MR_def_label(pretty_printer__expand_format_susp_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_proceed();
MR_def_label(pretty_printer__expand_format_susp_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(pretty_printer__expand_format_susp_4_0_i7);
	}
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = ((MR_Integer) MR_tfield(0, MR_r2, 0) - (MR_Integer) 1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pretty_printer__expand_format_susp_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__pretty_printer__expand_format_susp_4_0_i10);
MR_def_label(pretty_printer__expand_format_susp_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = ((MR_Integer) MR_tfield(1, MR_r2, 0) - (MR_Integer) 1);
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

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__string__count_codepoints_1_0);

MR_BEGIN_MODULE(pretty_printer_module21)
	MR_init_entry1(pretty_printer__expand_docs_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__expand_docs_11_0);
	MR_init_label10(pretty_printer__expand_docs_11_0,182,3,9,7,5,13,12,16,15,21)
	MR_init_label10(pretty_printer__expand_docs_11_0,20,25,24,29,28,33,32,37,36,42)
	MR_init_label8(pretty_printer__expand_docs_11_0,44,41,47,46,51,55,54,57)
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
MR_def_label(pretty_printer__expand_docs_11_0,182)
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
	MR_sv(9) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
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
	if (MR_PTAG_TESTR(MR_sv(8),2)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_tfield(2, MR_sv(8), 0);
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
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i182);
	}
MR_def_label(pretty_printer__expand_docs_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(8) == (MR_Integer) MR_tbmkword(0, 1)) || ((MR_Integer) MR_sv(8) == (MR_Integer) MR_tbmkword(0, 0))))) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i15);
	}
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i16);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__expand_docs_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i44);
MR_def_label(pretty_printer__expand_docs_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i20);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tfield(1, MR_sv(8), 0);
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		pretty_printer__expand_docs_11_0_i21);
MR_def_label(pretty_printer__expand_docs_11_0,21)
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
		pretty_printer__expand_docs_11_0_i55);
MR_def_label(pretty_printer__expand_docs_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_list_5_0,
		pretty_printer__expand_docs_11_0_i25);
MR_def_label(pretty_printer__expand_docs_11_0,25)
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
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i182);
	}
MR_def_label(pretty_printer__expand_docs_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,3)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(pretty_printer__expand_format_susp_4_0,
		pretty_printer__expand_docs_11_0_i29);
MR_def_label(pretty_printer__expand_docs_11_0,29)
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
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i182);
	}
MR_def_label(pretty_printer__expand_docs_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,2)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_tempr2 = MR_sv(8);
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_term_6_0,
		pretty_printer__expand_docs_11_0_i33);
MR_def_label(pretty_printer__expand_docs_11_0,33)
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
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i182);
	}
MR_def_label(pretty_printer__expand_docs_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_r3 = MR_tfield(3, MR_sv(8), 1);
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_pp_7_0,
		pretty_printer__expand_docs_11_0_i37);
MR_def_label(pretty_printer__expand_docs_11_0,37)
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
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i182);
	}
MR_def_label(pretty_printer__expand_docs_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_tfield(3, MR_sv(8), 1);
	if (MR_LTAGS_TESTR(MR_r8,0,1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i41);
	}
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i42);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i44);
MR_def_label(pretty_printer__expand_docs_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 0);
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
MR_def_label(pretty_printer__expand_docs_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i46);
	}
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i47);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i55);
MR_def_label(pretty_printer__expand_docs_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 0);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i55);
MR_def_label(pretty_printer__expand_docs_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,2)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i51);
	}
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i55);
MR_def_label(pretty_printer__expand_docs_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i54);
	}
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_0,
		pretty_printer__expand_docs_11_0_i55);
MR_def_label(pretty_printer__expand_docs_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__expand_docs_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,3)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i57);
	}
	MR_r3 = MR_sv(9);
	MR_r5 = MR_tfield(3, MR_r8, 0);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i182);
MR_def_label(pretty_printer__expand_docs_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r6 = MR_tfield(2, MR_r8, 0);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_0_i182);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module22)
	MR_init_entry1(pretty_printer__expand_docs_11_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__expand_docs_11_1);
	MR_init_label10(pretty_printer__expand_docs_11_1,182,3,9,7,5,13,12,16,15,21)
	MR_init_label10(pretty_printer__expand_docs_11_1,20,25,24,29,28,33,32,37,36,42)
	MR_init_label8(pretty_printer__expand_docs_11_1,44,41,47,46,51,55,54,57)
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
MR_def_label(pretty_printer__expand_docs_11_1,182)
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
	MR_sv(9) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
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
	if (MR_PTAG_TESTR(MR_sv(8),2)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_tfield(2, MR_sv(8), 0);
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
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i182);
	}
MR_def_label(pretty_printer__expand_docs_11_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(8) == (MR_Integer) MR_tbmkword(0, 1)) || ((MR_Integer) MR_sv(8) == (MR_Integer) MR_tbmkword(0, 0))))) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i15);
	}
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i16);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(pretty_printer__expand_docs_11_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i44);
MR_def_label(pretty_printer__expand_docs_11_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i20);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tfield(1, MR_sv(8), 0);
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		pretty_printer__expand_docs_11_1_i21);
MR_def_label(pretty_printer__expand_docs_11_1,21)
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
		pretty_printer__expand_docs_11_1_i55);
MR_def_label(pretty_printer__expand_docs_11_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_list_5_0,
		pretty_printer__expand_docs_11_1_i25);
MR_def_label(pretty_printer__expand_docs_11_1,25)
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
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i182);
	}
MR_def_label(pretty_printer__expand_docs_11_1,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,3)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i28);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(pretty_printer__expand_format_susp_4_0,
		pretty_printer__expand_docs_11_1_i29);
MR_def_label(pretty_printer__expand_docs_11_1,29)
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
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i182);
	}
MR_def_label(pretty_printer__expand_docs_11_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,2)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i32);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_tempr2 = MR_sv(8);
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_term_6_0,
		pretty_printer__expand_docs_11_1_i33);
MR_def_label(pretty_printer__expand_docs_11_1,33)
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
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i182);
	}
MR_def_label(pretty_printer__expand_docs_11_1,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_r3 = MR_tfield(3, MR_sv(8), 1);
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_pp_7_1,
		pretty_printer__expand_docs_11_1_i37);
MR_def_label(pretty_printer__expand_docs_11_1,37)
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
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i182);
	}
MR_def_label(pretty_printer__expand_docs_11_1,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_tfield(3, MR_sv(8), 1);
	if (MR_LTAGS_TESTR(MR_r8,0,1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i41);
	}
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i42);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i44);
MR_def_label(pretty_printer__expand_docs_11_1,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 0);
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
MR_def_label(pretty_printer__expand_docs_11_1,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i46);
	}
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i47);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i55);
MR_def_label(pretty_printer__expand_docs_11_1,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 0);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i55);
MR_def_label(pretty_printer__expand_docs_11_1,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,2)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i51);
	}
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i55);
MR_def_label(pretty_printer__expand_docs_11_1,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,1)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i54);
	}
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(pretty_printer__expand_docs_11_1,
		pretty_printer__expand_docs_11_1_i55);
MR_def_label(pretty_printer__expand_docs_11_1,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pretty_printer__expand_docs_11_1,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,3)) {
		MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i57);
	}
	MR_r3 = MR_sv(9);
	MR_r5 = MR_tfield(3, MR_r8, 0);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i182);
MR_def_label(pretty_printer__expand_docs_11_1,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_r6 = MR_tfield(2, MR_r8, 0);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(pretty_printer__expand_docs_11_1_i182);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stream__put_4_0);
MR_decl_entry(fn__list__det_tail_1_0);

MR_BEGIN_MODULE(pretty_printer_module23)
	MR_init_entry1(pretty_printer__write_doc_to_stream_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__write_doc_to_stream_17_0);
	MR_init_label10(pretty_printer__write_doc_to_stream_17_0,114,3,5,4,8,7,11,12,10,9)
	MR_init_label10(pretty_printer__write_doc_to_stream_17_0,15,14,17,18,16,20,19,23,22,26)
	MR_init_label10(pretty_printer__write_doc_to_stream_17_0,25,29,28,32,34,36,35,33,39,38)
	MR_init_label2(pretty_printer__write_doc_to_stream_17_0,40,42)
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
MR_def_label(pretty_printer__write_doc_to_stream_17_0,114)
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
	MR_sv(10) = MR_tfield(1, MR_tempr1, 1);
	MR_r13 = MR_tfield(1, MR_tempr1, 0);
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
	if (MR_LTAGS_TESTR(MR_r13,0,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i7);
	}
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
		pretty_printer__write_doc_to_stream_17_0_i8);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r9 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r13,0,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i9);
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
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__pretty_printer__list__foldl__ho19_3_0,
		pretty_printer__write_doc_to_stream_17_0_i11);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = ((MR_Integer) MR_tempr2 - (MR_Integer) MR_r1);
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i10);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(pretty_printer__format_nl_8_0,
		pretty_printer__write_doc_to_stream_17_0_i12);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r9 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r13,2)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i14);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_tfield(2, MR_r13, 0);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		pretty_printer__write_doc_to_stream_17_0_i15);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r13,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i16);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(11) = MR_tfield(1, MR_r13, 0);
	MR_sv(12) = MR_r1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r12;
	MR_np_call_localret_ent(stream__put_4_0,
		pretty_printer__write_doc_to_stream_17_0_i17);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		pretty_printer__write_doc_to_stream_17_0_i18);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = ((MR_Integer) MR_sv(5) - (MR_Integer) MR_r1);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r13,3,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i19);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r13;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_r10;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_list_5_0,
		pretty_printer__write_doc_to_stream_17_0_i20);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_tempr2;
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r13,3,3)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r13, 1);
	MR_r2 = MR_r10;
	MR_np_call_localret_ent(pretty_printer__expand_format_susp_4_0,
		pretty_printer__write_doc_to_stream_17_0_i23);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_tempr2;
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r13,3,2)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i25);
	}
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
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_tempr2 = MR_r13;
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r3 = MR_r10;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_term_6_0,
		pretty_printer__write_doc_to_stream_17_0_i26);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_tempr2;
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r13,3,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i28);
	}
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
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(3, MR_r13, 1);
	MR_r4 = MR_r10;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(pretty_printer__expand_pp_7_0,
		pretty_printer__write_doc_to_stream_17_0_i29);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_tempr2;
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(3, MR_r13, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i32);
	}
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i33);
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
	MR_sv(11) = MR_r12;
	MR_sv(8) = (MR_Integer) 1;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(10);
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
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_sv(11);
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
	MR_r11 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r9 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r7 = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
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
	MR_r11 = MR_tempr2;
	MR_r8 = MR_sv(6);
	MR_r10 = MR_tempr1;
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,2)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i38);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(11) = MR_r12;
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
	MR_r6 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_r1;
	MR_r10 = MR_sv(8);
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
MR_def_label(pretty_printer__write_doc_to_stream_17_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r6, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r8;
	MR_r6 = MR_sv(10);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(10);
	MR_r10 = MR_tfield(3, MR_tempr1, 0);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(10);
	MR_r11 = MR_tfield(2, MR_tempr1, 0);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_0_i114);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module24)
	MR_init_entry1(pretty_printer__write_doc_to_stream_17_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__write_doc_to_stream_17_1);
	MR_init_label10(pretty_printer__write_doc_to_stream_17_1,114,3,5,4,8,7,11,12,10,9)
	MR_init_label10(pretty_printer__write_doc_to_stream_17_1,15,14,17,18,16,20,19,23,22,26)
	MR_init_label10(pretty_printer__write_doc_to_stream_17_1,25,29,28,32,34,36,35,33,39,38)
	MR_init_label2(pretty_printer__write_doc_to_stream_17_1,40,42)
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
MR_def_label(pretty_printer__write_doc_to_stream_17_1,114)
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
	MR_sv(10) = MR_tfield(1, MR_tempr1, 1);
	MR_r13 = MR_tfield(1, MR_tempr1, 0);
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
	if (MR_LTAGS_TESTR(MR_r13,0,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i7);
	}
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
		pretty_printer__write_doc_to_stream_17_1_i8);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r9 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r13,0,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i9);
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
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__pretty_printer__list__foldl__ho18_3_0,
		pretty_printer__write_doc_to_stream_17_1_i11);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = ((MR_Integer) MR_tempr2 - (MR_Integer) MR_r1);
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i10);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(pretty_printer__format_nl_8_0,
		pretty_printer__write_doc_to_stream_17_1_i12);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r9 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r13,2)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i14);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_tfield(2, MR_r13, 0);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		pretty_printer__write_doc_to_stream_17_1_i15);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r13,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i16);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(11) = MR_tfield(1, MR_r13, 0);
	MR_sv(12) = MR_r1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r12;
	MR_np_call_localret_ent(stream__put_4_0,
		pretty_printer__write_doc_to_stream_17_1_i17);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		pretty_printer__write_doc_to_stream_17_1_i18);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = ((MR_Integer) MR_sv(5) - (MR_Integer) MR_r1);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r13,3,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i19);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r13;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_r10;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_list_5_0,
		pretty_printer__write_doc_to_stream_17_1_i20);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_tempr2;
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r13,3,3)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r13, 1);
	MR_r2 = MR_r10;
	MR_np_call_localret_ent(pretty_printer__expand_format_susp_4_0,
		pretty_printer__write_doc_to_stream_17_1_i23);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_tempr2;
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r13,3,2)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i25);
	}
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
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_tempr2 = MR_r13;
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r3 = MR_r10;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__expand_format_term_6_0,
		pretty_printer__write_doc_to_stream_17_1_i26);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_tempr2;
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r13,3,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i28);
	}
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
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(3, MR_r13, 1);
	MR_r4 = MR_r10;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(pretty_printer__expand_pp_7_1,
		pretty_printer__write_doc_to_stream_17_1_i29);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_tempr2;
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(3, MR_r13, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i32);
	}
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i33);
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
	MR_sv(11) = MR_r12;
	MR_sv(8) = (MR_Integer) 1;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(10);
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
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_sv(11);
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
	MR_r11 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r9 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r7 = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
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
	MR_r11 = MR_tempr2;
	MR_r8 = MR_sv(6);
	MR_r10 = MR_tempr1;
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,2)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i38);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(11) = MR_r12;
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
	MR_r6 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r8 = MR_r1;
	MR_r10 = MR_sv(8);
	MR_r9 = MR_sv(7);
	MR_r12 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
MR_def_label(pretty_printer__write_doc_to_stream_17_1,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r6, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r8;
	MR_r6 = MR_sv(10);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(10);
	MR_r10 = MR_tfield(3, MR_tempr1, 0);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
	}
MR_def_label(pretty_printer__write_doc_to_stream_17_1,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(10);
	MR_r11 = MR_tfield(2, MR_tempr1, 0);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(pretty_printer__write_doc_to_stream_17_1_i114);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module25)
	MR_init_entry1(pretty_printer__write_doc_to_stream_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__write_doc_to_stream_9_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__write_doc_to_stream_9_1);
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
	MR_init_entry1(pretty_printer__set_default_formatter_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_default_formatter_map_3_0);
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
	MR_Word	FMap;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_map_3_0
	FMap = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_default_formatter_map");
{
#line 1013 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;
;}
#line 6159 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("set_default_formatter_map");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module28)
	MR_init_entry1(pretty_printer__pretty_printer_is_initialised_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__pretty_printer_is_initialised_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pretty_printer_is_initialised'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__pretty_printer_is_initialised_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Okay;
#define	MR_PROC_LABEL	mercury__pretty_printer__pretty_printer_is_initialised_3_0
{
#line 924 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;
;}
#line 6192 "pretty_printer.c"
	MR_r1 = Okay;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module29)
	MR_init_entry1(pretty_printer__unsafe_get_default_formatter_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__unsafe_get_default_formatter_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_default_formatter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__unsafe_get_default_formatter_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	FMap;
#define	MR_PROC_LABEL	mercury__pretty_printer__unsafe_get_default_formatter_map_3_0
{
#line 966 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;
;}
#line 6225 "pretty_printer.c"
	MR_r1 = FMap;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module30)
	MR_init_entry1(fn__pretty_printer__initial_formatter_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__initial_formatter_map_0_0);
	MR_init_label7(fn__pretty_printer__initial_formatter_map_0_0,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initial_formatter_map'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pretty_printer__initial_formatter_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("builtin", 7);
	MR_r2 = (MR_Word) MR_string_const("character", 9);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__pretty_printer__set_formatter_5_0,
		fn__pretty_printer__initial_formatter_map_0_0_i3);
MR_def_label(fn__pretty_printer__initial_formatter_map_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("builtin", 7);
	MR_r2 = (MR_Word) MR_string_const("float", 5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho12_6_0,
		fn__pretty_printer__initial_formatter_map_0_0_i4);
MR_def_label(fn__pretty_printer__initial_formatter_map_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("builtin", 7);
	MR_r2 = (MR_Word) MR_string_const("int", 3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho11_6_0,
		fn__pretty_printer__initial_formatter_map_0_0_i5);
MR_def_label(fn__pretty_printer__initial_formatter_map_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("builtin", 7);
	MR_r2 = (MR_Word) MR_string_const("string", 6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho10_6_0,
		fn__pretty_printer__initial_formatter_map_0_0_i6);
MR_def_label(fn__pretty_printer__initial_formatter_map_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("array", 5);
	MR_r2 = (MR_Word) MR_string_const("array", 5);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho9_6_0,
		fn__pretty_printer__initial_formatter_map_0_0_i7);
MR_def_label(fn__pretty_printer__initial_formatter_map_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("list", 4);
	MR_r2 = (MR_Word) MR_string_const("list", 4);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho8_6_0,
		fn__pretty_printer__initial_formatter_map_0_0_i8);
MR_def_label(fn__pretty_printer__initial_formatter_map_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("tree234", 7);
	MR_r2 = (MR_Word) MR_string_const("tree234", 7);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(pretty_printer__set_formatter_sv__ho7_6_0,
		fn__pretty_printer__initial_formatter_map_0_0_i9);
MR_def_label(fn__pretty_printer__initial_formatter_map_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("version_array", 13);
	MR_r2 = (MR_Word) MR_string_const("version_array", 13);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(pretty_printer__set_formatter_sv__ho6_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module31)
	MR_init_entry1(pretty_printer__get_default_formatter_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__get_default_formatter_map_3_0);
	MR_init_label2(pretty_printer__get_default_formatter_map_3_0,4,3)
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
	MR_Word	Okay;
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_formatter_map_3_0
{
#line 924 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;
;}
#line 6374 "pretty_printer.c"
	MR_r1 = Okay;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(pretty_printer__get_default_formatter_map_3_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__pretty_printer__initial_formatter_map_0_0,
		pretty_printer__get_default_formatter_map_3_0_i4);
MR_def_label(pretty_printer__get_default_formatter_map_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	FMap;
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_formatter_map_3_0
	FMap = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_default_formatter_map");
{
#line 1013 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;
;}
#line 6398 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("set_default_formatter_map");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
MR_def_label(pretty_printer__get_default_formatter_map_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	FMap;
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_formatter_map_3_0
{
#line 966 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;
;}
#line 6413 "pretty_printer.c"
	MR_r1 = FMap;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module32)
	MR_init_entry1(pretty_printer__set_default_formatter_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_default_formatter_6_0);
	MR_init_label3(pretty_printer__set_default_formatter_6_0,4,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_default_formatter'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__set_default_formatter_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word	Okay;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_6_0
{
#line 924 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;
;}
#line 6449 "pretty_printer.c"
	MR_r5 = Okay;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(pretty_printer__set_default_formatter_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__pretty_printer__initial_formatter_map_0_0,
		pretty_printer__set_default_formatter_6_0_i4);
MR_def_label(pretty_printer__set_default_formatter_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	FMap;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_6_0
	FMap = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_default_formatter_map");
{
#line 1013 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;
;}
#line 6475 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("set_default_formatter_map");
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pretty_printer__set_formatter_5_0,
		pretty_printer__set_default_formatter_6_0_i5);
MR_def_label(pretty_printer__set_default_formatter_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	FMap;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_6_0
{
#line 966 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;
;}
#line 6500 "pretty_printer.c"
	MR_r5 = FMap;
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__pretty_printer__set_formatter_5_0,
		pretty_printer__set_default_formatter_6_0_i5);
MR_def_label(pretty_printer__set_default_formatter_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	FMap;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_formatter_6_0
	FMap = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_default_formatter_map");
{
#line 1013 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;
;}
#line 6519 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("set_default_formatter_map");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module33)
	MR_init_entry1(pretty_printer__lock_io_pp_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__lock_io_pp_params_0_0);
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
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6553 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module34)
	MR_init_entry1(pretty_printer__unlock_io_pp_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__unlock_io_pp_params_0_0);
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
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6586 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module35)
	MR_init_entry1(pretty_printer__unsafe_get_io_pp_params_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__unsafe_get_io_pp_params_1_0);
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
#line 878 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;
;}
#line 6617 "pretty_printer.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module36)
	MR_init_entry1(pretty_printer__get_io_pp_params_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__get_io_pp_params_3_0);
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
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6651 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__get_io_pp_params_3_0
{
#line 878 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;
;}
#line 6663 "pretty_printer.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__get_io_pp_params_3_0
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6676 "pretty_printer.c"
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


MR_BEGIN_MODULE(pretty_printer_module37)
	MR_init_entry1(pretty_printer__get_default_params_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__get_default_params_3_0);
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
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6711 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_params_3_0
{
#line 878 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;
;}
#line 6723 "pretty_printer.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__get_default_params_3_0
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6736 "pretty_printer.c"
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


MR_BEGIN_MODULE(pretty_printer_module38)
	MR_init_entry1(pretty_printer__unsafe_set_io_pp_params_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__unsafe_set_io_pp_params_1_0);
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
#line 878 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;
;}
#line 6770 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module39)
	MR_init_entry1(pretty_printer__set_io_pp_params_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_io_pp_params_3_0);
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
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6803 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_io_pp_params_3_0
	X = MR_r1;
{
#line 878 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;
;}
#line 6814 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_io_pp_params_3_0
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6826 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module40)
	MR_init_entry1(pretty_printer__set_default_params_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_default_params_3_0);
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
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6859 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_params_3_0
	X = MR_r1;
{
#line 878 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;
;}
#line 6870 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__set_default_params_3_0
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6882 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module41)
	MR_init_entry1(pretty_printer__write_doc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__write_doc_4_0);
	MR_init_label3(pretty_printer__write_doc_4_0,4,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_doc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pretty_printer__write_doc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word	Okay;
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
{
#line 924 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;
;}
#line 6917 "pretty_printer.c"
	MR_r3 = Okay;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(pretty_printer__write_doc_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__pretty_printer__initial_formatter_map_0_0,
		pretty_printer__write_doc_4_0_i4);
MR_def_label(pretty_printer__write_doc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	FMap;
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
	FMap = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_default_formatter_map");
{
#line 1013 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;
;}
#line 6941 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("set_default_formatter_map");
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_GOTO_LAB(pretty_printer__write_doc_4_0_i2);
MR_def_label(pretty_printer__write_doc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	FMap;
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
{
#line 966 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;
;}
#line 6959 "pretty_printer.c"
	MR_r4 = FMap;
#undef	MR_PROC_LABEL
	}
	MR_r10 = MR_r2;
	MR_r2 = MR_r1;
	MR_r8 = MR_r10;
MR_def_label(pretty_printer__write_doc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 6977 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
{
#line 878 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;
;}
#line 6989 "pretty_printer.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__write_doc_4_0
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 7002 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r3 = (MR_Integer) 2;
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	MR_r7 = MR_tfield(0, MR_tempr1, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(pretty_printer__write_doc_to_stream_9_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module42)
	MR_init_entry1(pretty_printer__write_doc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__write_doc_3_0);
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
#line 1303 "io.opt"

    Stream = &mercury_stdout;
;}
#line 7044 "pretty_printer.c"
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


MR_BEGIN_MODULE(pretty_printer_module43)
	MR_init_entry1(pretty_printer__pre_initialise_mutable_io_pp_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_0);
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
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif
;}
#line 7082 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_io_pp_params");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module44)
	MR_init_entry1(pretty_printer__initialise_mutable_io_pp_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__initialise_mutable_io_pp_params_0_0);
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
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif
;}
#line 7116 "pretty_printer.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_io_pp_params");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_pp_params_0_0
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 7129 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_pp_params_0_0
	X = (MR_Word) MR_TAG_COMMON(0,11,0);
{
#line 878 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;
;}
#line 7140 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__pretty_printer__initialise_mutable_io_pp_params_0_0
{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif
;}
#line 7152 "pretty_printer.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module45)
	MR_init_entry1(fn__pretty_printer__fmt_char_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__fmt_char_2_0);
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


MR_BEGIN_MODULE(pretty_printer_module46)
	MR_init_entry1(fn__pretty_printer__fmt_float_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__fmt_float_2_0);
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


MR_BEGIN_MODULE(pretty_printer_module47)
	MR_init_entry1(fn__pretty_printer__fmt_int_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__fmt_int_2_0);
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


MR_BEGIN_MODULE(pretty_printer_module48)
	MR_init_entry1(fn__pretty_printer__fmt_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__fmt_string_2_0);
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

MR_BEGIN_MODULE(pretty_printer_module49)
	MR_init_entry1(fn__pretty_printer__fmt_array_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__fmt_array_2_0);
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
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_array_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pretty_printer__fmt_array_2_0
	TypeInfo = MR_tempr1;
{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 7286 "pretty_printer.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
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

extern const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1;
MR_decl_entry(fn__version_array__version_array_to_doc_1_0);

MR_BEGIN_MODULE(pretty_printer_module50)
	MR_init_entry1(fn__pretty_printer__fmt_version_array_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__fmt_version_array_2_0);
	MR_init_label2(fn__pretty_printer__fmt_version_array_2_0,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fmt_version_array'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__fmt_version_array_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_version_array_2_0_i2);
	}
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_version_array_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pretty_printer__fmt_version_array_2_0
	TypeInfo = MR_tempr1;
{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 7358 "pretty_printer.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		fn__pretty_printer__fmt_version_array_2_0_i6);
MR_def_label(fn__pretty_printer__fmt_version_array_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_version_array_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__version_array__version_array_to_doc_1_0);
MR_def_label(fn__pretty_printer__fmt_version_array_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__list_to_doc_1_0);

MR_BEGIN_MODULE(pretty_printer_module51)
	MR_init_entry1(fn__pretty_printer__fmt_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__fmt_list_2_0);
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
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_list_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pretty_printer__fmt_list_2_0
	TypeInfo = MR_tempr1;
{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 7429 "pretty_printer.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__tree234__tree234_to_doc_1_0);

MR_BEGIN_MODULE(pretty_printer_module52)
	MR_init_entry1(fn__pretty_printer__fmt_tree234_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__fmt_tree234_2_0);
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_tree234_2_0_i2);
	}
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__pretty_printer__fmt_tree234_2_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pretty_printer__fmt_tree234_2_0
	TypeInfo = MR_tempr2;
{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 7505 "pretty_printer.c"
	MR_tempr2 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_tfield(1, MR_r4, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pretty_printer__fmt_tree234_2_0
	TypeInfo = MR_tempr3;
{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 7520 "pretty_printer.c"
	MR_tempr4 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tfield(0, MR_r2, 2) = MR_tempr4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(private_builtin__builtin_unify_pred_2_0);
MR_decl_entry(__Unify___univ__univ_0_0);

MR_BEGIN_MODULE(pretty_printer_module53)
	MR_init_entry1(__Unify___pretty_printer__doc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pretty_printer__doc_0_0);
	MR_init_label10(__Unify___pretty_printer__doc_0_0,116,5,6,7,11,15,13,19,23,59)
	MR_init_label2(__Unify___pretty_printer__doc_0_0,27,1)
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
MR_def_label(__Unify___pretty_printer__doc_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i59);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___pretty_printer__doc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___pretty_printer__doc_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___pretty_printer__doc_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___pretty_printer__doc_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i13);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___pretty_printer__doc_0_0_i15);
MR_def_label(__Unify___pretty_printer__doc_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i116);
MR_def_label(__Unify___pretty_printer__doc_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i19);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___pretty_printer__doc_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i23);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___pretty_printer__doc_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i27);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___univ__univ_0_0);
MR_def_label(__Unify___pretty_printer__doc_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___pretty_printer__doc_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___pretty_printer__doc_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___pretty_printer__pp_internal_0_0);
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
MR_decl_entry(private_builtin__builtin_compare_pred_3_0);
MR_decl_entry(__Compare___univ__univ_0_0);

MR_BEGIN_MODULE(pretty_printer_module54)
	MR_init_entry1(__Compare___pretty_printer__doc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pretty_printer__doc_0_0);
	MR_init_label10(__Compare___pretty_printer__doc_0_0,547,7,8,9,10,11,12,13,5,17)
	MR_init_label10(__Compare___pretty_printer__doc_0_0,18,19,20,21,22,23,15,27,28,29)
	MR_init_label10(__Compare___pretty_printer__doc_0_0,31,32,33,34,25,38,39,40,42,242)
	MR_init_label10(__Compare___pretty_printer__doc_0_0,41,47,48,49,36,53,54,55,56,59)
	MR_init_label10(__Compare___pretty_printer__doc_0_0,57,64,65,51,69,70,71,72,73,74)
	MR_init_label10(__Compare___pretty_printer__doc_0_0,76,67,80,81,82,83,84,85,89,90)
	MR_init_label10(__Compare___pretty_printer__doc_0_0,93,86,78,101,102,103,195,104,105,106)
	MR_init_label10(__Compare___pretty_printer__doc_0_0,284,107,99,111,112,113,114,115,116,117)
	MR_init_label2(__Compare___pretty_printer__doc_0_0,118,622)
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
MR_def_label(__Compare___pretty_printer__doc_0_0,547)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i242);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i284);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i284);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i25);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(pretty_printer, doc);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___pretty_printer__doc_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i31);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i284);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i36);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i41);
	}
	MR_r4 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___pretty_printer__doc_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_tempr1;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 7996 "pretty_printer.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___pretty_printer__doc_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i195);
	}
MR_def_label(__Compare___pretty_printer__doc_0_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i284);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i51);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i53);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i54);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i56);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i57);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___pretty_printer__doc_0_0_i59);
MR_def_label(__Compare___pretty_printer__doc_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i622);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i547);
MR_def_label(__Compare___pretty_printer__doc_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i65);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i284);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i67);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i69);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i70);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i71);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i72);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i73);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i74);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___pretty_printer__doc_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i76);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i284);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i78);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i81);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i82);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i83);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i84);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i85);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i86);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_r5 = MR_tfield(3, MR_tempr2, 2);
	MR_r6 = MR_tfield(3, MR_tempr1, 1);
	MR_r7 = MR_tfield(3, MR_tempr2, 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___pretty_printer__doc_0_0
	S1 = (MR_String) MR_r6;
	S2 = (MR_String) MR_r7;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 8257 "pretty_printer.c"
	MR_r6 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r6,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i89);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i93);
	}
MR_def_label(__Compare___pretty_printer__doc_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i90);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i93);
MR_def_label(__Compare___pretty_printer__doc_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r4;
MR_def_label(__Compare___pretty_printer__doc_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i622);
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
MR_def_label(__Compare___pretty_printer__doc_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i284);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i99);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i101);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i102);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i103);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i104);
	}
MR_def_label(__Compare___pretty_printer__doc_0_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i105);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i106);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i107);
	}
MR_def_label(__Compare___pretty_printer__doc_0_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i284);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___univ__univ_0_0);
MR_def_label(__Compare___pretty_printer__doc_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i111);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i112);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i113);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i114);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i115);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i116);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i117);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__doc_0_0_i118);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__doc_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___pretty_printer__pp_internal_0_0);
MR_def_label(__Compare___pretty_printer__doc_0_0,622)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module55)
	MR_init_entry1(__Unify___pretty_printer__docs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pretty_printer__docs_0_0);
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


MR_BEGIN_MODULE(pretty_printer_module56)
	MR_init_entry1(__Compare___pretty_printer__docs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pretty_printer__docs_0_0);
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


MR_BEGIN_MODULE(pretty_printer_module57)
	MR_init_entry1(__Unify___pretty_printer__formatter_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pretty_printer__formatter_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pretty_printer__formatter_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module58)
	MR_init_entry1(__Compare___pretty_printer__formatter_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pretty_printer__formatter_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pretty_printer__formatter_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(pretty_printer_module59)
	MR_init_entry1(__Unify___pretty_printer__formatter_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pretty_printer__formatter_map_0_0);
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

MR_BEGIN_MODULE(pretty_printer_module60)
	MR_init_entry1(__Compare___pretty_printer__formatter_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pretty_printer__formatter_map_0_0);
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


MR_BEGIN_MODULE(pretty_printer_module61)
	MR_init_entry1(__Unify___pretty_printer__formatting_limit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pretty_printer__formatting_limit_0_0);
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
	MR_Word MR_tempr1, MR_tempr2;
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_r2);
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
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
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


MR_BEGIN_MODULE(pretty_printer_module62)
	MR_init_entry1(__Compare___pretty_printer__formatting_limit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pretty_printer__formatting_limit_0_0);
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
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
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
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
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


MR_BEGIN_MODULE(pretty_printer_module63)
	MR_init_entry1(__Unify___pretty_printer__indents_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pretty_printer__indents_0_0);
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


MR_BEGIN_MODULE(pretty_printer_module64)
	MR_init_entry1(__Compare___pretty_printer__indents_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pretty_printer__indents_0_0);
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


MR_BEGIN_MODULE(pretty_printer_module65)
	MR_init_entry1(__Unify___pretty_printer__pp_internal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pretty_printer__pp_internal_0_0);
	MR_init_label7(__Unify___pretty_printer__pp_internal_0_0,5,6,7,8,28,10,1)
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
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i28);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___pretty_printer__formatting_limit_0_0);
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_internal_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___pretty_printer__pp_internal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module66)
	MR_init_entry1(__Compare___pretty_printer__pp_internal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pretty_printer__pp_internal_0_0);
	MR_init_label10(__Compare___pretty_printer__pp_internal_0_0,7,8,9,10,5,14,15,16,17,12)
	MR_init_label10(__Compare___pretty_printer__pp_internal_0_0,21,22,23,24,19,28,29,30,32,31)
	MR_init_label10(__Compare___pretty_printer__pp_internal_0_0,26,40,41,42,88,43,38,47,48,49)
	MR_init_label6(__Compare___pretty_printer__pp_internal_0_0,93,50,51,95,52,96)
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
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i96);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i95);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i95);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i19);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i24);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i95);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i26);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i31);
	}
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___pretty_printer__pp_internal_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 9093 "pretty_printer.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i88);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i95);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i38);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i43);
	}
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i93);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___pretty_printer__formatting_limit_0_0);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i47);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i48);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i50);
	}
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i51);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i52);
	}
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___pretty_printer__pp_internal_0_0_i88);
	}
MR_def_label(__Compare___pretty_printer__pp_internal_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module67)
	MR_init_entry1(__Unify___pretty_printer__pp_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pretty_printer__pp_params_0_0);
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
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___pretty_printer__pp_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
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


MR_BEGIN_MODULE(pretty_printer_module68)
	MR_init_entry1(__Compare___pretty_printer__pp_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pretty_printer__pp_params_0_0);
	MR_init_label9(__Compare___pretty_printer__pp_params_0_0,3,2,6,7,9,14,15,17,49)
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
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
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


MR_BEGIN_MODULE(pretty_printer_module69)
	MR_init_entry1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_0);
	MR_init_label1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__write_doc_to_stream__391__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_0_i2);
MR_def_label(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module70)
	MR_init_entry1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_0);
	MR_init_label1(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__write_doc_to_stream__391__2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_0_i2);
MR_def_label(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module71)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho6_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_formatter_sv__ho6_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_formatter_sv__ho6'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__set_formatter_sv__ho6_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module72)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho7_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_formatter_sv__ho7_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_formatter_sv__ho7'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__set_formatter_sv__ho7_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,2);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module73)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho8_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_formatter_sv__ho8_6_0);
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
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,3);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module74)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho9_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_formatter_sv__ho9_6_0);
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
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,4);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module75)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho10_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_formatter_sv__ho10_6_0);
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
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,5);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module76)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho11_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_formatter_sv__ho11_6_0);
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
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,6);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module77)
	MR_init_entry1(pretty_printer__set_formatter_sv__ho12_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__set_formatter_sv__ho12_6_0);
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
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,7);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__pretty_printer__set_formatter_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module78)
	MR_init_entry1(fn__pretty_printer__list__foldl__ho18_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__list__foldl__ho18_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho18'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__list__foldl__ho18_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(pretty_printer__list__foldl__ho24_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module79)
	MR_init_entry1(fn__pretty_printer__list__foldl__ho19_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pretty_printer__list__foldl__ho19_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho19'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pretty_printer__list__foldl__ho19_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(pretty_printer__list__foldl__ho23_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module80)
	MR_init_entry1(pretty_printer__list__foldl__ho23_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__list__foldl__ho23_4_0);
	MR_init_label3(pretty_printer__list__foldl__ho23_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho23'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pretty_printer__list__foldl__ho23_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(pretty_printer__list__foldl__ho23_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(pretty_printer__list__foldl__ho23_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(pretty_printer__list__foldl__ho23_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_0,
		pretty_printer__list__foldl__ho23_4_0_i4);
MR_def_label(pretty_printer__list__foldl__ho23_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(pretty_printer__list__foldl__ho23_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module81)
	MR_init_entry1(pretty_printer__list__foldl__ho24_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pretty_printer__list__foldl__ho24_4_0);
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_0,
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

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(univ__type_to_univ_2_2);
MR_decl_entry(fn__term_io__quoted_char_1_0);

MR_BEGIN_MODULE(pretty_printer_module82)
	MR_init_entry1(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0);
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,12);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

MR_BEGIN_MODULE(pretty_printer_module83)
	MR_init_entry1(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0);
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
	MR_Float	Flt;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0
	Flt = MR_word_to_float(MR_r2);
{
#line 298 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
};}
#line 9863 "pretty_printer.c"
	MR_r2 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,13);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);

MR_BEGIN_MODULE(pretty_printer_module84)
	MR_init_entry1(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0);
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,14);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module85)
	MR_init_entry1(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0);
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
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,8);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,16);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pretty_printer_module86)
	MR_init_entry1(fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_114_101_116_116_121_95_112_114_105_110_116_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
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
#line 878 "pretty_printer.m"
MR_Word mercury__pretty_printer__mutable_variable_io_pp_params;
#ifdef MR_THREAD_SAFE
    MercuryLock mercury__pretty_printer__mutable_variable_io_pp_params_lock;
#endif

#line 10012 "pretty_printer.c"
#line 895 "pretty_printer.m"

    MR_Bool ML_pretty_printer_is_initialised = MR_NO;
    MR_Word ML_pretty_printer_default_formatter_map = 0;

#line 10018 "pretty_printer.c"

MR_declare_static(mercury__pretty_printer__initialise_mutable_io_pp_params_0_0);

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
#ifdef MR_THREADSCOPE
void mercury__pretty_printer__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__pretty_printer__init_threadscope_string_table(void)
{
}

#endif

void mercury__pretty_printer__required_init(void)
{
	mercury__pretty_printer__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
