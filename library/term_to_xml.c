/*
** Automatically generated from `term_to_xml.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__term_to_xml__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 532 "io.int"
#include "io.mh"

#line 27 "term_to_xml.c"
#line 540 "io.int"
#include "string.mh"

#line 31 "term_to_xml.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "term_to_xml.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "term_to_xml.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 43 "term_to_xml.c"
#line 31 "array.int2"
#include "array.mh"

#line 47 "term_to_xml.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "term_to_xml.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 55 "term_to_xml.c"
#line 3 "float.opt"
#include "float.mh"

#line 59 "term_to_xml.c"
#line 3 "math.opt"
#include "math.mh"

#line 63 "term_to_xml.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 67 "term_to_xml.c"
#line 4 "char.opt"
#include "char.mh"

#line 71 "term_to_xml.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 75 "term_to_xml.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 79 "term_to_xml.c"
#line 23 "store.opt"
#include "store.mh"

#line 83 "term_to_xml.c"
#line 4 "int.opt"
#include "int.mh"

#line 87 "term_to_xml.c"
#line 150 "io.opt"
#include "dir.mh"

#line 91 "term_to_xml.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 95 "term_to_xml.c"
#line 3 "list.opt"
#include "list.mh"

#line 99 "term_to_xml.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "term_to_xml.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 107 "term_to_xml.c"
#line 108 "term_to_xml.c"
#include "term_to_xml.mh"

#line 111 "term_to_xml.c"
#line 112 "term_to_xml.c"
#ifndef TERM_TO_XML_DECL_GUARD
#define TERM_TO_XML_DECL_GUARD

#line 116 "term_to_xml.c"
#line 117 "term_to_xml.c"

#endif
#line 120 "term_to_xml.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeClassDeclStruct
	mercury_data_term_to_xml__type_class_decl_xmlable_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_term_to_xml__type_ctor_info_xml_0,
	mercury_data_term_to_xml__type_ctor_info_maybe_stylesheet_0,
	mercury_data_term_to_xml__type_ctor_info_maybe_functor_info_0,
	mercury_data_term_to_xml__type_ctor_info_maybe_format_0,
	mercury_data_term_to_xml__type_ctor_info_maybe_dtd_0,
	mercury_data_term_to_xml__type_ctor_info_element_pred_0,
	mercury_data_term_to_xml__type_ctor_info_element_mapping_0,
	mercury_data_term_to_xml__type_ctor_info_dtd_generation_result_0,
	mercury_data_term_to_xml__type_ctor_info_doctype_0,
	mercury_data_term_to_xml__type_ctor_info_attr_source_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_term_to_xml__type_ctor_info_attr_from_source_0,
	mercury_data_term_to_xml__type_ctor_info_attr_0;
MR_decl_label4(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0, 20,4,6,5)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0, 10,3,4)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0, 10,3,4)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0, 10,3,4)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0, 10,3,4)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0, 10,3,4)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0, 10,3,4)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0, 13,4,5)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0, 31,6,1)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0, 13,4,5)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0, 13,4,5)
MR_decl_label4(term_to_xml__list__filter_map__ho15_3_0, 7,8,6,2)
MR_decl_label3(term_to_xml__list__map__ho28_3_0, 13,4,5)
MR_decl_label3(term_to_xml__list__map__ho30_3_0, 13,4,5)
MR_decl_label3(term_to_xml__list__map__ho31_3_0, 13,4,5)
MR_decl_label3(term_to_xml__list__map__ho35_3_0, 13,4,5)
MR_decl_label3(term_to_xml__list__map__ho37_3_0, 13,4,5)
MR_decl_label1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0, 2)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0, 2,10,1)
MR_decl_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0, 11,3,2)
MR_decl_label4(term_to_xml__string__all_match_2__ho40_3_0, 17,3,7,1)
MR_decl_label3(term_to_xml__string__foldl_substring_2__ho49_6_0, 11,3,2)
MR_decl_label1(term_to_xml__IntroducedFrom__pred__map__214__1__ho42_5_0, 3)
MR_decl_label1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_0, 2)
MR_decl_label1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_1, 2)
MR_decl_label1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_2, 2)
MR_decl_label6(term_to_xml__contains_noformat_xml_1_0, 10,17,18,5,3,1)
MR_decl_label5(term_to_xml__find_field_names_5_0, 37,7,3,4,1)
MR_decl_label2(term_to_xml__get_element_pred_2_0, 5,4)
MR_decl_label8(term_to_xml__get_elements_and_args_7_0, 6,8,10,11,12,13,7,3)
MR_decl_label3(term_to_xml__get_elements_and_args_7_0, 16,19,17)
MR_decl_label3(term_to_xml__indent_4_0, 11,3,2)
MR_decl_label1(term_to_xml__is_array_2_0, 1)
MR_decl_label1(term_to_xml__is_discriminated_union_2_0, 1)
MR_decl_label1(term_to_xml__is_maybe_yes_2_0, 1)
MR_decl_label8(term_to_xml__is_primitive_type_2_0, 3,2,6,5,9,8,11,1)
MR_decl_label8(term_to_xml__make_simple_element_4_0, 7,6,10,9,13,12,15,19)
MR_decl_label8(term_to_xml__make_simple_element_4_0, 4,20,27,3,32,33,127,35)
MR_decl_label8(term_to_xml__make_unique_element_4_0, 6,4,16,17,18,19,9,21)
MR_decl_label8(term_to_xml__make_unique_element_4_0, 22,23,3,28,29,27,26,31)
MR_decl_label7(term_to_xml__make_unique_element_4_0, 33,34,35,36,37,38,39)
MR_decl_label4(term_to_xml__mangle_char_3_0, 4,2,6,7)
MR_decl_label1(term_to_xml__maybe_indent_5_0, 3)
MR_decl_label1(term_to_xml__maybe_nl_4_0, 3)
MR_decl_label8(term_to_xml__primitive_value_2_0, 3,6,5,10,12,9,13,17)
MR_decl_label1(term_to_xml__primitive_value_2_0, 1)
MR_decl_label4(term_to_xml__write_attribute_4_0, 2,3,4,5)
MR_decl_label8(term_to_xml__write_attribute_source_kind_5_0, 3,41,7,12,43,16,19,28)
MR_decl_label3(term_to_xml__write_attribute_source_kind_5_0, 45,23,24)
MR_decl_label3(term_to_xml__write_child_xml_elements_8_3, 3,5,7)
MR_decl_label8(term_to_xml__write_doctype_8_0, 6,7,5,61,11,10,8,12)
MR_decl_label4(term_to_xml__write_doctype_8_0, 14,17,18,19)
MR_decl_label8(term_to_xml__write_doctype_8_2, 6,7,5,61,11,10,8,12)
MR_decl_label4(term_to_xml__write_doctype_8_2, 14,17,18,19)
MR_decl_label1(term_to_xml__write_dtd_5_0, 2)
MR_decl_label1(term_to_xml__write_dtd_6_0, 2)
MR_decl_label8(term_to_xml__write_dtd_attlist_8_0, 3,5,7,18,9,10,2,11)
MR_decl_label5(term_to_xml__write_dtd_attlist_8_0, 12,13,14,15,16)
MR_decl_label8(term_to_xml__write_dtd_entries_10_0, 93,3,4,5,6,7,8,9)
MR_decl_label8(term_to_xml__write_dtd_entries_10_0, 10,11,12,13,14,17,15,21)
MR_decl_label8(term_to_xml__write_dtd_entries_10_0, 26,25,24,23,31,33,29,34)
MR_decl_label8(term_to_xml__write_dtd_entries_10_0, 36,37,35,38,39,40,63,42)
MR_decl_label8(term_to_xml__write_dtd_entries_10_0, 41,46,48,44,49,50,52,53)
MR_decl_label8(term_to_xml__write_dtd_from_type_6_0, 2,10,9,7,12,14,16,19)
MR_decl_label8(term_to_xml__write_dtd_from_type_6_0, 22,24,25,26,27,28,29,11)
MR_decl_label1(term_to_xml__write_dtd_from_type_6_0, 34)
MR_decl_label1(term_to_xml__write_dtd_to_stream_6_0, 2)
MR_decl_label8(term_to_xml__write_dtd_type_elements_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label7(term_to_xml__write_dtd_types_6_0, 22,3,5,4,8,9,10)
MR_decl_label2(term_to_xml__write_element_end_4_0, 2,3)
MR_decl_label3(term_to_xml__write_element_start_5_0, 2,3,4)
MR_decl_label2(term_to_xml__write_element_start_with_attr_from_source_9_0, 2,3)
MR_decl_label3(term_to_xml__write_empty_element_5_0, 2,3,4)
MR_decl_label2(term_to_xml__write_empty_element_with_attr_from_source_9_0, 2,3)
MR_decl_label8(term_to_xml__write_external_doctype_5_0, 2,3,11,6,7,8,9,10)
MR_decl_label8(term_to_xml__write_primitive_element_with_attr_from_source_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(term_to_xml__write_xml_doc_general_8_0, 6,44,4,9,11,32,13,14)
MR_decl_label8(term_to_xml__write_xml_doc_general_8_0, 15,16,17,12,19,20,24,23)
MR_decl_label1(term_to_xml__write_xml_doc_general_8_0, 25)
MR_decl_label8(term_to_xml__write_xml_doc_general_cc_8_0, 6,44,4,9,11,32,13,14)
MR_decl_label8(term_to_xml__write_xml_doc_general_cc_8_0, 15,16,17,12,19,20,24,23)
MR_decl_label1(term_to_xml__write_xml_doc_general_cc_8_0, 25)
MR_decl_label8(term_to_xml__write_xml_doc_style_dtd_6_0, 2,34,4,5,6,7,8,3)
MR_decl_label8(term_to_xml__write_xml_doc_style_dtd_6_0, 10,12,13,14,22,17,18,19)
MR_decl_label5(term_to_xml__write_xml_doc_style_dtd_6_0, 20,21,27,30,29)
MR_decl_label3(term_to_xml__write_xml_element_4_0, 2,5,3)
MR_decl_label3(term_to_xml__write_xml_element_5_0, 2,5,3)
MR_decl_label8(term_to_xml__write_xml_element_format_6_0, 68,5,7,10,13,11,15,16)
MR_decl_label8(term_to_xml__write_xml_element_format_6_0, 17,18,21,69,24,25,26,29)
MR_decl_label8(term_to_xml__write_xml_element_format_6_0, 31,32,33,34,35,30,38,39)
MR_decl_label1(term_to_xml__write_xml_element_format_6_0, 37)
MR_decl_label3(term_to_xml__write_xml_element_general_6_0, 2,6,5)
MR_decl_label3(term_to_xml__write_xml_element_general_6_1, 2,6,5)
MR_decl_label3(term_to_xml__write_xml_element_general_6_2, 2,6,5)
MR_decl_label3(term_to_xml__write_xml_element_general_6_3, 2,6,5)
MR_decl_label4(term_to_xml__write_xml_element_general_7_0, 2,6,5,7)
MR_decl_label4(term_to_xml__write_xml_element_general_7_1, 2,6,5,7)
MR_decl_label4(term_to_xml__write_xml_element_general_7_2, 2,6,5,7)
MR_decl_label4(term_to_xml__write_xml_element_general_7_3, 2,6,5,7)
MR_decl_label3(term_to_xml__write_xml_element_to_stream_5_0, 2,5,3)
MR_decl_label8(term_to_xml__write_xml_element_univ_9_0, 3,2,4,6,9,10,13,15)
MR_decl_label8(term_to_xml__write_xml_element_univ_9_0, 11,19,20,18,23,24,25,26)
MR_decl_label5(term_to_xml__write_xml_element_univ_9_0, 27,28,29,30,31)
MR_decl_label8(term_to_xml__write_xml_element_univ_9_1, 3,2,4,6,9,10,13,15)
MR_decl_label8(term_to_xml__write_xml_element_univ_9_1, 11,19,20,18,23,24,25,26)
MR_decl_label5(term_to_xml__write_xml_element_univ_9_1, 27,28,29,30,31)
MR_decl_label8(term_to_xml__write_xml_element_univ_9_2, 3,2,4,6,9,10,13,15)
MR_decl_label8(term_to_xml__write_xml_element_univ_9_2, 11,19,20,18,23,24,25,26)
MR_decl_label5(term_to_xml__write_xml_element_univ_9_2, 27,28,29,30,31)
MR_decl_label8(term_to_xml__write_xml_element_univ_9_3, 3,2,4,6,9,10,13,15)
MR_decl_label8(term_to_xml__write_xml_element_univ_9_3, 11,19,20,18,23,24,25,26)
MR_decl_label5(term_to_xml__write_xml_element_univ_9_3, 27,28,29,30,31)
MR_decl_label7(term_to_xml__write_xml_escaped_char_4_0, 4,5,6,7,3,37,10)
MR_decl_label1(term_to_xml__write_xml_escaped_string_4_0, 2)
MR_decl_label4(term_to_xml__write_xml_header_4_0, 2,4,6,7)
MR_decl_label3(fn__term_to_xml__list__map_corresponding__ho21_3_0, 3,9,8)
MR_decl_label8(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0, 3,5,6,8,38,11,43,14)
MR_decl_label3(fn__term_to_xml__can_format_siblings_1_0, 7,10,11)
MR_decl_label8(fn__term_to_xml__can_generate_dtd_2_0, 5,4,2,7,9,12,15,17)
MR_decl_label2(fn__term_to_xml__can_generate_dtd_2_0, 19,6)
MR_decl_label8(fn__term_to_xml__can_generate_dtd_for_types_4_0, 147,3,6,12,16,24,23,27)
MR_decl_label8(fn__term_to_xml__can_generate_dtd_for_types_4_0, 26,30,29,32,10,38,37,41)
MR_decl_label8(fn__term_to_xml__can_generate_dtd_for_types_4_0, 42,45,44,46,47,48,49,50)
MR_decl_label3(fn__term_to_xml__can_generate_dtd_for_types_4_0, 51,8,4)
MR_decl_label4(fn__term_to_xml__dtd_allowed_functors_regex_2_0, 2,4,5,3)
MR_decl_label3(fn__term_to_xml__get_field_names_3_0, 5,7,2)
MR_decl_label1(fn__term_to_xml__make_attrs_from_sources_5_0, 2)
MR_decl_label8(fn__term_to_xml__mangle_1_0, 3,5,6,7,2,8,9,10)
MR_decl_label2(fn__term_to_xml__mangle_1_0, 12,13)
MR_decl_label1(__Unify___term_to_xml__list__list_1_1, 1)
MR_decl_label2(__Unify___term_to_xml__attr_0_0, 4,1)
MR_decl_label2(__Unify___term_to_xml__attr_from_source_0_0, 4,1)
MR_decl_label4(__Unify___term_to_xml__doctype_0_0, 8,6,21,1)
MR_decl_label6(__Unify___term_to_xml__dtd_generation_result_0_0, 6,8,12,16,31,1)
MR_decl_label3(__Unify___term_to_xml__element_mapping_0_0, 6,18,1)
MR_decl_label3(__Unify___term_to_xml__maybe_dtd_0_0, 6,18,1)
MR_decl_label3(__Unify___term_to_xml__maybe_functor_info_0_0, 10,5,1)
MR_decl_label3(__Unify___term_to_xml__maybe_stylesheet_0_0, 10,5,1)
MR_decl_label8(__Unify___term_to_xml__xml_0_0, 6,8,12,14,16,17,19,39)
MR_decl_label1(__Unify___term_to_xml__xml_0_0, 1)
MR_decl_label7(__Compare___term_to_xml__attr_0_0, 6,7,10,13,25,14,19)
MR_decl_label7(__Compare___term_to_xml__attr_from_source_0_0, 6,7,10,13,24,14,18)
MR_decl_label2(__Compare___term_to_xml__attr_source_0_0, 2,3)
MR_decl_label8(__Compare___term_to_xml__doctype_0_0, 40,26,30,31,74,6,58,9)
MR_decl_label6(__Compare___term_to_xml__doctype_0_0, 12,13,16,62,19,45)
MR_decl_label8(__Compare___term_to_xml__dtd_generation_result_0_0, 6,62,7,22,25,106,27,30)
MR_decl_label7(__Compare___term_to_xml__dtd_generation_result_0_0, 31,34,41,47,49,50,59)
MR_decl_label5(__Compare___term_to_xml__element_mapping_0_0, 26,7,14,6,18)
MR_decl_label6(__Compare___term_to_xml__maybe_dtd_0_0, 26,7,6,30,19,18)
MR_decl_label2(__Compare___term_to_xml__maybe_format_0_0, 2,3)
MR_decl_label8(__Compare___term_to_xml__maybe_functor_info_0_0, 7,5,9,12,13,16,19,33)
MR_decl_label2(__Compare___term_to_xml__maybe_functor_info_0_0, 20,24)
MR_decl_label8(__Compare___term_to_xml__maybe_stylesheet_0_0, 7,5,9,12,13,16,19,34)
MR_decl_label2(__Compare___term_to_xml__maybe_stylesheet_0_0, 20,25)
MR_decl_label8(__Compare___term_to_xml__xml_0_0, 6,9,12,13,16,20,28,29)
MR_decl_label8(__Compare___term_to_xml__xml_0_0, 31,35,36,42,43,45,50,51)
MR_decl_label8(__Compare___term_to_xml__xml_0_0, 56,57,59,68,67,60,81,83)
MR_decl_label8(__Compare___term_to_xml__xml_0_0, 157,74,94,128,95,129,96,101)
MR_def_extern_entry(fn__term_to_xml__to_xml_1_0)
MR_def_extern_entry(term_to_xml__write_xml_header_4_0)
MR_decl_static(term_to_xml__write_external_doctype_5_0)
MR_def_extern_entry(fn__term_to_xml__can_format_siblings_1_0)
MR_def_extern_entry(term_to_xml__contains_noformat_xml_1_0)
MR_decl_static(term_to_xml__maybe_nl_4_0)
MR_def_extern_entry(term_to_xml__indent_4_0)
MR_decl_static(term_to_xml__maybe_indent_5_0)
MR_def_extern_entry(term_to_xml__write_element_start_5_0)
MR_def_extern_entry(term_to_xml__write_empty_element_5_0)
MR_def_extern_entry(term_to_xml__write_element_end_4_0)
MR_decl_static(term_to_xml__write_xml_escaped_string_4_0)
MR_def_extern_entry(term_to_xml__write_xml_element_format_6_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_style_dtd_6_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_4_0)
MR_def_extern_entry(term_to_xml__write_xml_element_5_0)
MR_def_extern_entry(term_to_xml__get_element_pred_2_0)
MR_def_extern_entry(term_to_xml__primitive_value_2_0)
MR_def_extern_entry(term_to_xml__is_discriminated_union_2_0)
MR_decl_static(term_to_xml__find_field_names_5_0)
MR_def_extern_entry(fn__term_to_xml__get_field_names_3_0)
MR_def_extern_entry(term_to_xml__write_child_xml_elements_8_0)
MR_def_extern_entry(term_to_xml__write_child_xml_elements_8_1)
MR_def_extern_entry(term_to_xml__write_child_xml_elements_8_2)
MR_def_extern_entry(term_to_xml__write_child_xml_elements_8_3)
MR_def_extern_entry(fn__term_to_xml__make_attrs_from_sources_5_0)
MR_def_extern_entry(term_to_xml__write_primitive_element_with_attr_from_source_8_0)
MR_def_extern_entry(term_to_xml__write_element_start_with_attr_from_source_9_0)
MR_def_extern_entry(term_to_xml__write_empty_element_with_attr_from_source_9_0)
MR_def_extern_entry(term_to_xml__write_xml_element_univ_9_0)
MR_def_extern_entry(term_to_xml__write_xml_element_univ_9_1)
MR_def_extern_entry(term_to_xml__write_xml_element_univ_9_2)
MR_def_extern_entry(term_to_xml__write_xml_element_univ_9_3)
MR_def_extern_entry(term_to_xml__write_xml_element_general_7_0)
MR_def_extern_entry(term_to_xml__write_xml_element_general_7_1)
MR_def_extern_entry(term_to_xml__write_xml_element_general_7_2)
MR_def_extern_entry(term_to_xml__write_xml_element_general_7_3)
MR_decl_static(term_to_xml__is_array_2_0)
MR_decl_static(term_to_xml__get_elements_and_args_7_0)
MR_decl_static(term_to_xml__is_primitive_type_2_0)
MR_decl_static(fn__term_to_xml__can_generate_dtd_for_types_4_0)
MR_def_extern_entry(fn__term_to_xml__can_generate_dtd_2_0)
MR_decl_static(term_to_xml__write_dtd_attlists_8_0)
MR_decl_static(term_to_xml__write_dtd_entries_10_0)
MR_decl_static(term_to_xml__write_dtd_type_elements_6_0)
MR_decl_static(term_to_xml__write_dtd_types_6_0)
MR_def_extern_entry(term_to_xml__write_dtd_from_type_6_0)
MR_def_extern_entry(term_to_xml__write_dtd_6_0)
MR_decl_static(term_to_xml__write_doctype_8_0)
MR_decl_static(term_to_xml__write_doctype_8_2)
MR_def_extern_entry(term_to_xml__write_xml_doc_general_8_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_general_cc_8_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_3_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_to_stream_4_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_style_dtd_5_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_style_dtd_stream_6_0)
MR_def_extern_entry(term_to_xml__write_xml_element_4_0)
MR_def_extern_entry(term_to_xml__write_xml_element_to_stream_5_0)
MR_def_extern_entry(term_to_xml__write_xml_header_3_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_general_7_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_general_to_stream_8_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_general_cc_7_0)
MR_def_extern_entry(term_to_xml__write_xml_doc_general_cc_to_stream_8_0)
MR_def_extern_entry(term_to_xml__write_dtd_5_0)
MR_def_extern_entry(term_to_xml__write_dtd_to_stream_6_0)
MR_def_extern_entry(term_to_xml__write_dtd_from_type_5_0)
MR_def_extern_entry(term_to_xml__write_dtd_from_type_to_stream_6_0)
MR_def_extern_entry(term_to_xml__write_xml_element_general_6_0)
MR_def_extern_entry(term_to_xml__write_xml_element_general_6_1)
MR_def_extern_entry(term_to_xml__write_xml_element_general_6_2)
MR_def_extern_entry(term_to_xml__write_xml_element_general_6_3)
MR_decl_static(fn__term_to_xml__all_attr_sources_0_0)
MR_decl_static(fn__term_to_xml__mangle_1_0)
MR_decl_static(term_to_xml__make_unique_element_4_0)
MR_decl_static(term_to_xml__make_simple_element_4_0)
MR_decl_static(term_to_xml__mangle_char_3_0)
MR_def_extern_entry(term_to_xml__write_xml_element_univ_do_not_allow_8_0)
MR_def_extern_entry(term_to_xml__write_xml_element_univ_canonicalize_8_0)
MR_def_extern_entry(term_to_xml__write_xml_element_univ_include_details_cc_8_0)
MR_def_extern_entry(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0)
MR_def_extern_entry(term_to_xml__is_maybe_yes_2_0)
MR_def_extern_entry(term_to_xml__write_attribute_4_0)
MR_decl_static(term_to_xml__write_xml_escaped_char_4_0)
MR_decl_static(term_to_xml__write_attribute_source_kind_5_0)
MR_decl_static(term_to_xml__write_dtd_attlist_8_0)
MR_decl_static(fn__term_to_xml__dtd_allowed_functors_regex_2_0)
MR_def_extern_entry(__Unify___term_to_xml__attr_0_0)
MR_def_extern_entry(__Compare___term_to_xml__attr_0_0)
MR_def_extern_entry(__Unify___term_to_xml__attr_from_source_0_0)
MR_def_extern_entry(__Compare___term_to_xml__attr_from_source_0_0)
MR_def_extern_entry(__Unify___term_to_xml__attr_source_0_0)
MR_def_extern_entry(__Compare___term_to_xml__attr_source_0_0)
MR_def_extern_entry(__Unify___term_to_xml__doctype_0_0)
MR_def_extern_entry(__Compare___term_to_xml__doctype_0_0)
MR_def_extern_entry(__Unify___term_to_xml__dtd_generation_result_0_0)
MR_def_extern_entry(__Compare___term_to_xml__dtd_generation_result_0_0)
MR_def_extern_entry(__Unify___term_to_xml__element_mapping_0_0)
MR_def_extern_entry(__Compare___term_to_xml__element_mapping_0_0)
MR_def_extern_entry(__Unify___term_to_xml__element_pred_0_0)
MR_def_extern_entry(__Compare___term_to_xml__element_pred_0_0)
MR_def_extern_entry(__Unify___term_to_xml__maybe_dtd_0_0)
MR_def_extern_entry(__Compare___term_to_xml__maybe_dtd_0_0)
MR_def_extern_entry(__Unify___term_to_xml__maybe_format_0_0)
MR_def_extern_entry(__Compare___term_to_xml__maybe_format_0_0)
MR_def_extern_entry(__Unify___term_to_xml__maybe_functor_info_0_0)
MR_def_extern_entry(__Compare___term_to_xml__maybe_functor_info_0_0)
MR_def_extern_entry(__Unify___term_to_xml__maybe_stylesheet_0_0)
MR_def_extern_entry(__Compare___term_to_xml__maybe_stylesheet_0_0)
MR_def_extern_entry(__Unify___term_to_xml__xml_0_0)
MR_def_extern_entry(__Compare___term_to_xml__xml_0_0)
MR_decl_static(__Unify___term_to_xml__list__list_1_1)
MR_decl_static(fn__term_to_xml__IntroducedFrom__func__get_elements_and_args__905__1_1_0)
MR_decl_static(fn__term_to_xml__IntroducedFrom__func__get_elements_and_args__906__1_1_0)
MR_decl_static(term_to_xml__IntroducedFrom__pred__get_elements_and_args__911__1_5_0)
MR_decl_static(term_to_xml__list__filter_map__ho15_3_0)
MR_decl_static(fn__term_to_xml__list__map_corresponding__ho21_3_0)
MR_decl_static(fn__term_to_xml__list__map__ho24_2_0)
MR_decl_static(fn__term_to_xml__list__map__ho25_2_0)
MR_decl_static(fn__term_to_xml__list__map__ho27_2_0)
MR_decl_static(term_to_xml__list__map__ho28_3_0)
MR_decl_static(term_to_xml__list__map__ho30_3_0)
MR_decl_static(term_to_xml__list__map__ho31_3_0)
MR_decl_static(term_to_xml__list__map__ho35_3_0)
MR_decl_static(term_to_xml__list__map__ho37_3_0)
MR_decl_static(term_to_xml__string__all_match_2__ho40_3_0)
MR_decl_static(term_to_xml__IntroducedFrom__pred__map__214__1__ho42_5_0)
MR_decl_static(term_to_xml__IntroducedFrom__pred__map__214__1__ho44_5_0)
MR_decl_static(term_to_xml__string__foldl_substring_2__ho49_6_0)
MR_decl_static(fn__term_to_xml__IntroducedFrom__func__write_dtd_type_elements__1617__1__ho51_2_0)
MR_def_extern_entry(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_0)
MR_def_extern_entry(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_1)
MR_def_extern_entry(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_2)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(fn__f_116_101_114_109_95_116_111_95_120_109_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0)
MR_decl_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_attr_from_source_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_pseudo_type_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
static const struct mercury_type_0 mercury_common_0[14] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(term_to_xml, attr_from_source)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(type_desc, pseudo_type_desc)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(term_to_xml, attr_from_source)
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
MR_TAG_COMMON(0,6,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,6,1),
MR_TAG_COMMON(1,0,7)
}
},
{
{
MR_TAG_COMMON(0,6,2),
MR_TAG_COMMON(1,0,8)
}
},
{
{
MR_TAG_COMMON(0,6,3),
MR_TAG_COMMON(1,0,9)
}
},
{
{
MR_TAG_COMMON(0,6,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,6,1),
MR_TAG_COMMON(1,0,11)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__get_element_pred_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_maybe_functor_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__get_element_pred_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_1_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_1_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_2_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_2_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_3_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_3_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__term_to_xml__can_generate_dtd_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__term_to_xml__can_generate_dtd_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_dtd_from_type_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_dtd_from_type_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_doctype_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_doctype_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_doctype_8_2_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_doctype_8_2_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_doc_general_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_doc_general_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_doc_general_cc_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_doc_general_cc_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_1_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_1_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_2_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_2_2;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_3_1;
static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_3_2;
static const struct mercury_type_1 mercury_common_1[30] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__get_element_pred_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__get_element_pred_2_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_1_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_1_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_2_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_2_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_3_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_3_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__term_to_xml__can_generate_dtd_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__term_to_xml__can_generate_dtd_2_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_dtd_from_type_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_dtd_from_type_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_doctype_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_doctype_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_doctype_8_2_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_doctype_8_2_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_doc_general_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_doc_general_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_doc_general_cc_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_doc_general_cc_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_1_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_1_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_2_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_2_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_3_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_3_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(term_to_xml, maybe_functor_info),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
};

static const struct mercury_type_2 mercury_common_2[30] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,5),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,6),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,7),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,8),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,9),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,10),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,11),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,12),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,13),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,14),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,15),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,16),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,17),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,18),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,19),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,20),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,21),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,22),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,23),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,24),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,25),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,26),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,27),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
{
MR_COMMON(1,28),
MR_ENTRY_AP(term_to_xml__make_simple_element_4_0),
0
},
{
MR_COMMON(1,29),
MR_ENTRY_AP(term_to_xml__make_unique_element_4_0),
0
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,3,0),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,4,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_6 mercury_common_6[4] =
{
{
MR_string_const("arity", 5),
3
},
{
MR_string_const("type", 4),
2
},
{
MR_string_const("field", 5),
1
},
{
MR_string_const("functor", 7),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_attr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term_to_xml__type_ctor_info_attr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term_to_xml__type_ctor_info_attr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_xml_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term_to_xml__type_ctor_info_xml_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term_to_xml__type_ctor_info_xml_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_xml_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term_to_xml__type_ctor_info_attr_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term_to_xml__type_ctor_info_xml_0
};

const MR_ConstString mercury_data_term_to_xml__field_names_xml_0_0[] = {
	"element_name",
	"attributes",
	"children"
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_xml_0_0 = {
	"elem",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_xml_0_0,
	mercury_data_term_to_xml__field_names_xml_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_xml_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_xml_0_1 = {
	"data",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_xml_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_xml_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_xml_0_2 = {
	"cdata",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_xml_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_xml_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_xml_0_3 = {
	"comment",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_xml_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_xml_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_xml_0_4 = {
	"entity",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_xml_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_xml_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_xml_0_5 = {
	"raw",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_xml_0_5,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_xml_0_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_xml_0_0

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_xml_0_1[] = {
	&mercury_data_term_to_xml__du_functor_desc_xml_0_1

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_xml_0_2[] = {
	&mercury_data_term_to_xml__du_functor_desc_xml_0_2

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_xml_0_3[] = {
	&mercury_data_term_to_xml__du_functor_desc_xml_0_3,
	&mercury_data_term_to_xml__du_functor_desc_xml_0_4,
	&mercury_data_term_to_xml__du_functor_desc_xml_0_5

};

const MR_DuPtagLayout mercury_data_term_to_xml__du_ptag_ordered_xml_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_xml_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_xml_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_xml_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_term_to_xml__du_stag_ordered_xml_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_name_ordered_xml_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_xml_0_2,
	&mercury_data_term_to_xml__du_functor_desc_xml_0_3,
	&mercury_data_term_to_xml__du_functor_desc_xml_0_1,
	&mercury_data_term_to_xml__du_functor_desc_xml_0_0,
	&mercury_data_term_to_xml__du_functor_desc_xml_0_4,
	&mercury_data_term_to_xml__du_functor_desc_xml_0_5
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_xml_0[] = {
	3,
	2,
	0,
	1,
	4,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_xml_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__xml_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__xml_0_0)),
	"term_to_xml",
	"xml",
	{ (void *)mercury_data_term_to_xml__du_name_ordered_xml_0 },
	{ (void *)mercury_data_term_to_xml__du_ptag_ordered_xml_0 },
	6,
	4,
	mercury_data_term_to_xml__functor_number_map_xml_0
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_maybe_stylesheet_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_term_to_xml__field_names_maybe_stylesheet_0_0[] = {
	"stylesheet_type",
	"stylesheet_href"
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_maybe_stylesheet_0_0 = {
	"with_stylesheet",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_maybe_stylesheet_0_0,
	mercury_data_term_to_xml__field_names_maybe_stylesheet_0_0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_maybe_stylesheet_0_1 = {
	"no_stylesheet",
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

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_maybe_stylesheet_0_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_maybe_stylesheet_0_1

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_maybe_stylesheet_0_1[] = {
	&mercury_data_term_to_xml__du_functor_desc_maybe_stylesheet_0_0

};

const MR_DuPtagLayout mercury_data_term_to_xml__du_ptag_ordered_maybe_stylesheet_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_term_to_xml__du_stag_ordered_maybe_stylesheet_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_maybe_stylesheet_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_name_ordered_maybe_stylesheet_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_maybe_stylesheet_0_1,
	&mercury_data_term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_maybe_stylesheet_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_maybe_stylesheet_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__maybe_stylesheet_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__maybe_stylesheet_0_0)),
	"term_to_xml",
	"maybe_stylesheet",
	{ (void *)mercury_data_term_to_xml__du_name_ordered_maybe_stylesheet_0 },
	{ (void *)mercury_data_term_to_xml__du_ptag_ordered_maybe_stylesheet_0 },
	2,
	4,
	mercury_data_term_to_xml__functor_number_map_maybe_stylesheet_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_maybe_functor_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_term_to_xml__field_names_maybe_functor_info_0_0[] = {
	"functor_name",
	"functor_arity"
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_maybe_functor_info_0_0 = {
	"du_functor",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_maybe_functor_info_0_0,
	mercury_data_term_to_xml__field_names_maybe_functor_info_0_0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_maybe_functor_info_0_1 = {
	"non_du",
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

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_maybe_functor_info_0_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_maybe_functor_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_maybe_functor_info_0_1[] = {
	&mercury_data_term_to_xml__du_functor_desc_maybe_functor_info_0_0

};

const MR_DuPtagLayout mercury_data_term_to_xml__du_ptag_ordered_maybe_functor_info_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_term_to_xml__du_stag_ordered_maybe_functor_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_maybe_functor_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_name_ordered_maybe_functor_info_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_maybe_functor_info_0_0,
	&mercury_data_term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_maybe_functor_info_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_maybe_functor_info_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__maybe_functor_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__maybe_functor_info_0_0)),
	"term_to_xml",
	"maybe_functor_info",
	{ (void *)mercury_data_term_to_xml__du_name_ordered_maybe_functor_info_0 },
	{ (void *)mercury_data_term_to_xml__du_ptag_ordered_maybe_functor_info_0 },
	2,
	4,
	mercury_data_term_to_xml__functor_number_map_maybe_functor_info_0
};

static const MR_EnumFunctorDesc mercury_data_term_to_xml__enum_functor_desc_maybe_format_0_0 = {
	"format",
	0
};

static const MR_EnumFunctorDesc mercury_data_term_to_xml__enum_functor_desc_maybe_format_0_1 = {
	"no_format",
	1
};

const MR_EnumFunctorDescPtr mercury_data_term_to_xml__enum_value_ordered_maybe_format_0[] = {
	&mercury_data_term_to_xml__enum_functor_desc_maybe_format_0_0,
	&mercury_data_term_to_xml__enum_functor_desc_maybe_format_0_1
};

const MR_EnumFunctorDescPtr mercury_data_term_to_xml__enum_name_ordered_maybe_format_0[] = {
	&mercury_data_term_to_xml__enum_functor_desc_maybe_format_0_0,
	&mercury_data_term_to_xml__enum_functor_desc_maybe_format_0_1
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_maybe_format_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_maybe_format_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__maybe_format_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__maybe_format_0_0)),
	"term_to_xml",
	"maybe_format",
	{ (void *)mercury_data_term_to_xml__enum_name_ordered_maybe_format_0 },
	{ (void *)mercury_data_term_to_xml__enum_value_ordered_maybe_format_0 },
	2,
	4,
	mercury_data_term_to_xml__functor_number_map_maybe_format_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_maybe_dtd_0_0 = {
	"embed_dtd",
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
extern const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_doctype_0;

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_maybe_dtd_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term_to_xml__type_ctor_info_doctype_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_maybe_dtd_0_1 = {
	"external_dtd",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_maybe_dtd_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_maybe_dtd_0_2 = {
	"no_dtd",
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

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_maybe_dtd_0_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_maybe_dtd_0_0,
	&mercury_data_term_to_xml__du_functor_desc_maybe_dtd_0_2

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_maybe_dtd_0_1[] = {
	&mercury_data_term_to_xml__du_functor_desc_maybe_dtd_0_1

};

const MR_DuPtagLayout mercury_data_term_to_xml__du_ptag_ordered_maybe_dtd_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_term_to_xml__du_stag_ordered_maybe_dtd_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_maybe_dtd_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_name_ordered_maybe_dtd_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_maybe_dtd_0_0,
	&mercury_data_term_to_xml__du_functor_desc_maybe_dtd_0_1,
	&mercury_data_term_to_xml__du_functor_desc_maybe_dtd_0_2
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_maybe_dtd_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_maybe_dtd_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__maybe_dtd_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__maybe_dtd_0_0)),
	"term_to_xml",
	"maybe_dtd",
	{ (void *)mercury_data_term_to_xml__du_name_ordered_maybe_dtd_0 },
	{ (void *)mercury_data_term_to_xml__du_ptag_ordered_maybe_dtd_0 },
	3,
	4,
	mercury_data_term_to_xml__functor_number_map_maybe_dtd_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term_to_xml__type_ctor_info_attr_from_source_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_maybe_functor_info_0;

static const MR_VA_TypeInfo_Struct4 mercury_data___vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_TypeInfo) &mercury_data_type_desc__type_ctor_info_type_desc_0,
	(MR_TypeInfo) &mercury_data_term_to_xml__type_ctor_info_maybe_functor_info_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0
}};

const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_element_pred_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__element_pred_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__element_pred_0_0)),
	"term_to_xml",
	"element_pred",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_element_mapping_0_0 = {
	"simple",
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

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_element_mapping_0_1 = {
	"unique",
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

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_element_mapping_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_element_mapping_0_2 = {
	"custom",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_element_mapping_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_element_mapping_0_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_element_mapping_0_0,
	&mercury_data_term_to_xml__du_functor_desc_element_mapping_0_1

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_element_mapping_0_1[] = {
	&mercury_data_term_to_xml__du_functor_desc_element_mapping_0_2

};

const MR_DuPtagLayout mercury_data_term_to_xml__du_ptag_ordered_element_mapping_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_term_to_xml__du_stag_ordered_element_mapping_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_element_mapping_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_name_ordered_element_mapping_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_element_mapping_0_2,
	&mercury_data_term_to_xml__du_functor_desc_element_mapping_0_0,
	&mercury_data_term_to_xml__du_functor_desc_element_mapping_0_1
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_element_mapping_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_element_mapping_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__element_mapping_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__element_mapping_0_0)),
	"term_to_xml",
	"element_mapping",
	{ (void *)mercury_data_term_to_xml__du_name_ordered_element_mapping_0 },
	{ (void *)mercury_data_term_to_xml__du_ptag_ordered_element_mapping_0 },
	3,
	4,
	mercury_data_term_to_xml__functor_number_map_element_mapping_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_0 = {
	"ok",
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

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_1 = {
	"multiple_functors_for_root",
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

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_type_desc__type_ctor_info_type_desc_0
}};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_dtd_generation_result_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1type_desc__type_ctor_info_type_desc_0
};

const MR_ConstString mercury_data_term_to_xml__field_names_dtd_generation_result_0_2[] = {
	"duplicate_element",
	"duplicate_types"
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_2 = {
	"duplicate_elements",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_dtd_generation_result_0_2,
	mercury_data_term_to_xml__field_names_dtd_generation_result_0_2,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_dtd_generation_result_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_type_desc__type_ctor_info_type_desc_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_3 = {
	"unsupported_dtd_type",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_dtd_generation_result_0_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_pseudo_type_desc_0;

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_dtd_generation_result_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_type_desc__type_ctor_info_pseudo_type_desc_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_4 = {
	"type_not_ground",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_dtd_generation_result_0_4,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_dtd_generation_result_0_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_0,
	&mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_1

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_dtd_generation_result_0_1[] = {
	&mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_2

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_dtd_generation_result_0_2[] = {
	&mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_3

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_dtd_generation_result_0_3[] = {
	&mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_4

};

const MR_DuPtagLayout mercury_data_term_to_xml__du_ptag_ordered_dtd_generation_result_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_term_to_xml__du_stag_ordered_dtd_generation_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_dtd_generation_result_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_dtd_generation_result_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_dtd_generation_result_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_name_ordered_dtd_generation_result_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_2,
	&mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_1,
	&mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_0,
	&mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_4,
	&mercury_data_term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_dtd_generation_result_0[] = {
	2,
	1,
	0,
	4,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_dtd_generation_result_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__dtd_generation_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__dtd_generation_result_0_0)),
	"term_to_xml",
	"dtd_generation_result",
	{ (void *)mercury_data_term_to_xml__du_name_ordered_dtd_generation_result_0 },
	{ (void *)mercury_data_term_to_xml__du_ptag_ordered_dtd_generation_result_0 },
	5,
	4,
	mercury_data_term_to_xml__functor_number_map_dtd_generation_result_0
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_doctype_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_doctype_0_0 = {
	"public",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_doctype_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_doctype_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_doctype_0_1 = {
	"public_system",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_doctype_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_doctype_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_doctype_0_2 = {
	"system",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_doctype_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_doctype_0_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_doctype_0_0

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_doctype_0_1[] = {
	&mercury_data_term_to_xml__du_functor_desc_doctype_0_1

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_doctype_0_2[] = {
	&mercury_data_term_to_xml__du_functor_desc_doctype_0_2

};

const MR_DuPtagLayout mercury_data_term_to_xml__du_ptag_ordered_doctype_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_doctype_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_doctype_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_doctype_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_name_ordered_doctype_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_doctype_0_0,
	&mercury_data_term_to_xml__du_functor_desc_doctype_0_1,
	&mercury_data_term_to_xml__du_functor_desc_doctype_0_2
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_doctype_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_doctype_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__doctype_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__doctype_0_0)),
	"term_to_xml",
	"doctype",
	{ (void *)mercury_data_term_to_xml__du_name_ordered_doctype_0 },
	{ (void *)mercury_data_term_to_xml__du_ptag_ordered_doctype_0 },
	3,
	4,
	mercury_data_term_to_xml__functor_number_map_doctype_0
};

static const MR_EnumFunctorDesc mercury_data_term_to_xml__enum_functor_desc_attr_source_0_0 = {
	"functor",
	0
};

static const MR_EnumFunctorDesc mercury_data_term_to_xml__enum_functor_desc_attr_source_0_1 = {
	"field_name",
	1
};

static const MR_EnumFunctorDesc mercury_data_term_to_xml__enum_functor_desc_attr_source_0_2 = {
	"type_name",
	2
};

static const MR_EnumFunctorDesc mercury_data_term_to_xml__enum_functor_desc_attr_source_0_3 = {
	"arity",
	3
};

const MR_EnumFunctorDescPtr mercury_data_term_to_xml__enum_value_ordered_attr_source_0[] = {
	&mercury_data_term_to_xml__enum_functor_desc_attr_source_0_0,
	&mercury_data_term_to_xml__enum_functor_desc_attr_source_0_1,
	&mercury_data_term_to_xml__enum_functor_desc_attr_source_0_2,
	&mercury_data_term_to_xml__enum_functor_desc_attr_source_0_3
};

const MR_EnumFunctorDescPtr mercury_data_term_to_xml__enum_name_ordered_attr_source_0[] = {
	&mercury_data_term_to_xml__enum_functor_desc_attr_source_0_3,
	&mercury_data_term_to_xml__enum_functor_desc_attr_source_0_1,
	&mercury_data_term_to_xml__enum_functor_desc_attr_source_0_0,
	&mercury_data_term_to_xml__enum_functor_desc_attr_source_0_2
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_attr_source_0[] = {
	2,
	1,
	3,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_attr_source_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__attr_source_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__attr_source_0_0)),
	"term_to_xml",
	"attr_source",
	{ (void *)mercury_data_term_to_xml__enum_name_ordered_attr_source_0 },
	{ (void *)mercury_data_term_to_xml__enum_value_ordered_attr_source_0 },
	4,
	4,
	mercury_data_term_to_xml__functor_number_map_attr_source_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_attr_source_0;

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_attr_from_source_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term_to_xml__type_ctor_info_attr_source_0
};

const MR_ConstString mercury_data_term_to_xml__field_names_attr_from_source_0_0[] = {
	"attr_name",
	"attr_source"
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_attr_from_source_0_0 = {
	"attr_from_source",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_attr_from_source_0_0,
	mercury_data_term_to_xml__field_names_attr_from_source_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_attr_from_source_0_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_attr_from_source_0_0

};

const MR_DuPtagLayout mercury_data_term_to_xml__du_ptag_ordered_attr_from_source_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_attr_from_source_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_name_ordered_attr_from_source_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_attr_from_source_0_0
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_attr_from_source_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_attr_from_source_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__attr_from_source_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__attr_from_source_0_0)),
	"term_to_xml",
	"attr_from_source",
	{ (void *)mercury_data_term_to_xml__du_name_ordered_attr_from_source_0 },
	{ (void *)mercury_data_term_to_xml__du_ptag_ordered_attr_from_source_0 },
	1,
	4,
	mercury_data_term_to_xml__functor_number_map_attr_from_source_0
};

const MR_PseudoTypeInfo mercury_data_term_to_xml__field_types_attr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term_to_xml__du_functor_desc_attr_0_0 = {
	"attr",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term_to_xml__field_types_attr_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_stag_ordered_attr_0_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_attr_0_0

};

const MR_DuPtagLayout mercury_data_term_to_xml__du_ptag_ordered_attr_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_to_xml__du_stag_ordered_attr_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_term_to_xml__du_name_ordered_attr_0[] = {
	&mercury_data_term_to_xml__du_functor_desc_attr_0_0
};

const MR_Integer mercury_data_term_to_xml__functor_number_map_attr_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_to_xml__type_ctor_info_attr_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_to_xml__attr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_to_xml__attr_0_0)),
	"term_to_xml",
	"attr",
	{ (void *)mercury_data_term_to_xml__du_name_ordered_attr_0 },
	{ (void *)mercury_data_term_to_xml__du_ptag_ordered_attr_0 },
	1,
	4,
	mercury_data_term_to_xml__functor_number_map_attr_0
};

const MR_ConstString mercury_data_term_to_xml__type_class_id_var_names_xmlable_1[] = {
	"T",
};

const MR_TypeClassMethod mercury_data_term_to_xml__type_class_id_method_ids_xmlable_1[] = {
	{ "to_xml", 2, MR_FUNCTION },
};

static const MR_TypeClassId mercury_data_term_to_xml__type_class_id_xmlable_1 = {
	"term_to_xml",
	"xmlable",
	1,
	1,
	1,
	mercury_data_term_to_xml__type_class_id_var_names_xmlable_1,
	mercury_data_term_to_xml__type_class_id_method_ids_xmlable_1
};

const MR_TypeClassDeclStruct mercury_data_term_to_xml__type_class_decl_xmlable_1 = {
	&mercury_data_term_to_xml__type_class_id_xmlable_1,
	0,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__get_element_pred_2_0_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__get_element_pred_2_0_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_0_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_0_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_1_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_1_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_2_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_2_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_3_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_7_3_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__term_to_xml__can_generate_dtd_2_0_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__term_to_xml__can_generate_dtd_2_0_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_dtd_from_type_6_0_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_dtd_from_type_6_0_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_doctype_8_0_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_doctype_8_0_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_doctype_8_2_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_doctype_8_2_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_doc_general_8_0_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_doc_general_8_0_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_doc_general_cc_8_0_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_doc_general_cc_8_0_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_0_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_0_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_1_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_1_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_2_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_2_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_3_1 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_simple_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
791,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__term_to_xml__write_xml_element_general_6_3_2 = {
{
MR_PREDICATE,
"term_to_xml",
"term_to_xml",
"make_unique_element",
4,
0
},
"term_to_xml",
"term_to_xml.m",
792,
"d2;c2;"
};

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(term_to_xml_module0)
	MR_init_entry1(fn__term_to_xml__to_xml_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_to_xml__to_xml_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__term_to_xml__to_xml_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_3);

MR_BEGIN_MODULE(term_to_xml_module1)
	MR_init_entry1(term_to_xml__write_xml_header_4_0);
	MR_init_label4(term_to_xml__write_xml_header_4_0,2,4,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_header_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("<?xml version=\"1.0\"", 19);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_header_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_header_4_0_i2);
MR_def_label(term_to_xml__write_xml_header_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_header_4_0_i4);
	}
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("?>\n", 3);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_header_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(term_to_xml__write_xml_header_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" encoding=\"", 11);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_header_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_header_4_0_i6);
MR_def_label(term_to_xml__write_xml_header_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_header_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_header_4_0_i7);
MR_def_label(term_to_xml__write_xml_header_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\"?>\n", 4);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_header_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module2)
	MR_init_entry1(term_to_xml__write_external_doctype_5_0);
	MR_init_label8(term_to_xml__write_external_doctype_5_0,2,3,11,6,7,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_external_doctype_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("<!DOCTYPE ", 10);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_external_doctype_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_external_doctype_5_0_i2);
MR_def_label(term_to_xml__write_external_doctype_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_external_doctype_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_external_doctype_5_0_i3);
MR_def_label(term_to_xml__write_external_doctype_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(term_to_xml__write_external_doctype_5_0_i6);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(term_to_xml__write_external_doctype_5_0_i11);
	}
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" PUBLIC \"", 9);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_external_doctype_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_external_doctype_5_0_i9);
MR_def_label(term_to_xml__write_external_doctype_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(2, MR_r6, 0);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" SYSTEM \"", 9);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_external_doctype_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_external_doctype_5_0_i9);
MR_def_label(term_to_xml__write_external_doctype_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" PUBLIC \"", 9);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_external_doctype_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_external_doctype_5_0_i7);
MR_def_label(term_to_xml__write_external_doctype_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_external_doctype_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_external_doctype_5_0_i8);
MR_def_label(term_to_xml__write_external_doctype_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\" \"", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_external_doctype_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_external_doctype_5_0_i9);
MR_def_label(term_to_xml__write_external_doctype_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_external_doctype_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_external_doctype_5_0_i10);
MR_def_label(term_to_xml__write_external_doctype_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r4 = (MR_Word) MR_string_const("\">\n", 3);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_external_doctype_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module3)
	MR_init_entry1(fn__term_to_xml__can_format_siblings_1_0);
	MR_init_label3(fn__term_to_xml__can_format_siblings_1_0,7,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_to_xml__can_format_siblings_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__term_to_xml__can_format_siblings_1_0_i10) MR_AND
		MR_LABEL_AP(fn__term_to_xml__can_format_siblings_1_0_i11) MR_AND
		MR_LABEL_AP(fn__term_to_xml__can_format_siblings_1_0_i10) MR_AND
		MR_LABEL_AP(fn__term_to_xml__can_format_siblings_1_0_i7));
MR_def_label(fn__term_to_xml__can_format_siblings_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_format_siblings_1_0_i11);
	}
	}
MR_def_label(fn__term_to_xml__can_format_siblings_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__term_to_xml__can_format_siblings_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module4)
	MR_init_entry1(term_to_xml__contains_noformat_xml_1_0);
	MR_init_label6(term_to_xml__contains_noformat_xml_1_0,10,17,18,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__contains_noformat_xml_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(term_to_xml__contains_noformat_xml_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(term_to_xml__contains_noformat_xml_1_0_i17) MR_AND
		MR_LABEL_AP(term_to_xml__contains_noformat_xml_1_0_i18) MR_AND
		MR_LABEL_AP(term_to_xml__contains_noformat_xml_1_0_i17) MR_AND
		MR_LABEL_AP(term_to_xml__contains_noformat_xml_1_0_i10));
	}
MR_def_label(term_to_xml__contains_noformat_xml_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(term_to_xml__contains_noformat_xml_1_0_i18);
	}
	}
MR_def_label(term_to_xml__contains_noformat_xml_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(term_to_xml__contains_noformat_xml_1_0_i5);
MR_def_label(term_to_xml__contains_noformat_xml_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
MR_def_label(term_to_xml__contains_noformat_xml_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(term_to_xml__contains_noformat_xml_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_tempr2 = MR_r1;
	MR_np_localtailcall(term_to_xml__contains_noformat_xml_1_0);
	}
MR_def_label(term_to_xml__contains_noformat_xml_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_to_xml__contains_noformat_xml_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module5)
	MR_init_entry1(term_to_xml__maybe_nl_4_0);
	MR_init_label1(term_to_xml__maybe_nl_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__maybe_nl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(term_to_xml__maybe_nl_4_0_i3);
	}
	MR_r3 = MR_r2;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__maybe_nl_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(term_to_xml__maybe_nl_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module6)
	MR_init_entry1(term_to_xml__indent_4_0);
	MR_init_label3(term_to_xml__indent_4_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__indent_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(term_to_xml__indent_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(term_to_xml__indent_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__indent_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__indent_4_0_i3);
MR_def_label(term_to_xml__indent_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(term_to_xml__indent_4_0_i11);
MR_def_label(term_to_xml__indent_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module7)
	MR_init_entry1(term_to_xml__maybe_indent_5_0);
	MR_init_label1(term_to_xml__maybe_indent_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__maybe_indent_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(term_to_xml__maybe_indent_5_0_i3);
	}
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(term_to_xml__indent_4_0);
MR_def_label(term_to_xml__maybe_indent_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module8)
	MR_init_entry1(term_to_xml__write_element_start_5_0);
	MR_init_label3(term_to_xml__write_element_start_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_element_start_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("<", 1);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_element_start_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_element_start_5_0_i2);
MR_def_label(term_to_xml__write_element_start_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_element_start_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_element_start_5_0_i3);
MR_def_label(term_to_xml__write_element_start_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0,
		term_to_xml__write_element_start_5_0_i4);
MR_def_label(term_to_xml__write_element_start_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_element_start_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module9)
	MR_init_entry1(term_to_xml__write_empty_element_5_0);
	MR_init_label3(term_to_xml__write_empty_element_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_empty_element_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("<", 1);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_empty_element_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_empty_element_5_0_i2);
MR_def_label(term_to_xml__write_empty_element_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_empty_element_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_empty_element_5_0_i3);
MR_def_label(term_to_xml__write_empty_element_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0,
		term_to_xml__write_empty_element_5_0_i4);
MR_def_label(term_to_xml__write_empty_element_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" />", 3);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_empty_element_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module10)
	MR_init_entry1(term_to_xml__write_element_end_4_0);
	MR_init_label2(term_to_xml__write_element_end_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_element_end_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("</", 2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_element_end_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_element_end_4_0_i2);
MR_def_label(term_to_xml__write_element_end_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_element_end_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_element_end_4_0_i3);
MR_def_label(term_to_xml__write_element_end_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_element_end_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module11)
	MR_init_entry1(term_to_xml__write_xml_escaped_string_4_0);
	MR_init_label1(term_to_xml__write_xml_escaped_string_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_xml_escaped_string_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_escaped_string_4_0
	Str = (MR_String) MR_r3;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 3451 "term_to_xml.c"
	MR_r5 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_escaped_string_4_0
	Str = (MR_String) MR_r3;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 3465 "term_to_xml.c"
	MR_r7 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r8 = ((MR_Integer) MR_r7 - (MR_Integer) 0);
	MR_r7 = (MR_Integer) 0;
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(term_to_xml__write_xml_escaped_string_4_0_i2);
	}
	MR_r6 = MR_r4;
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0);
MR_def_label(term_to_xml__write_xml_escaped_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r4;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stream__put_4_0);
MR_decl_entry(string__replace_all_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(term_to_xml_module12)
	MR_init_entry1(term_to_xml__write_xml_element_format_6_0);
	MR_init_label8(term_to_xml__write_xml_element_format_6_0,68,5,7,10,13,11,15,16)
	MR_init_label8(term_to_xml__write_xml_element_format_6_0,17,18,21,69,24,25,26,29)
	MR_init_label8(term_to_xml__write_xml_element_format_6_0,31,32,33,34,35,30,38,39)
	MR_init_label1(term_to_xml__write_xml_element_format_6_0,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_format_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(term_to_xml__write_xml_element_format_6_0_i68) MR_AND
		MR_LABEL_AP(term_to_xml__write_xml_element_format_6_0_i21) MR_AND
		MR_LABEL_AP(term_to_xml__write_xml_element_format_6_0_i69) MR_AND
		MR_LABEL_AP(term_to_xml__write_xml_element_format_6_0_i29));
MR_def_label(term_to_xml__write_xml_element_format_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_r1;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(term_to_xml__maybe_indent_5_0,
		term_to_xml__write_xml_element_format_6_0_i5);
MR_def_label(term_to_xml__write_xml_element_format_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_format_6_0_i7);
	}
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(term_to_xml__write_empty_element_5_0,
		term_to_xml__write_xml_element_format_6_0_i35);
MR_def_label(term_to_xml__write_xml_element_format_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(term_to_xml__write_element_start_5_0,
		term_to_xml__write_xml_element_format_6_0_i10);
MR_def_label(term_to_xml__write_xml_element_format_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(term_to_xml__contains_noformat_xml_1_0,
		term_to_xml__write_xml_element_format_6_0_i13);
MR_def_label(term_to_xml__write_xml_element_format_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_format_6_0_i11);
	}
	MR_r2 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r6 = MR_sv(5);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(term_to_xml__write_xml_element_format_6_0_i16);
MR_def_label(term_to_xml__write_xml_element_format_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_xml_element_format_6_0_i15);
MR_def_label(term_to_xml__write_xml_element_format_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r6 = MR_r1;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r1 = MR_sv(7);
MR_def_label(term_to_xml__write_xml_element_format_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0,
		term_to_xml__write_xml_element_format_6_0_i17);
MR_def_label(term_to_xml__write_xml_element_format_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__maybe_indent_5_0,
		term_to_xml__write_xml_element_format_6_0_i18);
MR_def_label(term_to_xml__write_xml_element_format_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(term_to_xml__write_element_end_4_0,
		term_to_xml__write_xml_element_format_6_0_i35);
MR_def_label(term_to_xml__write_xml_element_format_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r5, 0);
	MR_r4 = MR_r6;
	MR_np_tailcall_ent(term_to_xml__write_xml_escaped_string_4_0);
MR_def_label(term_to_xml__write_xml_element_format_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(2, MR_r5, 0);
	MR_sv(7) = MR_r1;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(term_to_xml__maybe_indent_5_0,
		term_to_xml__write_xml_element_format_6_0_i24);
MR_def_label(term_to_xml__write_xml_element_format_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("<![CDATA[", 9);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_xml_element_format_6_0_i25);
MR_def_label(term_to_xml__write_xml_element_format_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_xml_element_format_6_0_i26);
MR_def_label(term_to_xml__write_xml_element_format_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("]]>", 3);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_xml_element_format_6_0_i35);
MR_def_label(term_to_xml__write_xml_element_format_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(3, MR_r5, 0);
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_format_6_0_i30);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_r5, 1);
	MR_sv(7) = MR_r1;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(term_to_xml__maybe_indent_5_0,
		term_to_xml__write_xml_element_format_6_0_i31);
MR_def_label(term_to_xml__write_xml_element_format_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("<!-- ", 5);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_xml_element_format_6_0_i32);
MR_def_label(term_to_xml__write_xml_element_format_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("--", 2);
	MR_r3 = (MR_Word) MR_string_const(" - ", 3);
	}
	MR_np_call_localret_ent(string__replace_all_4_0,
		term_to_xml__write_xml_element_format_6_0_i33);
MR_def_label(term_to_xml__write_xml_element_format_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_xml_element_format_6_0_i34);
MR_def_label(term_to_xml__write_xml_element_format_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" -->", 4);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_xml_element_format_6_0_i35);
MR_def_label(term_to_xml__write_xml_element_format_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(term_to_xml__maybe_nl_4_0);
MR_def_label(term_to_xml__write_xml_element_format_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_format_6_0_i37);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r5, 1);
	MR_sv(7) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("&", 1);
	MR_r4 = MR_r6;
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_xml_element_format_6_0_i38);
MR_def_label(term_to_xml__write_xml_element_format_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		term_to_xml__write_xml_element_format_6_0_i39);
MR_def_label(term_to_xml__write_xml_element_format_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(stream__put_4_0);
MR_def_label(term_to_xml__write_xml_element_format_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	MR_r4 = MR_r6;
	MR_np_tailcall_ent(stream__put_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module13)
	MR_init_entry1(term_to_xml__write_xml_doc_style_dtd_6_0);
	MR_init_label8(term_to_xml__write_xml_doc_style_dtd_6_0,2,34,4,5,6,7,8,3)
	MR_init_label8(term_to_xml__write_xml_doc_style_dtd_6_0,10,12,13,14,22,17,18,19)
	MR_init_label5(term_to_xml__write_xml_doc_style_dtd_6_0,20,21,27,30,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_style_dtd_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r7;
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_header_4_0,
		term_to_xml__write_xml_doc_style_dtd_6_0_i2);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_style_dtd_6_0_i4);
	}
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(term_to_xml__write_xml_doc_style_dtd_6_0_i3);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("<?xml-stylesheet type=\"", 23);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i5);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i6);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\" href=\"", 8);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i7);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i8);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\"?>\n", 4);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i34);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i10);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_style_dtd_6_0_i12);
	}
	MR_sv(3) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_np_call_localret_ent(term_to_xml__contains_noformat_xml_1_0,
		term_to_xml__write_xml_doc_style_dtd_6_0_i30);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("<!DOCTYPE ", 10);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i13);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i14);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_style_dtd_6_0_i17);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_style_dtd_6_0_i22);
	}
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" PUBLIC \"", 9);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i20);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(2, MR_r6, 0);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" SYSTEM \"", 9);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i20);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" PUBLIC \"", 9);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i18);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i19);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\" \"", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i20);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i21);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = (MR_Word) MR_string_const("\">\n", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_style_dtd_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_style_dtd_6_0_i27);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(term_to_xml__contains_noformat_xml_1_0,
		term_to_xml__write_xml_doc_style_dtd_6_0_i30);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_style_dtd_6_0_i29);
	}
	MR_r2 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r6 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_format_6_0);
MR_def_label(term_to_xml__write_xml_doc_style_dtd_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r6 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_format_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module14)
	MR_init_entry1(term_to_xml__write_xml_doc_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_tailcall_ent(term_to_xml__write_xml_doc_style_dtd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module15)
	MR_init_entry1(term_to_xml__write_xml_element_5_0);
	MR_init_label3(term_to_xml__write_xml_element_5_0,2,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r5;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_to_xml__write_xml_element_5_0_i2);
MR_def_label(term_to_xml__write_xml_element_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_np_call_localret_ent(term_to_xml__contains_noformat_xml_1_0,
		term_to_xml__write_xml_element_5_0_i5);
MR_def_label(term_to_xml__write_xml_element_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_5_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_format_6_0);
MR_def_label(term_to_xml__write_xml_element_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_format_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module16)
	MR_init_entry1(term_to_xml__get_element_pred_2_0);
	MR_init_label2(term_to_xml__get_element_pred_2_0,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__get_element_pred_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__get_element_pred_2_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(term_to_xml__get_element_pred_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_proceed();
	}
MR_def_label(term_to_xml__get_element_pred_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_proceed();
MR_def_label(term_to_xml__get_element_pred_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_2);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(string__to_char_list_2_1);
MR_decl_entry(string__int_to_base_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

MR_BEGIN_MODULE(term_to_xml_module17)
	MR_init_entry1(term_to_xml__primitive_value_2_0);
	MR_init_label8(term_to_xml__primitive_value_2_0,3,6,5,10,12,9,13,17)
	MR_init_label1(term_to_xml__primitive_value_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__primitive_value_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		term_to_xml__primitive_value_2_0_i3);
MR_def_label(term_to_xml__primitive_value_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term_to_xml__primitive_value_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		term_to_xml__primitive_value_2_0_i6);
MR_def_label(term_to_xml__primitive_value_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__primitive_value_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__to_char_list_2_1,
		term_to_xml__primitive_value_2_0_i12);
MR_def_label(term_to_xml__primitive_value_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		term_to_xml__primitive_value_2_0_i10);
MR_def_label(term_to_xml__primitive_value_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__primitive_value_2_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		term_to_xml__primitive_value_2_0_i12);
MR_def_label(term_to_xml__primitive_value_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_to_xml__primitive_value_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		term_to_xml__primitive_value_2_0_i13);
MR_def_label(term_to_xml__primitive_value_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__primitive_value_2_0_i1);
	}
	{
	MR_Float	Flt;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__term_to_xml__primitive_value_2_0
	Flt = MR_word_to_float(MR_r2);
{
#line 266 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str);
};}
#line 4243 "term_to_xml.c"
	MR_r2 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
MR_def_label(term_to_xml__primitive_value_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_to_xml__primitive_value_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module18)
	MR_init_entry1(term_to_xml__is_discriminated_union_2_0);
	MR_init_label1(term_to_xml__is_discriminated_union_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__is_discriminated_union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__term_to_xml__is_discriminated_union_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r1;
{
#line 56 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 4293 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__is_discriminated_union_2_0_i1);
	MR_r2 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_r2,-1)) {
		MR_GOTO_LAB(term_to_xml__is_discriminated_union_2_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_to_xml__is_discriminated_union_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module19)
	MR_init_entry1(term_to_xml__find_field_names_5_0);
	MR_init_label5(term_to_xml__find_field_names_5_0,37,7,3,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__find_field_names_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(term_to_xml__find_field_names_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(term_to_xml__find_field_names_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 1);
	MR_r5 = MR_ctfield(1, MR_tempr4, 0);
	{
	MR_Word	TypeDesc;
	MR_Integer	FunctorNumber;
	MR_String	FunctorName;
	MR_Integer	Arity;
	MR_Word	PseudoTypeInfoList;
	MR_Word	ArgNameList;
#define	MR_PROC_LABEL	mercury__term_to_xml__find_field_names_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeDesc = MR_r1;
	FunctorNumber = MR_r5;
{
#line 259 "construct.opt"
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    int                 arity;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

        /*
        ** If type_info is an equivalence type, expand it.
        */
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

        /*
        ** Get information for this functor number and
        ** store in construct_info. If this is a discriminated union
        ** type and if the functor number is in range, we
        ** succeed.
        */
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info,
        &construct_info);
    MR_restore_transient_registers();

        /*
        ** Get the functor name and arity, construct the list
        ** of type_infos for arguments.
        */

    if (success) {
        MR_make_aligned_string(FunctorName, construct_info.functor_name);
        arity = construct_info.arity;
        Arity = arity;

        if (MR_TYPE_CTOR_INFO_IS_TUPLE(
            MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info)))
        {
            int i;

            MR_save_transient_registers();
            PseudoTypeInfoList = MR_type_params_vector_to_list(Arity,
                MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info));
            ArgNameList = MR_list_empty();
            for (i = 0; i < Arity; i++) {
                ArgNameList = MR_string_list_cons_msg((MR_Word) NULL,
                    ArgNameList, MR_PROC_LABEL);
            }
            MR_restore_transient_registers();
        } else {
            MR_save_transient_registers();
            PseudoTypeInfoList =
                MR_pseudo_type_info_vector_to_pseudo_type_info_list(arity,
                    MR_TYPEINFO_GET_FIXED_ARITY_ARG_VECTOR(type_info),
                    construct_info.arg_pseudo_type_infos);
            ArgNameList = MR_arg_name_vector_to_list(arity,
                construct_info.arg_names);
            MR_restore_transient_registers();
        }
    }
    SUCCESS_INDICATOR = success;
};}
#line 4417 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__find_field_names_5_0_i4);
	MR_tempr1 = (MR_Word) FunctorName;
	MR_tempr2 = Arity;
	MR_tempr3 = ArgNameList;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(term_to_xml__list__map__ho37_3_0,
		term_to_xml__find_field_names_5_0_i7);
MR_def_label(term_to_xml__find_field_names_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(3), (char *)MR_sv(5)) != 0)) {
		MR_GOTO_LAB(term_to_xml__find_field_names_5_0_i3);
	}
	if ((MR_sv(4) != MR_sv(6))) {
		MR_GOTO_LAB(term_to_xml__find_field_names_5_0_i3);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(term_to_xml__find_field_names_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(term_to_xml__find_field_names_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(term_to_xml__find_field_names_5_0_i37);
MR_def_label(term_to_xml__find_field_names_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__successive_integers_4_0);

MR_BEGIN_MODULE(term_to_xml_module20)
	MR_init_entry1(fn__term_to_xml__get_field_names_3_0);
	MR_init_label3(fn__term_to_xml__get_field_names_3_0,5,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_to_xml__get_field_names_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__get_field_names_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r1;
{
#line 56 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 4499 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__term_to_xml__get_field_names_3_0_i2);
	MR_tempr1 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_tempr1;
	if (MR_INT_LE(MR_tempr1,-1)) {
		MR_GOTO_LAB(fn__term_to_xml__get_field_names_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__successive_integers_4_0,
		fn__term_to_xml__get_field_names_3_0_i5);
MR_def_label(fn__term_to_xml__get_field_names_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__find_field_names_5_0,
		fn__term_to_xml__get_field_names_3_0_i7);
MR_def_label(fn__term_to_xml__get_field_names_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__get_field_names_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__term_to_xml__get_field_names_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module21)
	MR_init_entry1(term_to_xml__write_child_xml_elements_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_child_xml_elements_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module22)
	MR_init_entry1(term_to_xml__write_child_xml_elements_8_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_child_xml_elements_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module23)
	MR_init_entry1(term_to_xml__write_child_xml_elements_8_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_child_xml_elements_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module24)
	MR_init_entry1(term_to_xml__write_child_xml_elements_8_3);
	MR_init_label3(term_to_xml__write_child_xml_elements_8_3,3,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_child_xml_elements_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(term_to_xml__write_child_xml_elements_8_3_i3);
	}
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0,
		term_to_xml__write_child_xml_elements_8_3_i7);
MR_def_label(term_to_xml__write_child_xml_elements_8_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(term_to_xml__write_child_xml_elements_8_3_i5);
	}
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0,
		term_to_xml__write_child_xml_elements_8_3_i7);
MR_def_label(term_to_xml__write_child_xml_elements_8_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0,
		term_to_xml__write_child_xml_elements_8_3_i7);
MR_def_label(term_to_xml__write_child_xml_elements_8_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module25)
	MR_init_entry1(fn__term_to_xml__make_attrs_from_sources_5_0);
	MR_init_label1(fn__term_to_xml__make_attrs_from_sources_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_to_xml__make_attrs_from_sources_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0,
		fn__term_to_xml__make_attrs_from_sources_5_0_i2);
MR_def_label(fn__term_to_xml__make_attrs_from_sources_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(term_to_xml__list__filter_map__ho15_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module26)
	MR_init_entry1(term_to_xml__write_primitive_element_with_attr_from_source_8_0);
	MR_init_label8(term_to_xml__write_primitive_element_with_attr_from_source_8_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("<", 1);
	MR_r5 = MR_r8;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_primitive_element_with_attr_from_source_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_0_i2);
MR_def_label(term_to_xml__write_primitive_element_with_attr_from_source_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_primitive_element_with_attr_from_source_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_0_i3);
MR_def_label(term_to_xml__write_primitive_element_with_attr_from_source_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__term_to_xml__make_attrs_from_sources_5_0,
		term_to_xml__write_primitive_element_with_attr_from_source_8_0_i4);
MR_def_label(term_to_xml__write_primitive_element_with_attr_from_source_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0,
		term_to_xml__write_primitive_element_with_attr_from_source_8_0_i5);
MR_def_label(term_to_xml__write_primitive_element_with_attr_from_source_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_primitive_element_with_attr_from_source_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_0_i6);
MR_def_label(term_to_xml__write_primitive_element_with_attr_from_source_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(term_to_xml__write_xml_escaped_string_4_0,
		term_to_xml__write_primitive_element_with_attr_from_source_8_0_i7);
MR_def_label(term_to_xml__write_primitive_element_with_attr_from_source_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("</", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_primitive_element_with_attr_from_source_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_0_i8);
MR_def_label(term_to_xml__write_primitive_element_with_attr_from_source_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_primitive_element_with_attr_from_source_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_0_i9);
MR_def_label(term_to_xml__write_primitive_element_with_attr_from_source_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(">\n", 2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_primitive_element_with_attr_from_source_8_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module27)
	MR_init_entry1(term_to_xml__write_element_start_with_attr_from_source_9_0);
	MR_init_label2(term_to_xml__write_element_start_with_attr_from_source_9_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_element_start_with_attr_from_source_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r8;
	MR_r5 = MR_r4;
	MR_r4 = MR_r7;
	MR_np_call_localret_ent(fn__term_to_xml__make_attrs_from_sources_5_0,
		term_to_xml__write_element_start_with_attr_from_source_9_0_i2);
MR_def_label(term_to_xml__write_element_start_with_attr_from_source_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__write_element_start_5_0,
		term_to_xml__write_element_start_with_attr_from_source_9_0_i3);
MR_def_label(term_to_xml__write_element_start_with_attr_from_source_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_element_start_with_attr_from_source_9_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module28)
	MR_init_entry1(term_to_xml__write_empty_element_with_attr_from_source_9_0);
	MR_init_label2(term_to_xml__write_empty_element_with_attr_from_source_9_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_empty_element_with_attr_from_source_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r8;
	MR_r5 = MR_r4;
	MR_r4 = MR_r7;
	MR_np_call_localret_ent(fn__term_to_xml__make_attrs_from_sources_5_0,
		term_to_xml__write_empty_element_with_attr_from_source_9_0_i2);
MR_def_label(term_to_xml__write_empty_element_with_attr_from_source_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__write_empty_element_5_0,
		term_to_xml__write_empty_element_with_attr_from_source_9_0_i3);
MR_def_label(term_to_xml__write_empty_element_with_attr_from_source_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_empty_element_with_attr_from_source_9_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__deconstruct_5_0);
MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(term_to_xml_module29)
	MR_init_entry1(term_to_xml__write_xml_element_univ_9_0);
	MR_init_label8(term_to_xml__write_xml_element_univ_9_0,3,2,4,6,9,10,13,15)
	MR_init_label8(term_to_xml__write_xml_element_univ_9_0,11,19,20,18,23,24,25,26)
	MR_init_label5(term_to_xml__write_xml_element_univ_9_0,27,28,29,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_univ_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_r8;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_0_i2);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_r8;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_0,
		term_to_xml__write_xml_element_univ_9_0_i4);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_univ_9_0
	TypeInfo_for_T = MR_sv(7);
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
#line 4995 "term_to_xml.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_univ_9_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r4;
{
#line 56 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 5015 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_0_i6);
	MR_r5 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_r5,-1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_tempr2;
	MR_sv(9) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_0_i9);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__term_to_xml__write_xml_element_univ_9_0_i10);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(11) = MR_r2;
	}
	MR_np_call_localret_ent(term_to_xml__primitive_value_2_0,
		term_to_xml__write_xml_element_univ_9_0_i13);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_0_i11);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_0_i15);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(10);
	MR_np_call_localret_ent(term_to_xml__write_primitive_element_with_attr_from_source_8_0,
		term_to_xml__write_xml_element_univ_9_0_i31);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_0_i18);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_0_i19);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__term_to_xml__make_attrs_from_sources_5_0,
		term_to_xml__write_xml_element_univ_9_0_i20);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(term_to_xml__write_empty_element_5_0,
		term_to_xml__write_xml_element_univ_9_0_i30);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__term_to_xml__get_field_names_3_0,
		term_to_xml__write_xml_element_univ_9_0_i23);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_0_i24);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_sv(8);
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(10);
	MR_np_call_localret_ent(term_to_xml__write_element_start_with_attr_from_source_9_0,
		term_to_xml__write_xml_element_univ_9_0_i25);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(12);
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_0,
		term_to_xml__write_xml_element_univ_9_0_i26);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_0_i27);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("</", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_0_i28);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_0_i29);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_0_i30);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_0_i31);
MR_def_label(term_to_xml__write_xml_element_univ_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__deconstruct_5_1);

MR_BEGIN_MODULE(term_to_xml_module30)
	MR_init_entry1(term_to_xml__write_xml_element_univ_9_1);
	MR_init_label8(term_to_xml__write_xml_element_univ_9_1,3,2,4,6,9,10,13,15)
	MR_init_label8(term_to_xml__write_xml_element_univ_9_1,11,19,20,18,23,24,25,26)
	MR_init_label5(term_to_xml__write_xml_element_univ_9_1,27,28,29,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_univ_9_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_1_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_r8;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_1_i2);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_r8;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		term_to_xml__write_xml_element_univ_9_1_i4);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_univ_9_1
	TypeInfo_for_T = MR_sv(7);
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
#line 5313 "term_to_xml.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_univ_9_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r4;
{
#line 56 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 5333 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_1_i6);
	MR_r5 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_r5,-1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_1_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_tempr2;
	MR_sv(9) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_1_i9);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__term_to_xml__write_xml_element_univ_9_1_i10);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(11) = MR_r2;
	}
	MR_np_call_localret_ent(term_to_xml__primitive_value_2_0,
		term_to_xml__write_xml_element_univ_9_1_i13);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_1_i11);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_1_i15);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(10);
	MR_np_call_localret_ent(term_to_xml__write_primitive_element_with_attr_from_source_8_0,
		term_to_xml__write_xml_element_univ_9_1_i31);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_1_i18);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_1_i19);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__term_to_xml__make_attrs_from_sources_5_0,
		term_to_xml__write_xml_element_univ_9_1_i20);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(term_to_xml__write_empty_element_5_0,
		term_to_xml__write_xml_element_univ_9_1_i30);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__term_to_xml__get_field_names_3_0,
		term_to_xml__write_xml_element_univ_9_1_i23);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_1_i24);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_sv(8);
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(10);
	MR_np_call_localret_ent(term_to_xml__write_element_start_with_attr_from_source_9_0,
		term_to_xml__write_xml_element_univ_9_1_i25);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(12);
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_1,
		term_to_xml__write_xml_element_univ_9_1_i26);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_1_i27);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("</", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_1_i28);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_1_i29);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_1_i30);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_1_i31);
MR_def_label(term_to_xml__write_xml_element_univ_9_1,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__deconstruct_5_2);

MR_BEGIN_MODULE(term_to_xml_module31)
	MR_init_entry1(term_to_xml__write_xml_element_univ_9_2);
	MR_init_label8(term_to_xml__write_xml_element_univ_9_2,3,2,4,6,9,10,13,15)
	MR_init_label8(term_to_xml__write_xml_element_univ_9_2,11,19,20,18,23,24,25,26)
	MR_init_label5(term_to_xml__write_xml_element_univ_9_2,27,28,29,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_univ_9_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_2_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_r8;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_2_i2);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_r8;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		term_to_xml__write_xml_element_univ_9_2_i4);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_univ_9_2
	TypeInfo_for_T = MR_sv(7);
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
#line 5631 "term_to_xml.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_univ_9_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r4;
{
#line 56 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 5651 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_2_i6);
	MR_r5 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_r5,-1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_2_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_tempr2;
	MR_sv(9) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_2_i9);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__term_to_xml__write_xml_element_univ_9_2_i10);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(11) = MR_r2;
	}
	MR_np_call_localret_ent(term_to_xml__primitive_value_2_0,
		term_to_xml__write_xml_element_univ_9_2_i13);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_2_i11);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_2_i15);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(10);
	MR_np_call_localret_ent(term_to_xml__write_primitive_element_with_attr_from_source_8_0,
		term_to_xml__write_xml_element_univ_9_2_i31);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_2_i18);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_2_i19);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__term_to_xml__make_attrs_from_sources_5_0,
		term_to_xml__write_xml_element_univ_9_2_i20);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(term_to_xml__write_empty_element_5_0,
		term_to_xml__write_xml_element_univ_9_2_i30);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__term_to_xml__get_field_names_3_0,
		term_to_xml__write_xml_element_univ_9_2_i23);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_2_i24);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_sv(8);
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(10);
	MR_np_call_localret_ent(term_to_xml__write_element_start_with_attr_from_source_9_0,
		term_to_xml__write_xml_element_univ_9_2_i25);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(12);
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_2,
		term_to_xml__write_xml_element_univ_9_2_i26);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_2_i27);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("</", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_2_i28);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_2_i29);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_2_i30);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_2_i31);
MR_def_label(term_to_xml__write_xml_element_univ_9_2,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__deconstruct_5_3);

MR_BEGIN_MODULE(term_to_xml_module32)
	MR_init_entry1(term_to_xml__write_xml_element_univ_9_3);
	MR_init_label8(term_to_xml__write_xml_element_univ_9_3,3,2,4,6,9,10,13,15)
	MR_init_label8(term_to_xml__write_xml_element_univ_9_3,11,19,20,18,23,24,25,26)
	MR_init_label5(term_to_xml__write_xml_element_univ_9_3,27,28,29,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_univ_9_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_3_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_r8;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_3_i2);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_r8;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_3,
		term_to_xml__write_xml_element_univ_9_3_i4);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_univ_9_3
	TypeInfo_for_T = MR_sv(8);
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
#line 5950 "term_to_xml.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_univ_9_3
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r4;
{
#line 56 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 5970 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_3_i6);
	MR_r5 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_r5,-1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_3_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_tempr2;
	MR_sv(10) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_3_i9);
	}
MR_def_label(term_to_xml__write_xml_element_univ_9_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__term_to_xml__write_xml_element_univ_9_3_i10);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(12) = MR_r2;
	}
	MR_np_call_localret_ent(term_to_xml__primitive_value_2_0,
		term_to_xml__write_xml_element_univ_9_3_i13);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_3_i11);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_3_i15);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(11);
	MR_np_call_localret_ent(term_to_xml__write_primitive_element_with_attr_from_source_8_0,
		term_to_xml__write_xml_element_univ_9_3_i31);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_univ_9_3_i18);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_3_i19);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(9);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__term_to_xml__make_attrs_from_sources_5_0,
		term_to_xml__write_xml_element_univ_9_3_i20);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(term_to_xml__write_empty_element_5_0,
		term_to_xml__write_xml_element_univ_9_3_i30);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__term_to_xml__get_field_names_3_0,
		term_to_xml__write_xml_element_univ_9_3_i23);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_3_i24);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_sv(9);
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(11);
	MR_np_call_localret_ent(term_to_xml__write_element_start_with_attr_from_source_9_0,
		term_to_xml__write_xml_element_univ_9_3_i25);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(13);
	MR_np_call_localret_ent(term_to_xml__write_child_xml_elements_8_3,
		term_to_xml__write_xml_element_univ_9_3_i26);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(term_to_xml__indent_4_0,
		term_to_xml__write_xml_element_univ_9_3_i27);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("</", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_3_i28);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_3_i29);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_3_i30);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_univ_9_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_element_univ_9_3_i31);
MR_def_label(term_to_xml__write_xml_element_univ_9_3,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_1);

MR_BEGIN_MODULE(term_to_xml_module33)
	MR_init_entry1(term_to_xml__write_xml_element_general_7_0);
	MR_init_label4(term_to_xml__write_xml_element_general_7_0,2,6,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_general_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term_to_xml__write_xml_element_general_7_0_i2);
MR_def_label(term_to_xml__write_xml_element_general_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_7_0_i5);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_7_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_0,
		term_to_xml__write_xml_element_general_7_0_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_0,
		term_to_xml__write_xml_element_general_7_0_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = MR_ctfield(1, MR_r9, 0);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_0,
		term_to_xml__write_xml_element_general_7_0_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module34)
	MR_init_entry1(term_to_xml__write_xml_element_general_7_1);
	MR_init_label4(term_to_xml__write_xml_element_general_7_1,2,6,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_general_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term_to_xml__write_xml_element_general_7_1_i2);
MR_def_label(term_to_xml__write_xml_element_general_7_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_7_1_i5);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_7_1_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_1,
		term_to_xml__write_xml_element_general_7_1_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_1,
		term_to_xml__write_xml_element_general_7_1_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = MR_ctfield(1, MR_r9, 0);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_1,
		term_to_xml__write_xml_element_general_7_1_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module35)
	MR_init_entry1(term_to_xml__write_xml_element_general_7_2);
	MR_init_label4(term_to_xml__write_xml_element_general_7_2,2,6,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_general_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term_to_xml__write_xml_element_general_7_2_i2);
MR_def_label(term_to_xml__write_xml_element_general_7_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_7_2_i5);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_7_2_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_2,
		term_to_xml__write_xml_element_general_7_2_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_2,
		term_to_xml__write_xml_element_general_7_2_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = MR_ctfield(1, MR_r9, 0);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_2,
		term_to_xml__write_xml_element_general_7_2_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module36)
	MR_init_entry1(term_to_xml__write_xml_element_general_7_3);
	MR_init_label4(term_to_xml__write_xml_element_general_7_3,2,6,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_general_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term_to_xml__write_xml_element_general_7_3_i2);
MR_def_label(term_to_xml__write_xml_element_general_7_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_7_3_i5);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_7_3_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_3,
		term_to_xml__write_xml_element_general_7_3_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_3,
		term_to_xml__write_xml_element_general_7_3_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r4 = MR_ctfield(1, MR_r9, 0);
	MR_r8 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_3,
		term_to_xml__write_xml_element_general_7_3_i7);
MR_def_label(term_to_xml__write_xml_element_general_7_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module37)
	MR_init_entry1(term_to_xml__is_array_2_0);
	MR_init_label1(term_to_xml__is_array_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__is_array_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Word	PseudoTypeDesc;
#define	MR_PROC_LABEL	mercury__term_to_xml__is_array_2_0
	TypeDesc = MR_r1;
{
#line 44 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;
;}
#line 6534 "term_to_xml.c"
	MR_r3 = PseudoTypeDesc;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__term_to_xml__is_array_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r3;
{
#line 79 "type_desc.opt"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 6564 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__is_array_2_0_i1);
	MR_r3 = TypeCtorDesc;
	MR_tempr1 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_to_xml__is_array_2_0_i1);
	}
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(term_to_xml__is_array_2_0_i1);
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__term_to_xml__is_array_2_0
	TypeCtorDesc = MR_r3;
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
#line 6618 "term_to_xml.c"
	MR_r6 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(term_to_xml__is_array_2_0_i1);
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__term_to_xml__is_array_2_0
	TypeCtorDesc = MR_r3;
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
#line 6663 "term_to_xml.c"
	MR_r3 = (MR_Word) TypeCtorModuleName;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(term_to_xml__is_array_2_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(term_to_xml__is_array_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_46_46_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(term_to_xml_module38)
	MR_init_entry1(term_to_xml__get_elements_and_args_7_0);
	MR_init_label8(term_to_xml__get_elements_and_args_7_0,6,8,10,11,12,13,7,3)
	MR_init_label3(term_to_xml__get_elements_and_args_7_0,16,19,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__get_elements_and_args_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__term_to_xml__get_elements_and_args_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r2;
{
#line 56 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 6720 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__get_elements_and_args_7_0_i3);
	MR_tempr1 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	if (MR_INT_LE(MR_tempr1,-1)) {
		MR_GOTO_LAB(term_to_xml__get_elements_and_args_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_46_46_2_0,
		term_to_xml__get_elements_and_args_7_0_i6);
MR_def_label(term_to_xml__get_elements_and_args_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0,
		term_to_xml__get_elements_and_args_7_0_i8);
MR_def_label(term_to_xml__get_elements_and_args_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__get_elements_and_args_7_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term_to_xml__list__map__ho25_2_0,
		term_to_xml__get_elements_and_args_7_0_i10);
MR_def_label(term_to_xml__get_elements_and_args_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__term_to_xml__list__map__ho24_2_0,
		term_to_xml__get_elements_and_args_7_0_i11);
MR_def_label(term_to_xml__get_elements_and_args_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__term_to_xml__list__map_corresponding__ho21_3_0,
		term_to_xml__get_elements_and_args_7_0_i12);
MR_def_label(term_to_xml__get_elements_and_args_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0,
		term_to_xml__get_elements_and_args_7_0_i13);
MR_def_label(term_to_xml__get_elements_and_args_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(term_to_xml__get_elements_and_args_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("term_to_xml.get_elements_and_args: get_functor failed for discriminated union", 77);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(term_to_xml__get_elements_and_args_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__get_elements_and_args_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__term_to_xml__get_elements_and_args_7_0_i16);
MR_def_label(term_to_xml__get_elements_and_args_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(term_to_xml__is_array_2_0,
		term_to_xml__get_elements_and_args_7_0_i19);
MR_def_label(term_to_xml__get_elements_and_args_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__get_elements_and_args_7_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(term_to_xml__get_elements_and_args_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___type_desc__type_desc_0_0);

MR_BEGIN_MODULE(term_to_xml_module39)
	MR_init_entry1(term_to_xml__is_primitive_type_2_0);
	MR_init_label8(term_to_xml__is_primitive_type_2_0,3,2,6,5,9,8,11,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__is_primitive_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__is_primitive_type_2_0
	TypeInfo_for_T = (MR_Word) MR_STRING_CTOR_ADDR;
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
#line 6896 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		term_to_xml__is_primitive_type_2_0_i3);
MR_def_label(term_to_xml__is_primitive_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__is_primitive_type_2_0_i2);
	}
	MR_r2 = (MR_Word) MR_string_const("String", 6);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_to_xml__is_primitive_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__is_primitive_type_2_0
	TypeInfo_for_T = (MR_Word) MR_CHAR_CTOR_ADDR;
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
#line 6938 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		term_to_xml__is_primitive_type_2_0_i6);
MR_def_label(term_to_xml__is_primitive_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__is_primitive_type_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_string_const("Char", 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_to_xml__is_primitive_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__is_primitive_type_2_0
	TypeInfo_for_T = (MR_Word) MR_INT_CTOR_ADDR;
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
#line 6980 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		term_to_xml__is_primitive_type_2_0_i9);
MR_def_label(term_to_xml__is_primitive_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__is_primitive_type_2_0_i8);
	}
	MR_r2 = (MR_Word) MR_string_const("Int", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_to_xml__is_primitive_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__is_primitive_type_2_0
	TypeInfo_for_T = (MR_Word) MR_FLOAT_CTOR_ADDR;
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
#line 7022 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		term_to_xml__is_primitive_type_2_0_i11);
MR_def_label(term_to_xml__is_primitive_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__is_primitive_type_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const("Float", 5);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_to_xml__is_primitive_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(map__contains_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(list__merge_and_remove_dups_3_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(map__det_insert_from_corresponding_lists_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(term_to_xml_module40)
	MR_init_entry1(fn__term_to_xml__can_generate_dtd_for_types_4_0);
	MR_init_label8(fn__term_to_xml__can_generate_dtd_for_types_4_0,147,3,6,12,16,24,23,27)
	MR_init_label8(fn__term_to_xml__can_generate_dtd_for_types_4_0,26,30,29,32,10,38,37,41)
	MR_init_label8(fn__term_to_xml__can_generate_dtd_for_types_4_0,42,45,44,46,47,48,49,50)
	MR_init_label3(fn__term_to_xml__can_generate_dtd_for_types_4_0,51,8,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__can_generate_dtd_for_types_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i6);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i4);
	}
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__can_generate_dtd_for_types_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r2;
{
#line 56 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 7121 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i12);
	MR_r5 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_r5,-1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i12);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i10);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Word	PseudoTypeDesc;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__can_generate_dtd_for_types_4_0
	TypeDesc = MR_r2;
{
#line 44 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;
;}
#line 7146 "term_to_xml.c"
	MR_r5 = PseudoTypeDesc;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__can_generate_dtd_for_types_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r5;
{
#line 79 "type_desc.opt"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 7176 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i16);
	MR_r5 = TypeCtorDesc;
	MR_tempr1 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i16);
	}
	MR_r7 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i16);
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__can_generate_dtd_for_types_4_0
	TypeCtorDesc = MR_r5;
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
#line 7230 "term_to_xml.c"
	MR_r7 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i16);
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__can_generate_dtd_for_types_4_0
	TypeCtorDesc = MR_r5;
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
#line 7275 "term_to_xml.c"
	MR_r5 = (MR_Word) TypeCtorModuleName;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i16);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i10);
	}
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__can_generate_dtd_for_types_4_0
	TypeInfo_for_T = (MR_Word) MR_STRING_CTOR_ADDR;
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
#line 7313 "term_to_xml.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i24);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i23);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i10);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__can_generate_dtd_for_types_4_0
	TypeInfo_for_T = (MR_Word) MR_CHAR_CTOR_ADDR;
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
#line 7357 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i27);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i26);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i10);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__can_generate_dtd_for_types_4_0
	TypeInfo_for_T = (MR_Word) MR_INT_CTOR_ADDR;
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
#line 7397 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i30);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i29);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i10);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__can_generate_dtd_for_types_4_0
	TypeInfo_for_T = (MR_Word) MR_FLOAT_CTOR_ADDR;
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
#line 7437 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i32);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i8);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_np_call_localret_ent(map__contains_2_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i38);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i147);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(term_to_xml__get_elements_and_args_7_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i41);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i42);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i44);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i45);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, pseudo_type_desc);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i46);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, pseudo_type_desc);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__merge_and_remove_dups_3_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i47);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i48);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i49);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__det_insert_from_corresponding_lists_4_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i50);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__det_insert_4_0,
		fn__term_to_xml__can_generate_dtd_for_types_4_0_i51);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_for_types_4_0_i147);
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__term_to_xml__can_generate_dtd_for_types_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(term_to_xml_module41)
	MR_init_entry1(fn__term_to_xml__can_generate_dtd_2_0);
	MR_init_label8(fn__term_to_xml__can_generate_dtd_2_0,5,4,2,7,9,12,15,17)
	MR_init_label2(fn__term_to_xml__can_generate_dtd_2_0,19,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_to_xml__can_generate_dtd_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i2);
	}
MR_def_label(fn__term_to_xml__can_generate_dtd_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i2);
MR_def_label(fn__term_to_xml__can_generate_dtd_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
MR_def_label(fn__term_to_xml__can_generate_dtd_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(3), 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(4), 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(5), 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(6), 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(7), 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term_to_xml__get_elements_and_args_7_0,
		fn__term_to_xml__can_generate_dtd_2_0_i7);
MR_def_label(fn__term_to_xml__can_generate_dtd_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(3);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_sv(3) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_tempr2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__term_to_xml__can_generate_dtd_2_0_i9);
MR_def_label(fn__term_to_xml__can_generate_dtd_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i6);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(4);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_ctfield(1, MR_tempr3, 1);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__term_to_xml__can_generate_dtd_2_0_i12);
MR_def_label(fn__term_to_xml__can_generate_dtd_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i6);
	}
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(8);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(5);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_ctfield(1, MR_tempr3, 1);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__term_to_xml__can_generate_dtd_2_0_i15);
MR_def_label(fn__term_to_xml__can_generate_dtd_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___term_to_xml__list__list_1_1,
		fn__term_to_xml__can_generate_dtd_2_0_i17);
MR_def_label(fn__term_to_xml__can_generate_dtd_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___term_to_xml__list__list_1_1,
		fn__term_to_xml__can_generate_dtd_2_0_i19);
MR_def_label(fn__term_to_xml__can_generate_dtd_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__can_generate_dtd_2_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeDesc;
	MR_Word	PseudoTypeDesc;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__can_generate_dtd_2_0
	TypeDesc = MR_sv(1);
{
#line 44 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;
;}
#line 7741 "term_to_xml.c"
	MR_tempr1 = PseudoTypeDesc;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__term_to_xml__can_generate_dtd_for_types_4_0);
	}
MR_def_label(fn__term_to_xml__can_generate_dtd_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module42)
	MR_init_entry1(term_to_xml__write_dtd_attlists_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_dtd_attlists_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_head_1_0);
MR_decl_entry(fn__list__det_tail_1_0);
MR_decl_entry(fn__construct__num_functors_1_0);
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(term_to_xml_module43)
	MR_init_entry1(term_to_xml__write_dtd_entries_10_0);
	MR_init_label8(term_to_xml__write_dtd_entries_10_0,93,3,4,5,6,7,8,9)
	MR_init_label8(term_to_xml__write_dtd_entries_10_0,10,11,12,13,14,17,15,21)
	MR_init_label8(term_to_xml__write_dtd_entries_10_0,26,25,24,23,31,33,29,34)
	MR_init_label8(term_to_xml__write_dtd_entries_10_0,36,37,35,38,39,40,63,42)
	MR_init_label8(term_to_xml__write_dtd_entries_10_0,41,46,48,44,49,50,52,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_dtd_entries_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
MR_def_label(term_to_xml__write_dtd_entries_10_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i3);
	}
	MR_r1 = MR_r10;
	MR_decr_sp_and_return(17);
MR_def_label(term_to_xml__write_dtd_entries_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_tempr2 = MR_r5;
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(10) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(16) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		term_to_xml__write_dtd_entries_10_0_i4);
MR_def_label(term_to_xml__write_dtd_entries_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		term_to_xml__write_dtd_entries_10_0_i5);
MR_def_label(term_to_xml__write_dtd_entries_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		term_to_xml__write_dtd_entries_10_0_i6);
MR_def_label(term_to_xml__write_dtd_entries_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		term_to_xml__write_dtd_entries_10_0_i7);
MR_def_label(term_to_xml__write_dtd_entries_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		term_to_xml__write_dtd_entries_10_0_i8);
MR_def_label(term_to_xml__write_dtd_entries_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		term_to_xml__write_dtd_entries_10_0_i9);
MR_def_label(term_to_xml__write_dtd_entries_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		term_to_xml__write_dtd_entries_10_0_i10);
MR_def_label(term_to_xml__write_dtd_entries_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		term_to_xml__write_dtd_entries_10_0_i11);
MR_def_label(term_to_xml__write_dtd_entries_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("<!ELEMENT ", 10);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i12);
MR_def_label(term_to_xml__write_dtd_entries_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i13);
MR_def_label(term_to_xml__write_dtd_entries_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i14);
MR_def_label(term_to_xml__write_dtd_entries_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__is_primitive_type_2_0,
		term_to_xml__write_dtd_entries_10_0_i17);
MR_def_label(term_to_xml__write_dtd_entries_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i15);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("(#PCDATA)>\n", 11);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i50);
MR_def_label(term_to_xml__write_dtd_entries_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i21);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("EMPTY>\n", 7);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i50);
MR_def_label(term_to_xml__write_dtd_entries_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i24);
	}
	MR_sv(15) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__construct__num_functors_1_0,
		term_to_xml__write_dtd_entries_10_0_i26);
MR_def_label(term_to_xml__write_dtd_entries_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i25);
	}
	if (MR_INT_LE(MR_r2,1)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i25);
	}
	MR_r1 = MR_sv(3);
	MR_sv(14) = (MR_Integer) 0;
	MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i23);
MR_def_label(term_to_xml__write_dtd_entries_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(14) = (MR_Integer) 1;
	MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i23);
MR_def_label(term_to_xml__write_dtd_entries_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(14) = (MR_Integer) 1;
MR_def_label(term_to_xml__write_dtd_entries_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term_to_xml__is_array_2_0,
		term_to_xml__write_dtd_entries_10_0_i31);
MR_def_label(term_to_xml__write_dtd_entries_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i29);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("(", 1);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i33);
MR_def_label(term_to_xml__write_dtd_entries_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i34);
MR_def_label(term_to_xml__write_dtd_entries_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(15);
MR_def_label(term_to_xml__write_dtd_entries_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(14),0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i36);
	}
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i35);
MR_def_label(term_to_xml__write_dtd_entries_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i37);
MR_def_label(term_to_xml__write_dtd_entries_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
MR_def_label(term_to_xml__write_dtd_entries_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_0,
		term_to_xml__write_dtd_entries_10_0_i38);
MR_def_label(term_to_xml__write_dtd_entries_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		term_to_xml__write_dtd_entries_10_0_i39);
MR_def_label(term_to_xml__write_dtd_entries_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i40);
MR_def_label(term_to_xml__write_dtd_entries_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(14),0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i42);
	}
MR_def_label(term_to_xml__write_dtd_entries_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i41);
MR_def_label(term_to_xml__write_dtd_entries_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i63);
MR_def_label(term_to_xml__write_dtd_entries_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term_to_xml__is_array_2_0,
		term_to_xml__write_dtd_entries_10_0_i46);
MR_def_label(term_to_xml__write_dtd_entries_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i44);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("*)", 2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i48);
MR_def_label(term_to_xml__write_dtd_entries_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r3 = (MR_Word) MR_string_const(">\n", 2);
	MR_r1 = MR_sv(16);
	MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i49);
MR_def_label(term_to_xml__write_dtd_entries_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(">\n", 2);
	MR_r1 = MR_sv(16);
MR_def_label(term_to_xml__write_dtd_entries_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i50);
MR_def_label(term_to_xml__write_dtd_entries_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r7 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(term_to_xml__write_dtd_attlists_8_0,
		term_to_xml__write_dtd_entries_10_0_i52);
MR_def_label(term_to_xml__write_dtd_entries_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(stream__put_4_0,
		term_to_xml__write_dtd_entries_10_0_i53);
MR_def_label(term_to_xml__write_dtd_entries_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(8);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(term_to_xml__write_dtd_entries_10_0_i93);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);
MR_decl_entry(fn__type_desc__type_name_1_0);

MR_BEGIN_MODULE(term_to_xml_module44)
	MR_init_entry1(term_to_xml__write_dtd_type_elements_6_0);
	MR_init_label8(term_to_xml__write_dtd_type_elements_6_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_dtd_type_elements_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(term_to_xml__get_elements_and_args_7_0,
		term_to_xml__write_dtd_type_elements_6_0_i2);
MR_def_label(term_to_xml__write_dtd_type_elements_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(term_to_xml__list__map__ho35_3_0,
		term_to_xml__write_dtd_type_elements_6_0_i3);
MR_def_label(term_to_xml__write_dtd_type_elements_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__condense_2_0,
		term_to_xml__write_dtd_type_elements_6_0_i4);
MR_def_label(term_to_xml__write_dtd_type_elements_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("<!-- Elements for functors of type \"", 36);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_type_elements_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_type_elements_6_0_i5);
MR_def_label(term_to_xml__write_dtd_type_elements_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		term_to_xml__write_dtd_type_elements_6_0_i6);
MR_def_label(term_to_xml__write_dtd_type_elements_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(term_to_xml__write_xml_escaped_string_4_0,
		term_to_xml__write_dtd_type_elements_6_0_i7);
MR_def_label(term_to_xml__write_dtd_type_elements_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\" -->\n\n", 7);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_type_elements_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_type_elements_6_0_i8);
MR_def_label(term_to_xml__write_dtd_type_elements_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(8);
	MR_np_call_localret_ent(term_to_xml__write_dtd_entries_10_0,
		term_to_xml__write_dtd_type_elements_6_0_i9);
MR_def_label(term_to_xml__write_dtd_type_elements_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__search_3_0);
MR_decl_entry(tree234__set_4_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(term_to_xml_module45)
	MR_init_entry1(term_to_xml__write_dtd_types_6_0);
	MR_init_label7(term_to_xml__write_dtd_types_6_0,22,3,5,4,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_dtd_types_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(term_to_xml__write_dtd_types_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_types_6_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(8);
MR_def_label(term_to_xml__write_dtd_types_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_r5;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		term_to_xml__write_dtd_types_6_0_i5);
MR_def_label(term_to_xml__write_dtd_types_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_types_6_0_i4);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term_to_xml__write_dtd_types_6_0_i22);
MR_def_label(term_to_xml__write_dtd_types_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(term_to_xml__write_dtd_type_elements_6_0,
		term_to_xml__write_dtd_types_6_0_i8);
MR_def_label(term_to_xml__write_dtd_types_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(tree234__set_4_0,
		term_to_xml__write_dtd_types_6_0_i9);
MR_def_label(term_to_xml__write_dtd_types_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(list__append_3_1,
		term_to_xml__write_dtd_types_6_0_i10);
MR_def_label(term_to_xml__write_dtd_types_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term_to_xml__write_dtd_types_6_0_i22);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module46)
	MR_init_entry1(term_to_xml__write_dtd_from_type_6_0);
	MR_init_label8(term_to_xml__write_dtd_from_type_6_0,2,10,9,7,12,14,16,19)
	MR_init_label8(term_to_xml__write_dtd_from_type_6_0,22,24,25,26,27,28,29,11)
	MR_init_label1(term_to_xml__write_dtd_from_type_6_0,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_dtd_from_type_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(7) = MR_r5;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term_to_xml__can_generate_dtd_2_0,
		term_to_xml__write_dtd_from_type_6_0_i2);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i34);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tag(MR_tempr1);
	if ((MR_r4 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i9);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i10);
	}
	MR_r2 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i7);
	}
MR_def_label(term_to_xml__write_dtd_from_type_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,13);
	MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i7);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r3, 0);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(5), 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(6), 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(term_to_xml__get_elements_and_args_7_0,
		term_to_xml__write_dtd_from_type_6_0_i12);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(5);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r4;
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		term_to_xml__write_dtd_from_type_6_0_i14);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i11);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___term_to_xml__list__list_1_1,
		term_to_xml__write_dtd_from_type_6_0_i16);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i11);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		term_to_xml__write_dtd_from_type_6_0_i19);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i11);
	}
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		term_to_xml__write_dtd_from_type_6_0_i22);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_from_type_6_0_i11);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__term_to_xml__list__map__ho27_2_0,
		term_to_xml__write_dtd_from_type_6_0_i24);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("<!DOCTYPE ", 10);
	MR_r5 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_from_type_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_from_type_6_0_i25);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_from_type_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_from_type_6_0_i26);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" [\n\n", 4);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_from_type_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_from_type_6_0_i27);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(term_to_xml__write_dtd_types_6_0,
		term_to_xml__write_dtd_from_type_6_0_i28);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\n]>", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_from_type_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_from_type_6_0_i29);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(11);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("term_to_xml.write_dtd_from_type: not ok to generate DTD", 55);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(term_to_xml__write_dtd_from_type_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module47)
	MR_init_entry1(term_to_xml__write_dtd_6_0);
	MR_init_label1(term_to_xml__write_dtd_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_dtd_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_dtd_6_0
	TypeInfo_for_T = MR_r1;
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
#line 8632 "term_to_xml.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(term_to_xml__write_dtd_from_type_6_0,
		term_to_xml__write_dtd_6_0_i2);
MR_def_label(term_to_xml__write_dtd_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module48)
	MR_init_entry1(term_to_xml__write_doctype_8_0);
	MR_init_label8(term_to_xml__write_doctype_8_0,6,7,5,61,11,10,8,12)
	MR_init_label4(term_to_xml__write_doctype_8_0,14,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_doctype_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r7;
	MR_r9 = MR_tag(MR_tempr2);
	if ((MR_r9 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_doctype_8_0_i61);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(term_to_xml__write_doctype_8_0_i5);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_doctype_8_0
	TypeInfo_for_T = MR_r1;
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
#line 8705 "term_to_xml.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(5) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r5 = MR_r8;
	}
	MR_np_call_localret_ent(term_to_xml__write_dtd_from_type_6_0,
		term_to_xml__write_doctype_8_0_i6);
MR_def_label(term_to_xml__write_doctype_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_doctype_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_doctype_8_0_i7);
MR_def_label(term_to_xml__write_doctype_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(term_to_xml__write_doctype_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r8;
	MR_proceed();
MR_def_label(term_to_xml__write_doctype_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r9 = MR_tag(MR_tempr1);
	if ((MR_r9 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_doctype_8_0_i10);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_doctype_8_0_i11);
	}
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r5;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_ctfield(1, MR_r7, 0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,14);
	MR_GOTO_LAB(term_to_xml__write_doctype_8_0_i8);
	}
MR_def_label(term_to_xml__write_doctype_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r5;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_ctfield(1, MR_r7, 0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,15);
	MR_GOTO_LAB(term_to_xml__write_doctype_8_0_i8);
MR_def_label(term_to_xml__write_doctype_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r5;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_ctfield(1, MR_r7, 0);
	MR_sv(4) = MR_ctfield(1, MR_r6, 0);
MR_def_label(term_to_xml__write_doctype_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		term_to_xml__write_doctype_8_0_i12);
MR_def_label(term_to_xml__write_doctype_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_doctype_8_0
	TypeInfo_for_T = MR_sv(6);
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
#line 8814 "term_to_xml.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_doctype_8_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r4;
{
#line 56 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 8834 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__write_doctype_8_0_i14);
	MR_r4 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_r4,-1)) {
		MR_GOTO_LAB(term_to_xml__write_doctype_8_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(term_to_xml__write_doctype_8_0_i17);
	}
MR_def_label(term_to_xml__write_doctype_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(term_to_xml__write_doctype_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_doctype_8_0
	TypeInfo_for_T = MR_sv(6);
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
#line 8882 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_doctype_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__term_to_xml__write_doctype_8_0_i18);
MR_def_label(term_to_xml__write_doctype_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(term_to_xml__write_external_doctype_5_0,
		term_to_xml__write_doctype_8_0_i19);
MR_def_label(term_to_xml__write_doctype_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module49)
	MR_init_entry1(term_to_xml__write_doctype_8_2);
	MR_init_label8(term_to_xml__write_doctype_8_2,6,7,5,61,11,10,8,12)
	MR_init_label4(term_to_xml__write_doctype_8_2,14,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_doctype_8_2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r7;
	MR_r9 = MR_tag(MR_tempr2);
	if ((MR_r9 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_doctype_8_2_i61);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(term_to_xml__write_doctype_8_2_i5);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_doctype_8_2
	TypeInfo_for_T = MR_r1;
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
#line 8957 "term_to_xml.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(5) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r5 = MR_r8;
	}
	MR_np_call_localret_ent(term_to_xml__write_dtd_from_type_6_0,
		term_to_xml__write_doctype_8_2_i6);
MR_def_label(term_to_xml__write_doctype_8_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_doctype_8_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_doctype_8_2_i7);
MR_def_label(term_to_xml__write_doctype_8_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(term_to_xml__write_doctype_8_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r8;
	MR_proceed();
MR_def_label(term_to_xml__write_doctype_8_2,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r9 = MR_tag(MR_tempr1);
	if ((MR_r9 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_doctype_8_2_i10);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_doctype_8_2_i11);
	}
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r5;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_ctfield(1, MR_r7, 0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,16);
	MR_GOTO_LAB(term_to_xml__write_doctype_8_2_i8);
	}
MR_def_label(term_to_xml__write_doctype_8_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r5;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_ctfield(1, MR_r7, 0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_GOTO_LAB(term_to_xml__write_doctype_8_2_i8);
MR_def_label(term_to_xml__write_doctype_8_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r5;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_ctfield(1, MR_r7, 0);
	MR_sv(4) = MR_ctfield(1, MR_r6, 0);
MR_def_label(term_to_xml__write_doctype_8_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		term_to_xml__write_doctype_8_2_i12);
MR_def_label(term_to_xml__write_doctype_8_2,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_doctype_8_2
	TypeInfo_for_T = MR_sv(6);
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
#line 9066 "term_to_xml.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_doctype_8_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r4;
{
#line 56 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 9086 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__write_doctype_8_2_i14);
	MR_r4 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_r4,-1)) {
		MR_GOTO_LAB(term_to_xml__write_doctype_8_2_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(term_to_xml__write_doctype_8_2_i17);
	}
MR_def_label(term_to_xml__write_doctype_8_2,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(term_to_xml__write_doctype_8_2,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_doctype_8_2
	TypeInfo_for_T = MR_sv(6);
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
#line 9134 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_doctype_8_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__term_to_xml__write_doctype_8_2_i18);
MR_def_label(term_to_xml__write_doctype_8_2,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(term_to_xml__write_external_doctype_5_0,
		term_to_xml__write_doctype_8_2_i19);
MR_def_label(term_to_xml__write_doctype_8_2,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module50)
	MR_init_entry1(term_to_xml__write_xml_doc_general_8_0);
	MR_init_label8(term_to_xml__write_xml_doc_general_8_0,6,44,4,9,11,32,13,14)
	MR_init_label8(term_to_xml__write_xml_doc_general_8_0,15,16,17,12,19,20,24,23)
	MR_init_label1(term_to_xml__write_xml_doc_general_8_0,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_general_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_doc_general_8_0
	TypeInfo_for_T = MR_r1;
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
#line 9200 "term_to_xml.c"
	MR_r9 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_r10 = MR_tag(MR_tempr1);
	if ((MR_r10 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_8_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_8_0_i4);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r9;
	}
	MR_np_call_localret_ent(fn__term_to_xml__can_generate_dtd_2_0,
		term_to_xml__write_xml_doc_general_8_0_i6);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	if (MR_INT_EQ(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_8_0_i9);
	}
MR_def_label(term_to_xml__write_xml_doc_general_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_8_0_i44);
	}
MR_def_label(term_to_xml__write_xml_doc_general_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_8_0_i44);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(term_to_xml__write_xml_header_4_0,
		term_to_xml__write_xml_doc_general_8_0_i11);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_8_0_i13);
	}
MR_def_label(term_to_xml__write_xml_doc_general_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_r1;
	MR_r4 = (MR_Integer) 1;
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(term_to_xml__write_xml_doc_general_8_0_i12);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("<?xml-stylesheet type=\"", 23);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_general_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_general_8_0_i14);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_general_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_general_8_0_i15);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\" href=\"", 8);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_general_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_general_8_0_i16);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_general_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_general_8_0_i17);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\"?>\n", 4);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_general_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_general_8_0_i32);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(term_to_xml__write_doctype_8_0,
		term_to_xml__write_xml_doc_general_8_0_i19);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term_to_xml__write_xml_doc_general_8_0_i20);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tag(MR_tempr1);
	if ((MR_r10 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_8_0_i23);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_8_0_i24);
	}
	MR_r2 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,18);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_1,
		term_to_xml__write_xml_doc_general_8_0_i25);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_1,
		term_to_xml__write_xml_doc_general_8_0_i25);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_ctfield(1, MR_r9, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_1,
		term_to_xml__write_xml_doc_general_8_0_i25);
MR_def_label(term_to_xml__write_xml_doc_general_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module51)
	MR_init_entry1(term_to_xml__write_xml_doc_general_cc_8_0);
	MR_init_label8(term_to_xml__write_xml_doc_general_cc_8_0,6,44,4,9,11,32,13,14)
	MR_init_label8(term_to_xml__write_xml_doc_general_cc_8_0,15,16,17,12,19,20,24,23)
	MR_init_label1(term_to_xml__write_xml_doc_general_cc_8_0,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_general_cc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_doc_general_cc_8_0
	TypeInfo_for_T = MR_r1;
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
#line 9452 "term_to_xml.c"
	MR_r9 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_r10 = MR_tag(MR_tempr1);
	if ((MR_r10 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_cc_8_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_cc_8_0_i4);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r9;
	}
	MR_np_call_localret_ent(fn__term_to_xml__can_generate_dtd_2_0,
		term_to_xml__write_xml_doc_general_cc_8_0_i6);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	if (MR_INT_EQ(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_cc_8_0_i9);
	}
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_cc_8_0_i44);
	}
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_cc_8_0_i44);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(term_to_xml__write_xml_header_4_0,
		term_to_xml__write_xml_doc_general_cc_8_0_i11);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_cc_8_0_i13);
	}
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_r1;
	MR_r4 = (MR_Integer) 2;
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(term_to_xml__write_xml_doc_general_cc_8_0_i12);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("<?xml-stylesheet type=\"", 23);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_general_cc_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_general_cc_8_0_i14);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_general_cc_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_general_cc_8_0_i15);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\" href=\"", 8);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_general_cc_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_general_cc_8_0_i16);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_general_cc_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_general_cc_8_0_i17);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\"?>\n", 4);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_doc_general_cc_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_xml_doc_general_cc_8_0_i32);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(term_to_xml__write_doctype_8_2,
		term_to_xml__write_xml_doc_general_cc_8_0_i19);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term_to_xml__write_xml_doc_general_cc_8_0_i20);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tag(MR_tempr1);
	if ((MR_r10 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_cc_8_0_i23);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_doc_general_cc_8_0_i24);
	}
	MR_r2 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,20);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 2;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_2,
		term_to_xml__write_xml_doc_general_cc_8_0_i25);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,21);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 2;
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_2,
		term_to_xml__write_xml_doc_general_cc_8_0_i25);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_ctfield(1, MR_r9, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 2;
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_2,
		term_to_xml__write_xml_doc_general_cc_8_0_i25);
MR_def_label(term_to_xml__write_xml_doc_general_cc_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module52)
	MR_init_entry1(term_to_xml__write_xml_doc_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_doc_3_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 9690 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_tailcall_ent(term_to_xml__write_xml_doc_style_dtd_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module53)
	MR_init_entry1(term_to_xml__write_xml_doc_to_stream_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_to_stream_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_tailcall_ent(term_to_xml__write_xml_doc_style_dtd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module54)
	MR_init_entry1(term_to_xml__write_xml_doc_style_dtd_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_style_dtd_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_doc_style_dtd_5_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 9756 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(term_to_xml__write_xml_doc_style_dtd_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module55)
	MR_init_entry1(term_to_xml__write_xml_doc_style_dtd_stream_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_style_dtd_stream_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_np_tailcall_ent(term_to_xml__write_xml_doc_style_dtd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module56)
	MR_init_entry1(term_to_xml__write_xml_element_4_0);
	MR_init_label3(term_to_xml__write_xml_element_4_0,2,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_4_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 9825 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_to_xml__write_xml_element_4_0_i2);
MR_def_label(term_to_xml__write_xml_element_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_np_call_localret_ent(term_to_xml__contains_noformat_xml_1_0,
		term_to_xml__write_xml_element_4_0_i5);
MR_def_label(term_to_xml__write_xml_element_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_4_0_i3);
	}
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_format_6_0);
MR_def_label(term_to_xml__write_xml_element_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_format_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module57)
	MR_init_entry1(term_to_xml__write_xml_element_to_stream_5_0);
	MR_init_label3(term_to_xml__write_xml_element_to_stream_5_0,2,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_to_stream_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_r4;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_element_to_stream_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_to_xml__write_xml_element_to_stream_5_0_i2);
MR_def_label(term_to_xml__write_xml_element_to_stream_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_np_call_localret_ent(term_to_xml__contains_noformat_xml_1_0,
		term_to_xml__write_xml_element_to_stream_5_0_i5);
MR_def_label(term_to_xml__write_xml_element_to_stream_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_to_stream_5_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_format_6_0);
MR_def_label(term_to_xml__write_xml_element_to_stream_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_format_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module58)
	MR_init_entry1(term_to_xml__write_xml_header_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_header_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_header_3_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 9957 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(term_to_xml__write_xml_header_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module59)
	MR_init_entry1(term_to_xml__write_xml_doc_general_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_general_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_doc_general_7_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 9998 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(term_to_xml__write_xml_doc_general_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module60)
	MR_init_entry1(term_to_xml__write_xml_doc_general_to_stream_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_general_to_stream_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_np_tailcall_ent(term_to_xml__write_xml_doc_general_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module61)
	MR_init_entry1(term_to_xml__write_xml_doc_general_cc_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_general_cc_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_doc_general_cc_7_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 10066 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(term_to_xml__write_xml_doc_general_cc_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module62)
	MR_init_entry1(term_to_xml__write_xml_doc_general_cc_to_stream_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_doc_general_cc_to_stream_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_np_tailcall_ent(term_to_xml__write_xml_doc_general_cc_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module63)
	MR_init_entry1(term_to_xml__write_dtd_5_0);
	MR_init_label1(term_to_xml__write_dtd_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_dtd_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_dtd_5_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 10137 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_dtd_5_0
	TypeInfo_for_T = MR_r1;
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
#line 10165 "term_to_xml.c"
	MR_r3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term_to_xml__write_dtd_from_type_6_0,
		term_to_xml__write_dtd_5_0_i2);
MR_def_label(term_to_xml__write_dtd_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module64)
	MR_init_entry1(term_to_xml__write_dtd_to_stream_6_0);
	MR_init_label1(term_to_xml__write_dtd_to_stream_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_dtd_to_stream_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_dtd_to_stream_6_0
	TypeInfo_for_T = MR_r1;
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
#line 10224 "term_to_xml.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(term_to_xml__write_dtd_from_type_6_0,
		term_to_xml__write_dtd_to_stream_6_0_i2);
MR_def_label(term_to_xml__write_dtd_to_stream_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module65)
	MR_init_entry1(term_to_xml__write_dtd_from_type_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_dtd_from_type_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_dtd_from_type_5_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 10269 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(term_to_xml__write_dtd_from_type_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module66)
	MR_init_entry1(term_to_xml__write_dtd_from_type_to_stream_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_dtd_from_type_to_stream_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_np_tailcall_ent(term_to_xml__write_dtd_from_type_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module67)
	MR_init_entry1(term_to_xml__write_xml_element_general_6_0);
	MR_init_label3(term_to_xml__write_xml_element_general_6_0,2,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_general_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_general_6_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 10336 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term_to_xml__write_xml_element_general_6_0_i2);
MR_def_label(term_to_xml__write_xml_element_general_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_6_0_i5);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_6_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,22);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_0);
	}
MR_def_label(term_to_xml__write_xml_element_general_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,23);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_0);
MR_def_label(term_to_xml__write_xml_element_general_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_ctfield(1, MR_r9, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module68)
	MR_init_entry1(term_to_xml__write_xml_element_general_6_1);
	MR_init_label3(term_to_xml__write_xml_element_general_6_1,2,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_general_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_general_6_1
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 10432 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term_to_xml__write_xml_element_general_6_1_i2);
MR_def_label(term_to_xml__write_xml_element_general_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_6_1_i5);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_6_1_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,24);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_1);
	}
MR_def_label(term_to_xml__write_xml_element_general_6_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,25);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_1);
MR_def_label(term_to_xml__write_xml_element_general_6_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_ctfield(1, MR_r9, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module69)
	MR_init_entry1(term_to_xml__write_xml_element_general_6_2);
	MR_init_label3(term_to_xml__write_xml_element_general_6_2,2,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_general_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_general_6_2
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 10528 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term_to_xml__write_xml_element_general_6_2_i2);
MR_def_label(term_to_xml__write_xml_element_general_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_6_2_i5);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_6_2_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,26);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_2);
	}
MR_def_label(term_to_xml__write_xml_element_general_6_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,27);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_2);
MR_def_label(term_to_xml__write_xml_element_general_6_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_ctfield(1, MR_r9, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module70)
	MR_init_entry1(term_to_xml__write_xml_element_general_6_3);
	MR_init_label3(term_to_xml__write_xml_element_general_6_3,2,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_general_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_to_xml__write_xml_element_general_6_3
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1406 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 10624 "term_to_xml.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term_to_xml__write_xml_element_general_6_3_i2);
MR_def_label(term_to_xml__write_xml_element_general_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_6_3_i5);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(term_to_xml__write_xml_element_general_6_3_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,28);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_3);
	}
MR_def_label(term_to_xml__write_xml_element_general_6_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,29);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_3);
MR_def_label(term_to_xml__write_xml_element_general_6_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_ctfield(1, MR_r9, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module71)
	MR_init_entry1(fn__term_to_xml__all_attr_sources_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__all_attr_sources_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(string__char_list_to_lower_2_0);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(term_to_xml_module72)
	MR_init_entry1(fn__term_to_xml__mangle_1_0);
	MR_init_label8(fn__term_to_xml__mangle_1_0,3,5,6,7,2,8,9,10)
	MR_init_label2(fn__term_to_xml__mangle_1_0,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__mangle_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_String	Str;
	MR_Integer	Count;
	MR_String	Left;
	MR_String	Right;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__mangle_1_0
	Str = (MR_String) MR_r1;
	Count = (MR_Integer) 1;
{
#line 645 "string.opt"
{
    MR_Integer  len;
    MR_Word     tmp;

    if (Count <= 0) {
        MR_make_aligned_string(Left, "");
        Right = Str;
    } else {
        len = strlen(Str);

        if (Count > len) {
            Count = len;
        }

        MR_allocate_aligned_string_msg(Left, Count, MR_PROC_LABEL);
        MR_memcpy(Left, Str, Count);
        Left[Count] = '\0';
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Right, len - Count, MR_PROC_LABEL);
        strcpy(Right, Str + Count);
    }
};}
#line 10766 "term_to_xml.c"
	MR_tempr1 = (MR_Word) Left;
	MR_tempr2 = (MR_Word) Right;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__mangle_1_0
	Str = (MR_String) MR_tempr1;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 10782 "term_to_xml.c"
	MR_tempr3 = Length;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = ((MR_Integer) MR_tempr3 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(term_to_xml__string__all_match_2__ho40_3_0,
		fn__term_to_xml__mangle_1_0_i3);
MR_def_label(fn__term_to_xml__mangle_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_to_xml__mangle_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__term_to_xml__mangle_1_0_i5);
MR_def_label(fn__term_to_xml__mangle_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__char_list_to_lower_2_0,
		fn__term_to_xml__mangle_1_0_i6);
MR_def_label(fn__term_to_xml__mangle_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__term_to_xml__mangle_1_0_i7);
MR_def_label(fn__term_to_xml__mangle_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(1), (char *)MR_r1) != 0)) {
		MR_GOTO_LAB(fn__term_to_xml__mangle_1_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(fn__term_to_xml__mangle_1_0_i9);
MR_def_label(fn__term_to_xml__mangle_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__append_3_2,
		fn__term_to_xml__mangle_1_0_i8);
MR_def_label(fn__term_to_xml__mangle_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("Tag_", 4);
MR_def_label(fn__term_to_xml__mangle_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__mangle_1_0
	Str = (MR_String) MR_r1;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 10836 "term_to_xml.c"
	MR_r3 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__mangle_1_0
	Str = (MR_String) MR_r1;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 10852 "term_to_xml.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 0);
	MR_r2 = (MR_Integer) 0;
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__term_to_xml__mangle_1_0_i10);
	}
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(term_to_xml__string__foldl_substring_2__ho49_6_0,
		fn__term_to_xml__mangle_1_0_i12);
MR_def_label(fn__term_to_xml__mangle_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r6;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(term_to_xml__string__foldl_substring_2__ho49_6_0,
		fn__term_to_xml__mangle_1_0_i12);
MR_def_label(fn__term_to_xml__mangle_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__term_to_xml__mangle_1_0_i13);
MR_def_label(fn__term_to_xml__mangle_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__append_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module73)
	MR_init_entry1(term_to_xml__make_unique_element_4_0);
	MR_init_label8(term_to_xml__make_unique_element_4_0,6,4,16,17,18,19,9,21)
	MR_init_label8(term_to_xml__make_unique_element_4_0,22,23,3,28,29,27,26,31)
	MR_init_label7(term_to_xml__make_unique_element_4_0,33,34,35,36,37,38,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__make_unique_element_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term_to_xml__is_primitive_type_2_0,
		term_to_xml__make_unique_element_4_0_i6);
MR_def_label(term_to_xml__make_unique_element_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,12);
	MR_decr_sp_and_return(4);
MR_def_label(term_to_xml__make_unique_element_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word	TypeDesc;
	MR_Word	PseudoTypeDesc;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_unique_element_4_0
	TypeDesc = MR_r1;
{
#line 44 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;
;}
#line 10931 "term_to_xml.c"
	MR_r2 = PseudoTypeDesc;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_unique_element_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r2;
{
#line 79 "type_desc.opt"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 10961 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i9);
	MR_r2 = TypeCtorDesc;
	MR_tempr1 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i9);
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i9);
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_unique_element_4_0
	TypeCtorDesc = MR_r2;
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
#line 11015 "term_to_xml.c"
	MR_r4 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i9);
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_unique_element_4_0
	TypeCtorDesc = MR_r2;
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
#line 11060 "term_to_xml.c"
	MR_r2 = (MR_Word) TypeCtorModuleName;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i9);
	}
	}
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		term_to_xml__make_unique_element_4_0_i16);
MR_def_label(term_to_xml__make_unique_element_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__term_to_xml__mangle_1_0,
		term_to_xml__make_unique_element_4_0_i17);
MR_def_label(term_to_xml__make_unique_element_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		term_to_xml__make_unique_element_4_0_i18);
MR_def_label(term_to_xml__make_unique_element_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Array", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		term_to_xml__make_unique_element_4_0_i19);
MR_def_label(term_to_xml__make_unique_element_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term_to_xml__all_attr_sources_0_0,
		term_to_xml__make_unique_element_4_0_i23);
MR_def_label(term_to_xml__make_unique_element_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		term_to_xml__make_unique_element_4_0_i21);
MR_def_label(term_to_xml__make_unique_element_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__term_to_xml__mangle_1_0,
		term_to_xml__make_unique_element_4_0_i22);
MR_def_label(term_to_xml__make_unique_element_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term_to_xml__all_attr_sources_0_0,
		term_to_xml__make_unique_element_4_0_i23);
MR_def_label(term_to_xml__make_unique_element_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(term_to_xml__make_unique_element_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,0,10);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("Nil", 3);
	MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i27);
	}
MR_def_label(term_to_xml__make_unique_element_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i29);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = MR_r4;
	MR_r1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("List", 4);
	MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i27);
MR_def_label(term_to_xml__make_unique_element_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(term_to_xml__make_unique_element_4_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = MR_r4;
	MR_r1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("Tuple", 5);
MR_def_label(term_to_xml__make_unique_element_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		term_to_xml__make_unique_element_4_0_i33);
MR_def_label(term_to_xml__make_unique_element_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__term_to_xml__mangle_1_0,
		term_to_xml__make_unique_element_4_0_i31);
MR_def_label(term_to_xml__make_unique_element_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		term_to_xml__make_unique_element_4_0_i33);
MR_def_label(term_to_xml__make_unique_element_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		term_to_xml__make_unique_element_4_0_i34);
MR_def_label(term_to_xml__make_unique_element_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__term_to_xml__mangle_1_0,
		term_to_xml__make_unique_element_4_0_i35);
MR_def_label(term_to_xml__make_unique_element_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_np_call_localret_ent(string__append_3_2,
		term_to_xml__make_unique_element_4_0_i36);
MR_def_label(term_to_xml__make_unique_element_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_2,
		term_to_xml__make_unique_element_4_0_i37);
MR_def_label(term_to_xml__make_unique_element_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_np_call_localret_ent(string__append_3_2,
		term_to_xml__make_unique_element_4_0_i38);
MR_def_label(term_to_xml__make_unique_element_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__append_3_2,
		term_to_xml__make_unique_element_4_0_i39);
MR_def_label(term_to_xml__make_unique_element_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module74)
	MR_init_entry1(term_to_xml__make_simple_element_4_0);
	MR_init_label8(term_to_xml__make_simple_element_4_0,7,6,10,9,13,12,15,19)
	MR_init_label8(term_to_xml__make_simple_element_4_0,4,20,27,3,32,33,127,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__make_simple_element_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_simple_element_4_0
	TypeInfo_for_T = (MR_Word) MR_STRING_CTOR_ADDR;
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
#line 11259 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		term_to_xml__make_simple_element_4_0_i7);
MR_def_label(term_to_xml__make_simple_element_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("String", 6);
	MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i19);
MR_def_label(term_to_xml__make_simple_element_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_simple_element_4_0
	TypeInfo_for_T = (MR_Word) MR_CHAR_CTOR_ADDR;
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
#line 11298 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		term_to_xml__make_simple_element_4_0_i10);
MR_def_label(term_to_xml__make_simple_element_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("Char", 4);
	MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i19);
MR_def_label(term_to_xml__make_simple_element_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_simple_element_4_0
	TypeInfo_for_T = (MR_Word) MR_INT_CTOR_ADDR;
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
#line 11337 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		term_to_xml__make_simple_element_4_0_i13);
MR_def_label(term_to_xml__make_simple_element_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("Int", 3);
	MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i19);
MR_def_label(term_to_xml__make_simple_element_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_simple_element_4_0
	TypeInfo_for_T = (MR_Word) MR_FLOAT_CTOR_ADDR;
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
#line 11376 "term_to_xml.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		term_to_xml__make_simple_element_4_0_i15);
MR_def_label(term_to_xml__make_simple_element_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("Float", 5);
MR_def_label(term_to_xml__make_simple_element_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,12);
	MR_decr_sp_and_return(2);
MR_def_label(term_to_xml__make_simple_element_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word	TypeDesc;
	MR_Word	PseudoTypeDesc;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_simple_element_4_0
	TypeDesc = MR_r1;
{
#line 44 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;
;}
#line 11406 "term_to_xml.c"
	MR_r3 = PseudoTypeDesc;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_simple_element_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r3;
{
#line 79 "type_desc.opt"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 11436 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i20);
	MR_r3 = TypeCtorDesc;
	MR_tempr1 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i20);
	}
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i20);
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_simple_element_4_0
	TypeCtorDesc = MR_r3;
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
#line 11490 "term_to_xml.c"
	MR_r5 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i20);
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__term_to_xml__make_simple_element_4_0
	TypeCtorDesc = MR_r3;
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
#line 11535 "term_to_xml.c"
	MR_r3 = (MR_Word) TypeCtorModuleName;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("Array", 5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,10);
	MR_decr_sp_and_return(2);
	}
MR_def_label(term_to_xml__make_simple_element_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__term_to_xml__all_attr_sources_0_0,
		term_to_xml__make_simple_element_4_0_i27);
MR_def_label(term_to_xml__make_simple_element_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Unknown", 7);
	MR_decr_sp_and_return(2);
MR_def_label(term_to_xml__make_simple_element_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,10);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i32);
	}
	MR_r1 = (MR_Word) MR_string_const("Nil", 3);
	MR_proceed();
MR_def_label(term_to_xml__make_simple_element_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("List", 4);
	MR_proceed();
MR_def_label(term_to_xml__make_simple_element_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(term_to_xml__make_simple_element_4_0_i127);
	}
	MR_r1 = (MR_Word) MR_string_const("Tuple", 5);
	MR_proceed();
MR_def_label(term_to_xml__make_simple_element_4_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__term_to_xml__mangle_1_0,
		term_to_xml__make_simple_element_4_0_i35);
MR_def_label(term_to_xml__make_simple_element_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_alnum_or_underscore_1_0);

MR_BEGIN_MODULE(term_to_xml_module75)
	MR_init_entry1(term_to_xml__mangle_char_3_0);
	MR_init_label4(term_to_xml__mangle_char_3_0,4,2,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__mangle_char_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		term_to_xml__mangle_char_3_0_i4);
MR_def_label(term_to_xml__mangle_char_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__mangle_char_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
	}
MR_def_label(term_to_xml__mangle_char_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__term_to_xml__mangle_char_3_0
	Character = MR_r1;
{
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 11646 "term_to_xml.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		term_to_xml__mangle_char_3_0_i6);
MR_def_label(term_to_xml__mangle_char_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_char_list_2_0,
		term_to_xml__mangle_char_3_0_i7);
MR_def_label(term_to_xml__mangle_char_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module76)
	MR_init_entry1(term_to_xml__write_xml_element_univ_do_not_allow_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_univ_do_not_allow_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module77)
	MR_init_entry1(term_to_xml__write_xml_element_univ_canonicalize_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_univ_canonicalize_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module78)
	MR_init_entry1(term_to_xml__write_xml_element_univ_include_details_cc_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_xml_element_univ_include_details_cc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 2;
	MR_np_tailcall_ent(term_to_xml__write_xml_element_univ_9_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module79)
	MR_init_entry1(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0);
	MR_init_label8(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0,3,5,6,8,38,11,43,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_to_xml__attr_from_source_to_maybe_attr_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r5, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r6,
		MR_LABEL_AP(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0_i3) MR_AND
		MR_LABEL_AP(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0_i6) MR_AND
		MR_LABEL_AP(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0_i38) MR_AND
		MR_LABEL_AP(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0_i11));
MR_def_label(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r5, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r5, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r5, 0);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		fn__term_to_xml__attr_from_source_to_maybe_attr_5_0_i14);
MR_def_label(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0_i43);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r5, 0);
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__term_to_xml__attr_from_source_to_maybe_attr_5_0_i14);
MR_def_label(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module80)
	MR_init_entry1(term_to_xml__is_maybe_yes_2_0);
	MR_init_label1(term_to_xml__is_maybe_yes_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__is_maybe_yes_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(term_to_xml__is_maybe_yes_2_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_to_xml__is_maybe_yes_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module81)
	MR_init_entry1(term_to_xml__write_attribute_4_0);
	MR_init_label4(term_to_xml__write_attribute_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_to_xml__write_attribute_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_attribute_4_0_i2);
MR_def_label(term_to_xml__write_attribute_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_attribute_4_0_i3);
MR_def_label(term_to_xml__write_attribute_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("=\"", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_attribute_4_0_i4);
MR_def_label(term_to_xml__write_attribute_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_to_xml__write_xml_escaped_string_4_0,
		term_to_xml__write_attribute_4_0_i5);
MR_def_label(term_to_xml__write_attribute_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module82)
	MR_init_entry1(term_to_xml__write_xml_escaped_char_4_0);
	MR_init_label7(term_to_xml__write_xml_escaped_char_4_0,4,5,6,7,3,37,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_xml_escaped_char_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,34)) {
		MR_GOTO_LAB(term_to_xml__write_xml_escaped_char_4_0_i4);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("&quot;", 6);
	MR_GOTO_LAB(term_to_xml__write_xml_escaped_char_4_0_i3);
MR_def_label(term_to_xml__write_xml_escaped_char_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,38)) {
		MR_GOTO_LAB(term_to_xml__write_xml_escaped_char_4_0_i5);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("&amp;", 5);
	MR_GOTO_LAB(term_to_xml__write_xml_escaped_char_4_0_i3);
MR_def_label(term_to_xml__write_xml_escaped_char_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,39)) {
		MR_GOTO_LAB(term_to_xml__write_xml_escaped_char_4_0_i6);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("&apos;", 6);
	MR_GOTO_LAB(term_to_xml__write_xml_escaped_char_4_0_i3);
MR_def_label(term_to_xml__write_xml_escaped_char_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,60)) {
		MR_GOTO_LAB(term_to_xml__write_xml_escaped_char_4_0_i7);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("&lt;", 4);
	MR_GOTO_LAB(term_to_xml__write_xml_escaped_char_4_0_i3);
MR_def_label(term_to_xml__write_xml_escaped_char_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,62)) {
		MR_GOTO_LAB(term_to_xml__write_xml_escaped_char_4_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("&gt;", 4);
	}
MR_def_label(term_to_xml__write_xml_escaped_char_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_escaped_char_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(term_to_xml__write_xml_escaped_char_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_char_list_2_1,
		term_to_xml__write_xml_escaped_char_4_0_i10);
MR_def_label(term_to_xml__write_xml_escaped_char_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_xml_escaped_char_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module83)
	MR_init_entry1(term_to_xml__write_attribute_source_kind_5_0);
	MR_init_label8(term_to_xml__write_attribute_source_kind_5_0,3,41,7,12,43,16,19,28)
	MR_init_label3(term_to_xml__write_attribute_source_kind_5_0,45,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_attribute_source_kind_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(term_to_xml__write_attribute_source_kind_5_0_i3) MR_AND
		MR_LABEL_AP(term_to_xml__write_attribute_source_kind_5_0_i28) MR_AND
		MR_LABEL_AP(term_to_xml__write_attribute_source_kind_5_0_i12) MR_AND
		MR_LABEL_AP(term_to_xml__write_attribute_source_kind_5_0_i19));
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_attribute_source_kind_5_0_i41);
	}
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("#IMPLIED", 8);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_source_kind_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("#FIXED \"", 8);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_source_kind_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_attribute_source_kind_5_0_i7);
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(term_to_xml__write_xml_escaped_string_4_0,
		term_to_xml__write_attribute_source_kind_5_0_i24);
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_attribute_source_kind_5_0_i43);
	}
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("#REQUIRED", 9);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_source_kind_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("#FIXED \"", 8);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_source_kind_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_attribute_source_kind_5_0_i16);
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(term_to_xml__write_xml_escaped_string_4_0,
		term_to_xml__write_attribute_source_kind_5_0_i24);
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_attribute_source_kind_5_0_i45);
	}
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("#IMPLIED", 8);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_source_kind_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("#FIXED \"", 8);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_source_kind_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_attribute_source_kind_5_0_i23);
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(term_to_xml__write_xml_escaped_string_4_0,
		term_to_xml__write_attribute_source_kind_5_0_i24);
MR_def_label(term_to_xml__write_attribute_source_kind_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_attribute_source_kind_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module84)
	MR_init_entry1(term_to_xml__write_dtd_attlist_8_0);
	MR_init_label8(term_to_xml__write_dtd_attlist_8_0,3,5,7,18,9,10,2,11)
	MR_init_label5(term_to_xml__write_dtd_attlist_8_0,12,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__write_dtd_attlist_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r9 = MR_ctfield(0, MR_r7, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r9,
		MR_LABEL_AP(term_to_xml__write_dtd_attlist_8_0_i3) MR_AND
		MR_LABEL_AP(term_to_xml__write_dtd_attlist_8_0_i18) MR_AND
		MR_LABEL_AP(term_to_xml__write_dtd_attlist_8_0_i5) MR_AND
		MR_LABEL_AP(term_to_xml__write_dtd_attlist_8_0_i7));
MR_def_label(term_to_xml__write_dtd_attlist_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_r7, 0);
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r4;
	MR_r5 = MR_r8;
	MR_r4 = (MR_Word) MR_string_const("<!ATTLIST ", 10);
	MR_GOTO_LAB(term_to_xml__write_dtd_attlist_8_0_i2);
MR_def_label(term_to_xml__write_dtd_attlist_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r7, 0);
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		term_to_xml__write_dtd_attlist_8_0_i10);
MR_def_label(term_to_xml__write_dtd_attlist_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(term_to_xml__write_dtd_attlist_8_0_i9);
	}
MR_def_label(term_to_xml__write_dtd_attlist_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_r7, 0);
	MR_sv(4) = MR_r9;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r8;
	MR_r4 = (MR_Word) MR_string_const("<!ATTLIST ", 10);
	MR_GOTO_LAB(term_to_xml__write_dtd_attlist_8_0_i2);
MR_def_label(term_to_xml__write_dtd_attlist_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r7, 0);
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r5, 0);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		term_to_xml__write_dtd_attlist_8_0_i10);
MR_def_label(term_to_xml__write_dtd_attlist_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("<!ATTLIST ", 10);
	MR_r1 = MR_sv(6);
	}
MR_def_label(term_to_xml__write_dtd_attlist_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_attlist_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_attlist_8_0_i11);
MR_def_label(term_to_xml__write_dtd_attlist_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_attlist_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_attlist_8_0_i12);
MR_def_label(term_to_xml__write_dtd_attlist_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_attlist_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_attlist_8_0_i13);
MR_def_label(term_to_xml__write_dtd_attlist_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_attlist_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_attlist_8_0_i14);
MR_def_label(term_to_xml__write_dtd_attlist_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(" CDATA ", 7);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_attlist_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_to_xml__write_dtd_attlist_8_0_i15);
MR_def_label(term_to_xml__write_dtd_attlist_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(term_to_xml__write_attribute_source_kind_5_0,
		term_to_xml__write_dtd_attlist_8_0_i16);
MR_def_label(term_to_xml__write_dtd_attlist_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(">\n", 2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__write_dtd_attlist_8_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);

MR_BEGIN_MODULE(term_to_xml_module85)
	MR_init_entry1(fn__term_to_xml__dtd_allowed_functors_regex_2_0);
	MR_init_label4(fn__term_to_xml__dtd_allowed_functors_regex_2_0,2,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__dtd_allowed_functors_regex_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(term_to_xml__get_elements_and_args_7_0,
		fn__term_to_xml__dtd_allowed_functors_regex_2_0_i2);
MR_def_label(fn__term_to_xml__dtd_allowed_functors_regex_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Sep;
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__term_to_xml__dtd_allowed_functors_regex_2_0
	Sep = (MR_String) (MR_Word) MR_string_const("|", 1);
	Strs = MR_r1;
{
#line 738 "string.opt"
{
    MR_Word list;
    MR_Word tmp;
    size_t  len;
    size_t  sep_len;
    MR_bool add_sep;

    list = Strs;
    len = 0;
    sep_len = strlen(Sep);

    /* Determine the total length of all strings */
    len = 0;
    add_sep = MR_FALSE;
    while (!MR_list_is_empty(list)) {
        if (add_sep) {
            len += sep_len;
        }

        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
        add_sep = MR_TRUE;
    }

    MR_allocate_aligned_string_msg(Str, len, MR_PROC_LABEL);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    add_sep = MR_FALSE;
    while (!MR_list_is_empty(list)) {
        if (add_sep) {
            strcpy((MR_String) Str + len, Sep);
            len += sep_len;
        }

        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
        add_sep = MR_TRUE;
    }

    Str[len] = '\0';
};}
#line 12424 "term_to_xml.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__term_to_xml__dtd_allowed_functors_regex_2_0_i4);
MR_def_label(fn__term_to_xml__dtd_allowed_functors_regex_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,1)) {
		MR_GOTO_LAB(fn__term_to_xml__dtd_allowed_functors_regex_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(string__append_3_2,
		fn__term_to_xml__dtd_allowed_functors_regex_2_0_i5);
MR_def_label(fn__term_to_xml__dtd_allowed_functors_regex_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(fn__term_to_xml__dtd_allowed_functors_regex_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module86)
	MR_init_entry1(__Unify___term_to_xml__attr_0_0);
	MR_init_label2(__Unify___term_to_xml__attr_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__attr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__attr_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__attr_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_tempr3) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__attr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term_to_xml__attr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module87)
	MR_init_entry1(__Compare___term_to_xml__attr_0_0);
	MR_init_label7(__Compare___term_to_xml__attr_0_0,6,7,10,13,25,14,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__attr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_0_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__attr_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 12548 "term_to_xml.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___term_to_xml__attr_0_0_i10);
	}
MR_def_label(__Compare___term_to_xml__attr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___term_to_xml__attr_0_0_i10);
MR_def_label(__Compare___term_to_xml__attr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___term_to_xml__attr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_0_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__attr_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 12595 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___term_to_xml__attr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_0_0_i14);
	}
MR_def_label(__Compare___term_to_xml__attr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__attr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___term_to_xml__attr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module88)
	MR_init_entry1(__Unify___term_to_xml__attr_from_source_0_0);
	MR_init_label2(__Unify___term_to_xml__attr_from_source_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__attr_from_source_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__attr_from_source_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__attr_from_source_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__attr_from_source_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term_to_xml__attr_from_source_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module89)
	MR_init_entry1(__Compare___term_to_xml__attr_from_source_0_0);
	MR_init_label7(__Compare___term_to_xml__attr_from_source_0_0,6,7,10,13,24,14,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__attr_from_source_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_from_source_0_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__attr_from_source_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 12716 "term_to_xml.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_from_source_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___term_to_xml__attr_from_source_0_0_i10);
	}
MR_def_label(__Compare___term_to_xml__attr_from_source_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_from_source_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___term_to_xml__attr_from_source_0_0_i10);
MR_def_label(__Compare___term_to_xml__attr_from_source_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___term_to_xml__attr_from_source_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_from_source_0_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_from_source_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___term_to_xml__attr_from_source_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r4)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_from_source_0_0_i14);
	}
MR_def_label(__Compare___term_to_xml__attr_from_source_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__attr_from_source_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___term_to_xml__attr_from_source_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module90)
	MR_init_entry1(__Unify___term_to_xml__attr_source_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__attr_source_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module91)
	MR_init_entry1(__Compare___term_to_xml__attr_source_0_0);
	MR_init_label2(__Compare___term_to_xml__attr_source_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__attr_source_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_source_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___term_to_xml__attr_source_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___term_to_xml__attr_source_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___term_to_xml__attr_source_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module92)
	MR_init_entry1(__Unify___term_to_xml__doctype_0_0);
	MR_init_label4(__Unify___term_to_xml__doctype_0_0,8,6,21,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__doctype_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__doctype_0_0_i21);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___term_to_xml__doctype_0_0_i6);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___term_to_xml__doctype_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__doctype_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (strcmp((char *)MR_tempr3, (char *)MR_r1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__doctype_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__doctype_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__doctype_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___term_to_xml__doctype_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__doctype_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = MR_ctfield(1, MR_tempr4, 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__doctype_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term_to_xml__doctype_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module93)
	MR_init_entry1(__Compare___term_to_xml__doctype_0_0);
	MR_init_label8(__Compare___term_to_xml__doctype_0_0,40,26,30,31,74,6,58,9)
	MR_init_label6(__Compare___term_to_xml__doctype_0_0,12,13,16,62,19,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__doctype_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i74);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i6);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i26);
	}
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i62);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i62);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__doctype_0_0
	S1 = (MR_String) MR_tempr3;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 12978 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___term_to_xml__doctype_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i58);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__doctype_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i58);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i30);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___term_to_xml__doctype_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__doctype_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 13031 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___term_to_xml__doctype_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i58);
	}
MR_def_label(__Compare___term_to_xml__doctype_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__doctype_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i62);
	}
	}
MR_def_label(__Compare___term_to_xml__doctype_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__doctype_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__doctype_0_0
	S1 = (MR_String) MR_r6;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 13092 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i12);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i16);
	}
MR_def_label(__Compare___term_to_xml__doctype_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i13);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i16);
MR_def_label(__Compare___term_to_xml__doctype_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r4;
MR_def_label(__Compare___term_to_xml__doctype_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__doctype_0_0
	S1 = (MR_String) MR_tempr2;
	S2 = (MR_String) MR_tempr1;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 13139 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i19);
	}
	}
MR_def_label(__Compare___term_to_xml__doctype_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__doctype_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__doctype_0_0_i58);
	}
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___term_to_xml__doctype_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___type_desc__pseudo_type_desc_0_0);

MR_BEGIN_MODULE(term_to_xml_module94)
	MR_init_entry1(__Unify___term_to_xml__dtd_generation_result_0_0);
	MR_init_label6(__Unify___term_to_xml__dtd_generation_result_0_0,6,8,12,16,31,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__dtd_generation_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__dtd_generation_result_0_0_i31);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r4 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Unify___term_to_xml__dtd_generation_result_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___term_to_xml__dtd_generation_result_0_0_i8) MR_AND
		MR_LABEL_AP(__Unify___term_to_xml__dtd_generation_result_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___term_to_xml__dtd_generation_result_0_0_i16));
MR_def_label(__Unify___term_to_xml__dtd_generation_result_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r4);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___term_to_xml__dtd_generation_result_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___term_to_xml__dtd_generation_result_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__dtd_generation_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = MR_ctfield(1, MR_tempr3, 1);
	MR_r3 = MR_ctfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___term_to_xml__dtd_generation_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__dtd_generation_result_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_r4, 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___type_desc__type_desc_0_0);
MR_def_label(__Unify___term_to_xml__dtd_generation_result_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___term_to_xml__dtd_generation_result_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r4, 0);
	MR_r2 = MR_ctfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___type_desc__pseudo_type_desc_0_0);
MR_def_label(__Unify___term_to_xml__dtd_generation_result_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term_to_xml__dtd_generation_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___type_desc__type_desc_0_0);
MR_decl_entry(__Compare___type_desc__pseudo_type_desc_0_0);

MR_BEGIN_MODULE(term_to_xml_module95)
	MR_init_entry1(__Compare___term_to_xml__dtd_generation_result_0_0);
	MR_init_label8(__Compare___term_to_xml__dtd_generation_result_0_0,6,62,7,22,25,106,27,30)
	MR_init_label7(__Compare___term_to_xml__dtd_generation_result_0_0,31,34,41,47,49,50,59)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__dtd_generation_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i62);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i50));
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i7);
	}
	MR_r2 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i49);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i49);
	}
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i49);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i25) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i49));
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i106);
	}
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r3;
	MR_r5 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__dtd_generation_result_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 13348 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i30);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i34);
	}
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i31);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i34);
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r4;
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i106) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i106) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i47) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__dtd_generation_result_0_0_i49));
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___type_desc__type_desc_0_0);
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(__Compare___term_to_xml__dtd_generation_result_0_0_i106);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 0);
	MR_r2 = MR_ctfield(3, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___type_desc__pseudo_type_desc_0_0);
MR_def_label(__Compare___term_to_xml__dtd_generation_result_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module96)
	MR_init_entry1(__Unify___term_to_xml__element_mapping_0_0);
	MR_init_label3(__Unify___term_to_xml__element_mapping_0_0,6,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__element_mapping_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__element_mapping_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___term_to_xml__element_mapping_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__element_mapping_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___term_to_xml__element_mapping_0_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
MR_def_label(__Unify___term_to_xml__element_mapping_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term_to_xml__element_mapping_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module97)
	MR_init_entry1(__Compare___term_to_xml__element_mapping_0_0);
	MR_init_label5(__Compare___term_to_xml__element_mapping_0_0,26,7,14,6,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__element_mapping_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term_to_xml__element_mapping_0_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___term_to_xml__element_mapping_0_0_i6);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__element_mapping_0_0_i7);
	}
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___term_to_xml__element_mapping_0_0_i14);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__element_mapping_0_0_i14);
	}
	}
MR_def_label(__Compare___term_to_xml__element_mapping_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___term_to_xml__element_mapping_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___term_to_xml__element_mapping_0_0_i14);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__element_mapping_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___term_to_xml__element_mapping_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___term_to_xml__element_mapping_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___term_to_xml__element_mapping_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___term_to_xml__element_mapping_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module98)
	MR_init_entry1(__Unify___term_to_xml__element_pred_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__element_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module99)
	MR_init_entry1(__Compare___term_to_xml__element_pred_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__element_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module100)
	MR_init_entry1(__Unify___term_to_xml__maybe_dtd_0_0);
	MR_init_label3(__Unify___term_to_xml__maybe_dtd_0_0,6,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__maybe_dtd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_dtd_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_dtd_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__maybe_dtd_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_dtd_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term_to_xml__doctype_0_0);
MR_def_label(__Unify___term_to_xml__maybe_dtd_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term_to_xml__maybe_dtd_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module101)
	MR_init_entry1(__Compare___term_to_xml__maybe_dtd_0_0);
	MR_init_label6(__Compare___term_to_xml__maybe_dtd_0_0,26,7,6,30,19,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__maybe_dtd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_dtd_0_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_dtd_0_0_i6);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_dtd_0_0_i7);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr3);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_dtd_0_0_i19);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr3),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_dtd_0_0_i19);
	}
	}
MR_def_label(__Compare___term_to_xml__maybe_dtd_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___term_to_xml__maybe_dtd_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_dtd_0_0_i30);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_dtd_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___term_to_xml__maybe_dtd_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_dtd_0_0_i18);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_dtd_0_0_i19);
	}
	}
MR_def_label(__Compare___term_to_xml__maybe_dtd_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___term_to_xml__maybe_dtd_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___term_to_xml__maybe_dtd_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term_to_xml__doctype_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module102)
	MR_init_entry1(__Unify___term_to_xml__maybe_format_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__maybe_format_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module103)
	MR_init_entry1(__Compare___term_to_xml__maybe_format_0_0);
	MR_init_label2(__Compare___term_to_xml__maybe_format_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__maybe_format_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_format_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_format_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_format_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_format_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module104)
	MR_init_entry1(__Unify___term_to_xml__maybe_functor_info_0_0);
	MR_init_label3(__Unify___term_to_xml__maybe_functor_info_0_0,10,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__maybe_functor_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_functor_info_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_functor_info_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__maybe_functor_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term_to_xml__maybe_functor_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_functor_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr1) != 0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_functor_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__maybe_functor_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module105)
	MR_init_entry1(__Compare___term_to_xml__maybe_functor_info_0_0);
	MR_init_label8(__Compare___term_to_xml__maybe_functor_info_0_0,7,5,9,12,13,16,19,33)
	MR_init_label2(__Compare___term_to_xml__maybe_functor_info_0_0,20,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__maybe_functor_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_functor_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_functor_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_functor_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__maybe_functor_info_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 13929 "term_to_xml.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i12);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i16);
	}
MR_def_label(__Compare___term_to_xml__maybe_functor_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i13);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i16);
MR_def_label(__Compare___term_to_xml__maybe_functor_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r2;
MR_def_label(__Compare___term_to_xml__maybe_functor_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i24);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_functor_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_functor_info_0_0_i20);
	}
MR_def_label(__Compare___term_to_xml__maybe_functor_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_functor_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___term_to_xml__maybe_functor_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module106)
	MR_init_entry1(__Unify___term_to_xml__maybe_stylesheet_0_0);
	MR_init_label3(__Unify___term_to_xml__maybe_stylesheet_0_0,10,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__maybe_stylesheet_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_stylesheet_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_stylesheet_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__maybe_stylesheet_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term_to_xml__maybe_stylesheet_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_stylesheet_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr1) != 0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__maybe_stylesheet_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term_to_xml__maybe_stylesheet_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module107)
	MR_init_entry1(__Compare___term_to_xml__maybe_stylesheet_0_0);
	MR_init_label8(__Compare___term_to_xml__maybe_stylesheet_0_0,7,5,9,12,13,16,19,34)
	MR_init_label2(__Compare___term_to_xml__maybe_stylesheet_0_0,20,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__maybe_stylesheet_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i34);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_stylesheet_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_stylesheet_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_stylesheet_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__maybe_stylesheet_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 14118 "term_to_xml.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i12);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i16);
	}
MR_def_label(__Compare___term_to_xml__maybe_stylesheet_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i13);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i16);
MR_def_label(__Compare___term_to_xml__maybe_stylesheet_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r2;
MR_def_label(__Compare___term_to_xml__maybe_stylesheet_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__maybe_stylesheet_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 14165 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___term_to_xml__maybe_stylesheet_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__maybe_stylesheet_0_0_i20);
	}
MR_def_label(__Compare___term_to_xml__maybe_stylesheet_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term_to_xml__maybe_stylesheet_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___term_to_xml__maybe_stylesheet_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module108)
	MR_init_entry1(__Unify___term_to_xml__xml_0_0);
	MR_init_label8(__Unify___term_to_xml__xml_0_0,6,8,12,14,16,17,19,39)
	MR_init_label1(__Unify___term_to_xml__xml_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_to_xml__xml_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i39);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___term_to_xml__xml_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___term_to_xml__xml_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___term_to_xml__xml_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___term_to_xml__xml_0_0_i16));
MR_def_label(__Unify___term_to_xml__xml_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr1 = MR_tempr4;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term_to_xml, attr);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___term_to_xml__xml_0_0_i8);
MR_def_label(__Unify___term_to_xml__xml_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term_to_xml, xml);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___term_to_xml__xml_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___term_to_xml__xml_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___term_to_xml__xml_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___term_to_xml__xml_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i19);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___term_to_xml__xml_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___term_to_xml__xml_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___term_to_xml__xml_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term_to_xml__xml_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module109)
	MR_init_entry1(__Compare___term_to_xml__xml_0_0);
	MR_init_label8(__Compare___term_to_xml__xml_0_0,6,9,12,13,16,20,28,29)
	MR_init_label8(__Compare___term_to_xml__xml_0_0,31,35,36,42,43,45,50,51)
	MR_init_label8(__Compare___term_to_xml__xml_0_0,56,57,59,68,67,60,81,83)
	MR_init_label8(__Compare___term_to_xml__xml_0_0,157,74,94,128,95,129,96,101)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_to_xml__xml_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i157);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i31) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i59));
MR_def_label(__Compare___term_to_xml__xml_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i129) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i129) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i28));
MR_def_label(__Compare___term_to_xml__xml_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_r3;
	MR_r4 = MR_ctfield(0, MR_tempr2, 2);
	MR_r5 = MR_ctfield(0, MR_tempr2, 1);
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__xml_0_0
	S1 = (MR_String) MR_r6;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 14401 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i12);
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i16);
	}
MR_def_label(__Compare___term_to_xml__xml_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i13);
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i16);
MR_def_label(__Compare___term_to_xml__xml_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___term_to_xml__xml_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i101);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term_to_xml, attr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___term_to_xml__xml_0_0_i20);
MR_def_label(__Compare___term_to_xml__xml_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term_to_xml, xml);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___term_to_xml__xml_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i29);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i129);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i128) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i129) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i42));
MR_def_label(__Compare___term_to_xml__xml_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__xml_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 14494 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___term_to_xml__xml_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i128);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i129);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i128) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i128) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___term_to_xml__xml_0_0_i56));
MR_def_label(__Compare___term_to_xml__xml_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__xml_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 14552 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i51);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___term_to_xml__xml_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i128);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i129);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_r3 = MR_ctfield(3, MR_tempr3, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i60);
	}
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i128);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i67);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__xml_0_0
	S1 = (MR_String) MR_tempr2;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 14615 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i68);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___term_to_xml__xml_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i128);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i129);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i74);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i128);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i81);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___term_to_xml__xml_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i129);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__xml_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 14679 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i83);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___term_to_xml__xml_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i128);
	}
MR_def_label(__Compare___term_to_xml__xml_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i128);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i94);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___term_to_xml__xml_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i95);
	}
MR_def_label(__Compare___term_to_xml__xml_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_to_xml__xml_0_0
	S1 = (MR_String) MR_tempr1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 14741 "term_to_xml.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i96);
	}
	}
MR_def_label(__Compare___term_to_xml__xml_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term_to_xml__xml_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_to_xml__xml_0_0_i128);
	}
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___term_to_xml__xml_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module110)
	MR_init_entry1(__Unify___term_to_xml__list__list_1_1);
	MR_init_label1(__Unify___term_to_xml__list__list_1_1,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___term_to_xml__list__list_1_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(__Unify___term_to_xml__list__list_1_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___term_to_xml__list__list_1_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module111)
	MR_init_entry1(fn__term_to_xml__IntroducedFrom__func__get_elements_and_args__905__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__IntroducedFrom__func__get_elements_and_args__905__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module112)
	MR_init_entry1(fn__term_to_xml__IntroducedFrom__func__get_elements_and_args__906__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__IntroducedFrom__func__get_elements_and_args__906__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module113)
	MR_init_entry1(term_to_xml__IntroducedFrom__pred__get_elements_and_args__911__1_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__IntroducedFrom__pred__get_elements_and_args__911__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_to_xml__IntroducedFrom__pred__get_elements_and_args__911__1_5_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module114)
	MR_init_entry1(term_to_xml__list__filter_map__ho15_3_0);
	MR_init_label4(term_to_xml__list__filter_map__ho15_3_0,7,8,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__list__filter_map__ho15_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(term_to_xml__list__filter_map__ho15_3_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(term_to_xml__list__filter_map__ho15_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(term_to_xml__list__filter_map__ho15_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(term_to_xml__list__filter_map__ho15_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(1), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(term_to_xml__list__filter_map__ho15_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(term_to_xml__list__filter_map__ho15_3_0_i8);
	}
	MR_proceed();
MR_def_label(term_to_xml__list__filter_map__ho15_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(term_to_xml_module115)
	MR_init_entry1(fn__term_to_xml__list__map_corresponding__ho21_3_0);
	MR_init_label3(fn__term_to_xml__list__map_corresponding__ho21_3_0,3,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__list__map_corresponding__ho21_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__list__map_corresponding__ho21_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__list__map_corresponding__ho21_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__term_to_xml__list__map_corresponding__ho21_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__term_to_xml__list__map_corresponding__ho21_3_0_i8);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(fn__term_to_xml__list__map_corresponding__ho21_3_0,
		fn__term_to_xml__list__map_corresponding__ho21_3_0_i9);
MR_def_label(fn__term_to_xml__list__map_corresponding__ho21_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__term_to_xml__list__map_corresponding__ho21_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,13);
	MR_r2 = (MR_Word) MR_string_const("list.map_corresponding/3: mismatched list arguments", 51);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module116)
	MR_init_entry1(fn__term_to_xml__list__map__ho24_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__list__map__ho24_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term_to_xml__list__map__ho31_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module117)
	MR_init_entry1(fn__term_to_xml__list__map__ho25_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__list__map__ho25_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term_to_xml__list__map__ho30_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module118)
	MR_init_entry1(fn__term_to_xml__list__map__ho27_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__list__map__ho27_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term_to_xml__list__map__ho28_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__ground_pseudo_type_desc_to_type_desc_det_1_0);

MR_BEGIN_MODULE(term_to_xml_module119)
	MR_init_entry1(term_to_xml__list__map__ho28_3_0);
	MR_init_label3(term_to_xml__list__map__ho28_3_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__list__map__ho28_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(term_to_xml__list__map__ho28_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term_to_xml__list__map__ho28_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__type_desc__ground_pseudo_type_desc_to_type_desc_det_1_0,
		term_to_xml__list__map__ho28_3_0_i4);
MR_def_label(term_to_xml__list__map__ho28_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(term_to_xml__list__map__ho28_3_0,
		term_to_xml__list__map__ho28_3_0_i5);
MR_def_label(term_to_xml__list__map__ho28_3_0,5)
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


MR_BEGIN_MODULE(term_to_xml_module120)
	MR_init_entry1(term_to_xml__list__map__ho30_3_0);
	MR_init_label3(term_to_xml__list__map__ho30_3_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__list__map__ho30_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(term_to_xml__list__map__ho30_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term_to_xml__list__map__ho30_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__term_to_xml__IntroducedFrom__func__get_elements_and_args__905__1_1_0,
		term_to_xml__list__map__ho30_3_0_i4);
MR_def_label(term_to_xml__list__map__ho30_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(term_to_xml__list__map__ho30_3_0,
		term_to_xml__list__map__ho30_3_0_i5);
MR_def_label(term_to_xml__list__map__ho30_3_0,5)
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


MR_BEGIN_MODULE(term_to_xml_module121)
	MR_init_entry1(term_to_xml__list__map__ho31_3_0);
	MR_init_label3(term_to_xml__list__map__ho31_3_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__list__map__ho31_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(term_to_xml__list__map__ho31_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term_to_xml__list__map__ho31_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__term_to_xml__IntroducedFrom__func__get_elements_and_args__906__1_1_0,
		term_to_xml__list__map__ho31_3_0_i4);
MR_def_label(term_to_xml__list__map__ho31_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(term_to_xml__list__map__ho31_3_0,
		term_to_xml__list__map__ho31_3_0_i5);
MR_def_label(term_to_xml__list__map__ho31_3_0,5)
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


MR_BEGIN_MODULE(term_to_xml_module122)
	MR_init_entry1(term_to_xml__list__map__ho35_3_0);
	MR_init_label3(term_to_xml__list__map__ho35_3_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__list__map__ho35_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(term_to_xml__list__map__ho35_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term_to_xml__list__map__ho35_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(term_to_xml__IntroducedFrom__pred__map__214__1__ho44_5_0,
		term_to_xml__list__map__ho35_3_0_i4);
MR_def_label(term_to_xml__list__map__ho35_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(term_to_xml__list__map__ho35_3_0,
		term_to_xml__list__map__ho35_3_0_i5);
MR_def_label(term_to_xml__list__map__ho35_3_0,5)
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


MR_BEGIN_MODULE(term_to_xml_module123)
	MR_init_entry1(term_to_xml__list__map__ho37_3_0);
	MR_init_label3(term_to_xml__list__map__ho37_3_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__list__map__ho37_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(term_to_xml__list__map__ho37_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term_to_xml__list__map__ho37_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(term_to_xml__IntroducedFrom__pred__map__214__1__ho42_5_0,
		term_to_xml__list__map__ho37_3_0_i4);
MR_def_label(term_to_xml__list__map__ho37_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(term_to_xml__list__map__ho37_3_0,
		term_to_xml__list__map__ho37_3_0_i5);
MR_def_label(term_to_xml__list__map__ho37_3_0,5)
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

MR_decl_entry(char__is_alpha_1_0);

MR_BEGIN_MODULE(term_to_xml_module124)
	MR_init_entry1(term_to_xml__string__all_match_2__ho40_3_0);
	MR_init_label4(term_to_xml__string__all_match_2__ho40_3_0,17,3,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__string__all_match_2__ho40_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(term_to_xml__string__all_match_2__ho40_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(term_to_xml__string__all_match_2__ho40_3_0_i7);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__term_to_xml__string__all_match_2__ho40_3_0
	Str = (MR_String) MR_r2;
	Index = MR_r1;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 15327 "term_to_xml.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		term_to_xml__string__all_match_2__ho40_3_0_i3);
MR_def_label(term_to_xml__string__all_match_2__ho40_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_to_xml__string__all_match_2__ho40_3_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(term_to_xml__string__all_match_2__ho40_3_0_i17);
MR_def_label(term_to_xml__string__all_match_2__ho40_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(term_to_xml__string__all_match_2__ho40_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module125)
	MR_init_entry1(term_to_xml__IntroducedFrom__pred__map__214__1__ho42_5_0);
	MR_init_label1(term_to_xml__IntroducedFrom__pred__map__214__1__ho42_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__IntroducedFrom__pred__map__214__1__ho42_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	{
	MR_String	S;
#define	MR_PROC_LABEL	mercury__term_to_xml__IntroducedFrom__pred__map__214__1__ho42_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	S = (MR_String) MR_r1;
{
#line 330 "construct.opt"

    SUCCESS_INDICATOR = (S == NULL);
;}
#line 15385 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_to_xml__IntroducedFrom__pred__map__214__1__ho42_5_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp(1);
	MR_proceed();
MR_def_label(term_to_xml__IntroducedFrom__pred__map__214__1__ho42_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module126)
	MR_init_entry1(term_to_xml__IntroducedFrom__pred__map__214__1__ho44_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__IntroducedFrom__pred__map__214__1__ho44_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__term_to_xml__IntroducedFrom__func__write_dtd_type_elements__1617__1__ho51_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module127)
	MR_init_entry1(term_to_xml__string__foldl_substring_2__ho49_6_0);
	MR_init_label3(term_to_xml__string__foldl_substring_2__ho49_6_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_to_xml__string__foldl_substring_2__ho49_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(term_to_xml__string__foldl_substring_2__ho49_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(term_to_xml__string__foldl_substring_2__ho49_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__term_to_xml__string__foldl_substring_2__ho49_6_0
	Str = (MR_String) MR_r1;
	Index = MR_r2;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 15461 "term_to_xml.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(term_to_xml__mangle_char_3_0,
		term_to_xml__string__foldl_substring_2__ho49_6_0_i3);
MR_def_label(term_to_xml__string__foldl_substring_2__ho49_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(term_to_xml__string__foldl_substring_2__ho49_6_0_i11);
MR_def_label(term_to_xml__string__foldl_substring_2__ho49_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module128)
	MR_init_entry1(fn__term_to_xml__IntroducedFrom__func__write_dtd_type_elements__1617__1__ho51_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__term_to_xml__IntroducedFrom__func__write_dtd_type_elements__1617__1__ho51_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term_to_xml__list__map__ho28_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module129)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_0);
	MR_init_label1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_0_i2);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module130)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_1);
	MR_init_label1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_1_i2);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module131)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_2);
	MR_init_label1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_2,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_2_i2);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(term_to_xml_module132)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_init_label1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 15610 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order comparison", 33);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module133)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 15650 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order unification", 34);
	MR_np_call_localret_ent(require__error_1_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i10);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 15673 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module134)
	MR_init_entry1(fn__f_116_101_114_109_95_116_111_95_120_109_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_101_114_109_95_116_111_95_120_109_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module135)
	MR_init_entry1(fn__f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module136)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(8);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r7, 1);
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r7 = MR_ctfield(1, MR_r7, 0);
	MR_np_call_localret_ent(term_to_xml__write_dtd_attlist_8_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0_i4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_55_44_32_56_93_95_48_4_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module137)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r3, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(term_to_xml__write_attribute_4_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0_i4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_51_44_32_52_93_95_48_4_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module138)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(6);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(3);
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_2,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0_i4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module139)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(6);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_1,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0_i4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module140)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(6);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_element_univ_9_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0_i4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_53_44_32_54_93_95_48_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module141)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r5, 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r5 = MR_ctfield(1, MR_r5, 0);
	MR_np_call_localret_ent(term_to_xml__write_xml_element_format_6_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_48_95_95_91_53_44_32_54_93_95_48_4_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module142)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0,31,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0_i31);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeDesc;
	MR_Integer	FunctorNumber;
	MR_String	FunctorName;
	MR_Integer	Arity;
	MR_Word	PseudoTypeInfoList;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeDesc = MR_r1;
	FunctorNumber = MR_r3;
{
#line 206 "construct.opt"
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    int                 arity;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

        /*
        ** If type_info is an equivalence type, expand it.
        */
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

        /*
        ** Get information for this functor number and store in construct_info.
        ** If this is a discriminated union type and if the functor number
        ** is in range, we succeed.
        */
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info,
        &construct_info);
    MR_restore_transient_registers();

        /*
        ** Get the functor name and arity, construct the list
        ** of type_infos for arguments.
        */

    if (success) {
        MR_make_aligned_string(FunctorName, construct_info.functor_name);
        arity = construct_info.arity;
        Arity = arity;

        if (MR_TYPE_CTOR_INFO_IS_TUPLE(
            MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info)))
        {
            MR_save_transient_registers();
            PseudoTypeInfoList = MR_type_params_vector_to_list(Arity,
                MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info));
            MR_restore_transient_registers();
        } else {
            MR_save_transient_registers();
            PseudoTypeInfoList =
                MR_pseudo_type_info_vector_to_pseudo_type_info_list(arity,
                    MR_TYPEINFO_GET_FIXED_ARITY_ARG_VECTOR(type_info),
                    construct_info.arg_pseudo_type_infos);
            MR_restore_transient_registers();
        }
    }
    SUCCESS_INDICATOR = success;
};}
#line 16144 "term_to_xml.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0_i1);
	MR_tempr1 = (MR_Word) FunctorName;
	MR_tempr2 = Arity;
	MR_tempr3 = PseudoTypeInfoList;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0_i6);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_50_95_95_91_50_93_95_48_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module143)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r3, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(term_to_xml__IntroducedFrom__pred__get_elements_and_args__911__1_5_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0_i4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_localcall_lab(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0_i5);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_51_95_95_91_51_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module144)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r5, 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r5 = MR_ctfield(1, MR_r5, 0);
	MR_np_call_localret_ent(fn__term_to_xml__attr_from_source_to_maybe_attr_5_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0_i4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0_i5);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_50_95_95_91_49_44_32_54_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module145)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0);
	MR_init_label4(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0,20,4,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(tree234__search_3_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0_i6);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_to_xml_module146)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__term_to_xml__dtd_allowed_functors_regex_2_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0_i4);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0_i5);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_51_93_95_48_3_0,5)
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


MR_BEGIN_MODULE(term_to_xml_module147)
	MR_init_entry1(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0);
	MR_init_label3(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0
	Str = (MR_String) MR_r3;
	Index = MR_r4;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 16458 "term_to_xml.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	}
	MR_np_call_localret_ent(term_to_xml__write_xml_escaped_char_4_0,
		f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0_i3);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0_i11);
MR_def_label(f_116_101_114_109_95_116_111_95_120_109_108_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_52_53_95_95_91_51_44_32_52_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__term_to_xml_maybe_bunch_0(void)
{
	term_to_xml_module0();
	term_to_xml_module1();
	term_to_xml_module2();
	term_to_xml_module3();
	term_to_xml_module4();
	term_to_xml_module5();
	term_to_xml_module6();
	term_to_xml_module7();
	term_to_xml_module8();
	term_to_xml_module9();
	term_to_xml_module10();
	term_to_xml_module11();
	term_to_xml_module12();
	term_to_xml_module13();
	term_to_xml_module14();
	term_to_xml_module15();
	term_to_xml_module16();
	term_to_xml_module17();
	term_to_xml_module18();
	term_to_xml_module19();
	term_to_xml_module20();
	term_to_xml_module21();
	term_to_xml_module22();
	term_to_xml_module23();
	term_to_xml_module24();
	term_to_xml_module25();
	term_to_xml_module26();
	term_to_xml_module27();
	term_to_xml_module28();
	term_to_xml_module29();
	term_to_xml_module30();
	term_to_xml_module31();
	term_to_xml_module32();
	term_to_xml_module33();
	term_to_xml_module34();
	term_to_xml_module35();
	term_to_xml_module36();
	term_to_xml_module37();
	term_to_xml_module38();
	term_to_xml_module39();
}

static void mercury__term_to_xml_maybe_bunch_1(void)
{
	term_to_xml_module40();
	term_to_xml_module41();
	term_to_xml_module42();
	term_to_xml_module43();
	term_to_xml_module44();
	term_to_xml_module45();
	term_to_xml_module46();
	term_to_xml_module47();
	term_to_xml_module48();
	term_to_xml_module49();
	term_to_xml_module50();
	term_to_xml_module51();
	term_to_xml_module52();
	term_to_xml_module53();
	term_to_xml_module54();
	term_to_xml_module55();
	term_to_xml_module56();
	term_to_xml_module57();
	term_to_xml_module58();
	term_to_xml_module59();
	term_to_xml_module60();
	term_to_xml_module61();
	term_to_xml_module62();
	term_to_xml_module63();
	term_to_xml_module64();
	term_to_xml_module65();
	term_to_xml_module66();
	term_to_xml_module67();
	term_to_xml_module68();
	term_to_xml_module69();
	term_to_xml_module70();
	term_to_xml_module71();
	term_to_xml_module72();
	term_to_xml_module73();
	term_to_xml_module74();
	term_to_xml_module75();
	term_to_xml_module76();
	term_to_xml_module77();
	term_to_xml_module78();
	term_to_xml_module79();
}

static void mercury__term_to_xml_maybe_bunch_2(void)
{
	term_to_xml_module80();
	term_to_xml_module81();
	term_to_xml_module82();
	term_to_xml_module83();
	term_to_xml_module84();
	term_to_xml_module85();
	term_to_xml_module86();
	term_to_xml_module87();
	term_to_xml_module88();
	term_to_xml_module89();
	term_to_xml_module90();
	term_to_xml_module91();
	term_to_xml_module92();
	term_to_xml_module93();
	term_to_xml_module94();
	term_to_xml_module95();
	term_to_xml_module96();
	term_to_xml_module97();
	term_to_xml_module98();
	term_to_xml_module99();
	term_to_xml_module100();
	term_to_xml_module101();
	term_to_xml_module102();
	term_to_xml_module103();
	term_to_xml_module104();
	term_to_xml_module105();
	term_to_xml_module106();
	term_to_xml_module107();
	term_to_xml_module108();
	term_to_xml_module109();
	term_to_xml_module110();
	term_to_xml_module111();
	term_to_xml_module112();
	term_to_xml_module113();
	term_to_xml_module114();
	term_to_xml_module115();
	term_to_xml_module116();
	term_to_xml_module117();
	term_to_xml_module118();
	term_to_xml_module119();
}

static void mercury__term_to_xml_maybe_bunch_3(void)
{
	term_to_xml_module120();
	term_to_xml_module121();
	term_to_xml_module122();
	term_to_xml_module123();
	term_to_xml_module124();
	term_to_xml_module125();
	term_to_xml_module126();
	term_to_xml_module127();
	term_to_xml_module128();
	term_to_xml_module129();
	term_to_xml_module130();
	term_to_xml_module131();
	term_to_xml_module132();
	term_to_xml_module133();
	term_to_xml_module134();
	term_to_xml_module135();
	term_to_xml_module136();
	term_to_xml_module137();
	term_to_xml_module138();
	term_to_xml_module139();
	term_to_xml_module140();
	term_to_xml_module141();
	term_to_xml_module142();
	term_to_xml_module143();
	term_to_xml_module144();
	term_to_xml_module145();
	term_to_xml_module146();
	term_to_xml_module147();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__term_to_xml__init(void);
void mercury__term_to_xml__init_type_tables(void);
void mercury__term_to_xml__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__term_to_xml__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__term_to_xml__init_complexity_procs(void);
#endif

void mercury__term_to_xml__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__term_to_xml_maybe_bunch_0();
	mercury__term_to_xml_maybe_bunch_1();
	mercury__term_to_xml_maybe_bunch_2();
	mercury__term_to_xml_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_xml_0,
		term_to_xml__xml_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_maybe_stylesheet_0,
		term_to_xml__maybe_stylesheet_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_maybe_functor_info_0,
		term_to_xml__maybe_functor_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_maybe_format_0,
		term_to_xml__maybe_format_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_maybe_dtd_0,
		term_to_xml__maybe_dtd_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_element_pred_0,
		term_to_xml__element_pred_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_element_mapping_0,
		term_to_xml__element_mapping_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_dtd_generation_result_0,
		term_to_xml__dtd_generation_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_doctype_0,
		term_to_xml__doctype_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_attr_source_0,
		term_to_xml__attr_source_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_attr_from_source_0,
		term_to_xml__attr_from_source_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_to_xml__type_ctor_info_attr_0,
		term_to_xml__attr_0_0);
	mercury__term_to_xml__init_debugger();
}

void mercury__term_to_xml__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_xml_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_maybe_stylesheet_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_maybe_functor_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_maybe_format_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_maybe_dtd_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_element_pred_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_element_mapping_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_dtd_generation_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_doctype_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_attr_source_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_attr_from_source_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_to_xml__type_ctor_info_attr_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_term_to_xml__type_class_decl_xmlable_1);
	}
}


void mercury__term_to_xml__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__term_to_xml__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__term_to_xml);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__term_to_xml__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
