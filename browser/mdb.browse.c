/*
** Automatically generated from `browse.m'
** by the Mercury compiler,
** version rotd-2011-09-25, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__browse__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.browse.c"
#include "mdb.browse.mh"

#line 28 "mdb.browse.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.browse.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdb.browse.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 40 "mdb.browse.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdb.browse.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "mdb.browse.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "mdb.browse.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 56 "mdb.browse.c"
#line 57 "mdb.browse.c"
#ifndef MDB__BROWSE_DECL_GUARD
#define MDB__BROWSE_DECL_GUARD

#line 61 "mdb.browse.c"
#line 62 "mdb.browse.c"

#endif
#line 65 "mdb.browse.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_String f1;
	MR_Word * f2;
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Word * f6;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__browse__type_ctor_info_deref_result_1,
	mercury_data_mdb__browse__type_ctor_info_unbound_0,
	mercury_data_mdb__browse__type_ctor_info_xml_function_wrapper_0,
	mercury_data_mdb__browse__type_ctor_info_xml_predicate_wrapper_0;
MR_decl_label10(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0, 2,7,8,6,10,11,12,13,16,17)
MR_decl_label4(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0, 18,5,4,21)
MR_decl_label3(mdb__browse__args_to_string_list_8_0, 18,5,6)
MR_decl_label10(mdb__browse__args_to_string_verbose_list_9_0, 43,7,8,11,5,15,16,17,20,21)
MR_decl_label4(mdb__browse__args_to_string_verbose_list_9_0, 22,24,25,26)
MR_decl_label1(mdb__browse__bool_format_option_is_true_2_0, 1)
MR_decl_label6(mdb__browse__browse_browser_term_9_0, 2,3,4,5,6,7)
MR_decl_label6(mdb__browse__browse_browser_term_format_9_0, 3,4,5,6,7,8)
MR_decl_label6(mdb__browse__browse_browser_term_format_no_modes_8_0, 3,4,5,6,7,8)
MR_decl_label6(mdb__browse__browse_browser_term_no_modes_8_0, 2,3,4,5,6,7)
MR_decl_label7(mdb__browse__browse_external_8_0, 2,4,5,6,7,8,9)
MR_decl_label7(mdb__browse__browse_external_no_modes_7_0, 2,4,5,6,7,8,9)
MR_decl_label7(mdb__browse__browse_main_loop_5_0, 32,3,5,6,11,10,8)
MR_decl_label4(mdb__browse__browser_term_size_left_from_max_3_0, 29,5,6,8)
MR_decl_label7(mdb__browse__browser_term_to_string_2_8_0, 2,3,6,26,7,9,11)
MR_decl_label10(mdb__browse__browser_term_to_string_3_10_0, 9,10,12,2,107,20,22,23,21,29)
MR_decl_label2(mdb__browse__browser_term_to_string_3_10_0, 34,39)
MR_decl_label10(mdb__browse__browser_term_to_string_pretty_8_0, 3,10,11,12,8,15,7,5,18,19)
MR_decl_label9(mdb__browse__browser_term_to_string_pretty_8_0, 55,21,26,34,39,2,44,45,48)
MR_decl_label10(mdb__browse__browser_term_to_string_verbose_2_8_0, 2,6,8,9,11,3,12,36,13,16)
MR_decl_label1(mdb__browse__browser_term_to_string_verbose_2_8_0, 18)
MR_decl_label3(mdb__browse__change_dir_3_0, 4,3,5)
MR_decl_label10(mdb__browse__deref_subterm_3_0, 2,3,6,5,12,19,20,21,22,23)
MR_decl_label9(mdb__browse__deref_subterm_3_0, 18,17,27,26,30,16,34,15,4)
MR_decl_label10(mdb__browse__deref_subterm_2_4_0, 49,3,7,6,11,12,13,15,17,10)
MR_decl_label6(mdb__browse__deref_subterm_2_4_0, 19,9,5,25,24,27)
MR_decl_label9(mdb__browse__do_portray_7_0, 59,9,8,10,11,3,61,17,19)
MR_decl_label10(mdb__browse__do_print_memory_addr_5_0, 3,6,5,7,8,9,12,15,16,17)
MR_decl_label10(mdb__browse__do_print_memory_addr_5_0, 13,20,21,22,23,24,25,11,29,32)
MR_decl_label1(mdb__browse__do_print_memory_addr_5_0, 28)
MR_decl_label1(mdb__browse__help_3_0, 2)
MR_decl_label7(mdb__browse__interpret_format_options_2_0, 2,5,7,12,15,18,10)
MR_decl_label10(mdb__browse__list_tail_to_string_list_8_0, 2,4,7,77,8,12,14,25,6,29)
MR_decl_label10(mdb__browse__list_tail_to_string_list_8_0, 41,42,39,33,48,47,51,52,56,62)
MR_decl_label2(mdb__browse__list_tail_to_string_list_8_0, 58,69)
MR_decl_label7(mdb__browse__maybe_save_term_to_file_xml_5_0, 2,7,6,13,23,24,3)
MR_decl_label10(mdb__browse__portray_6_0, 2,3,4,7,10,11,12,8,15,16)
MR_decl_label8(mdb__browse__portray_6_0, 17,18,19,6,22,24,29,31)
MR_decl_label10(mdb__browse__portray_flat_5_0, 2,6,5,12,13,15,16,18,14,22)
MR_decl_label4(mdb__browse__portray_flat_5_0, 3,28,29,31)
MR_decl_label5(mdb__browse__portray_maybe_path_7_0, 28,7,6,8,9)
MR_decl_label2(mdb__browse__portray_raw_pretty_5_0, 2,3)
MR_decl_label4(mdb__browse__portray_verbose_5_0, 2,3,5,6)
MR_decl_label5(mdb__browse__print_browser_term_6_0, 2,3,4,5,11)
MR_decl_label5(mdb__browse__print_browser_term_format_7_0, 3,4,5,6,12)
MR_decl_label10(mdb__browse__report_deref_error_5_0, 2,5,6,7,3,10,11,12,13,14)
MR_decl_label10(mdb__browse__run_command_7_0, 3,6,8,9,11,14,13,16,18,17)
MR_decl_label10(mdb__browse__run_command_7_0, 20,22,24,27,28,30,26,34,33,37)
MR_decl_label9(mdb__browse__run_command_7_0, 36,39,42,43,46,45,2,51,50)
MR_decl_label10(mdb__browse__save_and_browse_browser_term_xml_6_0, 2,3,7,5,11,13,14,17,18,19)
MR_decl_label10(mdb__browse__save_and_browse_browser_term_xml_6_0, 20,21,16,23,24,25,28,29,27,36)
MR_decl_label3(mdb__browse__save_and_browse_browser_term_xml_6_0, 37,33,4)
MR_decl_label8(mdb__browse__save_args_4_0, 25,4,5,8,9,10,13,27)
MR_decl_label10(mdb__browse__save_term_4_0, 3,4,6,8,10,14,13,17,18,19)
MR_decl_label10(mdb__browse__save_term_4_0, 20,21,22,2,24,25,26,29,30,31)
MR_decl_label6(mdb__browse__save_term_4_0, 45,33,34,36,37,39)
MR_decl_label4(mdb__browse__save_term_to_file_xml_5_0, 2,5,6,3)
MR_decl_label4(mdb__browse__set_path_3_0, 4,3,5,6)
MR_decl_label1(mdb__browse__simplify_dirs_2_0, 2)
MR_decl_label3(mdb__browse__simplify_rev_dirs_4_0, 3,5,7)
MR_decl_label1(mdb__browse__string_is_return_value_alias_1_0, 2)
MR_decl_label5(mdb__browse__term_size_left_from_max_3_0, 29,4,5,7,8)
MR_decl_label3(mdb__browse__unlines_2_0, 14,4,5)
MR_decl_label3(mdb__browse__write_indent_3_0, 10,3,12)
MR_decl_label6(mdb__browse__write_term_mode_debugger_5_0, 32,5,7,8,9,10)
MR_decl_label2(mdb__browse__write_univ_or_unbound_4_0, 3,2)
MR_decl_label5(fn__mdb__browse__comma_string_list_1_0, 3,5,46,11,15)
MR_decl_label9(fn__mdb__browse__dirs_to_string_1_0, 3,7,8,49,11,12,13,14,15)
MR_decl_label5(fn__mdb__browse__qualified_functor_to_doc_1_0, 34,7,6,9,12)
MR_decl_label4(__Unify___mdb__browse__deref_result_1_0, 7,19,5,1)
MR_decl_label3(__Unify___mdb__browse__xml_function_wrapper_0_0, 4,8,1)
MR_decl_label2(__Unify___mdb__browse__xml_predicate_wrapper_0_0, 6,1)
MR_decl_label7(__Compare___mdb__browse__deref_result_1_0, 3,2,9,7,5,15,45)
MR_decl_label5(__Compare___mdb__browse__xml_function_wrapper_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___mdb__browse__xml_predicate_wrapper_0_0, 3,2,5,21)
MR_decl_static(mdb__browse__interpret_format_options_2_0)
MR_def_extern_entry(mdb__browse__term_size_left_from_max_3_0)
MR_def_extern_entry(mdb__browse__browser_term_size_left_from_max_3_0)
MR_decl_static(fn__mdb__browse__comma_string_list_1_0)
MR_decl_static(mdb__browse__browser_term_to_string_2_8_0)
MR_decl_static(mdb__browse__browser_term_to_string_3_10_0)
MR_decl_static(mdb__browse__list_tail_to_string_list_8_0)
MR_decl_static(mdb__browse__args_to_string_list_8_0)
MR_decl_static(mdb__browse__portray_flat_5_0)
MR_decl_static(mdb__browse__browser_term_to_string_verbose_2_8_0)
MR_decl_static(mdb__browse__args_to_string_verbose_list_9_0)
MR_decl_static(mdb__browse__unlines_2_0)
MR_decl_static(mdb__browse__portray_verbose_5_0)
MR_decl_static(fn__mdb__browse__qualified_functor_to_doc_1_0)
MR_decl_static(mdb__browse__browser_term_to_string_pretty_8_0)
MR_decl_static(mdb__browse__portray_raw_pretty_5_0)
MR_decl_static(fn__mdb__browse__dirs_to_string_1_0)
MR_decl_static(mdb__browse__report_deref_error_5_0)
MR_decl_static(mdb__browse__simplify_rev_dirs_4_0)
MR_def_extern_entry(mdb__browse__simplify_dirs_2_0)
MR_def_extern_entry(mdb__browse__string_is_return_value_alias_1_0)
MR_decl_static(mdb__browse__deref_subterm_2_4_0)
MR_decl_static(mdb__browse__deref_subterm_3_0)
MR_decl_static(mdb__browse__portray_6_0)
MR_decl_static(mdb__browse__change_dir_3_0)
MR_decl_static(mdb__browse__set_path_3_0)
MR_decl_static(mdb__browse__portray_maybe_path_7_0)
MR_decl_static(mdb__browse__do_portray_7_0)
MR_decl_static(mdb__browse__get_value_representation_2_0)
MR_decl_static(mdb__browse__do_print_memory_addr_5_0)
MR_decl_static(mdb__browse__help_3_0)
MR_decl_static(mdb__browse__write_term_mode_debugger_5_0)
MR_decl_static(mdb__browse__run_command_7_0)
MR_decl_static(mdb__browse__browse_main_loop_5_0)
MR_def_extern_entry(mdb__browse__browse_browser_term_no_modes_8_0)
MR_def_extern_entry(mdb__browse__browse_browser_term_9_0)
MR_decl_static(mdb__browse__maybe_save_term_to_file_xml_5_0)
MR_def_extern_entry(mdb__browse__save_and_browse_browser_term_xml_6_0)
MR_def_extern_entry(mdb__browse__browse_browser_term_format_no_modes_8_0)
MR_def_extern_entry(mdb__browse__browse_browser_term_format_9_0)
MR_def_extern_entry(mdb__browse__browse_external_no_modes_7_0)
MR_def_extern_entry(mdb__browse__browse_external_8_0)
MR_def_extern_entry(mdb__browse__print_browser_term_6_0)
MR_def_extern_entry(mdb__browse__print_browser_term_format_7_0)
MR_decl_static(mdb__browse__write_indent_3_0)
MR_decl_static(mdb__browse__save_term_4_0)
MR_decl_static(mdb__browse__save_args_4_0)
MR_def_extern_entry(mdb__browse__save_term_to_file_6_0)
MR_def_extern_entry(mdb__browse__save_term_to_file_xml_5_0)
MR_decl_static(mdb__browse__bool_format_option_is_true_2_0)
MR_decl_static(mdb__browse__write_univ_or_unbound_4_0)
MR_decl_static(__Unify___mdb__browse__deref_result_1_0)
MR_decl_static(__Compare___mdb__browse__deref_result_1_0)
MR_def_extern_entry(__Unify___mdb__browse__unbound_0_0)
MR_def_extern_entry(__Compare___mdb__browse__unbound_0_0)
MR_decl_static(__Unify___mdb__browse__xml_function_wrapper_0_0)
MR_decl_static(__Compare___mdb__browse__xml_function_wrapper_0_0)
MR_decl_static(__Unify___mdb__browse__xml_predicate_wrapper_0_0)
MR_decl_static(__Compare___mdb__browse__xml_predicate_wrapper_0_0)
MR_def_extern_entry(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0)
MR_decl_static(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_0)
MR_def_extern_entry(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_format_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_format_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_debugger_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdb__parse, format_option),
MR_CTOR0_ADDR(getopt, option_data)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdb__parse, format_option),
MR_CTOR0_ADDR(getopt, option_data)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__,
MR_CTOR0_ADDR(mdb__browser_info, debugger),
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__interpret_format_options_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_format_option_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__browse__interpret_format_options_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_CTOR0_ADDR(mdb__parse, format_option)
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(mdb__browse__bool_format_option_is_true_2_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(mdb__browse__term_size_left_from_max_3_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(mdb__browse__term_size_left_from_max_3_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(mdb__browse__term_size_left_from_max_3_0),
0
},
};

static const struct mercury_type_3 mercury_common_3[5] =
{
{
MR_tbmkword(0, 0)
},
{
MR_TAG_COMMON(1,4,0)
},
{
MR_TAG_COMMON(1,4,1)
},
{
MR_TAG_COMMON(1,4,2)
},
{
MR_TAG_COMMON(1,4,3)
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
0
},
{
3
},
{
1
},
{
2
},
};

static const struct mercury_type_5 mercury_common_5[7] =
{
{
MR_string_const("error: inconsistent format options", 34)
},
{
MR_string_const("", 0)
},
{
MR_string_const(".", 1)
},
{
MR_string_const("(", 1)
},
{
MR_string_const(", ", 2)
},
{
MR_string_const(")", 1)
},
{
MR_string_const(" = ", 3)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__term_size_left_from_max_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__browser_term_size_left_from_max_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__browser_term_size_left_from_max_3_0_2;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__browse__term_size_left_from_max_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(univ, univ),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__browse__browser_term_size_left_from_max_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(univ, univ),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__browse__browser_term_size_left_from_max_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(univ, univ),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_7 mercury_common_7[42] =
{
{
MR_string_const("+1", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("]", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const(")", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const(", ...", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("-", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("-- Paths can be Unix-style or SICStus-style: /2/3/1 or ^2^3^1\n", 62),
MR_TAG_COMMON(1,7,5)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,7,6)
},
{
MR_string_const("\th              -- help\n", 24),
MR_TAG_COMMON(1,7,7)
},
{
MR_string_const("\t\?              -- help\n", 24),
MR_TAG_COMMON(1,7,8)
},
{
MR_string_const("\t^ [path]       -- cd to the specified subterm (default is root)\n", 65),
MR_TAG_COMMON(1,7,9)
},
{
MR_string_const("\t< n            -- set depth\n", 29),
MR_TAG_COMMON(1,7,10)
},
{
MR_string_const("\tp              -- print\n", 25),
MR_TAG_COMMON(1,7,11)
},
{
MR_string_const("SICStus Prolog style commands are:\n", 35),
MR_TAG_COMMON(1,7,12)
},
{
MR_string_const("\thelp           -- show this help message\n", 42),
MR_TAG_COMMON(1,7,13)
},
{
MR_string_const("\tquit           -- quit browser\n", 32),
MR_TAG_COMMON(1,7,14)
},
{
MR_string_const("\tparams         -- show format and parameter values\n", 52),
MR_TAG_COMMON(1,7,15)
},
{
MR_string_const("\t               -- set the named parameter value\n", 49),
MR_TAG_COMMON(1,7,16)
},
{
MR_string_const("\tnum_io_actions <n>\n", 20),
MR_TAG_COMMON(1,7,17)
},
{
MR_string_const("\tlines [format_param_options] <n>\n", 34),
MR_TAG_COMMON(1,7,18)
},
{
MR_string_const("\twidth [format_param_options] <n>\n", 34),
MR_TAG_COMMON(1,7,19)
},
{
MR_string_const("\tsize  [format_param_options] <n>\n", 34),
MR_TAG_COMMON(1,7,20)
},
{
MR_string_const("\tdepth [format_param_options] <n>\n", 34),
MR_TAG_COMMON(1,7,21)
},
{
MR_string_const("\t               -- set the format\n", 34),
MR_TAG_COMMON(1,7,22)
},
{
MR_string_const("\tformat [format_options] <flat|raw-pretty|verbose|pretty>\n", 58),
MR_TAG_COMMON(1,7,23)
},
{
MR_string_const("\t                  (default is current)\n", 40),
MR_TAG_COMMON(1,7,24)
},
{
MR_string_const("\tmode [path]    -- show the mode of the specified subterm\n", 58),
MR_TAG_COMMON(1,7,25)
},
{
MR_string_const("\t                  that it makes the current goal invalid\n", 58),
MR_TAG_COMMON(1,7,26)
},
{
MR_string_const("\t                  for tracking, asserting for the declarative debugger\n", 72),
MR_TAG_COMMON(1,7,27)
},
{
MR_string_const("\t               -- mark the specified subterm (default is current)\n", 67),
MR_TAG_COMMON(1,7,28)
},
{
MR_string_const("\t[m|mark] [path]\n", 17),
MR_TAG_COMMON(1,7,29)
},
{
MR_string_const("\t                  for tracking, and quit\n", 42),
MR_TAG_COMMON(1,7,30)
},
{
MR_string_const("\t               -- mark the specified subterm (default is current)\n", 67),
MR_TAG_COMMON(1,7,31)
},
{
MR_string_const("\t[t|track] [path]\n", 18),
MR_TAG_COMMON(1,7,32)
},
{
MR_string_const("\tpwd            -- print the path to the current subterm\n", 57),
MR_TAG_COMMON(1,7,33)
},
{
MR_string_const("\tcdr n path     -- repeatedly apply the cd command n times\n", 59),
MR_TAG_COMMON(1,7,34)
},
{
MR_string_const("\tcd [path]      -- cd to the specified subterm (default is root)\n", 65),
MR_TAG_COMMON(1,7,35)
},
{
MR_string_const("\t               -- print the raw memory address of the specified subterm\n", 73),
MR_TAG_COMMON(1,7,36)
},
{
MR_string_const("\t[addr|memory_addr] [path]\n", 27),
MR_TAG_COMMON(1,7,37)
},
{
MR_string_const("\t               -- print the specified subterm using the \140browse\' params\n", 73),
MR_TAG_COMMON(1,7,38)
},
{
MR_string_const("\t[print|p|ls] [format_options] [path]\n", 38),
MR_TAG_COMMON(1,7,39)
},
{
MR_string_const("Commands are:\n", 14),
MR_TAG_COMMON(1,7,40)
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[];
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,0,2),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__,
MR_TAG_COMMON(0,0,3),
MR_CTOR0_ADDR(mdb__browser_info, debugger),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__[];
static const struct mercury_type_9 mercury_common_9[3] =
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
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__,
MR_TAG_COMMON(0,8,0),
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,8,1),
MR_CTOR0_ADDR(mdb__browser_info, debugger),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__portray_flat_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__browse__portray_flat_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(io, output_stream),
MR_CTOR0_ADDR(univ, univ),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_11 mercury_common_11[3] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,5,4),
MR_TAG_COMMON(1,11,0)
}
},
{
{
MR_TAG_COMMON(1,5,5),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__save_term_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__browse__save_term_4_0_1,
MR_COMMON(12,0),
3,
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_CTOR0_ADDR(univ, univ)
},
};

const MR_PseudoTypeInfo mercury_data_mdb__browse__field_types_deref_result_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__browse__du_functor_desc_deref_result_1_0 = {
	"deref_result",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browse__field_types_deref_result_1_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_dir_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_dir_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_dir_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__browse__field_types_deref_result_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_dir_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browse__du_functor_desc_deref_result_1_1 = {
	"deref_error",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browse__field_types_deref_result_1_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browse__du_stag_ordered_deref_result_1_0[] = {
	&mercury_data_mdb__browse__du_functor_desc_deref_result_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__browse__du_stag_ordered_deref_result_1_1[] = {
	&mercury_data_mdb__browse__du_functor_desc_deref_result_1_1

};

const MR_DuPtagLayout mercury_data_mdb__browse__du_ptag_ordered_deref_result_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browse__du_stag_ordered_deref_result_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browse__du_stag_ordered_deref_result_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browse__du_name_ordered_deref_result_1[] = {
	&mercury_data_mdb__browse__du_functor_desc_deref_result_1_1,
	&mercury_data_mdb__browse__du_functor_desc_deref_result_1_0
};

const MR_Integer mercury_data_mdb__browse__functor_number_map_deref_result_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browse__type_ctor_info_deref_result_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browse__deref_result_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browse__deref_result_1_0)),
	"mdb.browse",
	"deref_result",
	{ (void *)mercury_data_mdb__browse__du_name_ordered_deref_result_1 },
	{ (void *)mercury_data_mdb__browse__du_ptag_ordered_deref_result_1 },
	2,
	4,
	mercury_data_mdb__browse__functor_number_map_deref_result_1
};

static const MR_EnumFunctorDesc mercury_data_mdb__browse__enum_functor_desc_unbound_0_0 = {
	"_",
	0
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browse__enum_value_ordered_unbound_0[] = {
	&mercury_data_mdb__browse__enum_functor_desc_unbound_0_0
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browse__enum_name_ordered_unbound_0[] = {
	&mercury_data_mdb__browse__enum_functor_desc_unbound_0_0
};

const MR_Integer mercury_data_mdb__browse__functor_number_map_unbound_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browse__type_ctor_info_unbound_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browse__unbound_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browse__unbound_0_0)),
	"mdb.browse",
	"unbound",
	{ (void *)mercury_data_mdb__browse__enum_name_ordered_unbound_0 },
	{ (void *)mercury_data_mdb__browse__enum_value_ordered_unbound_0 },
	1,
	4,
	mercury_data_mdb__browse__functor_number_map_unbound_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1univ__type_ctor_info_univ_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdb__browse__field_types_xml_function_wrapper_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1univ__type_ctor_info_univ_0,
	(MR_PseudoTypeInfo) &mercury_data_univ__type_ctor_info_univ_0
};

const MR_ConstString mercury_data_mdb__browse__field_names_xml_function_wrapper_0_0[] = {
	"function_name",
	"function_arguments",
	"return_value"
};

static const MR_DuFunctorDesc mercury_data_mdb__browse__du_functor_desc_xml_function_wrapper_0_0 = {
	"function",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browse__field_types_xml_function_wrapper_0_0,
	mercury_data_mdb__browse__field_names_xml_function_wrapper_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browse__du_stag_ordered_xml_function_wrapper_0_0[] = {
	&mercury_data_mdb__browse__du_functor_desc_xml_function_wrapper_0_0

};

const MR_DuPtagLayout mercury_data_mdb__browse__du_ptag_ordered_xml_function_wrapper_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browse__du_stag_ordered_xml_function_wrapper_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browse__du_name_ordered_xml_function_wrapper_0[] = {
	&mercury_data_mdb__browse__du_functor_desc_xml_function_wrapper_0_0
};

const MR_Integer mercury_data_mdb__browse__functor_number_map_xml_function_wrapper_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browse__type_ctor_info_xml_function_wrapper_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browse__xml_function_wrapper_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browse__xml_function_wrapper_0_0)),
	"mdb.browse",
	"xml_function_wrapper",
	{ (void *)mercury_data_mdb__browse__du_name_ordered_xml_function_wrapper_0 },
	{ (void *)mercury_data_mdb__browse__du_ptag_ordered_xml_function_wrapper_0 },
	1,
	4,
	mercury_data_mdb__browse__functor_number_map_xml_function_wrapper_0
};

const MR_PseudoTypeInfo mercury_data_mdb__browse__field_types_xml_predicate_wrapper_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1univ__type_ctor_info_univ_0
};

const MR_ConstString mercury_data_mdb__browse__field_names_xml_predicate_wrapper_0_0[] = {
	"predicate_name",
	"predicate_arguments"
};

static const MR_DuFunctorDesc mercury_data_mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0 = {
	"predicate",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browse__field_types_xml_predicate_wrapper_0_0,
	mercury_data_mdb__browse__field_names_xml_predicate_wrapper_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0[] = {
	&mercury_data_mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0

};

const MR_DuPtagLayout mercury_data_mdb__browse__du_ptag_ordered_xml_predicate_wrapper_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browse__du_name_ordered_xml_predicate_wrapper_0[] = {
	&mercury_data_mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0
};

const MR_Integer mercury_data_mdb__browse__functor_number_map_xml_predicate_wrapper_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browse__type_ctor_info_xml_predicate_wrapper_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browse__xml_predicate_wrapper_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browse__xml_predicate_wrapper_0_0)),
	"mdb.browse",
	"xml_predicate_wrapper",
	{ (void *)mercury_data_mdb__browse__du_name_ordered_xml_predicate_wrapper_0 },
	{ (void *)mercury_data_mdb__browse__du_ptag_ordered_xml_predicate_wrapper_0 },
	1,
	4,
	mercury_data_mdb__browse__functor_number_map_xml_predicate_wrapper_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__save_term_4_0_1 = {
{
MR_FUNCTION,
"univ",
"univ",
"univ",
2,
0
},
"mdb.browse",
"browse.m",
405,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__portray_flat_5_0_1 = {
{
MR_PREDICATE,
"mdb.browse",
"mdb.browse",
"write_univ_or_unbound",
4,
0
},
"mdb.browse",
"browse.m",
948,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__browser_term_size_left_from_max_3_0_2 = {
{
MR_PREDICATE,
"mdb.browse",
"mdb.browse",
"term_size_left_from_max",
3,
0
},
"mdb.browse",
"browse.m",
1032,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__browser_term_size_left_from_max_3_0_1 = {
{
MR_PREDICATE,
"mdb.browse",
"mdb.browse",
"term_size_left_from_max",
3,
0
},
"mdb.browse",
"browse.m",
1032,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__term_size_left_from_max_3_0_1 = {
{
MR_PREDICATE,
"mdb.browse",
"mdb.browse",
"term_size_left_from_max",
3,
0
},
"mdb.browse",
"browse.m",
1004,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__browse__interpret_format_options_2_0_1 = {
{
MR_PREDICATE,
"mdb.browse",
"mdb.browse",
"bool_format_option_is_true",
2,
0
},
"mdb.browse",
"browse.m",
773,
"5"
};


MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__filter_map_3_0);

MR_BEGIN_MODULE(mdb__browse_module0)
	MR_init_entry1(mdb__browse__interpret_format_options_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__interpret_format_options_2_0);
	MR_init_label7(mdb__browse__interpret_format_options_2_0,2,5,7,12,15,18,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interpret_format_options'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__interpret_format_options_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdb__parse, format_option);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		mdb__browse__interpret_format_options_2_0_i2);
MR_def_label(mdb__browse__interpret_format_options_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		mdb__browse__interpret_format_options_2_0_i5);
MR_def_label(mdb__browse__interpret_format_options_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__interpret_format_options_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__browse__interpret_format_options_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__interpret_format_options_2_0_i10);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browse__interpret_format_options_2_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__browse__interpret_format_options_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(mdb__browse__interpret_format_options_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__browse__interpret_format_options_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__browse__interpret_format_options_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__browse__interpret_format_options_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__browse__interpret_format_options_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__univ__univ_value_1_0);
MR_decl_entry(deconstruct__limited_deconstruct_cc_3_0);
MR_decl_entry(string__length_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldl_4_9);

MR_BEGIN_MODULE(mdb__browse_module1)
	MR_init_entry1(mdb__browse__term_size_left_from_max_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__term_size_left_from_max_3_0);
	MR_init_label5(mdb__browse__term_size_left_from_max_3_0,29,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_size_left_from_max'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__term_size_left_from_max_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browse__term_size_left_from_max_3_0_i29);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(mdb__browse__term_size_left_from_max_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browse__term_size_left_from_max_3_0_i4);
MR_def_label(mdb__browse__term_size_left_from_max_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(deconstruct__limited_deconstruct_cc_3_0,
		mdb__browse__term_size_left_from_max_3_0_i5);
MR_def_label(mdb__browse__term_size_left_from_max_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__term_size_left_from_max_3_0_i7);
	}
	MR_r1 = (MR_Integer) -1;
	MR_decr_sp_and_return(4);
MR_def_label(mdb__browse__term_size_left_from_max_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(string__length_2_0,
		mdb__browse__term_size_left_from_max_3_0_i8);
MR_def_label(mdb__browse__term_size_left_from_max_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(1) - ((MR_Integer) MR_tempr1 + ((MR_Integer) MR_sv(2) * (MR_Integer) 2)));
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(mdb__browse_module2)
	MR_init_entry1(mdb__browse__browser_term_size_left_from_max_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browser_term_size_left_from_max_3_0);
	MR_init_label4(mdb__browse__browser_term_size_left_from_max_3_0,29,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browser_term_size_left_from_max'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__browser_term_size_left_from_max_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_size_left_from_max_3_0_i29);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(mdb__browse__term_size_left_from_max_3_0);
MR_def_label(mdb__browse__browser_term_size_left_from_max_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__length_2_0,
		mdb__browse__browser_term_size_left_from_max_3_0_i5);
MR_def_label(mdb__browse__browser_term_size_left_from_max_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		mdb__browse__browser_term_size_left_from_max_3_0_i6);
MR_def_label(mdb__browse__browser_term_size_left_from_max_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_size_left_from_max_3_0_i8);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(1) - ((MR_Integer) MR_sv(4) + ((MR_Integer) MR_r1 * (MR_Integer) 2)));
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_9);
MR_def_label(mdb__browse__browser_term_size_left_from_max_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(1) - (((MR_Integer) MR_sv(4) + ((MR_Integer) MR_r1 * (MR_Integer) 2)) + (MR_Integer) 3));
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(mdb__browse_module3)
	MR_init_entry1(fn__mdb__browse__comma_string_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browse__comma_string_list_1_0);
	MR_init_label5(fn__mdb__browse__comma_string_list_1_0,3,5,46,11,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'comma_string_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__browse__comma_string_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdb__browse__comma_string_list_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__mdb__browse__comma_string_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__mdb__browse__comma_string_list_1_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__mdb__browse__comma_string_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__mdb__browse__comma_string_list_1_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(fn__mdb__browse__comma_string_list_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_r3;
	MR_np_localcall_lab(fn__mdb__browse__comma_string_list_1_0,
		fn__mdb__browse__comma_string_list_1_0_i11);
MR_def_label(fn__mdb__browse__comma_string_list_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__mdb__browse__comma_string_list_1_0_i15);
MR_def_label(fn__mdb__browse__comma_string_list_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0);
MR_decl_entry(mdb__browser_info__functor_browser_term_cc_5_0);
MR_decl_entry(string__int_to_string_2_0);

MR_BEGIN_MODULE(mdb__browse_module4)
	MR_init_entry1(mdb__browse__browser_term_to_string_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browser_term_to_string_2_8_0);
	MR_init_label7(mdb__browse__browser_term_to_string_2_8_0,2,3,6,26,7,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browser_term_to_string_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__browser_term_to_string_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_np_call_localret_ent(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,
		mdb__browse__browser_term_to_string_2_8_0_i2);
MR_def_label(mdb__browse__browser_term_to_string_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_2_8_0_i3);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_2_8_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_2_8_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr3, 2);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__browse__browser_term_to_string_3_10_0);
	}
MR_def_label(mdb__browse__browser_term_to_string_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mdb__browser_info__functor_browser_term_cc_5_0,
		mdb__browse__browser_term_to_string_2_8_0_i6);
MR_def_label(mdb__browse__browser_term_to_string_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_2_8_0_i7);
	}
MR_def_label(mdb__browse__browser_term_to_string_2_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__browse__browser_term_to_string_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		mdb__browse__browser_term_to_string_2_8_0_i9);
MR_def_label(mdb__browse__browser_term_to_string_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_2_8_0_i11);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__browser_term_to_string_2_8_0_i26);
MR_def_label(mdb__browse__browser_term_to_string_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__browser_term_to_string_2_8_0_i26);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(mdb__browse_module5)
	MR_init_entry1(mdb__browse__browser_term_to_string_3_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browser_term_to_string_3_10_0);
	MR_init_label10(mdb__browse__browser_term_to_string_3_10_0,9,10,12,2,107,20,22,23,21,29)
	MR_init_label2(mdb__browse__browser_term_to_string_3_10_0,34,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browser_term_to_string_3'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__browser_term_to_string_3_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(1, MR_r3, 0);
	MR_sv(5) = MR_r1;
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r7;
	MR_sv(2) = MR_tempr4;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_r3 = MR_tempr3;
	MR_r4 = ((MR_Integer) MR_r6 + (MR_Integer) 1);
	MR_r5 = MR_tempr4;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__browse__browser_term_to_string_2_8_0,
		mdb__browse__browser_term_to_string_3_10_0_i9);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__browse__list_tail_to_string_list_8_0,
		mdb__browse__browser_term_to_string_3_10_0_i10);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_np_call_localret_ent(list__append_3_1,
		mdb__browse__browser_term_to_string_3_10_0_i12);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("[", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__browser_term_to_string_3_10_0_i39);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i107);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i107);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i107);
	}
	MR_r1 = ((MR_Integer) MR_r6 + (MR_Integer) 1);
	MR_r2 = (MR_Word) MR_string_const("[]", 2);
	MR_proceed();
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tempr2;
	MR_sv(6) = ((MR_Integer) MR_r8 + (MR_Integer) 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_r6 + (MR_Integer) 1);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdb__browse__args_to_string_list_8_0,
		mdb__browse__browser_term_to_string_3_10_0_i20);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i22);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i21);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdb__browse__comma_string_list_1_0,
		mdb__browse__browser_term_to_string_3_10_0_i23);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,7,2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("(", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__browser_term_to_string_3_10_0_i21);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_3_10_0_i29);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_sv(5) = MR_sv(7);
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__browser_term_to_string_3_10_0_i39);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(1, MR_sv(3), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdb__browse__browser_term_to_string_2_8_0,
		mdb__browse__browser_term_to_string_3_10_0_i34);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(" = ", 3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__browser_term_to_string_3_10_0_i39);
MR_def_label(mdb__browse__browser_term_to_string_3_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__max_2_0);

MR_BEGIN_MODULE(mdb__browse_module6)
	MR_init_entry1(mdb__browse__list_tail_to_string_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__list_tail_to_string_list_8_0);
	MR_init_label10(mdb__browse__list_tail_to_string_list_8_0,2,4,7,77,8,12,14,25,6,29)
	MR_init_label10(mdb__browse__list_tail_to_string_list_8_0,41,42,39,33,48,47,51,52,56,62)
	MR_init_label2(mdb__browse__list_tail_to_string_list_8_0,58,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_tail_to_string_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__list_tail_to_string_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__int__max_2_0,
		mdb__browse__list_tail_to_string_list_8_0_i2);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,
		mdb__browse__list_tail_to_string_list_8_0_i4);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdb__browser_info__functor_browser_term_cc_5_0,
		mdb__browse__list_tail_to_string_list_8_0_i7);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i8);
	}
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(" | ", 3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_sv(1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		mdb__browse__list_tail_to_string_list_8_0_i12);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i14);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__list_tail_to_string_list_8_0_i77);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__list_tail_to_string_list_8_0_i25);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" | ", 3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i29);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i29);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i33);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i33);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i33);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i33);
	}
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i39);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i39);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__browse__browser_term_to_string_2_8_0,
		mdb__browse__list_tail_to_string_list_8_0_i41);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	}
	MR_np_localcall_lab(mdb__browse__list_tail_to_string_list_8_0,
		mdb__browse__list_tail_to_string_list_8_0_i42);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,3);
	MR_decr_sp_and_return(7);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i47);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i47);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r5;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__browse__browser_term_to_string_3_10_0,
		mdb__browse__list_tail_to_string_list_8_0_i48);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(" | ", 3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdb__browser_info__functor_browser_term_cc_5_0,
		mdb__browse__list_tail_to_string_list_8_0_i51);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i52);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(" | ", 3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_sv(1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		mdb__browse__list_tail_to_string_list_8_0_i56);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(mdb__browse__list_tail_to_string_list_8_0_i58);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__list_tail_to_string_list_8_0_i62);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(" | ", 3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__list_tail_to_string_list_8_0_i69);
MR_def_label(mdb__browse__list_tail_to_string_list_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" | ", 3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module7)
	MR_init_entry1(mdb__browse__args_to_string_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__args_to_string_list_8_0);
	MR_init_label3(mdb__browse__args_to_string_list_8_0,18,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'args_to_string_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__args_to_string_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__args_to_string_list_8_0_i18);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdb__browse__args_to_string_list_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browser_term_to_string_2_8_0,
		mdb__browse__args_to_string_list_8_0_i5);
MR_def_label(mdb__browse__args_to_string_list_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	}
	MR_np_localcall_lab(mdb__browse__args_to_string_list_8_0,
		mdb__browse__args_to_string_list_8_0_i6);
MR_def_label(mdb__browse__args_to_string_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__output_stream_3_0);
MR_decl_entry(f_115_116_114_101_97_109_95_95_115_116_114_105_110_103_95_119_114_105_116_101_114_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_2);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__write_list_5_1);
MR_decl_entry(io__get_stream_db_3_0);
MR_decl_entry(mdb__browser_info__write_string_debugger_4_0);

MR_BEGIN_MODULE(mdb__browse_module8)
	MR_init_entry1(mdb__browse__portray_flat_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__portray_flat_5_0);
	MR_init_label10(mdb__browse__portray_flat_5_0,2,6,5,12,13,15,16,18,14,22)
	MR_init_label4(mdb__browse__portray_flat_5_0,3,28,29,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'portray_flat'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__portray_flat_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 60;
	MR_np_call_localret_ent(mdb__browse__browser_term_size_left_from_max_3_0,
		mdb__browse__portray_flat_5_0_i2);
MR_def_label(mdb__browse__portray_flat_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browse__portray_flat_5_0_i3);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(mdb__browse__portray_flat_5_0_i5);
	}
	MR_sv(3) = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(io__output_stream_3_0,
		mdb__browse__portray_flat_5_0_i6);
MR_def_label(mdb__browse__portray_flat_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_115_116_114_101_97_109_95_95_115_116_114_105_110_103_95_119_114_105_116_101_114_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_2);
	}
MR_def_label(mdb__browse__portray_flat_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__portray_flat_5_0_i12);
MR_def_label(mdb__browse__portray_flat_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__output_stream_3_0,
		mdb__browse__portray_flat_5_0_i13);
MR_def_label(mdb__browse__portray_flat_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__browse__portray_flat_5_0_i15);
	}
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(mdb__browse__portray_flat_5_0_i14);
MR_def_label(mdb__browse__portray_flat_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__portray_flat_5_0_i16);
MR_def_label(mdb__browse__portray_flat_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__browse__write_univ_or_unbound_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_1,
		mdb__browse__portray_flat_5_0_i18);
MR_def_label(mdb__browse__portray_flat_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__portray_flat_5_0_i14);
MR_def_label(mdb__browse__portray_flat_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdb__browse__portray_flat_5_0_i31);
	}
	MR_sv(3) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__portray_flat_5_0_i22);
MR_def_label(mdb__browse__portray_flat_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_115_116_114_101_97_109_95_95_115_116_114_105_110_103_95_119_114_105_116_101_114_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_2);
MR_def_label(mdb__browse__portray_flat_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__get_stream_db_3_0,
		mdb__browse__portray_flat_5_0_i28);
MR_def_label(mdb__browse__portray_flat_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdb__browse__browser_term_to_string_2_8_0,
		mdb__browse__portray_flat_5_0_i29);
MR_def_label(mdb__browse__portray_flat_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
MR_def_label(mdb__browse__portray_flat_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__frame__vglue_2_0);

MR_BEGIN_MODULE(mdb__browse_module9)
	MR_init_entry1(mdb__browse__browser_term_to_string_verbose_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browser_term_to_string_verbose_2_8_0);
	MR_init_label10(mdb__browse__browser_term_to_string_verbose_2_8_0,2,6,8,9,11,3,12,36,13,16)
	MR_init_label1(mdb__browse__browser_term_to_string_verbose_2_8_0,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browser_term_to_string_verbose_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__browser_term_to_string_verbose_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_np_call_localret_ent(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,
		mdb__browse__browser_term_to_string_verbose_2_8_0_i2);
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_verbose_2_8_0_i3);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_verbose_2_8_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_verbose_2_8_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_verbose_2_8_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(mdb__browse__args_to_string_verbose_list_9_0,
		mdb__browse__browser_term_to_string_verbose_2_8_0_i9);
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__browse__browser_term_to_string_verbose_2_8_0_i8);
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(mdb__browse__args_to_string_verbose_list_9_0,
		mdb__browse__browser_term_to_string_verbose_2_8_0_i9);
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__frame__vglue_2_0,
		mdb__browse__browser_term_to_string_verbose_2_8_0_i11);
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mdb__browser_info__functor_browser_term_cc_5_0,
		mdb__browse__browser_term_to_string_verbose_2_8_0_i12);
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_verbose_2_8_0_i13);
	}
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		mdb__browse__browser_term_to_string_verbose_2_8_0_i16);
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_verbose_2_8_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__browser_term_to_string_verbose_2_8_0_i36);
MR_def_label(mdb__browse__browser_term_to_string_verbose_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__browser_term_to_string_verbose_2_8_0_i36);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__frame__hglue_2_0);
MR_decl_entry(fn__mdb__frame__vsize_1_0);
MR_decl_entry(list__duplicate_3_0);

MR_BEGIN_MODULE(mdb__browse_module10)
	MR_init_entry1(mdb__browse__args_to_string_verbose_list_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__args_to_string_verbose_list_9_0);
	MR_init_label10(mdb__browse__args_to_string_verbose_list_9_0,43,7,8,11,5,15,16,17,20,21)
	MR_init_label4(mdb__browse__args_to_string_verbose_list_9_0,22,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'args_to_string_verbose_list'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__args_to_string_verbose_list_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__args_to_string_verbose_list_9_0_i43);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r8 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(mdb__browse__args_to_string_verbose_list_9_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(mdb__browse__browser_term_to_string_verbose_2_8_0,
		mdb__browse__args_to_string_verbose_list_9_0_i7);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		mdb__browse__args_to_string_verbose_list_9_0_i8);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,7,4);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__args_to_string_verbose_list_9_0_i11);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__mdb__frame__hglue_2_0,
		mdb__browse__args_to_string_verbose_list_9_0_i26);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_sv(5) = MR_tempr3;
	MR_tempr4 = MR_r7;
	MR_sv(2) = MR_tempr4;
	MR_sv(6) = MR_r8;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_np_call_localret_ent(mdb__browse__browser_term_to_string_verbose_2_8_0,
		mdb__browse__args_to_string_verbose_list_9_0_i15);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(2);
	}
	MR_np_localcall_lab(mdb__browse__args_to_string_verbose_list_9_0,
		mdb__browse__args_to_string_verbose_list_9_0_i16);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		mdb__browse__args_to_string_verbose_list_9_0_i17);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,7,4);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__args_to_string_verbose_list_9_0_i20);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdb__frame__vsize_1_0,
		mdb__browse__args_to_string_verbose_list_9_0_i21);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_string_const("|", 1);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		mdb__browse__args_to_string_verbose_list_9_0_i22);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mdb__frame__vglue_2_0,
		mdb__browse__args_to_string_verbose_list_9_0_i24);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdb__frame__hglue_2_0,
		mdb__browse__args_to_string_verbose_list_9_0_i25);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__mdb__frame__vglue_2_0,
		mdb__browse__args_to_string_verbose_list_9_0_i26);
MR_def_label(mdb__browse__args_to_string_verbose_list_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(mdb__browse_module11)
	MR_init_entry1(mdb__browse__unlines_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__unlines_2_0);
	MR_init_label3(mdb__browse__unlines_2_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlines'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__unlines_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__unlines_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(mdb__browse__unlines_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(string__append_3_2,
		mdb__browse__unlines_2_0_i4);
MR_def_label(mdb__browse__unlines_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdb__browse__unlines_2_0,
		mdb__browse__unlines_2_0_i5);
MR_def_label(mdb__browse__unlines_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__frame__clip_2_0);

MR_BEGIN_MODULE(mdb__browse_module12)
	MR_init_entry1(mdb__browse__portray_verbose_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__portray_verbose_5_0);
	MR_init_label4(mdb__browse__portray_verbose_5_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'portray_verbose'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__portray_verbose_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__get_stream_db_3_0,
		mdb__browse__portray_verbose_5_0_i2);
MR_def_label(mdb__browse__portray_verbose_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tempr3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdb__browse__browser_term_to_string_verbose_2_8_0,
		mdb__browse__portray_verbose_5_0_i3);
MR_def_label(mdb__browse__portray_verbose_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_np_call_localret_ent(fn__mdb__frame__clip_2_0,
		mdb__browse__portray_verbose_5_0_i5);
MR_def_label(mdb__browse__portray_verbose_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__browse__unlines_2_0,
		mdb__browse__portray_verbose_5_0_i6);
MR_def_label(mdb__browse__portray_verbose_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term_io__quoted_atom_1_0);

MR_BEGIN_MODULE(mdb__browse_module13)
	MR_init_entry1(fn__mdb__browse__qualified_functor_to_doc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browse__qualified_functor_to_doc_1_0);
	MR_init_label5(fn__mdb__browse__qualified_functor_to_doc_1_0,34,7,6,9,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qualified_functor_to_doc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__browse__qualified_functor_to_doc_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdb__browse__qualified_functor_to_doc_1_0_i34);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_proceed();
MR_def_label(fn__mdb__browse__qualified_functor_to_doc_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__mdb__browse__qualified_functor_to_doc_1_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__term_io__quoted_atom_1_0,
		fn__mdb__browse__qualified_functor_to_doc_1_0_i7);
MR_def_label(fn__mdb__browse__qualified_functor_to_doc_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__mdb__browse__qualified_functor_to_doc_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__term_io__quoted_atom_1_0,
		fn__mdb__browse__qualified_functor_to_doc_1_0_i9);
MR_def_label(fn__mdb__browse__qualified_functor_to_doc_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__mdb__browse__qualified_functor_to_doc_1_0,
		fn__mdb__browse__qualified_functor_to_doc_1_0_i12);
MR_def_label(fn__mdb__browse__qualified_functor_to_doc_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(pretty_printer__get_default_formatter_map_3_0);
MR_decl_entry(string__contains_char_2_0);
MR_decl_entry(fn__string__split_at_char_2_0);
MR_decl_entry(fn__pretty_printer__group_1_0);
MR_decl_entry(fn__pretty_printer__indent_1_0);
MR_decl_entry(fn__pretty_printer__format_arg_1_0);
MR_decl_entry(pretty_printer__write_doc_to_stream_9_1);

MR_BEGIN_MODULE(mdb__browse_module14)
	MR_init_entry1(mdb__browse__browser_term_to_string_pretty_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browser_term_to_string_pretty_8_0);
	MR_init_label10(mdb__browse__browser_term_to_string_pretty_8_0,3,10,11,12,8,15,7,5,18,19)
	MR_init_label9(mdb__browse__browser_term_to_string_pretty_8_0,55,21,26,34,39,2,44,45,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browser_term_to_string_pretty'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__browser_term_to_string_pretty_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(0, MR_r3, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	}
	MR_np_call_localret_ent(pretty_printer__get_default_formatter_map_3_0,
		mdb__browse__browser_term_to_string_pretty_8_0_i44);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(10) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i7);
	}
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("!.", 2)) != 0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i7);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("..", 2)) != 0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i12);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i7);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("=..", 3)) != 0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i7);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 46;
	MR_np_call_localret_ent(string__contains_char_2_0,
		mdb__browse__browser_term_to_string_pretty_8_0_i15);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i5);
	}
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(8);
	MR_tfield(3, MR_r2, 2) = MR_sv(10);
	MR_sv(8) = MR_r2;
	MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i34);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r1 = (MR_Integer) 46;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__string__split_at_char_2_0,
		mdb__browse__browser_term_to_string_pretty_8_0_i18);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdb__browse__qualified_functor_to_doc_1_0,
		mdb__browse__browser_term_to_string_pretty_8_0_i19);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i21);
	}
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i34);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,5,3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,11,1);
	MR_np_call_localret_ent(fn__pretty_printer__group_1_0,
		mdb__browse__browser_term_to_string_pretty_8_0_i26);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(10);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,11,2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(9);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__pretty_printer__indent_1_0,
		mdb__browse__browser_term_to_string_pretty_8_0_i55);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tfield(1, MR_sv(6), 0);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,5,6);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__pretty_printer__format_arg_1_0,
		mdb__browse__browser_term_to_string_pretty_8_0_i39);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(8), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(8), 0) = MR_r2;
	}
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(pretty_printer__get_default_formatter_map_3_0,
		mdb__browse__browser_term_to_string_pretty_8_0_i44);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(5),0)) {
		MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i45);
	}
	MR_tag_alloc_heap(MR_r7, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r7, 0) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r8 = MR_sv(8);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(mdb__browse__browser_term_to_string_pretty_8_0_i48);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r7, 0) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r8 = MR_sv(8);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(mdb__browse__browser_term_to_string_pretty_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 2;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(pretty_printer__write_doc_to_stream_9_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__sized_pretty__browser_term_to_string_line_5_0);

MR_BEGIN_MODULE(mdb__browse_module15)
	MR_init_entry1(mdb__browse__portray_raw_pretty_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__portray_raw_pretty_5_0);
	MR_init_label2(mdb__browse__portray_raw_pretty_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'portray_raw_pretty'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__portray_raw_pretty_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__get_stream_db_3_0,
		mdb__browse__portray_raw_pretty_5_0_i2);
MR_def_label(mdb__browse__portray_raw_pretty_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(mdb__sized_pretty__browser_term_to_string_line_5_0,
		mdb__browse__portray_raw_pretty_5_0_i3);
MR_def_label(mdb__browse__portray_raw_pretty_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdb__browse_module16)
	MR_init_entry1(fn__mdb__browse__dirs_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browse__dirs_to_string_1_0);
	MR_init_label9(fn__mdb__browse__dirs_to_string_1_0,3,7,8,49,11,12,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dirs_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__browse__dirs_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdb__browse__dirs_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__mdb__browse__dirs_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__mdb__browse__dirs_to_string_1_0_i49);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__mdb__browse__dirs_to_string_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_proceed();
MR_def_label(fn__mdb__browse__dirs_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__mdb__browse__dirs_to_string_1_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_proceed();
MR_def_label(fn__mdb__browse__dirs_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(fn__string__int_to_string_1_0);
MR_def_label(fn__mdb__browse__dirs_to_string_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__mdb__browse__dirs_to_string_1_0_i11);
	}
	MR_r1 = MR_r2;
	MR_sv(1) = (MR_Word) MR_string_const("..", 2);
	MR_np_localcall_lab(fn__mdb__browse__dirs_to_string_1_0,
		fn__mdb__browse__dirs_to_string_1_0_i14);
MR_def_label(fn__mdb__browse__dirs_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__mdb__browse__dirs_to_string_1_0_i12);
	}
	MR_r1 = MR_r2;
	MR_sv(1) = MR_tfield(2, MR_r3, 0);
	MR_np_localcall_lab(fn__mdb__browse__dirs_to_string_1_0,
		fn__mdb__browse__dirs_to_string_1_0_i14);
MR_def_label(fn__mdb__browse__dirs_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browse__dirs_to_string_1_0_i13);
MR_def_label(fn__mdb__browse__dirs_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_localcall_lab(fn__mdb__browse__dirs_to_string_1_0,
		fn__mdb__browse__dirs_to_string_1_0_i14);
MR_def_label(fn__mdb__browse__dirs_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browse__dirs_to_string_1_0_i15);
MR_def_label(fn__mdb__browse__dirs_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module17)
	MR_init_entry1(mdb__browse__report_deref_error_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__report_deref_error_5_0);
	MR_init_label10(mdb__browse__report_deref_error_5_0,2,5,6,7,3,10,11,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_deref_error'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__report_deref_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("error: ", 7);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__report_deref_error_5_0_i2);
MR_def_label(mdb__browse__report_deref_error_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__browse__report_deref_error_5_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdb__browse__dirs_to_string_1_0,
		mdb__browse__report_deref_error_5_0_i5);
MR_def_label(mdb__browse__report_deref_error_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__report_deref_error_5_0_i6);
MR_def_label(mdb__browse__report_deref_error_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("in subdir ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__report_deref_error_5_0_i7);
MR_def_label(mdb__browse__report_deref_error_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__report_deref_error_5_0_i3);
MR_def_label(mdb__browse__report_deref_error_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__browse__report_deref_error_5_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__report_deref_error_5_0_i13);
MR_def_label(mdb__browse__report_deref_error_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(mdb__browse__report_deref_error_5_0_i11);
	}
	MR_r1 = MR_tfield(2, MR_sv(3), 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__report_deref_error_5_0_i13);
MR_def_label(mdb__browse__report_deref_error_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__browse__report_deref_error_5_0_i12);
MR_def_label(mdb__browse__report_deref_error_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__report_deref_error_5_0_i13);
MR_def_label(mdb__browse__report_deref_error_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("there is no subterm ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__report_deref_error_5_0_i14);
MR_def_label(mdb__browse__report_deref_error_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module18)
	MR_init_entry1(mdb__browse__simplify_rev_dirs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__simplify_rev_dirs_4_0);
	MR_init_label3(mdb__browse__simplify_rev_dirs_4_0,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_rev_dirs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__simplify_rev_dirs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__simplify_rev_dirs_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(mdb__browse__simplify_rev_dirs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__browse__simplify_rev_dirs_4_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localtailcall(mdb__browse__simplify_rev_dirs_4_0);
MR_def_label(mdb__browse__simplify_rev_dirs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browse__simplify_rev_dirs_4_0_i7);
	}
	MR_r1 = MR_r5;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_localtailcall(mdb__browse__simplify_rev_dirs_4_0);
MR_def_label(mdb__browse__simplify_rev_dirs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_r5;
	MR_r3 = MR_tempr1;
	MR_np_localtailcall(mdb__browse__simplify_rev_dirs_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(mdb__browse_module19)
	MR_init_entry1(mdb__browse__simplify_dirs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__simplify_dirs_2_0);
	MR_init_label1(mdb__browse__simplify_dirs_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_dirs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__simplify_dirs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__simplify_dirs_2_0_i2);
MR_def_label(mdb__browse__simplify_dirs_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(mdb__browse__simplify_rev_dirs_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module20)
	MR_init_entry1(mdb__browse__string_is_return_value_alias_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__string_is_return_value_alias_1_0);
	MR_init_label1(mdb__browse__string_is_return_value_alias_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_is_return_value_alias'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__string_is_return_value_alias_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("r", 1)) == 0)) {
		MR_GOTO_LAB(mdb__browse__string_is_return_value_alias_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rv", 2)) == 0)) {
		MR_GOTO_LAB(mdb__browse__string_is_return_value_alias_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("res", 3)) == 0)) {
		MR_GOTO_LAB(mdb__browse__string_is_return_value_alias_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ret", 3)) == 0)) {
		MR_GOTO_LAB(mdb__browse__string_is_return_value_alias_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("result", 6)) == 0)) {
		MR_GOTO_LAB(mdb__browse__string_is_return_value_alias_1_0_i2);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("return", 6)) == 0);
	MR_proceed();
MR_def_label(mdb__browse__string_is_return_value_alias_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__named_arg_cc_3_0);
MR_decl_entry(fn__univ__univ_type_1_0);
MR_decl_entry(fn__type_desc__type_ctor_1_0);
MR_decl_entry(fn__type_desc__type_ctor_name_1_0);
MR_decl_entry(fn__type_desc__type_ctor_module_name_1_0);
MR_decl_entry(deconstruct__arg_cc_3_0);
MR_decl_entry(require__error_1_0);
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(fn__univ__univ_1_0);

MR_BEGIN_MODULE(mdb__browse_module21)
	MR_init_entry1(mdb__browse__deref_subterm_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__deref_subterm_2_4_0);
	MR_init_label10(mdb__browse__deref_subterm_2_4_0,49,3,7,6,11,12,13,15,17,10)
	MR_init_label6(mdb__browse__deref_subterm_2_4_0,19,9,5,25,24,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deref_subterm_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__deref_subterm_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(mdb__browse__deref_subterm_2_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_2_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(mdb__browse__deref_subterm_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_2_4_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browse__deref_subterm_2_4_0_i7);
MR_def_label(mdb__browse__deref_subterm_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(deconstruct__named_arg_cc_3_0,
		mdb__browse__deref_subterm_2_4_0_i5);
MR_def_label(mdb__browse__deref_subterm_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_2_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__univ__univ_type_1_0,
		mdb__browse__deref_subterm_2_4_0_i11);
MR_def_label(mdb__browse__deref_subterm_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__type_desc__type_ctor_1_0,
		mdb__browse__deref_subterm_2_4_0_i12);
MR_def_label(mdb__browse__deref_subterm_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__type_desc__type_ctor_name_1_0,
		mdb__browse__deref_subterm_2_4_0_i13);
MR_def_label(mdb__browse__deref_subterm_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_2_4_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__type_desc__type_ctor_module_name_1_0,
		mdb__browse__deref_subterm_2_4_0_i15);
MR_def_label(mdb__browse__deref_subterm_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_2_4_0_i10);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browse__deref_subterm_2_4_0_i17);
MR_def_label(mdb__browse__deref_subterm_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(deconstruct__arg_cc_3_0,
		mdb__browse__deref_subterm_2_4_0_i5);
MR_def_label(mdb__browse__deref_subterm_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browse__deref_subterm_2_4_0_i19);
MR_def_label(mdb__browse__deref_subterm_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_np_call_localret_ent(deconstruct__arg_cc_3_0,
		mdb__browse__deref_subterm_2_4_0_i5);
MR_def_label(mdb__browse__deref_subterm_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deref_subterm_2: found parent", 29);
	MR_np_call_localret_ent(require__error_1_0,
		mdb__browse__deref_subterm_2_4_0_i5);
MR_def_label(mdb__browse__deref_subterm_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_2_4_0_i24);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		mdb__browse__deref_subterm_2_4_0_i25);
MR_def_label(mdb__browse__deref_subterm_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__browse__deref_subterm_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		mdb__browse__deref_subterm_2_4_0_i27);
MR_def_label(mdb__browse__deref_subterm_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(mdb__browse__deref_subterm_2_4_0_i49);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(list__index1_3_0);

MR_BEGIN_MODULE(mdb__browse_module22)
	MR_init_entry1(mdb__browse__deref_subterm_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__deref_subterm_3_0);
	MR_init_label10(mdb__browse__deref_subterm_3_0,2,3,6,5,12,19,20,21,22,23)
	MR_init_label9(mdb__browse__deref_subterm_3_0,18,17,27,26,30,16,34,15,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deref_subterm'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__deref_subterm_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__deref_subterm_3_0_i2);
MR_def_label(mdb__browse__deref_subterm_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__browse__simplify_rev_dirs_4_0,
		mdb__browse__deref_subterm_3_0_i3);
MR_def_label(mdb__browse__deref_subterm_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mdb__browse__deref_subterm_2_4_0,
		mdb__browse__deref_subterm_3_0_i6);
MR_def_label(mdb__browse__deref_subterm_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(mdb__browse__deref_subterm_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(mdb__browse__deref_subterm_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i17);
	}
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("r", 1)) != 0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i19);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(1), 2);
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i18);
	}
MR_def_label(mdb__browse__deref_subterm_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("rv", 2)) != 0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i20);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(1), 2);
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i18);
MR_def_label(mdb__browse__deref_subterm_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("res", 3)) != 0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i21);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(1), 2);
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i18);
MR_def_label(mdb__browse__deref_subterm_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("ret", 3)) != 0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i22);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(1), 2);
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i18);
MR_def_label(mdb__browse__deref_subterm_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("result", 6)) != 0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i23);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(1), 2);
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i18);
MR_def_label(mdb__browse__deref_subterm_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("return", 6)) != 0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i15);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(1), 2);
	MR_r2 = MR_tfield(1, MR_r1, 1);
MR_def_label(mdb__browse__deref_subterm_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i15);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i16);
MR_def_label(mdb__browse__deref_subterm_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_sv(3), 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdb__browse__deref_subterm_3_0_i27);
MR_def_label(mdb__browse__deref_subterm_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_sv(5) - (MR_Integer) MR_r1);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i26);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i26);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i16);
MR_def_label(mdb__browse__deref_subterm_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__index1_3_0,
		mdb__browse__deref_subterm_3_0_i30);
MR_def_label(mdb__browse__deref_subterm_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_tempr1;
	}
MR_def_label(mdb__browse__deref_subterm_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mdb__browse__deref_subterm_2_4_0,
		mdb__browse__deref_subterm_3_0_i34);
MR_def_label(mdb__browse__deref_subterm_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__deref_subterm_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdb__browse__deref_subterm_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
MR_def_label(mdb__browse__deref_subterm_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__browser_info__get_format_4_0);
MR_decl_entry(mdb__browser_info__get_format_params_4_0);
MR_decl_entry(mdb__browser_info__nl_debugger_3_0);

MR_BEGIN_MODULE(mdb__browse_module23)
	MR_init_entry1(mdb__browse__portray_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__portray_6_0);
	MR_init_label10(mdb__browse__portray_6_0,2,3,4,7,10,11,12,8,15,16)
	MR_init_label8(mdb__browse__portray_6_0,17,18,19,6,22,24,29,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'portray'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__portray_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__get_format_4_0,
		mdb__browse__portray_6_0_i2);
MR_def_label(mdb__browse__portray_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdb__browser_info__get_format_params_4_0,
		mdb__browse__portray_6_0_i3);
MR_def_label(mdb__browse__portray_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdb__browse__deref_subterm_3_0,
		mdb__browse__portray_6_0_i4);
MR_def_label(mdb__browse__portray_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__portray_6_0_i6);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("error: ", 7);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__portray_6_0_i7);
MR_def_label(mdb__browse__portray_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__browse__portray_6_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdb__browse__dirs_to_string_1_0,
		mdb__browse__portray_6_0_i10);
MR_def_label(mdb__browse__portray_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__portray_6_0_i11);
MR_def_label(mdb__browse__portray_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("in subdir ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__portray_6_0_i12);
MR_def_label(mdb__browse__portray_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__portray_6_0_i8);
MR_def_label(mdb__browse__portray_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__browse__portray_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__portray_6_0_i18);
MR_def_label(mdb__browse__portray_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(mdb__browse__portray_6_0_i16);
	}
	MR_r1 = MR_tfield(2, MR_sv(3), 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__portray_6_0_i18);
MR_def_label(mdb__browse__portray_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__browse__portray_6_0_i17);
MR_def_label(mdb__browse__portray_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__portray_6_0_i18);
MR_def_label(mdb__browse__portray_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("there is no subterm ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__portray_6_0_i19);
MR_def_label(mdb__browse__portray_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__portray_6_0_i31);
MR_def_label(mdb__browse__portray_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(mdb__browse__portray_6_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__browse__portray_flat_5_0,
		mdb__browse__portray_6_0_i31);
MR_def_label(mdb__browse__portray_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),3)) {
		MR_GOTO_LAB(mdb__browse__portray_6_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_sv(3);
	MR_r4 = MR_tfield(0, MR_tempr2, 2);
	MR_r5 = MR_tfield(0, MR_tempr2, 3);
	MR_r6 = MR_tfield(0, MR_tempr2, 1);
	MR_r7 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(mdb__browse__browser_term_to_string_pretty_8_0,
		mdb__browse__portray_6_0_i31);
MR_def_label(mdb__browse__portray_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(mdb__browse__portray_6_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__browse__portray_raw_pretty_5_0,
		mdb__browse__portray_6_0_i31);
MR_def_label(mdb__browse__portray_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__browse__portray_verbose_5_0,
		mdb__browse__portray_6_0_i31);
MR_def_label(mdb__browse__portray_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__nl_debugger_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module24)
	MR_init_entry1(mdb__browse__change_dir_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__change_dir_3_0);
	MR_init_label3(mdb__browse__change_dir_3_0,4,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'change_dir'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__change_dir_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdb__browse__change_dir_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__browse__change_dir_3_0_i4);
MR_def_label(mdb__browse__change_dir_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__change_dir_3_0_i5);
MR_def_label(mdb__browse__change_dir_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__change_dir_3_0_i5);
MR_def_label(mdb__browse__change_dir_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(mdb__browse__simplify_rev_dirs_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module25)
	MR_init_entry1(mdb__browse__set_path_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__set_path_3_0);
	MR_init_label4(mdb__browse__set_path_3_0,4,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_path'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__set_path_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__set_path_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__browse__set_path_3_0_i4);
MR_def_label(mdb__browse__set_path_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__set_path_3_0_i5);
MR_def_label(mdb__browse__set_path_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__set_path_3_0_i5);
MR_def_label(mdb__browse__set_path_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__browse__simplify_rev_dirs_4_0,
		mdb__browse__set_path_3_0_i6);
MR_def_label(mdb__browse__set_path_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module26)
	MR_init_entry1(mdb__browse__portray_maybe_path_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__portray_maybe_path_7_0);
	MR_init_label5(mdb__browse__portray_maybe_path_7_0,28,7,6,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'portray_maybe_path'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__portray_maybe_path_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__browse__portray_maybe_path_7_0_i28);
	}
	MR_np_tailcall_ent(mdb__browse__portray_6_0);
MR_def_label(mdb__browse__portray_maybe_path_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r5, 0);
	MR_r7 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__browse__portray_maybe_path_7_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__browse__portray_maybe_path_7_0_i7);
MR_def_label(mdb__browse__portray_maybe_path_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__portray_maybe_path_7_0_i8);
MR_def_label(mdb__browse__portray_maybe_path_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_tfield(0, MR_r7, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__portray_maybe_path_7_0_i8);
MR_def_label(mdb__browse__portray_maybe_path_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__browse__simplify_rev_dirs_4_0,
		mdb__browse__portray_maybe_path_7_0_i9);
MR_def_label(mdb__browse__portray_maybe_path_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdb__browse__portray_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module27)
	MR_init_entry1(mdb__browse__do_portray_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__do_portray_7_0);
	MR_init_label9(mdb__browse__do_portray_7_0,59,9,8,10,11,3,61,17,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_portray'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__do_portray_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__browse__do_portray_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__browse__do_portray_7_0_i59);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(mdb__browse__portray_6_0);
MR_def_label(mdb__browse__do_portray_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r5, 0);
	MR_r7 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__browse__do_portray_7_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__browse__do_portray_7_0_i9);
MR_def_label(mdb__browse__do_portray_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__do_portray_7_0_i10);
MR_def_label(mdb__browse__do_portray_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r2 = MR_tfield(0, MR_r7, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__do_portray_7_0_i10);
MR_def_label(mdb__browse__do_portray_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__browse__simplify_rev_dirs_4_0,
		mdb__browse__do_portray_7_0_i11);
MR_def_label(mdb__browse__do_portray_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdb__browse__portray_6_0);
	}
MR_def_label(mdb__browse__do_portray_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_r7 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__browse__do_portray_7_0_i61);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
	}
MR_def_label(mdb__browse__do_portray_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tfield(0, MR_r7, 0);
	MR_np_call_localret_ent(mdb__browse__interpret_format_options_2_0,
		mdb__browse__do_portray_7_0_i17);
MR_def_label(mdb__browse__do_portray_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__do_portray_7_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
	}
MR_def_label(mdb__browse__do_portray_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdb__browse__portray_maybe_path_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module28)
	MR_init_entry1(mdb__browse__get_value_representation_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__get_value_representation_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_value_representation'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__get_value_representation_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(mdb__browse_module29)
	MR_init_entry1(mdb__browse__do_print_memory_addr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__do_print_memory_addr_5_0);
	MR_init_label10(mdb__browse__do_print_memory_addr_5_0,3,6,5,7,8,9,12,15,16,17)
	MR_init_label10(mdb__browse__do_print_memory_addr_5_0,13,20,21,22,23,24,25,11,29,32)
	MR_init_label1(mdb__browse__do_print_memory_addr_5_0,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_print_memory_addr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__do_print_memory_addr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__browse__do_print_memory_addr_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__browse__deref_subterm_3_0,
		mdb__browse__do_print_memory_addr_5_0_i9);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__browse__do_print_memory_addr_5_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__browse__do_print_memory_addr_5_0_i6);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__do_print_memory_addr_5_0_i7);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__browse__do_print_memory_addr_5_0_i7);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__browse__simplify_rev_dirs_4_0,
		mdb__browse__do_print_memory_addr_5_0_i8);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdb__browse__deref_subterm_3_0,
		mdb__browse__do_print_memory_addr_5_0_i9);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__do_print_memory_addr_5_0_i11);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("error: ", 7);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__do_print_memory_addr_5_0_i12);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__browse__do_print_memory_addr_5_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdb__browse__dirs_to_string_1_0,
		mdb__browse__do_print_memory_addr_5_0_i15);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__do_print_memory_addr_5_0_i16);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("in subdir ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__do_print_memory_addr_5_0_i17);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__do_print_memory_addr_5_0_i13);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__browse__do_print_memory_addr_5_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__do_print_memory_addr_5_0_i23);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(mdb__browse__do_print_memory_addr_5_0_i21);
	}
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__do_print_memory_addr_5_0_i23);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__browse__do_print_memory_addr_5_0_i22);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__do_print_memory_addr_5_0_i23);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("there is no subterm ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__do_print_memory_addr_5_0_i24);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__do_print_memory_addr_5_0_i25);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__nl_debugger_3_0);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browse__do_print_memory_addr_5_0_i28);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browse__do_print_memory_addr_5_0_i29);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	Value;
	MR_Integer	Addr;
#define	MR_PROC_LABEL	mercury__mdb__browse__do_print_memory_addr_5_0
	Value = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_value_representation");
{
#line 758 "browse.m"

    Addr = (MR_Integer) Value;
;}
#line 4771 "mdb.browse.c"
	MR_RELEASE_GLOBAL_LOCK("get_value_representation");
	MR_tempr1 = Addr;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("addr = %x\n", 10);
	}
	MR_np_call_localret_ent(string__format_3_0,
		mdb__browse__do_print_memory_addr_5_0_i32);
MR_def_label(mdb__browse__do_print_memory_addr_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
	}
MR_def_label(mdb__browse__do_print_memory_addr_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("synthetic terms have no addresses\n", 34);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module30)
	MR_init_entry1(mdb__browse__help_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__help_3_0);
	MR_init_label1(mdb__browse__help_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'help'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__help_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,41);
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__browse__help_3_0_i2);
MR_def_label(mdb__browse__help_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(mdb__browse_module31)
	MR_init_entry1(mdb__browse__write_term_mode_debugger_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__write_term_mode_debugger_5_0);
	MR_init_label6(mdb__browse__write_term_mode_debugger_5_0,32,5,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_term_mode_debugger'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__write_term_mode_debugger_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__write_term_mode_debugger_5_0_i32);
	}
	MR_r2 = (MR_Word) MR_string_const("Mode information not available.\n", 32);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
MR_def_label(mdb__browse__write_term_mode_debugger_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__browse__write_term_mode_debugger_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__mdb__browse__write_term_mode_debugger_5_0_i5);
MR_def_label(mdb__browse__write_term_mode_debugger_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browse__write_term_mode_debugger_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("Input", 5);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__write_term_mode_debugger_5_0_i10);
MR_def_label(mdb__browse__write_term_mode_debugger_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(mdb__browse__write_term_mode_debugger_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("Not Applicable", 14);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__write_term_mode_debugger_5_0_i10);
MR_def_label(mdb__browse__write_term_mode_debugger_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__write_term_mode_debugger_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("Output", 6);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__write_term_mode_debugger_5_0_i10);
MR_def_label(mdb__browse__write_term_mode_debugger_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Unbound", 7);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__write_term_mode_debugger_5_0_i10);
MR_def_label(mdb__browse__write_term_mode_debugger_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__browser_info__write_path_4_0);
MR_decl_entry(mdb__browser_info__run_param_command_7_0);
MR_decl_entry(mdb__browser_info__send_term_to_socket_3_0);

MR_BEGIN_MODULE(mdb__browse_module32)
	MR_init_entry1(mdb__browse__run_command_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__run_command_7_0);
	MR_init_label10(mdb__browse__run_command_7_0,3,6,8,9,11,14,13,16,18,17)
	MR_init_label10(mdb__browse__run_command_7_0,20,22,24,27,28,30,26,34,33,37)
	MR_init_label9(mdb__browse__run_command_7_0,36,39,42,43,46,45,2,51,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'run_command'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__run_command_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdb__browse__set_path_3_0,
		mdb__browse__run_command_7_0_i37);
MR_def_label(mdb__browse__run_command_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("command not yet implemented\n", 28);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,7)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(4) = MR_r3;
	MR_GOTO_LAB(mdb__browse__run_command_7_0_i2);
MR_def_label(mdb__browse__run_command_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(mdb__browse__help_3_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i11);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 6);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	}
	MR_np_call_localret_ent(mdb__browse__write_term_mode_debugger_5_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i13);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdb__browser_info__write_path_4_0,
		mdb__browse__run_command_7_0_i14);
MR_def_label(mdb__browse__run_command_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__browser_info__nl_debugger_3_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,6)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_sv(4) = MR_r3;
	MR_GOTO_LAB(mdb__browse__run_command_7_0_i2);
MR_def_label(mdb__browse__run_command_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,8)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("Error: unknown command or syntax error.\n", 40);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__run_command_7_0_i18);
MR_def_label(mdb__browse__run_command_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Type \"help\" for help.\n", 22);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i20);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("command not yet implemented\n", 28);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i22);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__browse__do_print_memory_addr_5_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdb__browse__do_portray_7_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i26);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(mdb__browse__change_dir_3_0,
		mdb__browse__run_command_7_0_i27);
MR_def_label(mdb__browse__run_command_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__browse__deref_subterm_3_0,
		mdb__browse__run_command_7_0_i28);
MR_def_label(mdb__browse__run_command_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdb__browse__report_deref_error_5_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = (MR_Integer) 0;
	MR_sv(4) = MR_tempr1;
	MR_GOTO_LAB(mdb__browse__run_command_7_0_i2);
	}
MR_def_label(mdb__browse__run_command_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i33);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(mdb__browse__change_dir_3_0,
		mdb__browse__run_command_7_0_i34);
MR_def_label(mdb__browse__run_command_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_sv(3), 6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__write_term_mode_debugger_5_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__run_param_command_7_0,
		mdb__browse__run_command_7_0_i37);
MR_def_label(mdb__browse__run_command_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(mdb__browse__run_command_7_0_i2);
MR_def_label(mdb__browse__run_command_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i39);
	}
	MR_r5 = (((MR_Integer) MR_tfield(3, MR_r2, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r6 = ((MR_Integer) MR_tfield(3, MR_r2, 1) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_r6 | ((MR_Integer) MR_r5 << (MR_Integer) 1));
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_sv(4) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(mdb__browse__run_command_7_0_i2);
	}
MR_def_label(mdb__browse__run_command_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = ((MR_Integer) MR_tfield(3, MR_r2, 1) & (MR_Integer) 1);
	MR_sv(2) = (((MR_Integer) MR_tfield(3, MR_r2, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_r5, 0);
	}
	MR_np_call_localret_ent(mdb__browse__change_dir_3_0,
		mdb__browse__run_command_7_0_i42);
MR_def_label(mdb__browse__run_command_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdb__browse__deref_subterm_3_0,
		mdb__browse__run_command_7_0_i43);
MR_def_label(mdb__browse__run_command_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("error: cannot track subterm\n", 28);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browse__run_command_7_0_i46);
MR_def_label(mdb__browse__run_command_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_sv(4) = MR_sv(3);
	MR_GOTO_LAB(mdb__browse__run_command_7_0_i2);
MR_def_label(mdb__browse__run_command_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(4) | ((MR_Integer) MR_sv(2) << (MR_Integer) 1));
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_r1 = (MR_Integer) 1;
	}
MR_def_label(mdb__browse__run_command_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(mdb__browse__run_command_7_0_i50);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(mdb__browser_info__send_term_to_socket_3_0,
		mdb__browse__run_command_7_0_i51);
MR_def_label(mdb__browse__run_command_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(mdb__browse__run_command_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__parse__read_command_external_3_0);
MR_decl_entry(mdb__parse__read_command_4_0);

MR_BEGIN_MODULE(mdb__browse_module33)
	MR_init_entry1(mdb__browse__browse_main_loop_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browse_main_loop_5_0);
	MR_init_label7(mdb__browse__browse_main_loop_5_0,32,3,5,6,11,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browse_main_loop'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__browse_main_loop_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdb__browse__browse_main_loop_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__browse_main_loop_5_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(mdb__parse__read_command_external_3_0,
		mdb__browse__browse_main_loop_5_0_i5);
MR_def_label(mdb__browse__browse_main_loop_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("browser> ", 9);
	MR_np_call_localret_ent(mdb__parse__read_command_4_0,
		mdb__browse__browse_main_loop_5_0_i5);
MR_def_label(mdb__browse__browse_main_loop_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdb__browse__run_command_7_0,
		mdb__browse__browse_main_loop_5_0_i6);
MR_def_label(mdb__browse__browse_main_loop_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__browse_main_loop_5_0_i8);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(mdb__browse__browse_main_loop_5_0_i10);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_call_localret_ent(mdb__browser_info__send_term_to_socket_3_0,
		mdb__browse__browse_main_loop_5_0_i11);
MR_def_label(mdb__browse__browse_main_loop_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__browse__browse_main_loop_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__browse__browse_main_loop_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__browse__browse_main_loop_5_0_i32);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__browser_info__init_5_0);
MR_decl_entry(io__set_input_stream_4_0);
MR_decl_entry(io__set_output_stream_4_0);

MR_BEGIN_MODULE(mdb__browse_module34)
	MR_init_entry1(mdb__browse__browse_browser_term_no_modes_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browse_browser_term_no_modes_8_0);
	MR_init_label6(mdb__browse__browse_browser_term_no_modes_8_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browse_browser_term_no_modes'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__browse_browser_term_no_modes_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__init_5_0,
		mdb__browse__browse_browser_term_no_modes_8_0_i2);
MR_def_label(mdb__browse__browse_browser_term_no_modes_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_browser_term_no_modes_8_0_i3);
MR_def_label(mdb__browse__browse_browser_term_no_modes_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_browser_term_no_modes_8_0_i4);
MR_def_label(mdb__browse__browse_browser_term_no_modes_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browse_main_loop_5_0,
		mdb__browse__browse_browser_term_no_modes_8_0_i5);
MR_def_label(mdb__browse__browse_browser_term_no_modes_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_browser_term_no_modes_8_0_i6);
MR_def_label(mdb__browse__browse_browser_term_no_modes_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_browser_term_no_modes_8_0_i7);
MR_def_label(mdb__browse__browse_browser_term_no_modes_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module35)
	MR_init_entry1(mdb__browse__browse_browser_term_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browse_browser_term_9_0);
	MR_init_label6(mdb__browse__browse_browser_term_9_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browse_browser_term'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__browse_browser_term_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__mdb__browser_info__init_5_0,
		mdb__browse__browse_browser_term_9_0_i2);
MR_def_label(mdb__browse__browse_browser_term_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_browser_term_9_0_i3);
MR_def_label(mdb__browse__browse_browser_term_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_browser_term_9_0_i4);
MR_def_label(mdb__browse__browse_browser_term_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browse_main_loop_5_0,
		mdb__browse__browse_browser_term_9_0_i5);
MR_def_label(mdb__browse__browse_browser_term_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_browser_term_9_0_i6);
MR_def_label(mdb__browse__browse_browser_term_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_browser_term_9_0_i7);
MR_def_label(mdb__browse__browse_browser_term_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_output_4_0);
MR_decl_entry(term_to_xml__write_xml_doc_general_cc_8_0);
MR_decl_entry(io__close_output_3_0);

MR_BEGIN_MODULE(mdb__browse_module36)
	MR_init_entry1(mdb__browse__maybe_save_term_to_file_xml_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__maybe_save_term_to_file_xml_5_0);
	MR_init_label7(mdb__browse__maybe_save_term_to_file_xml_5_0,2,7,6,13,23,24,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_save_term_to_file_xml'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__maybe_save_term_to_file_xml_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__open_output_4_0,
		mdb__browse__maybe_save_term_to_file_xml_5_0_i2);
MR_def_label(mdb__browse__maybe_save_term_to_file_xml_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__maybe_save_term_to_file_xml_5_0_i3);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(mdb__browse__maybe_save_term_to_file_xml_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browse__maybe_save_term_to_file_xml_5_0_i7);
MR_def_label(mdb__browse__maybe_save_term_to_file_xml_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 1);
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_doc_general_cc_8_0,
		mdb__browse__maybe_save_term_to_file_xml_5_0_i23);
MR_def_label(mdb__browse__maybe_save_term_to_file_xml_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r9 = MR_tfield(1, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(mdb__browse__maybe_save_term_to_file_xml_5_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browse, xml_predicate_wrapper);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r3 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 1);
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_doc_general_cc_8_0,
		mdb__browse__maybe_save_term_to_file_xml_5_0_i23);
MR_def_label(mdb__browse__maybe_save_term_to_file_xml_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(1, MR_r9, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browse, xml_function_wrapper);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r3 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 1);
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_doc_general_cc_8_0,
		mdb__browse__maybe_save_term_to_file_xml_5_0_i23);
MR_def_label(mdb__browse__maybe_save_term_to_file_xml_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__close_output_3_0,
		mdb__browse__maybe_save_term_to_file_xml_5_0_i24);
MR_def_label(mdb__browse__maybe_save_term_to_file_xml_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(mdb__browse__maybe_save_term_to_file_xml_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__browser_info__xml_browser_cmd_1_0);
MR_decl_entry(fn__mdb__browser_info__xml_tmp_filename_1_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(io__flush_output_3_0);
MR_decl_entry(io__call_system_return_signal_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
MR_decl_entry(fn__string__string_1_0);

MR_BEGIN_MODULE(mdb__browse_module37)
	MR_init_entry1(mdb__browse__save_and_browse_browser_term_xml_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__save_and_browse_browser_term_xml_6_0);
	MR_init_label10(mdb__browse__save_and_browse_browser_term_xml_6_0,2,3,7,5,11,13,14,17,18,19)
	MR_init_label10(mdb__browse__save_and_browse_browser_term_xml_6_0,20,21,16,23,24,25,28,29,27,36)
	MR_init_label3(mdb__browse__save_and_browse_browser_term_xml_6_0,37,33,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_and_browse_browser_term_xml'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__save_and_browse_browser_term_xml_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__xml_browser_cmd_1_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i2);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdb__browser_info__xml_tmp_filename_1_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i3);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__browse__save_and_browse_browser_term_xml_6_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__save_and_browse_browser_term_xml_6_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("mdb: You need to issue a \"set xml_browser_cmd \'<command>\'\" command\nand a \"set xml_tmp_filename \'<filename>\'\" command first.\n", 124);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_4_0);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("mdb: You need to issue a \"set xml_browser_cmd \'<command>\'\" command first.\n", 74);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_4_0);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__save_and_browse_browser_term_xml_6_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("mdb: You need to issue a \"set xml_tmp_filename \'<filename>\'\" command first.\n", 76);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_4_0);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Saving term to XML file...\n", 27);
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i13);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__browse__maybe_save_term_to_file_xml_5_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i14);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__save_and_browse_browser_term_xml_6_0_i16);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i17);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\': ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i18);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error opening file \140", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i19);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i20);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i21);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Launching XML browser (this may take some time) ...\n", 52);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i23);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__flush_output_3_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i24);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__call_system_return_signal_4_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i25);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__save_and_browse_browser_term_xml_6_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i28);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i29);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdb: Error launching browser: ", 30);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i37);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__browse__save_and_browse_browser_term_xml_6_0_i33);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(mdb__browse__save_and_browse_browser_term_xml_6_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("\' terminated with a non-zero exit code.\n", 40);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i36);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdb: The command \140", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browse__save_and_browse_browser_term_xml_6_0_i37);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_4_0);
	}
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("mdb: The browser was killed.\n", 29);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_4_0);
MR_def_label(mdb__browse__save_and_browse_browser_term_xml_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module38)
	MR_init_entry1(mdb__browse__browse_browser_term_format_no_modes_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browse_browser_term_format_no_modes_8_0);
	MR_init_label6(mdb__browse__browse_browser_term_format_no_modes_8_0,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browse_browser_term_format_no_modes'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__browse_browser_term_format_no_modes_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__init_5_0,
		mdb__browse__browse_browser_term_format_no_modes_8_0_i3);
MR_def_label(mdb__browse__browse_browser_term_format_no_modes_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_browser_term_format_no_modes_8_0_i4);
MR_def_label(mdb__browse__browse_browser_term_format_no_modes_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_browser_term_format_no_modes_8_0_i5);
MR_def_label(mdb__browse__browse_browser_term_format_no_modes_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browse_main_loop_5_0,
		mdb__browse__browse_browser_term_format_no_modes_8_0_i6);
MR_def_label(mdb__browse__browse_browser_term_format_no_modes_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_browser_term_format_no_modes_8_0_i7);
MR_def_label(mdb__browse__browse_browser_term_format_no_modes_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_browser_term_format_no_modes_8_0_i8);
MR_def_label(mdb__browse__browse_browser_term_format_no_modes_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(2), 4);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module39)
	MR_init_entry1(mdb__browse__browse_browser_term_format_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browse_browser_term_format_9_0);
	MR_init_label6(mdb__browse__browse_browser_term_format_9_0,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browse_browser_term_format'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__browse_browser_term_format_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__init_5_0,
		mdb__browse__browse_browser_term_format_9_0_i3);
MR_def_label(mdb__browse__browse_browser_term_format_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_browser_term_format_9_0_i4);
MR_def_label(mdb__browse__browse_browser_term_format_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_browser_term_format_9_0_i5);
MR_def_label(mdb__browse__browse_browser_term_format_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browse_main_loop_5_0,
		mdb__browse__browse_browser_term_format_9_0_i6);
MR_def_label(mdb__browse__browse_browser_term_format_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_browser_term_format_9_0_i7);
MR_def_label(mdb__browse__browse_browser_term_format_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_browser_term_format_9_0_i8);
MR_def_label(mdb__browse__browse_browser_term_format_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(2), 4);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module40)
	MR_init_entry1(mdb__browse__browse_external_no_modes_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browse_external_no_modes_7_0);
	MR_init_label7(mdb__browse__browse_external_no_modes_7_0,2,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browse_external_no_modes'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__browse_external_no_modes_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		mdb__browse__browse_external_no_modes_7_0_i2);
MR_def_label(mdb__browse__browse_external_no_modes_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__init_5_0,
		mdb__browse__browse_external_no_modes_7_0_i4);
MR_def_label(mdb__browse__browse_external_no_modes_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_external_no_modes_7_0_i5);
MR_def_label(mdb__browse__browse_external_no_modes_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_external_no_modes_7_0_i6);
MR_def_label(mdb__browse__browse_external_no_modes_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browse_main_loop_5_0,
		mdb__browse__browse_external_no_modes_7_0_i7);
MR_def_label(mdb__browse__browse_external_no_modes_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_external_no_modes_7_0_i8);
MR_def_label(mdb__browse__browse_external_no_modes_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_external_no_modes_7_0_i9);
MR_def_label(mdb__browse__browse_external_no_modes_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 4);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module41)
	MR_init_entry1(mdb__browse__browse_external_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__browse_external_8_0);
	MR_init_label7(mdb__browse__browse_external_8_0,2,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browse_external'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__browse_external_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		mdb__browse__browse_external_8_0_i2);
MR_def_label(mdb__browse__browse_external_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__init_5_0,
		mdb__browse__browse_external_8_0_i4);
MR_def_label(mdb__browse__browse_external_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_external_8_0_i5);
MR_def_label(mdb__browse__browse_external_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_external_8_0_i6);
MR_def_label(mdb__browse__browse_external_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browse_main_loop_5_0,
		mdb__browse__browse_external_8_0_i7);
MR_def_label(mdb__browse__browse_external_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__browse__browse_external_8_0_i8);
MR_def_label(mdb__browse__browse_external_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__browse_external_8_0_i9);
MR_def_label(mdb__browse__browse_external_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(4), 4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module42)
	MR_init_entry1(mdb__browse__print_browser_term_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__print_browser_term_6_0);
	MR_init_label5(mdb__browse__print_browser_term_6_0,2,3,4,5,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_browser_term'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__print_browser_term_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__init_5_0,
		mdb__browse__print_browser_term_6_0_i2);
MR_def_label(mdb__browse__print_browser_term_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__print_browser_term_6_0_i3);
MR_def_label(mdb__browse__print_browser_term_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__browser_info__get_format_4_0,
		mdb__browse__print_browser_term_6_0_i4);
MR_def_label(mdb__browse__print_browser_term_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(mdb__browse__print_browser_term_6_0_i5);
	}
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browse__print_browser_term_6_0_i5);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		mdb__browse__print_browser_term_6_0_i5);
MR_def_label(mdb__browse__print_browser_term_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__browse__portray_6_0,
		mdb__browse__print_browser_term_6_0_i11);
MR_def_label(mdb__browse__print_browser_term_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__set_output_stream_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module43)
	MR_init_entry1(mdb__browse__print_browser_term_format_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__print_browser_term_format_7_0);
	MR_init_label5(mdb__browse__print_browser_term_format_7_0,3,4,5,6,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_browser_term_format'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__print_browser_term_format_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__init_5_0,
		mdb__browse__print_browser_term_format_7_0_i3);
MR_def_label(mdb__browse__print_browser_term_format_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__browse__print_browser_term_format_7_0_i4);
MR_def_label(mdb__browse__print_browser_term_format_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__get_format_4_0,
		mdb__browse__print_browser_term_format_7_0_i5);
MR_def_label(mdb__browse__print_browser_term_format_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(mdb__browse__print_browser_term_format_7_0_i6);
	}
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browse__print_browser_term_format_7_0_i6);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		mdb__browse__print_browser_term_format_7_0_i6);
MR_def_label(mdb__browse__print_browser_term_format_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__browse__portray_6_0,
		mdb__browse__print_browser_term_format_7_0_i12);
MR_def_label(mdb__browse__print_browser_term_format_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__set_output_stream_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(mdb__browse_module44)
	MR_init_entry1(mdb__browse__write_indent_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__write_indent_3_0);
	MR_init_label3(mdb__browse__write_indent_3_0,10,3,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_indent'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__write_indent_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(mdb__browse__write_indent_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browse__write_indent_3_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		mdb__browse__write_indent_3_0_i3);
MR_def_label(mdb__browse__write_indent_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(mdb__browse__write_indent_3_0_i10);
MR_def_label(mdb__browse__write_indent_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__type_of_1_0);
MR_decl_entry(fn__type_desc__type_args_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(type_desc__has_type_2_0);
MR_decl_entry(builtin__dynamic_cast_2_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(deconstruct__deconstruct_5_2);

MR_BEGIN_MODULE(mdb__browse_module45)
	MR_init_entry1(mdb__browse__save_term_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__save_term_4_0);
	MR_init_label10(mdb__browse__save_term_4_0,3,4,6,8,10,14,13,17,18,19)
	MR_init_label10(mdb__browse__save_term_4_0,20,21,22,2,24,25,26,29,30,31)
	MR_init_label6(mdb__browse__save_term_4_0,45,33,34,36,37,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_term'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__save_term_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		mdb__browse__save_term_4_0_i3);
MR_def_label(mdb__browse__save_term_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__type_desc__type_args_1_0,
		mdb__browse__save_term_4_0_i4);
MR_def_label(mdb__browse__save_term_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__browse__save_term_4_0_i2);
	}
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		mdb__browse__save_term_4_0_i6);
MR_def_label(mdb__browse__save_term_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browse__save_term_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(type_desc__has_type_2_0,
		mdb__browse__save_term_4_0_i8);
MR_def_label(mdb__browse__save_term_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__dynamic_cast_2_0,
		mdb__browse__save_term_4_0_i10);
MR_def_label(mdb__browse__save_term_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browse__save_term_4_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__save_term_4_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__browse__write_indent_3_0,
		mdb__browse__save_term_4_0_i14);
MR_def_label(mdb__browse__save_term_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdb__browse__save_term_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__univ__univ_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		mdb__browse__save_term_4_0_i17);
MR_def_label(mdb__browse__save_term_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__browse__write_indent_3_0,
		mdb__browse__save_term_4_0_i18);
MR_def_label(mdb__browse__save_term_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__save_term_4_0_i19);
MR_def_label(mdb__browse__save_term_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__browse__save_args_4_0,
		mdb__browse__save_term_4_0_i20);
MR_def_label(mdb__browse__save_term_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__save_term_4_0_i21);
MR_def_label(mdb__browse__save_term_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__browse__write_indent_3_0,
		mdb__browse__save_term_4_0_i22);
MR_def_label(mdb__browse__save_term_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdb__browse__save_term_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		mdb__browse__save_term_4_0_i24);
MR_def_label(mdb__browse__save_term_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__browse__write_indent_3_0,
		mdb__browse__save_term_4_0_i25);
MR_def_label(mdb__browse__save_term_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__save_term_4_0_i26);
MR_def_label(mdb__browse__save_term_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__browse__save_term_4_0_i39);
	}
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__save_term_4_0_i29);
MR_def_label(mdb__browse__save_term_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browse__save_term_4_0_i30);
MR_def_label(mdb__browse__save_term_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(mdb__browse__save_term_4_0,
		mdb__browse__save_term_4_0_i31);
MR_def_label(mdb__browse__save_term_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__browse__save_term_4_0_i33);
	}
MR_def_label(mdb__browse__save_term_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__save_term_4_0_i36);
MR_def_label(mdb__browse__save_term_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__save_term_4_0_i34);
MR_def_label(mdb__browse__save_term_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__browse__save_args_4_0,
		mdb__browse__save_term_4_0_i45);
MR_def_label(mdb__browse__save_term_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__browse__write_indent_3_0,
		mdb__browse__save_term_4_0_i37);
MR_def_label(mdb__browse__save_term_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdb__browse__save_term_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module46)
	MR_init_entry1(mdb__browse__save_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__save_args_4_0);
	MR_init_label8(mdb__browse__save_args_4_0,25,4,5,8,9,10,13,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__save_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdb__browse__save_args_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browse__save_args_4_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browse__save_args_4_0_i4);
MR_def_label(mdb__browse__save_args_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__save_term_4_0,
		mdb__browse__save_args_4_0_i5);
MR_def_label(mdb__browse__save_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__browse__save_args_4_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__save_args_4_0_i8);
MR_def_label(mdb__browse__save_args_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browse__save_args_4_0_i9);
MR_def_label(mdb__browse__save_args_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__save_term_4_0,
		mdb__browse__save_args_4_0_i10);
MR_def_label(mdb__browse__save_args_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__browse__save_args_4_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__browse__save_args_4_0_i13);
MR_def_label(mdb__browse__save_args_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__browse__save_args_4_0_i25);
MR_def_label(mdb__browse__save_args_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module47)
	MR_init_entry1(mdb__browse__save_term_to_file_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__save_term_to_file_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_term_to_file'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__save_term_to_file_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module48)
	MR_init_entry1(mdb__browse__save_term_to_file_xml_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__save_term_to_file_xml_5_0);
	MR_init_label4(mdb__browse__save_term_to_file_xml_5_0,2,5,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_term_to_file_xml'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browse__save_term_to_file_xml_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(mdb__browse__maybe_save_term_to_file_xml_5_0,
		mdb__browse__save_term_to_file_xml_5_0_i2);
MR_def_label(mdb__browse__save_term_to_file_xml_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browse__save_term_to_file_xml_5_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		mdb__browse__save_term_to_file_xml_5_0_i5);
MR_def_label(mdb__browse__save_term_to_file_xml_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__browse__save_term_to_file_xml_5_0_i6);
MR_def_label(mdb__browse__save_term_to_file_xml_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(mdb__browse__save_term_to_file_xml_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module49)
	MR_init_entry1(mdb__browse__bool_format_option_is_true_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__bool_format_option_is_true_2_0);
	MR_init_label1(mdb__browse__bool_format_option_is_true_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bool_format_option_is_true'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__bool_format_option_is_true_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__browse__bool_format_option_is_true_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(mdb__browse__bool_format_option_is_true_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__browse__bool_format_option_is_true_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__univ_to_type_2_0);
MR_decl_entry(io__write_char_4_0);

MR_BEGIN_MODULE(mdb__browse_module50)
	MR_init_entry1(mdb__browse__write_univ_or_unbound_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browse__write_univ_or_unbound_4_0);
	MR_init_label2(mdb__browse__write_univ_or_unbound_4_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_univ_or_unbound'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browse__write_univ_or_unbound_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browse, unbound);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browse__write_univ_or_unbound_4_0_i3);
MR_def_label(mdb__browse__write_univ_or_unbound_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browse__write_univ_or_unbound_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 95;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_4_0);
MR_def_label(mdb__browse__write_univ_or_unbound_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_115_116_114_101_97_109_95_95_115_116_114_105_110_103_95_119_114_105_116_101_114_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdb__browser_info__dir_0_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdb__browse_module51)
	MR_init_entry1(__Unify___mdb__browse__deref_result_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browse__deref_result_1_0);
	MR_init_label4(__Unify___mdb__browse__deref_result_1_0,7,19,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__browse__deref_result_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__browse__deref_result_1_0_i19);
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
		MR_GOTO_LAB(__Unify___mdb__browse__deref_result_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___mdb__browse__deref_result_1_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__browse__deref_result_1_0_i7);
MR_def_label(__Unify___mdb__browse__deref_result_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browse__deref_result_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___mdb__browser_info__dir_0_0);
MR_def_label(__Unify___mdb__browse__deref_result_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browse__deref_result_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdb__browse__deref_result_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__browse__deref_result_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___mdb__browser_info__dir_0_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mdb__browse_module52)
	MR_init_entry1(__Compare___mdb__browse__deref_result_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browse__deref_result_1_0);
	MR_init_label7(__Compare___mdb__browse__deref_result_1_0,3,2,9,7,5,15,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__browse__deref_result_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__browse__deref_result_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(__Compare___mdb__browse__deref_result_1_0_i2);
MR_def_label(__Compare___mdb__browse__deref_result_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__browse__deref_result_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__browse__deref_result_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___mdb__browse__deref_result_1_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(3);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__browse__deref_result_1_0_i9);
MR_def_label(__Compare___mdb__browse__deref_result_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browse__deref_result_1_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___mdb__browser_info__dir_0_0);
MR_def_label(__Compare___mdb__browse__deref_result_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__browse__deref_result_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___mdb__browse__deref_result_1_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__browse__deref_result_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(3), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__browse__deref_result_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module53)
	MR_init_entry1(__Unify___mdb__browse__unbound_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browse__unbound_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browse__unbound_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module54)
	MR_init_entry1(__Compare___mdb__browse__unbound_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browse__unbound_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browse__unbound_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___univ__univ_0_0);

MR_BEGIN_MODULE(mdb__browse_module55)
	MR_init_entry1(__Unify___mdb__browse__xml_function_wrapper_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browse__xml_function_wrapper_0_0);
	MR_init_label3(__Unify___mdb__browse__xml_function_wrapper_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__browse__xml_function_wrapper_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browse__xml_function_wrapper_0_0_i8);
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
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__browse__xml_function_wrapper_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__browse__xml_function_wrapper_0_0_i4);
MR_def_label(__Unify___mdb__browse__xml_function_wrapper_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browse__xml_function_wrapper_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___univ__univ_0_0);
MR_def_label(__Unify___mdb__browse__xml_function_wrapper_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browse__xml_function_wrapper_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___univ__univ_0_0);

MR_BEGIN_MODULE(mdb__browse_module56)
	MR_init_entry1(__Compare___mdb__browse__xml_function_wrapper_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browse__xml_function_wrapper_0_0);
	MR_init_label5(__Compare___mdb__browse__xml_function_wrapper_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__browse__xml_function_wrapper_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browse__xml_function_wrapper_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__browse__xml_function_wrapper_0_0_i2);
MR_def_label(__Compare___mdb__browse__xml_function_wrapper_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__browse__xml_function_wrapper_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__browse__xml_function_wrapper_0_0_i5);
MR_def_label(__Compare___mdb__browse__xml_function_wrapper_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browse__xml_function_wrapper_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__browse__xml_function_wrapper_0_0_i9);
MR_def_label(__Compare___mdb__browse__xml_function_wrapper_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browse__xml_function_wrapper_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___univ__univ_0_0);
MR_def_label(__Compare___mdb__browse__xml_function_wrapper_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module57)
	MR_init_entry1(__Unify___mdb__browse__xml_predicate_wrapper_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browse__xml_predicate_wrapper_0_0);
	MR_init_label2(__Unify___mdb__browse__xml_predicate_wrapper_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__browse__xml_predicate_wrapper_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browse__xml_predicate_wrapper_0_0_i6);
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
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__browse__xml_predicate_wrapper_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdb__browse__xml_predicate_wrapper_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browse__xml_predicate_wrapper_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module58)
	MR_init_entry1(__Compare___mdb__browse__xml_predicate_wrapper_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browse__xml_predicate_wrapper_0_0);
	MR_init_label4(__Compare___mdb__browse__xml_predicate_wrapper_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__browse__xml_predicate_wrapper_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browse__xml_predicate_wrapper_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__browse__xml_predicate_wrapper_0_0_i2);
MR_def_label(__Compare___mdb__browse__xml_predicate_wrapper_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__browse__xml_predicate_wrapper_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__browse__xml_predicate_wrapper_0_0_i5);
MR_def_label(__Compare___mdb__browse__xml_predicate_wrapper_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browse__xml_predicate_wrapper_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__browse__xml_predicate_wrapper_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__tell_4_0);
MR_decl_entry(io__told_2_0);

MR_BEGIN_MODULE(mdb__browse_module59)
	MR_init_entry1(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0);
	MR_init_label10(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,2,7,8,6,10,11,12,13,16,17)
	MR_init_label4(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,18,5,4,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__save_term_to_file__[2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(io__tell_4_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i2);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i4);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i6);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i7);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__save_term_4_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i8);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i5);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i10);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i11);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__browse__save_args_4_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i12);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n)\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i13);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i5);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("=\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i16);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i17);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__save_term_4_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i18);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i5);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__told_2_0);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0_i21);
MR_def_label(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module60)
	MR_init_entry1(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__get_value_representation__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Value;
	MR_Integer	Addr;
#define	MR_PROC_LABEL	mercury__f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_0
	Value = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_value_representation");
{
#line 758 "browse.m"

    Addr = (MR_Integer) Value;
;}
#line 7566 "mdb.browse.c"
	MR_RELEASE_GLOBAL_LOCK("get_value_representation");
	MR_r1 = Addr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module61)
	MR_init_entry1(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___mdb__browse__unbound_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browse_module62)
	MR_init_entry1(f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___mdb__browse__unbound_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_95_95_98_114_111_119_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__mdb__browse__save_and_browse_browser_term_xml_6_0);

void
ML_BROWSE_browse_term_xml(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4);

void
ML_BROWSE_browse_term_xml(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browse__save_and_browse_browser_term_xml_6_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browse__save_and_browse_browser_term_xml_6_0), MR_FALSE);
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


MR_declare_entry(mercury__mdb__browse__save_term_to_file_xml_5_0);

void
ML_BROWSE_save_term_to_file_xml(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3);

void
ML_BROWSE_save_term_to_file_xml(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browse__save_term_to_file_xml_5_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browse__save_term_to_file_xml_5_0), MR_FALSE);
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


MR_declare_entry(mercury__mdb__browse__save_term_to_file_6_0);

void
ML_BROWSE_save_term_to_file(MR_String Mercury__argument1, MR_String Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4);

void
ML_BROWSE_save_term_to_file(MR_String Mercury__argument1, MR_String Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browse__save_term_to_file_6_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = (MR_Word) Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browse__save_term_to_file_6_0), MR_FALSE);
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


MR_declare_entry(mercury__mdb__browse__print_browser_term_format_7_0);

void
ML_BROWSE_print_browser_term_format(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5);

void
ML_BROWSE_print_browser_term_format(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browse__print_browser_term_format_7_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browse__print_browser_term_format_7_0), MR_FALSE);
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


MR_declare_entry(mercury__mdb__browse__print_browser_term_6_0);

void
ML_BROWSE_print_browser_term(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4);

void
ML_BROWSE_print_browser_term(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browse__print_browser_term_6_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browse__print_browser_term_6_0), MR_FALSE);
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


MR_declare_entry(mercury__mdb__browse__browse_external_no_modes_7_0);

void
ML_BROWSE_browse_external(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word * Mercury__argument6);

void
ML_BROWSE_browse_external(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word * Mercury__argument6)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browse__browse_external_no_modes_7_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browse__browse_external_no_modes_7_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument6 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__browse__browse_browser_term_format_no_modes_8_0);

void
ML_BROWSE_browse_browser_term_format(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word * Mercury__argument6);

void
ML_BROWSE_browse_browser_term_format(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word * Mercury__argument6)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browse__browse_browser_term_format_no_modes_8_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browse__browse_browser_term_format_no_modes_8_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument6 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__browse__browse_browser_term_no_modes_8_0);

void
ML_BROWSE_browse_browser_term(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word * Mercury__argument4, MR_Word Mercury__argument5, MR_Word * Mercury__argument6);

void
ML_BROWSE_browse_browser_term(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word * Mercury__argument4, MR_Word Mercury__argument5, MR_Word * Mercury__argument6)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browse__browse_browser_term_no_modes_8_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browse__browse_browser_term_no_modes_8_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument4 = MR_r1;
	*Mercury__argument6 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__mdb__browse_maybe_bunch_0(void)
{
	mdb__browse_module0();
	mdb__browse_module1();
	mdb__browse_module2();
	mdb__browse_module3();
	mdb__browse_module4();
	mdb__browse_module5();
	mdb__browse_module6();
	mdb__browse_module7();
	mdb__browse_module8();
	mdb__browse_module9();
	mdb__browse_module10();
	mdb__browse_module11();
	mdb__browse_module12();
	mdb__browse_module13();
	mdb__browse_module14();
	mdb__browse_module15();
	mdb__browse_module16();
	mdb__browse_module17();
	mdb__browse_module18();
	mdb__browse_module19();
	mdb__browse_module20();
	mdb__browse_module21();
	mdb__browse_module22();
	mdb__browse_module23();
	mdb__browse_module24();
	mdb__browse_module25();
	mdb__browse_module26();
	mdb__browse_module27();
	mdb__browse_module28();
	mdb__browse_module29();
	mdb__browse_module30();
	mdb__browse_module31();
	mdb__browse_module32();
	mdb__browse_module33();
	mdb__browse_module34();
	mdb__browse_module35();
	mdb__browse_module36();
	mdb__browse_module37();
	mdb__browse_module38();
	mdb__browse_module39();
}

static void mercury__mdb__browse_maybe_bunch_1(void)
{
	mdb__browse_module40();
	mdb__browse_module41();
	mdb__browse_module42();
	mdb__browse_module43();
	mdb__browse_module44();
	mdb__browse_module45();
	mdb__browse_module46();
	mdb__browse_module47();
	mdb__browse_module48();
	mdb__browse_module49();
	mdb__browse_module50();
	mdb__browse_module51();
	mdb__browse_module52();
	mdb__browse_module53();
	mdb__browse_module54();
	mdb__browse_module55();
	mdb__browse_module56();
	mdb__browse_module57();
	mdb__browse_module58();
	mdb__browse_module59();
	mdb__browse_module60();
	mdb__browse_module61();
	mdb__browse_module62();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__browse__init(void);
void mercury__mdb__browse__init_type_tables(void);
void mercury__mdb__browse__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__browse__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__browse__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__browse__init_threadscope_string_table(void);
#endif

void mercury__mdb__browse__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__browse_maybe_bunch_0();
	mercury__mdb__browse_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browse__type_ctor_info_deref_result_1,
		mdb__browse__deref_result_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browse__type_ctor_info_unbound_0,
		mdb__browse__unbound_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browse__type_ctor_info_xml_function_wrapper_0,
		mdb__browse__xml_function_wrapper_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browse__type_ctor_info_xml_predicate_wrapper_0,
		mdb__browse__xml_predicate_wrapper_0_0);
	mercury__mdb__browse__init_debugger();
}

void mercury__mdb__browse__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browse__type_ctor_info_deref_result_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browse__type_ctor_info_unbound_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browse__type_ctor_info_xml_function_wrapper_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browse__type_ctor_info_xml_predicate_wrapper_0);
	}
}


void mercury__mdb__browse__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__browse__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__browse);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__browse__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__browse__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
