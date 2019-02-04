/*
** Automatically generated from `html_format.m'
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
INIT mercury__html_format__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 284 "profile.int"
#include "profile.mh"

#line 28 "html_format.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 32 "html_format.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 36 "html_format.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 40 "html_format.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "html_format.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "html_format.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 52 "html_format.c"
#line 53 "html_format.c"
#include "html_format.mh"

#line 56 "html_format.c"
#line 57 "html_format.c"
#ifndef HTML_FORMAT_DECL_GUARD
#define HTML_FORMAT_DECL_GUARD

#line 61 "html_format.c"
#line 62 "html_format.c"

#endif
#line 65 "html_format.c"

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
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[14];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_html_format__type_ctor_info_column_class_map_0,
	mercury_data_html_format__type_ctor_info_format_info_0,
	mercury_data_html_format__type_ctor_info_html_0,
	mercury_data_html_format__type_ctor_info_style_control_0,
	mercury_data_html_format__type_ctor_info_style_control_map_0,
	mercury_data_html_format__type_ctor_info_style_element_0,
	mercury_data_html_format__type_ctor_info_style_element_map_0,
	mercury_data_html_format__type_ctor_info_table_header_rows_0;
MR_decl_label4(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0, 2,5,4,6)
MR_decl_label4(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0, 2,5,4,6)
MR_decl_label4(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0, 2,5,4,6)
MR_decl_label4(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0, 2,5,4,6)
MR_decl_label3(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0, 4,3,5)
MR_decl_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0, 12,3,4,5,6)
MR_decl_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0, 12,3,4,5,6)
MR_decl_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0, 12,3,4,5,6)
MR_decl_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0, 12,3,4,5,6)
MR_decl_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0, 12,3,4,5,6)
MR_decl_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0, 12,3,4,5,6)
MR_decl_label10(html_format__item_to_html_7_0, 118,3,7,5,11,12,13,14,15,16)
MR_decl_label10(html_format__item_to_html_7_0, 17,18,10,21,20,31,29,24,25,36)
MR_decl_label10(html_format__item_to_html_7_0, 23,40,39,43,44,42,46,45,48,49)
MR_decl_label1(html_format__item_to_html_7_0, 50)
MR_decl_label10(html_format__list_to_html_7_0, 3,6,7,8,9,10,29,12,2,17)
MR_decl_label10(html_format__list_to_html_7_0, 16,19,18,20,21,22,23,24,25,26)
MR_decl_label1(html_format__list_to_html_7_0, 27)
MR_decl_label3(html_format__replace_special_char_2_4_0, 4,6,2)
MR_decl_label5(html_format__special_html_char_2_0, 3,4,5,6,1)
MR_decl_label9(html_format__special_html_char_or_break_2_0, 3,4,5,6,7,8,9,10,1)
MR_decl_label10(html_format__table_cell_to_html_8_0, 3,10,8,13,14,7,16,15,18,19)
MR_decl_label10(html_format__table_cell_to_html_8_0, 20,6,23,24,25,26,27,5,33,31)
MR_decl_label10(html_format__table_cell_to_html_8_0, 36,37,30,39,38,41,42,43,29,46)
MR_decl_label9(html_format__table_cell_to_html_8_0, 47,49,50,51,53,54,55,56,57)
MR_decl_label5(html_format__table_data_class_2_0, 3,4,5,6,1)
MR_decl_label10(html_format__table_data_to_th_html_6_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label9(html_format__table_data_to_th_html_6_0, 13,14,15,16,17,18,19,20,21)
MR_decl_label10(html_format__table_header_group_to_html_row_1_6_0, 4,5,6,3,8,9,2,11,12,13)
MR_decl_label10(html_format__table_header_group_to_html_row_1_6_0, 14,15,16,17,18,19,20,21,22,23)
MR_decl_label9(html_format__table_header_group_to_html_row_1_6_0, 24,25,26,27,28,29,30,31,32)
MR_decl_label5(html_format__table_header_group_to_html_row_2_5_0, 4,6,8,3,10)
MR_decl_label10(html_format__table_header_num_rows_and_classmap_14_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(html_format__table_header_num_rows_and_classmap_14_0, 13,14,2,17,20,16,21,15,24,23)
MR_decl_label3(html_format__table_header_num_rows_and_classmap_14_0, 28,27,25)
MR_decl_label10(html_format__table_row_to_html_7_0, 4,5,6,3,9,12,11,13,14,15)
MR_decl_label9(html_format__table_row_to_html_7_0, 16,17,18,8,19,20,21,22,23)
MR_decl_label10(html_format__table_to_html_5_0, 2,3,4,7,6,9,10,15,17,18)
MR_decl_label10(html_format__table_to_html_5_0, 20,22,23,24,25,26,27,28,29,30)
MR_decl_label5(html_format__table_to_html_5_0, 31,32,33,34,35)
MR_decl_label10(html_format__update_style_control_map_7_0, 2,3,5,7,6,10,11,14,16,12)
MR_decl_label2(html_format__update_style_control_map_7_0, 18,20)
MR_decl_label3(fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0, 3,4,7)
MR_decl_label6(fn__html_format__css_style_html_1_0, 3,7,8,9,10,11)
MR_decl_label10(fn__html_format__default_style_control_map_0_0, 23,26,29,32,35,38,41,44,47,50)
MR_decl_label7(fn__html_format__default_style_control_map_0_0, 53,56,59,62,65,68,71)
MR_decl_label2(fn__html_format__escape_break_html_attr_string_1_0, 5,6)
MR_decl_label1(fn__html_format__escape_break_html_string_1_0, 5)
MR_decl_label2(fn__html_format__escape_html_attr_string_1_0, 5,6)
MR_decl_label1(fn__html_format__escape_html_string_1_0, 5)
MR_decl_label7(fn__html_format__handle_html_attrs_2_0, 32,4,7,6,10,9,12)
MR_decl_label1(fn__html_format__html_to_string_1_0, 2)
MR_decl_label10(fn__html_format__htmlize_display_3_0, 2,3,4,6,8,9,10,11,12,13)
MR_decl_label10(fn__html_format__htmlize_display_3_0, 14,15,16,17,18,19,20,21,22,23)
MR_decl_label1(fn__html_format__htmlize_display_3_0, 24)
MR_decl_label8(fn__html_format__link_to_html_2_0, 4,5,6,7,8,10,13,17)
MR_decl_label8(fn__html_format__style_control_to_html_1_0, 2,6,7,8,9,10,11,12)
MR_decl_label4(fn__html_format__style_element_to_html_1_0, 2,3,4,5)
MR_decl_label2(fn__html_format__table_class_to_string_2_0, 3,4)
MR_decl_label10(fn__html_format__table_column_class_to_string_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label2(fn__html_format__table_column_class_to_string_1_0, 13,14)
MR_decl_label10(fn__html_format__table_data_to_html_2_0, 3,6,12,13,14,15,16,18,21,9)
MR_decl_label5(fn__html_format__table_data_to_html_2_0, 27,30,33,36,39)
MR_decl_label3(fn__html_format__wrap_tags_3_0, 2,3,4)
MR_decl_label2(__Unify___html_format__format_info_0_0, 4,1)
MR_decl_label1(__Unify___html_format__style_control_0_0, 4)
MR_decl_label1(__Unify___html_format__style_element_0_0, 4)
MR_decl_label8(__Compare___html_format__format_info_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label2(__Compare___html_format__style_control_0_0, 3,2)
MR_decl_label2(__Compare___html_format__style_element_0_0, 3,2)
MR_def_extern_entry(fn__html_format__html_to_string_1_0)
MR_decl_static(fn__html_format__str_to_html_1_0)
MR_decl_static(fn__html_format__wrap_tags_3_0)
MR_decl_static(fn__html_format__css_style_html_1_0)
MR_decl_static(fn__html_format__default_style_control_map_0_0)
MR_decl_static(fn__html_format__init_format_info_2_0)
MR_decl_static(fn__html_format__empty_html_0_0)
MR_def_extern_entry(fn__html_format__htmlize_display_3_0)
MR_def_extern_entry(fn__html_format__escape_html_string_1_0)
MR_decl_static(fn__html_format__handle_html_attrs_2_0)
MR_def_extern_entry(fn__html_format__escape_html_attr_string_1_0)
MR_def_extern_entry(fn__html_format__escape_break_html_string_1_0)
MR_def_extern_entry(fn__html_format__escape_break_html_attr_string_1_0)
MR_decl_static(fn__html_format__style_control_to_html_1_0)
MR_decl_static(fn__html_format__style_element_to_html_1_0)
MR_decl_static(fn__html_format__table_class_to_string_2_0)
MR_decl_static(html_format__table_to_html_5_0)
MR_decl_static(html_format__list_to_html_7_0)
MR_decl_static(fn__html_format__link_to_html_2_0)
MR_decl_static(html_format__item_to_html_7_0)
MR_decl_static(fn__html_format__table_data_to_html_2_0)
MR_decl_static(fn__html_format__table_column_class_to_string_1_0)
MR_decl_static(html_format__table_header_group_to_html_row_1_6_0)
MR_decl_static(html_format__table_header_group_to_html_row_2_5_0)
MR_decl_static(html_format__table_data_to_th_html_6_0)
MR_decl_static(html_format__update_style_control_map_7_0)
MR_decl_static(html_format__table_header_num_rows_and_classmap_14_0)
MR_decl_static(html_format__insert_column_into_classmap_4_0)
MR_decl_static(html_format__table_row_to_html_7_0)
MR_decl_static(html_format__table_data_class_2_0)
MR_decl_static(fn__html_format__default_table_column_class_0_0)
MR_decl_static(html_format__table_cell_to_html_8_0)
MR_decl_static(html_format__replace_special_char_2_4_0)
MR_decl_static(html_format__special_html_char_2_0)
MR_decl_static(html_format__special_html_char_or_break_2_0)
MR_decl_static(__Unify___html_format__column_class_map_0_0)
MR_decl_static(__Compare___html_format__column_class_map_0_0)
MR_decl_static(__Unify___html_format__format_info_0_0)
MR_decl_static(__Compare___html_format__format_info_0_0)
MR_def_extern_entry(__Unify___html_format__html_0_0)
MR_def_extern_entry(__Compare___html_format__html_0_0)
MR_decl_static(__Unify___html_format__style_control_0_0)
MR_decl_static(__Compare___html_format__style_control_0_0)
MR_decl_static(__Unify___html_format__style_control_map_0_0)
MR_decl_static(__Compare___html_format__style_control_map_0_0)
MR_decl_static(__Unify___html_format__style_element_0_0)
MR_decl_static(__Compare___html_format__style_element_0_0)
MR_decl_static(__Unify___html_format__style_element_map_0_0)
MR_decl_static(__Compare___html_format__style_element_map_0_0)
MR_decl_static(__Unify___html_format__table_header_rows_0_0)
MR_decl_static(__Compare___html_format__table_header_rows_0_0)
MR_decl_static(fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0)
MR_decl_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_style_element_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_style_control_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[10] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(html_format, style_element),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(html_format, style_control),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(html_format, style_element),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(html_format, style_control),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(html_format, style_element),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(html_format, style_element),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(html_format, style_control),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(html_format, style_control),
MR_TAG_COMMON(0,0,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_1 mercury_common_1[17] =
{
{
{
MR_CTOR1_ADDR(cord, cord),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_TAG_COMMON(0,4,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,1),
MR_TAG_COMMON(1,1,2)
}
},
{
{
MR_TAG_COMMON(0,4,2),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(0,4,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,4),
MR_TAG_COMMON(1,1,5)
}
},
{
{
MR_TAG_COMMON(0,4,2),
MR_TAG_COMMON(1,1,6)
}
},
{
{
MR_TAG_COMMON(0,4,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,7),
MR_TAG_COMMON(1,1,9)
}
},
{
{
MR_TAG_COMMON(0,4,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__css_style_html_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_html_string_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_html_attr_string_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_break_html_string_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_break_html_attr_string_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__style_control_to_html_1_0_1;
static const struct mercury_type_2 mercury_common_2[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__html_format__css_style_html_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,3),
MR_COMMON(1,1)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__html_format__escape_html_string_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__html_format__escape_html_attr_string_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__html_format__escape_break_html_string_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__html_format__escape_break_html_attr_string_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__html_format__style_control_to_html_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,5),
MR_COMMON(1,1)
},
};

static const struct mercury_type_3 mercury_common_3[6] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__html_format__style_control_to_html_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(html_format__special_html_char_2_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(html_format__special_html_char_2_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(html_format__special_html_char_or_break_2_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(html_format__special_html_char_or_break_2_0),
0
},
{
MR_COMMON(2,5),
MR_ENTRY_AP(fn__html_format__style_element_to_html_1_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[10] =
{
{
{
MR_string_const("border-style", 12),
MR_string_const("inset inset inset inset", 23)
}
},
{
{
MR_string_const("padding", 7),
MR_string_const("3px 3px 3px 3px", 15)
}
},
{
{
MR_string_const("border-width", 12),
MR_string_const("1px 1px 1px 1px", 15)
}
},
{
{
MR_string_const("border-style", 12),
MR_string_const("outset outset outset outset", 27)
}
},
{
{
MR_string_const("border-spacing", 14),
MR_string_const("2px", 3)
}
},
{
{
MR_string_const("border-style", 12),
MR_string_const("none", 4)
}
},
{
{
MR_string_const("text-decoration", 15),
MR_string_const("none", 4)
}
},
{
{
MR_string_const("margin", 6),
MR_string_const("5px", 3)
}
},
{
{
MR_string_const("text-align", 10),
MR_string_const("right", 5)
}
},
{
{
MR_string_const("text-align", 10),
MR_string_const("left", 4)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
2,
MR_CHAR_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_html_string_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_html_attr_string_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_break_html_string_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_break_html_attr_string_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__html_format__table_header_num_rows_and_classmap_14_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__html_format__escape_html_string_1_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(5,0),
MR_CHAR_CTOR_ADDR,
MR_COMMON(1,13),
MR_COMMON(1,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__html_format__escape_html_attr_string_1_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(5,0),
MR_CHAR_CTOR_ADDR,
MR_COMMON(1,13),
MR_COMMON(1,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__html_format__escape_break_html_string_1_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(5,0),
MR_CHAR_CTOR_ADDR,
MR_COMMON(1,13),
MR_COMMON(1,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__html_format__escape_break_html_attr_string_1_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(5,0),
MR_CHAR_CTOR_ADDR,
MR_COMMON(1,13),
MR_COMMON(1,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__html_format__table_header_num_rows_and_classmap_14_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
};

static const struct mercury_type_7 mercury_common_7[4] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(html_format__replace_special_char_2_4_0),
1,
MR_TAG_COMMON(0,3,1)
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(html_format__replace_special_char_2_4_0),
1,
MR_TAG_COMMON(0,3,2)
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(html_format__replace_special_char_2_4_0),
1,
MR_TAG_COMMON(0,3,3)
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(html_format__replace_special_char_2_4_0),
1,
MR_TAG_COMMON(0,3,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__html_format__table_to_html_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_format_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_group_0;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_table_header_rows_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__html_format__table_to_html_5_0_1,
(MR_Word *) (MR_Integer) 0
},
14,
{
MR_CTOR0_ADDR(html_format, format_info),
MR_CTOR0_ADDR(display, table_header_group),
MR_CTOR0_ADDR(html_format, table_header_rows),
MR_CTOR0_ADDR(html_format, table_header_rows),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,15),
MR_COMMON(1,15),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_column_class_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___html_format__column_class_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___html_format__column_class_map_0_0)),
	"html_format",
	"column_class_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_colour_column_groups_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_box_tables_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_developer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_colour_column_groups_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_box_tables_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_developer_mode_0;

const MR_PseudoTypeInfo mercury_data_html_format__field_types_format_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_colour_column_groups_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_box_tables_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_developer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_html_format__field_names_format_info_0_0[] = {
	"fi_pref_colour_scheme",
	"fi_pref_box",
	"fi_pref_developer",
	"fi_server_name_port",
	"fi_script_name",
	"fi_deep_file"
};

const MR_DuArgLocn mercury_data_html_format__field_locns_format_info_0_0[] = {
	{ 0, 0, 1 },
	{ 0, 1, 1 },
	{ 0, 2, 1 },
	{ 1, 0, 0 },
	{ 2, 0, 0 },
	{ 3, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_html_format__du_functor_desc_format_info_0_0 = {
	"format_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_html_format__field_types_format_info_0_0,
	mercury_data_html_format__field_names_format_info_0_0,
	mercury_data_html_format__field_locns_format_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_html_format__du_stag_ordered_format_info_0_0[] = {
	&mercury_data_html_format__du_functor_desc_format_info_0_0

};

const MR_DuPtagLayout mercury_data_html_format__du_ptag_ordered_format_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_html_format__du_stag_ordered_format_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_html_format__du_name_ordered_format_info_0[] = {
	&mercury_data_html_format__du_functor_desc_format_info_0_0
};

const MR_Integer mercury_data_html_format__functor_number_map_format_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_format_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___html_format__format_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___html_format__format_info_0_0)),
	"html_format",
	"format_info",
	{ (void *)mercury_data_html_format__du_name_ordered_format_info_0 },
	{ (void *)mercury_data_html_format__du_ptag_ordered_format_info_0 },
	1,
	4,
	mercury_data_html_format__functor_number_map_format_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1builtin__type_ctor_info_string_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_html_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___html_format__html_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___html_format__html_0_0)),
	"html_format",
	"html",
	{ 0 },
	{ (void *)&mercury_data_cord__ti_cord_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_html_format__notag_functor_desc_style_control_0 = {
	"style_control",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_html_format__functor_number_map_style_control_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_style_control_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___html_format__style_control_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___html_format__style_control_0_0)),
	"html_format",
	"style_control",
	{ (void *)&mercury_data_html_format__notag_functor_desc_style_control_0 },
	{ (void *)&mercury_data_html_format__notag_functor_desc_style_control_0 },
	1,
	4,
	mercury_data_html_format__functor_number_map_style_control_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_html_format__type_ctor_info_style_element_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2html_format__type_ctor_info_style_control_0tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_html_format__type_ctor_info_style_control_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_style_control_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___html_format__style_control_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___html_format__style_control_map_0_0)),
	"html_format",
	"style_control_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2html_format__type_ctor_info_style_control_0tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_html_format__notag_functor_desc_style_element_0 = {
	"style_element",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_html_format__functor_number_map_style_element_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_style_element_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___html_format__style_element_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___html_format__style_element_0_0)),
	"html_format",
	"style_element",
	{ (void *)&mercury_data_html_format__notag_functor_desc_style_element_0 },
	{ (void *)&mercury_data_html_format__notag_functor_desc_style_element_0 },
	1,
	4,
	mercury_data_html_format__functor_number_map_style_element_0
};

const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_style_element_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___html_format__style_element_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___html_format__style_element_map_0_0)),
	"html_format",
	"style_element_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_html_format__enum_functor_desc_table_header_rows_0_0 = {
	"one_header_row",
	0
};

static const MR_EnumFunctorDesc mercury_data_html_format__enum_functor_desc_table_header_rows_0_1 = {
	"two_header_rows",
	1
};

const MR_EnumFunctorDescPtr mercury_data_html_format__enum_value_ordered_table_header_rows_0[] = {
	&mercury_data_html_format__enum_functor_desc_table_header_rows_0_0,
	&mercury_data_html_format__enum_functor_desc_table_header_rows_0_1
};

const MR_EnumFunctorDescPtr mercury_data_html_format__enum_name_ordered_table_header_rows_0[] = {
	&mercury_data_html_format__enum_functor_desc_table_header_rows_0_0,
	&mercury_data_html_format__enum_functor_desc_table_header_rows_0_1
};

const MR_Integer mercury_data_html_format__functor_number_map_table_header_rows_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_table_header_rows_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___html_format__table_header_rows_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___html_format__table_header_rows_0_0)),
	"html_format",
	"table_header_rows",
	{ (void *)mercury_data_html_format__enum_name_ordered_table_header_rows_0 },
	{ (void *)mercury_data_html_format__enum_value_ordered_table_header_rows_0 },
	2,
	4,
	mercury_data_html_format__functor_number_map_table_header_rows_0
};


static const MR_UserClosureId
mercury_data__closure_layout__html_format__table_header_num_rows_and_classmap_14_0_1 = {
{
MR_PREDICATE,
"html_format",
"html_format",
"insert_column_into_classmap",
4,
0
},
"html_format",
"html_format.m",
385,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__html_format__table_to_html_5_0_1 = {
{
MR_PREDICATE,
"html_format",
"html_format",
"table_header_num_rows_and_classmap",
14,
0
},
"html_format",
"html_format.m",
249,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__style_control_to_html_1_0_1 = {
{
MR_FUNCTION,
"html_format",
"html_format",
"style_element_to_html",
2,
0
},
"html_format",
"html_format.m",
136,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_break_html_attr_string_1_0_2 = {
{
MR_PREDICATE,
"html_format",
"html_format",
"replace_special_char_2",
4,
0
},
"html_format",
"html_format.m",
1007,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_break_html_attr_string_1_0_1 = {
{
MR_PREDICATE,
"html_format",
"html_format",
"special_html_char_or_break",
2,
0
},
"html_format",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_break_html_string_1_0_2 = {
{
MR_PREDICATE,
"html_format",
"html_format",
"replace_special_char_2",
4,
0
},
"html_format",
"html_format.m",
1007,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_break_html_string_1_0_1 = {
{
MR_PREDICATE,
"html_format",
"html_format",
"special_html_char_or_break",
2,
0
},
"html_format",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_html_attr_string_1_0_2 = {
{
MR_PREDICATE,
"html_format",
"html_format",
"replace_special_char_2",
4,
0
},
"html_format",
"html_format.m",
1007,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_html_attr_string_1_0_1 = {
{
MR_PREDICATE,
"html_format",
"html_format",
"special_html_char",
2,
0
},
"html_format",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_html_string_1_0_2 = {
{
MR_PREDICATE,
"html_format",
"html_format",
"replace_special_char_2",
4,
0
},
"html_format",
"html_format.m",
1007,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__escape_html_string_1_0_1 = {
{
MR_PREDICATE,
"html_format",
"html_format",
"special_html_char",
2,
0
},
"html_format",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__html_format__css_style_html_1_0_1 = {
{
MR_FUNCTION,
"html_format",
"html_format",
"style_control_to_html",
2,
0
},
"html_format",
"html_format.m",
126,
"6"
};


MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(html_format_module0)
	MR_init_entry1(fn__html_format__html_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__html_to_string_1_0);
	MR_init_label1(fn__html_format__html_to_string_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'html_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__html_format__html_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		fn__html_format__html_to_string_1_0_i2);
MR_def_label(fn__html_format__html_to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__singleton_1_0);

MR_BEGIN_MODULE(html_format_module1)
	MR_init_entry1(fn__html_format__str_to_html_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__str_to_html_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'str_to_html'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__str_to_html_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(html_format_module2)
	MR_init_entry1(fn__html_format__wrap_tags_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__wrap_tags_3_0);
	MR_init_label3(fn__html_format__wrap_tags_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_tags'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__wrap_tags_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__wrap_tags_3_0_i2);
MR_def_label(fn__html_format__wrap_tags_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__wrap_tags_3_0_i3);
MR_def_label(fn__html_format__wrap_tags_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		fn__html_format__wrap_tags_3_0_i4);
MR_def_label(fn__html_format__wrap_tags_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__cord__cord_list_to_cord_1_0);

MR_BEGIN_MODULE(html_format_module3)
	MR_init_entry1(fn__html_format__css_style_html_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__css_style_html_1_0);
	MR_init_label6(fn__html_format__css_style_html_1_0,3,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'css_style_html'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__css_style_html_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, style_control);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__html_format__css_style_html_1_0_i3);
MR_def_label(fn__html_format__css_style_html_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__html_format__css_style_html_1_0_i7);
MR_def_label(fn__html_format__css_style_html_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		fn__html_format__css_style_html_1_0_i8);
MR_def_label(fn__html_format__css_style_html_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("<style type=\"text/css\">\n", 24);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__css_style_html_1_0_i9);
MR_def_label(fn__html_format__css_style_html_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("</style>\n", 9);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__css_style_html_1_0_i10);
MR_def_label(fn__html_format__css_style_html_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		fn__html_format__css_style_html_1_0_i11);
MR_def_label(fn__html_format__css_style_html_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__from_assoc_list_1_0);

MR_BEGIN_MODULE(html_format_module4)
	MR_init_entry1(fn__html_format__default_style_control_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__default_style_control_map_0_0);
	MR_init_label10(fn__html_format__default_style_control_map_0_0,23,26,29,32,35,38,41,44,47,50)
	MR_init_label7(fn__html_format__default_style_control_map_0_0,53,56,59,62,65,68,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_style_control_map'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__default_style_control_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(26);
	MR_sv(26) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_string_const("td.allocations", 14);
	MR_sv(3) = (MR_Word) MR_string_const("td.callseqs", 11);
	MR_sv(4) = (MR_Word) MR_string_const("td.clique", 9);
	MR_sv(5) = (MR_Word) MR_string_const("td.field_name", 13);
	MR_sv(6) = (MR_Word) MR_string_const("td.memory", 9);
	MR_sv(7) = (MR_Word) MR_string_const("td.module_name", 14);
	MR_sv(8) = (MR_Word) MR_string_const("td.number", 9);
	MR_sv(9) = (MR_Word) MR_string_const("td.ordinal_rank", 15);
	MR_sv(10) = (MR_Word) MR_string_const("td.port_counts", 14);
	MR_sv(11) = (MR_Word) MR_string_const("td.proc", 7);
	MR_sv(12) = (MR_Word) MR_string_const("td.source_context", 17);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_sv(14) = (MR_Word) MR_string_const("td.ticks_and_times", 18);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(1,1,11);
	MR_sv(16) = (MR_Word) MR_string_const("a.control", 9);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_sv(18) = (MR_Word) MR_string_const("table.plain", 11);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(1,1,8);
	MR_sv(20) = (MR_Word) MR_string_const("table.boxed", 11);
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_sv(22) = (MR_Word) MR_string_const("table.boxed th", 14);
	MR_sv(21) = (MR_Word) MR_string_const("table.boxed td", 14);
	MR_sv(23) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_sv(24) = (MR_Word) MR_CTOR0_ADDR(html_format, style_element);
	MR_sv(25) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i23);
MR_def_label(fn__html_format__default_style_control_map_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(21);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(21) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(23);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i26);
MR_def_label(fn__html_format__default_style_control_map_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(22);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(21);
	MR_sv(19) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,7);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i29);
MR_def_label(fn__html_format__default_style_control_map_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(20);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(19);
	MR_sv(17) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,8);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i32);
MR_def_label(fn__html_format__default_style_control_map_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(17);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,10);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i35);
MR_def_label(fn__html_format__default_style_control_map_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i38);
MR_def_label(fn__html_format__default_style_control_map_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i41);
MR_def_label(fn__html_format__default_style_control_map_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i44);
MR_def_label(fn__html_format__default_style_control_map_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i47);
MR_def_label(fn__html_format__default_style_control_map_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i50);
MR_def_label(fn__html_format__default_style_control_map_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i53);
MR_def_label(fn__html_format__default_style_control_map_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i56);
MR_def_label(fn__html_format__default_style_control_map_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i59);
MR_def_label(fn__html_format__default_style_control_map_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i62);
MR_def_label(fn__html_format__default_style_control_map_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i65);
MR_def_label(fn__html_format__default_style_control_map_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i68);
MR_def_label(fn__html_format__default_style_control_map_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		fn__html_format__default_style_control_map_0_0_i71);
MR_def_label(fn__html_format__default_style_control_map_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, style_control);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(26);
	MR_decr_sp(26);
	MR_np_tailcall_ent(fn__map__from_assoc_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module5)
	MR_init_entry1(fn__html_format__init_format_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__init_format_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_format_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__init_format_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 8);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r2, 1) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tempr3 | (((MR_Integer) MR_tempr2 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__empty_0_0);

MR_BEGIN_MODULE(html_format_module6)
	MR_init_entry1(fn__html_format__empty_html_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__empty_html_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'empty_html'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__empty_html_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__empty_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module7)
	MR_init_entry1(fn__html_format__htmlize_display_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__htmlize_display_3_0);
	MR_init_label10(fn__html_format__htmlize_display_3_0,2,3,4,6,8,9,10,11,12,13)
	MR_init_label10(fn__html_format__htmlize_display_3_0,14,15,16,17,18,19,20,21,22,23)
	MR_init_label1(fn__html_format__htmlize_display_3_0,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'htmlize_display'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__html_format__htmlize_display_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Mercury Deep Profile for ", 25);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__htmlize_display_3_0_i2);
MR_def_label(fn__html_format__htmlize_display_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__htmlize_display_3_0_i3);
MR_def_label(fn__html_format__htmlize_display_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		fn__html_format__htmlize_display_3_0_i4);
MR_def_label(fn__html_format__htmlize_display_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__html_format__htmlize_display_3_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		fn__html_format__htmlize_display_3_0_i12);
MR_def_label(fn__html_format__htmlize_display_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__htmlize_display_3_0_i8);
MR_def_label(fn__html_format__htmlize_display_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const(" - ", 3);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__htmlize_display_3_0_i9);
MR_def_label(fn__html_format__htmlize_display_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		fn__html_format__htmlize_display_3_0_i10);
MR_def_label(fn__html_format__htmlize_display_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		fn__html_format__htmlize_display_3_0_i11);
MR_def_label(fn__html_format__htmlize_display_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<h3>", 4);
	MR_r2 = (MR_Word) MR_string_const("</h3>\n", 6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		fn__html_format__htmlize_display_3_0_i12);
MR_def_label(fn__html_format__htmlize_display_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<title>", 7);
	MR_r2 = (MR_Word) MR_string_const("</title>\n", 9);
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		fn__html_format__htmlize_display_3_0_i13);
MR_def_label(fn__html_format__htmlize_display_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__html_format__init_format_info_2_0,
		fn__html_format__htmlize_display_3_0_i14);
MR_def_label(fn__html_format__htmlize_display_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__html_format__default_style_control_map_0_0,
		fn__html_format__htmlize_display_3_0_i15);
MR_def_label(fn__html_format__htmlize_display_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<div>\n", 6);
	MR_r2 = (MR_Word) MR_string_const("</div>\n", 7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0,
		fn__html_format__htmlize_display_3_0_i16);
MR_def_label(fn__html_format__htmlize_display_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__html_format__css_style_html_1_0,
		fn__html_format__htmlize_display_3_0_i17);
MR_def_label(fn__html_format__htmlize_display_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\"\n\"http://www.w3.org/TR/html4/strict.dtd\">\n", 91);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__htmlize_display_3_0_i18);
MR_def_label(fn__html_format__htmlize_display_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		fn__html_format__htmlize_display_3_0_i19);
MR_def_label(fn__html_format__htmlize_display_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<head>\n", 7);
	MR_r2 = (MR_Word) MR_string_const("</head>\n", 8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		fn__html_format__htmlize_display_3_0_i20);
MR_def_label(fn__html_format__htmlize_display_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		fn__html_format__htmlize_display_3_0_i21);
MR_def_label(fn__html_format__htmlize_display_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<body>\n", 7);
	MR_r2 = (MR_Word) MR_string_const("</body>\n", 8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		fn__html_format__htmlize_display_3_0_i22);
MR_def_label(fn__html_format__htmlize_display_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		fn__html_format__htmlize_display_3_0_i23);
MR_def_label(fn__html_format__htmlize_display_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<html>\n", 7);
	MR_r2 = (MR_Word) MR_string_const("</html>\n", 8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		fn__html_format__htmlize_display_3_0_i24);
MR_def_label(fn__html_format__htmlize_display_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__foldr_4_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(html_format_module8)
	MR_init_entry1(fn__html_format__escape_html_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__escape_html_string_1_0);
	MR_init_label1(fn__html_format__escape_html_string_1_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'escape_html_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__html_format__escape_html_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__foldr_4_0,
		fn__html_format__escape_html_string_1_0_i5);
MR_def_label(fn__html_format__escape_html_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__from_char_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(html_format_module9)
	MR_init_entry1(fn__html_format__handle_html_attrs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__handle_html_attrs_2_0);
	MR_init_label7(fn__html_format__handle_html_attrs_2_0,32,4,7,6,10,9,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_html_attrs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__handle_html_attrs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__html_format__handle_html_attrs_2_0_i32);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__html_format__handle_html_attrs_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__html_format__handle_html_attrs_2_0,
		fn__html_format__handle_html_attrs_2_0_i4);
MR_def_label(fn__html_format__handle_html_attrs_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__html_format__handle_html_attrs_2_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const("</b>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__handle_html_attrs_2_0_i7);
MR_def_label(fn__html_format__handle_html_attrs_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<b>", 3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__html_format__handle_html_attrs_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__html_format__handle_html_attrs_2_0_i9);
	}
	MR_r2 = (MR_Word) MR_string_const("</i>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__handle_html_attrs_2_0_i10);
MR_def_label(fn__html_format__handle_html_attrs_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<i>", 3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__html_format__handle_html_attrs_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</u>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__handle_html_attrs_2_0_i12);
MR_def_label(fn__html_format__handle_html_attrs_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<u>", 3);
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


MR_BEGIN_MODULE(html_format_module10)
	MR_init_entry1(fn__html_format__escape_html_attr_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__escape_html_attr_string_1_0);
	MR_init_label2(fn__html_format__escape_html_attr_string_1_0,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'escape_html_attr_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__html_format__escape_html_attr_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__foldr_4_0,
		fn__html_format__escape_html_attr_string_1_0_i5);
MR_def_label(fn__html_format__escape_html_attr_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__html_format__escape_html_attr_string_1_0_i6);
MR_def_label(fn__html_format__escape_html_attr_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__html_format__handle_html_attrs_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module11)
	MR_init_entry1(fn__html_format__escape_break_html_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__escape_break_html_string_1_0);
	MR_init_label1(fn__html_format__escape_break_html_string_1_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'escape_break_html_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__html_format__escape_break_html_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__foldr_4_0,
		fn__html_format__escape_break_html_string_1_0_i5);
MR_def_label(fn__html_format__escape_break_html_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__from_char_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module12)
	MR_init_entry1(fn__html_format__escape_break_html_attr_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__escape_break_html_attr_string_1_0);
	MR_init_label2(fn__html_format__escape_break_html_attr_string_1_0,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'escape_break_html_attr_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__html_format__escape_break_html_attr_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,3);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__foldr_4_0,
		fn__html_format__escape_break_html_attr_string_1_0_i5);
MR_def_label(fn__html_format__escape_break_html_attr_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__html_format__escape_break_html_attr_string_1_0_i6);
MR_def_label(fn__html_format__escape_break_html_attr_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__html_format__handle_html_attrs_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__to_assoc_list_1_0);

MR_BEGIN_MODULE(html_format_module13)
	MR_init_entry1(fn__html_format__style_control_to_html_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__style_control_to_html_1_0);
	MR_init_label8(fn__html_format__style_control_to_html_1_0,2,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'style_control_to_html'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__style_control_to_html_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(html_format, style_element);
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__map__to_assoc_list_1_0,
		fn__html_format__style_control_to_html_1_0_i2);
MR_def_label(fn__html_format__style_control_to_html_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__html_format__style_control_to_html_1_0_i6);
MR_def_label(fn__html_format__style_control_to_html_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		fn__html_format__style_control_to_html_1_0_i7);
MR_def_label(fn__html_format__style_control_to_html_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n\t{\n", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__style_control_to_html_1_0_i8);
MR_def_label(fn__html_format__style_control_to_html_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__style_control_to_html_1_0_i9);
MR_def_label(fn__html_format__style_control_to_html_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__style_control_to_html_1_0_i10);
MR_def_label(fn__html_format__style_control_to_html_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("\t}\n", 3);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__html_format__style_control_to_html_1_0_i11);
MR_def_label(fn__html_format__style_control_to_html_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		fn__html_format__style_control_to_html_1_0_i12);
MR_def_label(fn__html_format__style_control_to_html_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module14)
	MR_init_entry1(fn__html_format__style_element_to_html_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__style_element_to_html_1_0);
	MR_init_label4(fn__html_format__style_element_to_html_1_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'style_element_to_html'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__style_element_to_html_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__style_element_to_html_1_0_i2);
MR_def_label(fn__html_format__style_element_to_html_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__style_element_to_html_1_0_i3);
MR_def_label(fn__html_format__style_element_to_html_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__style_element_to_html_1_0_i4);
MR_def_label(fn__html_format__style_element_to_html_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__style_element_to_html_1_0_i5);
MR_def_label(fn__html_format__style_element_to_html_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module15)
	MR_init_entry1(fn__html_format__table_class_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__table_class_to_string_2_0);
	MR_init_label2(fn__html_format__table_class_to_string_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_class_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__table_class_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__html_format__table_class_to_string_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("boxed", 5);
	MR_proceed();
MR_def_label(fn__html_format__table_class_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__html_format__table_class_to_string_2_0_i4);
	}
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__html_format__table_class_to_string_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("boxed", 5);
	MR_proceed();
MR_def_label(fn__html_format__table_class_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("plain", 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__set__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_group_0;
MR_decl_entry(list__foldl6_14_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(html_format_module16)
	MR_init_entry1(html_format__table_to_html_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__table_to_html_5_0);
	MR_init_label10(html_format__table_to_html_5_0,2,3,4,7,6,9,10,15,17,18)
	MR_init_label10(html_format__table_to_html_5_0,20,22,23,24,25,26,27,28,29,30)
	MR_init_label5(html_format__table_to_html_5_0,31,32,33,34,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_to_html'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__table_to_html_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__html_format__table_class_to_string_2_0,
		html_format__table_to_html_5_0_i2);
MR_def_label(html_format__table_to_html_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_to_html_5_0_i3);
MR_def_label(html_format__table_to_html_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<table class=\"", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_to_html_5_0_i4);
MR_def_label(html_format__table_to_html_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(html_format__table_to_html_5_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__html_format__empty_html_0_0,
		html_format__table_to_html_5_0_i7);
MR_def_label(html_format__table_to_html_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0,
		html_format__table_to_html_5_0_i31);
MR_def_label(html_format__table_to_html_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(html_format__table_header_num_rows_and_classmap_14_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(9) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(10) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		html_format__table_to_html_5_0_i9);
MR_def_label(html_format__table_to_html_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__set__init_0_0,
		html_format__table_to_html_5_0_i10);
MR_def_label(html_format__table_to_html_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header_group);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(html_format, table_header_rows);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r5 = MR_r3;
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,1,16);
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(5);
	MR_r10 = (MR_Integer) 0;
	MR_r11 = (MR_Integer) 0;
	MR_r12 = MR_sv(8);
	MR_r13 = (MR_Integer) 0;
	MR_r14 = MR_tempr1;
	MR_r15 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl6_14_0,
		html_format__table_to_html_5_0_i15);
MR_def_label(html_format__table_to_html_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r6;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0,
		html_format__table_to_html_5_0_i17);
MR_def_label(html_format__table_to_html_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<tr>\n", 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("</tr>\n", 6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__table_to_html_5_0_i18);
MR_def_label(html_format__table_to_html_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(html_format__table_to_html_5_0_i20);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__html_format__empty_html_0_0,
		html_format__table_to_html_5_0_i23);
MR_def_label(html_format__table_to_html_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0,
		html_format__table_to_html_5_0_i22);
MR_def_label(html_format__table_to_html_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<tr>\n", 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("</tr>\n", 6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__table_to_html_5_0_i23);
MR_def_label(html_format__table_to_html_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		html_format__table_to_html_5_0_i24);
MR_def_label(html_format__table_to_html_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\"/>", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_to_html_5_0_i25);
MR_def_label(html_format__table_to_html_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<td colspan=\"", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_to_html_5_0_i26);
MR_def_label(html_format__table_to_html_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__html_format__str_to_html_1_0,
		html_format__table_to_html_5_0_i27);
MR_def_label(html_format__table_to_html_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<tr>", 4);
	MR_r2 = (MR_Word) MR_string_const("</tr>", 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__table_to_html_5_0_i28);
MR_def_label(html_format__table_to_html_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__table_to_html_5_0_i29);
MR_def_label(html_format__table_to_html_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__table_to_html_5_0_i30);
MR_def_label(html_format__table_to_html_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0,
		html_format__table_to_html_5_0_i31);
MR_def_label(html_format__table_to_html_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<thead>\n", 8);
	MR_r2 = (MR_Word) MR_string_const("</thead>\n", 9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__table_to_html_5_0_i32);
MR_def_label(html_format__table_to_html_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<tbody>\n", 8);
	MR_r2 = (MR_Word) MR_string_const("</tbody>\n", 9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__table_to_html_5_0_i33);
MR_def_label(html_format__table_to_html_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__table_to_html_5_0_i34);
MR_def_label(html_format__table_to_html_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("</table>\n", 9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__table_to_html_5_0_i35);
MR_def_label(html_format__table_to_html_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module17)
	MR_init_entry1(html_format__list_to_html_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__list_to_html_7_0);
	MR_init_label10(html_format__list_to_html_7_0,3,6,7,8,9,10,29,12,2,17)
	MR_init_label10(html_format__list_to_html_7_0,16,19,18,20,21,22,23,24,25,26)
	MR_init_label1(html_format__list_to_html_7_0,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_html'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__list_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(html_format__list_to_html_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		html_format__list_to_html_7_0_i29);
MR_def_label(html_format__list_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__list_to_html_7_0_i6);
MR_def_label(html_format__list_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("<span id=\"list_title\">", 22);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__list_to_html_7_0_i7);
MR_def_label(html_format__list_to_html_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("</span>\n", 8);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__list_to_html_7_0_i8);
MR_def_label(html_format__list_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__list_to_html_7_0_i9);
MR_def_label(html_format__list_to_html_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__list_to_html_7_0_i10);
MR_def_label(html_format__list_to_html_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(html_format__list_to_html_7_0_i12);
	}
MR_def_label(html_format__list_to_html_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		html_format__list_to_html_7_0_i2);
MR_def_label(html_format__list_to_html_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("<br>\n", 5);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__list_to_html_7_0_i2);
MR_def_label(html_format__list_to_html_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(html_format__list_to_html_7_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		html_format__list_to_html_7_0_i17);
MR_def_label(html_format__list_to_html_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_string_const("<ul>\n", 5);
	MR_sv(3) = (MR_Word) MR_string_const("</ul>\n", 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = (MR_Word) MR_string_const("</li>\n", 6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0,
		html_format__list_to_html_7_0_i21);
MR_def_label(html_format__list_to_html_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(html_format__list_to_html_7_0_i18);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("<br>\n", 5);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__list_to_html_7_0_i19);
MR_def_label(html_format__list_to_html_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_sv(3) = (MR_Word) MR_string_const("\n", 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0,
		html_format__list_to_html_7_0_i21);
MR_def_label(html_format__list_to_html_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__list_to_html_7_0_i20);
MR_def_label(html_format__list_to_html_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_sv(3) = (MR_Word) MR_string_const("\n", 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0,
		html_format__list_to_html_7_0_i21);
MR_def_label(html_format__list_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__list_to_html_7_0_i22);
MR_def_label(html_format__list_to_html_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__list_to_html_7_0_i23);
MR_def_label(html_format__list_to_html_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__list_to_html_7_0_i24);
MR_def_label(html_format__list_to_html_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__list_to_html_7_0_i25);
MR_def_label(html_format__list_to_html_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__list_to_html_7_0_i26);
MR_def_label(html_format__list_to_html_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__list_to_html_7_0_i27);
MR_def_label(html_format__list_to_html_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__query__query_to_string_1_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(html_format_module18)
	MR_init_entry1(fn__html_format__link_to_html_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__link_to_html_2_0);
	MR_init_label8(fn__html_format__link_to_html_2_0,4,5,6,7,8,10,13,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'link_to_html'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__link_to_html_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_sv(2) = MR_tfield(0, MR_r2, 3);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__query__query_to_string_1_0,
		fn__html_format__link_to_html_2_0_i4);
MR_def_label(fn__html_format__link_to_html_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\?", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__link_to_html_2_0_i5);
MR_def_label(fn__html_format__link_to_html_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__link_to_html_2_0_i6);
MR_def_label(fn__html_format__link_to_html_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__link_to_html_2_0_i7);
MR_def_label(fn__html_format__link_to_html_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("http://", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__link_to_html_2_0_i8);
MR_def_label(fn__html_format__link_to_html_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__html_format__link_to_html_2_0_i10);
	}
	MR_tag_alloc_heap(MR_sv(2), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(2), 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const("<a class=\"control\" href=\"%s\">[%s]</a>", 37);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_attr_string_1_0,
		fn__html_format__link_to_html_2_0_i13);
MR_def_label(fn__html_format__link_to_html_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(2), 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const("<a class=\"link\" href=\"%s\">%s</a>", 32);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_attr_string_1_0,
		fn__html_format__link_to_html_2_0_i13);
MR_def_label(fn__html_format__link_to_html_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__html_format__link_to_html_2_0_i17);
MR_def_label(fn__html_format__link_to_html_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_display_item_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(html_format_module19)
	MR_init_entry1(html_format__item_to_html_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__item_to_html_7_0);
	MR_init_label10(html_format__item_to_html_7_0,118,3,7,5,11,12,13,14,15,16)
	MR_init_label10(html_format__item_to_html_7_0,17,18,10,21,20,31,29,24,25,36)
	MR_init_label10(html_format__item_to_html_7_0,23,40,39,43,44,42,46,45,48,49)
	MR_init_label1(html_format__item_to_html_7_0,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'item_to_html'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__item_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(html_format__item_to_html_7_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(html_format__item_to_html_7_0_i3);
	}
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__item_to_html_7_0_i50);
MR_def_label(html_format__item_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,8)) {
		MR_GOTO_LAB(html_format__item_to_html_7_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r3, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(html_format__item_to_html_7_0_i7);
	}
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		html_format__item_to_html_7_0_i50);
MR_def_label(html_format__item_to_html_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(8, MR_r5, 0);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(html_format__item_to_html_7_0_i118);
MR_def_label(html_format__item_to_html_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,4)) {
		MR_GOTO_LAB(html_format__item_to_html_7_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(4, MR_r5, 0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__item_to_html_7_0_i11);
MR_def_label(html_format__item_to_html_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("<h3>", 4);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__item_to_html_7_0_i12);
MR_def_label(html_format__item_to_html_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("</h3>\n", 6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__item_to_html_7_0_i13);
MR_def_label(html_format__item_to_html_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__item_to_html_7_0_i14);
MR_def_label(html_format__item_to_html_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__item_to_html_7_0_i15);
MR_def_label(html_format__item_to_html_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__item_to_html_7_0_i16);
MR_def_label(html_format__item_to_html_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__item_to_html_7_0_i17);
MR_def_label(html_format__item_to_html_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__item_to_html_7_0_i18);
MR_def_label(html_format__item_to_html_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__item_to_html_7_0_i50);
MR_def_label(html_format__item_to_html_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(html_format__item_to_html_7_0_i20);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_body((MR_Integer) MR_r5, (MR_Integer) 1);
	MR_np_call_localret_ent(fn__html_format__link_to_html_2_0,
		html_format__item_to_html_7_0_i21);
MR_def_label(html_format__item_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__item_to_html_7_0_i50);
MR_def_label(html_format__item_to_html_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,6)) {
		MR_GOTO_LAB(html_format__item_to_html_7_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(6, MR_tempr3, 2);
	MR_r6 = MR_tempr1;
	MR_sv(5) = MR_tfield(6, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(6, MR_tempr3, 0);
	MR_tempr4 = MR_r3;
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr4, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(html_format__item_to_html_7_0_i25);
	}
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(html_format__item_to_html_7_0_i29);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr4;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		html_format__item_to_html_7_0_i31);
MR_def_label(html_format__item_to_html_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(html_format__item_to_html_7_0_i24);
MR_def_label(html_format__item_to_html_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(6);
	MR_tempr3 = MR_sv(7);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		html_format__item_to_html_7_0_i50);
MR_def_label(html_format__item_to_html_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r6 = MR_sv(6);
	MR_r4 = MR_sv(7);
MR_def_label(html_format__item_to_html_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(html_format__list_to_html_7_0,
		html_format__item_to_html_7_0_i36);
MR_def_label(html_format__item_to_html_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__item_to_html_7_0_i44);
MR_def_label(html_format__item_to_html_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(html_format__item_to_html_7_0_i39);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_body((MR_Integer) MR_r5, (MR_Integer) 2);
	MR_np_call_localret_ent(fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0,
		html_format__item_to_html_7_0_i40);
MR_def_label(html_format__item_to_html_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__item_to_html_7_0_i50);
MR_def_label(html_format__item_to_html_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(html_format__item_to_html_7_0_i42);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_body((MR_Integer) MR_r5, (MR_Integer) 3);
	MR_np_call_localret_ent(html_format__table_to_html_5_0,
		html_format__item_to_html_7_0_i43);
MR_def_label(html_format__item_to_html_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__item_to_html_7_0_i44);
MR_def_label(html_format__item_to_html_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(11);
MR_def_label(html_format__item_to_html_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,5)) {
		MR_GOTO_LAB(html_format__item_to_html_7_0_i45);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(5, MR_r5, 0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__item_to_html_7_0_i46);
MR_def_label(html_format__item_to_html_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__item_to_html_7_0_i50);
MR_def_label(html_format__item_to_html_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(7, MR_r5, 0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__item_to_html_7_0_i48);
MR_def_label(html_format__item_to_html_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<pre>", 5);
	MR_r2 = (MR_Word) MR_string_const("</pre>", 6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__item_to_html_7_0_i49);
MR_def_label(html_format__item_to_html_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__item_to_html_7_0_i50);
MR_def_label(html_format__item_to_html_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurement_units__two_decimal_fraction_1_0);
MR_decl_entry(fn__measurement_units__commas_1_0);
MR_decl_entry(fn__measurement_units__format_memory_3_0);
MR_decl_entry(fn__measurement_units__format_percent_1_0);
MR_decl_entry(fn__measurement_units__format_time_1_0);

MR_BEGIN_MODULE(html_format_module20)
	MR_init_entry1(fn__html_format__table_data_to_html_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__table_data_to_html_2_0);
	MR_init_label10(fn__html_format__table_data_to_html_2_0,3,6,12,13,14,15,16,18,21,9)
	MR_init_label5(fn__html_format__table_data_to_html_2_0,27,30,33,36,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_data_to_html'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__table_data_to_html_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__html_format__table_data_to_html_2_0_i3);
	}
	MR_r1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_attr_string_1_0,
		fn__html_format__table_data_to_html_2_0_i39);
MR_def_label(fn__html_format__table_data_to_html_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__html_format__table_data_to_html_2_0_i6);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		fn__html_format__table_data_to_html_2_0_i39);
MR_def_label(fn__html_format__table_data_to_html_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__html_format__table_data_to_html_2_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__query__query_to_string_1_0,
		fn__html_format__table_data_to_html_2_0_i12);
MR_def_label(fn__html_format__table_data_to_html_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\?", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__table_data_to_html_2_0_i13);
MR_def_label(fn__html_format__table_data_to_html_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__table_data_to_html_2_0_i14);
MR_def_label(fn__html_format__table_data_to_html_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__table_data_to_html_2_0_i15);
MR_def_label(fn__html_format__table_data_to_html_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("http://", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__html_format__table_data_to_html_2_0_i16);
MR_def_label(fn__html_format__table_data_to_html_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__html_format__table_data_to_html_2_0_i18);
	}
	MR_tag_alloc_heap(MR_sv(2), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(2), 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const("<a class=\"control\" href=\"%s\">[%s]</a>", 37);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_attr_string_1_0,
		fn__html_format__table_data_to_html_2_0_i21);
MR_def_label(fn__html_format__table_data_to_html_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(2), 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const("<a class=\"link\" href=\"%s\">%s</a>", 32);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_attr_string_1_0,
		fn__html_format__table_data_to_html_2_0_i21);
MR_def_label(fn__html_format__table_data_to_html_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__html_format__table_data_to_html_2_0_i39);
MR_def_label(fn__html_format__table_data_to_html_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__html_format__table_data_to_html_2_0_i27);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__measurement_units__commas_1_0,
		fn__html_format__table_data_to_html_2_0_i39);
MR_def_label(fn__html_format__table_data_to_html_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__html_format__table_data_to_html_2_0_i30);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurement_units__format_memory_3_0,
		fn__html_format__table_data_to_html_2_0_i39);
MR_def_label(fn__html_format__table_data_to_html_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__html_format__table_data_to_html_2_0_i33);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__measurement_units__format_percent_1_0,
		fn__html_format__table_data_to_html_2_0_i39);
MR_def_label(fn__html_format__table_data_to_html_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__html_format__table_data_to_html_2_0_i36);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__html_format__table_data_to_html_2_0_i39);
MR_def_label(fn__html_format__table_data_to_html_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__measurement_units__format_time_1_0,
		fn__html_format__table_data_to_html_2_0_i39);
MR_def_label(fn__html_format__table_data_to_html_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module21)
	MR_init_entry1(fn__html_format__table_column_class_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__table_column_class_to_string_1_0);
	MR_init_label10(fn__html_format__table_column_class_to_string_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label2(fn__html_format__table_column_class_to_string_1_0,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_column_class_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__table_column_class_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("allocations", 11);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("callseqs", 8);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("clique", 6);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("field_name", 10);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("memory", 6);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("module_name", 11);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("default", 7);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("number", 6);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("ordinal_rank", 12);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("port_counts", 11);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("proc", 4);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,11)) {
		MR_GOTO_LAB(fn__html_format__table_column_class_to_string_1_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("source_context", 14);
	MR_proceed();
MR_def_label(fn__html_format__table_column_class_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ticks_and_times", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_data_0;
MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(html_format_module22)
	MR_init_entry1(html_format__table_header_group_to_html_row_1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__table_header_group_to_html_row_1_6_0);
	MR_init_label10(html_format__table_header_group_to_html_row_1_6_0,4,5,6,3,8,9,2,11,12,13)
	MR_init_label10(html_format__table_header_group_to_html_row_1_6_0,14,15,16,17,18,19,20,21,22,23)
	MR_init_label9(html_format__table_header_group_to_html_row_1_6_0,24,25,26,27,28,29,30,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_header_group_to_html_row_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__table_header_group_to_html_row_1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i3);
	}
	MR_sv(1) = ((MR_Integer) MR_tfield(0, MR_tempr2, 1) & (MR_Integer) 15);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_data);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__length_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i4);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		html_format__table_header_group_to_html_row_1_6_0_i5);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__table_header_group_to_html_row_1_6_0_i6);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const("1", 1);
	MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i2);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i8);
	}
	MR_sv(1) = ((MR_Integer) MR_tfield(0, MR_r4, 1) & (MR_Integer) 15);
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_sv(2) = (MR_Word) MR_string_const("1", 1);
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i9);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_tfield(0, MR_r4, 1) & (MR_Integer) 15);
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_sv(2) = (MR_Word) MR_string_const("2", 1);
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i9);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_string_const("1", 1);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("allocations", 11);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("callseqs", 8);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("clique", 6);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("field_name", 10);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),4)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("memory", 6);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),5)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_name", 11);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),6)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("default", 7);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),7)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("number", 6);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),8)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ordinal_rank", 12);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),9)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i20);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("port_counts", 11);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),10)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc", 4);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),11)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_1_6_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("source_context", 14);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ticks_and_times", 15);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i23);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\" class=\"", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i24);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i25);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\" colspan=\"", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i26);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i27);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<th rowspan=\"", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i28);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__table_header_group_to_html_row_1_6_0_i29);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("</th>\n", 6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__table_header_group_to_html_row_1_6_0_i30);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i31);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__table_header_group_to_html_row_1_6_0_i32);
MR_def_label(html_format__table_header_group_to_html_row_1_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module23)
	MR_init_entry1(html_format__table_header_group_to_html_row_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__table_header_group_to_html_row_2_5_0);
	MR_init_label5(html_format__table_header_group_to_html_row_2_5_0,4,6,8,3,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_header_group_to_html_row_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__table_header_group_to_html_row_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_2_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = ((MR_Integer) MR_tfield(0, MR_tempr2, 1) & (MR_Integer) 15);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		html_format__table_header_group_to_html_row_2_5_0_i4);
MR_def_label(html_format__table_header_group_to_html_row_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(html_format__table_header_group_to_html_row_2_5_0_i6);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		html_format__table_header_group_to_html_row_2_5_0_i10);
MR_def_label(html_format__table_header_group_to_html_row_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__table_data_to_th_html_6_0,
		html_format__table_header_group_to_html_row_2_5_0_i8);
MR_def_label(html_format__table_header_group_to_html_row_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0);
	}
MR_def_label(html_format__table_header_group_to_html_row_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		html_format__table_header_group_to_html_row_2_5_0_i10);
MR_def_label(html_format__table_header_group_to_html_row_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module24)
	MR_init_entry1(html_format__table_data_to_th_html_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__table_data_to_th_html_6_0);
	MR_init_label10(html_format__table_data_to_th_html_6_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label9(html_format__table_data_to_th_html_6_0,13,14,15,16,17,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_data_to_th_html'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__table_data_to_th_html_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i3);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("allocations", 11);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i4);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("callseqs", 8);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i5);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("clique", 6);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i6);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("field_name", 10);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i7);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("memory", 6);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,5)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i8);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("module_name", 11);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,6)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i9);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("default", 7);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,7)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i10);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("number", 6);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,8)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i11);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("ordinal_rank", 12);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,9)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i12);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("port_counts", 11);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,10)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i13);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("proc", 4);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,11)) {
		MR_GOTO_LAB(html_format__table_data_to_th_html_6_0_i14);
	}
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("source_context", 14);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_sv(1) = (MR_Word) MR_string_const("ticks_and_times", 15);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_data_to_th_html_6_0_i15);
MR_def_label(html_format__table_data_to_th_html_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_data_to_th_html_6_0_i16);
MR_def_label(html_format__table_data_to_th_html_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<th class=\"", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_data_to_th_html_6_0_i17);
MR_def_label(html_format__table_data_to_th_html_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__table_data_to_th_html_6_0_i18);
MR_def_label(html_format__table_data_to_th_html_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("</th>\n", 6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__table_data_to_th_html_6_0_i19);
MR_def_label(html_format__table_data_to_th_html_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__table_data_to_th_html_6_0_i20);
MR_def_label(html_format__table_data_to_th_html_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__table_data_to_th_html_6_0_i21);
MR_def_label(html_format__table_data_to_th_html_6_0,21)
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

MR_decl_entry(set__member_2_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(fn__map__singleton_2_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(html_format_module25)
	MR_init_entry1(html_format__update_style_control_map_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__update_style_control_map_7_0);
	MR_init_label10(html_format__update_style_control_map_7_0,2,3,5,7,6,10,11,14,16,12)
	MR_init_label2(html_format__update_style_control_map_7_0,18,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_style_control_map'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__update_style_control_map_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("td.", 3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__update_style_control_map_7_0_i2);
MR_def_label(html_format__update_style_control_map_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_string_const("background", 10);
	MR_r4 = ((MR_Integer) MR_sv(5) & (MR_Integer) 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(html_format__update_style_control_map_7_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("LightGrey", 9);
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(html_format__update_style_control_map_7_0_i5);
MR_def_label(html_format__update_style_control_map_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("White", 5);
	MR_r3 = MR_sv(6);
MR_def_label(html_format__update_style_control_map_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(set__member_2_0,
		html_format__update_style_control_map_7_0_i7);
MR_def_label(html_format__update_style_control_map_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(html_format__update_style_control_map_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("html_format", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140html_format.update_style_control_map\'/7", 50);
	MR_r3 = (MR_Word) MR_string_const("repeated table_column_class", 27);
	MR_np_call_localret_ent(require__unexpected_3_0,
		html_format__update_style_control_map_7_0_i11);
MR_def_label(html_format__update_style_control_map_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set__insert_3_0,
		html_format__update_style_control_map_7_0_i10);
MR_def_label(html_format__update_style_control_map_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(7);
MR_def_label(html_format__update_style_control_map_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r3;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, style_control);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		html_format__update_style_control_map_7_0_i14);
MR_def_label(html_format__update_style_control_map_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(html_format__update_style_control_map_7_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, style_element);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		html_format__update_style_control_map_7_0_i16);
MR_def_label(html_format__update_style_control_map_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, style_control);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		html_format__update_style_control_map_7_0_i20);
MR_def_label(html_format__update_style_control_map_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(html_format, style_element);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		html_format__update_style_control_map_7_0_i18);
MR_def_label(html_format__update_style_control_map_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, style_control);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		html_format__update_style_control_map_7_0_i20);
MR_def_label(html_format__update_style_control_map_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__fold_up_5_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(html_format_module26)
	MR_init_entry1(html_format__table_header_num_rows_and_classmap_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__table_header_num_rows_and_classmap_14_0);
	MR_init_label10(html_format__table_header_num_rows_and_classmap_14_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(html_format__table_header_num_rows_and_classmap_14_0,13,14,2,17,20,16,21,15,24,23)
	MR_init_label3(html_format__table_header_num_rows_and_classmap_14_0,28,27,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_header_num_rows_and_classmap'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__table_header_num_rows_and_classmap_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r9 = ((MR_Integer) MR_tfield(0, MR_r2, 1) & (MR_Integer) 15);
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("allocations", 11);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,1)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("callseqs", 8);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,2)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("clique", 6);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,3)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("field_name", 10);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,4)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("memory", 6);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,5)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("module_name", 11);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,6)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("default", 7);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,7)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("number", 6);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,8)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("ordinal_rank", 12);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,9)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("port_counts", 11);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,10)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("proc", 4);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,11)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("source_context", 14);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i2);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r2, 1) >> (MR_Integer) 4) & (MR_Integer) 3);
	MR_sv(3) = (MR_Word) MR_string_const("ticks_and_times", 15);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i16);
	}
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_data);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__length_2_0,
		html_format__table_header_num_rows_and_classmap_14_0_i17);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(html_format__insert_column_into_classmap_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(5);
	MR_r4 = (((MR_Integer) MR_r3 + (MR_Integer) MR_sv(4)) - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__fold_up_5_0,
		html_format__table_header_num_rows_and_classmap_14_0_i20);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_sv(4));
	MR_sv(3) = MR_r7;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i15);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		html_format__table_header_num_rows_and_classmap_14_0_i21);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	}
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i23);
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_np_call_localret_ent(html_format__update_style_control_map_7_0,
		html_format__table_header_num_rows_and_classmap_14_0_i24);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_decr_sp_and_return(9);
	}
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_sv(1), 0) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(html_format__table_header_num_rows_and_classmap_14_0_i27);
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	}
	MR_np_call_localret_ent(html_format__update_style_control_map_7_0,
		html_format__table_header_num_rows_and_classmap_14_0_i28);
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_decr_sp_and_return(9);
	}
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r6;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_decr_sp_and_return(9);
	}
MR_def_label(html_format__table_header_num_rows_and_classmap_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r6;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module27)
	MR_init_entry1(html_format__insert_column_into_classmap_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__insert_column_into_classmap_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_column_into_classmap'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__insert_column_into_classmap_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module28)
	MR_init_entry1(html_format__table_row_to_html_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__table_row_to_html_7_0);
	MR_init_label10(html_format__table_row_to_html_7_0,4,5,6,3,9,12,11,13,14,15)
	MR_init_label9(html_format__table_row_to_html_7_0,16,17,18,8,19,20,21,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_row_to_html'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__table_row_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(html_format__table_row_to_html_7_0_i3);
	}
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		html_format__table_row_to_html_7_0_i4);
MR_def_label(html_format__table_row_to_html_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\"></td></tr>\n", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_row_to_html_7_0_i5);
MR_def_label(html_format__table_row_to_html_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<tr><td colspan=\"", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_row_to_html_7_0_i6);
MR_def_label(html_format__table_row_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__table_row_to_html_7_0_i23);
MR_def_label(html_format__table_row_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(html_format__table_row_to_html_7_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r5, 0);
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		html_format__table_row_to_html_7_0_i9);
MR_def_label(html_format__table_row_to_html_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(html_format__table_row_to_html_7_0_i11);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		html_format__table_row_to_html_7_0_i12);
MR_def_label(html_format__table_row_to_html_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("<tr>\n", 5);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__table_row_to_html_7_0_i15);
MR_def_label(html_format__table_row_to_html_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__table_cell_to_html_8_0,
		html_format__table_row_to_html_7_0_i13);
MR_def_label(html_format__table_row_to_html_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0,
		html_format__table_row_to_html_7_0_i14);
MR_def_label(html_format__table_row_to_html_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("<tr>\n", 5);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__table_row_to_html_7_0_i15);
MR_def_label(html_format__table_row_to_html_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("</tr>\n", 6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		html_format__table_row_to_html_7_0_i16);
MR_def_label(html_format__table_row_to_html_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__table_row_to_html_7_0_i17);
MR_def_label(html_format__table_row_to_html_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		html_format__table_row_to_html_7_0_i18);
MR_def_label(html_format__table_row_to_html_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(html_format__table_row_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_tfield(2, MR_r5, 0);
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_row_to_html_7_0_i19);
MR_def_label(html_format__table_row_to_html_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		html_format__table_row_to_html_7_0_i20);
MR_def_label(html_format__table_row_to_html_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_row_to_html_7_0_i21);
MR_def_label(html_format__table_row_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<tr><td colspan=\"", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_row_to_html_7_0_i22);
MR_def_label(html_format__table_row_to_html_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</td></tr>\n", 11);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__table_row_to_html_7_0_i23);
MR_def_label(html_format__table_row_to_html_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module29)
	MR_init_entry1(html_format__table_data_class_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__table_data_class_2_0);
	MR_init_label5(html_format__table_data_class_2_0,3,4,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_data_class'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__table_data_class_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(html_format__table_data_class_2_0_i3);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__table_data_class_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(html_format__table_data_class_2_0_i4);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__table_data_class_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(html_format__table_data_class_2_0_i5);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__table_data_class_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(html_format__table_data_class_2_0_i6);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__table_data_class_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(html_format__table_data_class_2_0_i1);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__table_data_class_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module30)
	MR_init_entry1(fn__html_format__default_table_column_class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__html_format__default_table_column_class_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_table_column_class'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__html_format__default_table_column_class_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(html_format_module31)
	MR_init_entry1(html_format__table_cell_to_html_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__table_cell_to_html_8_0);
	MR_init_label10(html_format__table_cell_to_html_8_0,3,10,8,13,14,7,16,15,18,19)
	MR_init_label10(html_format__table_cell_to_html_8_0,20,6,23,24,25,26,27,5,33,31)
	MR_init_label10(html_format__table_cell_to_html_8_0,36,37,30,39,38,41,42,43,29,46)
	MR_init_label9(html_format__table_cell_to_html_8_0,47,49,50,51,53,54,55,56,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_cell_to_html'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__table_cell_to_html_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(html_format__table_cell_to_html_8_0_i3);
	}
	MR_sv(3) = MR_r3;
	MR_sv(2) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_string_const("<td/>", 5);
	MR_np_call_localret_ent(fn__html_format__str_to_html_1_0,
		html_format__table_cell_to_html_8_0_i57);
MR_def_label(html_format__table_cell_to_html_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(html_format__table_cell_to_html_8_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(html_format__table_cell_to_html_8_0_i7);
	}
	MR_r2 = MR_tfield(1, MR_r5, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(html_format__table_data_class_2_0,
		html_format__table_cell_to_html_8_0_i10);
MR_def_label(html_format__table_cell_to_html_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(html_format__table_cell_to_html_8_0_i8);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__html_format__table_column_class_to_string_1_0,
		html_format__table_cell_to_html_8_0_i14);
MR_def_label(html_format__table_cell_to_html_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__html_format__default_table_column_class_0_0,
		html_format__table_cell_to_html_8_0_i13);
MR_def_label(html_format__table_cell_to_html_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__html_format__table_column_class_to_string_1_0,
		html_format__table_cell_to_html_8_0_i14);
MR_def_label(html_format__table_cell_to_html_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_cell_to_html_8_0_i23);
MR_def_label(html_format__table_cell_to_html_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r5, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		html_format__table_cell_to_html_8_0_i16);
MR_def_label(html_format__table_cell_to_html_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(html_format__table_cell_to_html_8_0_i15);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_cell_to_html_8_0_i23);
MR_def_label(html_format__table_cell_to_html_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		html_format__table_cell_to_html_8_0_i18);
MR_def_label(html_format__table_cell_to_html_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(", check table structure", 23);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i19);
MR_def_label(html_format__table_cell_to_html_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Class map had no class for col ", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i20);
MR_def_label(html_format__table_cell_to_html_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("html_format", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140html_format.table_cell_to_html\'/8", 44);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		html_format__table_cell_to_html_8_0_i6);
MR_def_label(html_format__table_cell_to_html_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_cell_to_html_8_0_i23);
MR_def_label(html_format__table_cell_to_html_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i24);
MR_def_label(html_format__table_cell_to_html_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("class=\"", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i25);
MR_def_label(html_format__table_cell_to_html_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i26);
MR_def_label(html_format__table_cell_to_html_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<td ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i27);
MR_def_label(html_format__table_cell_to_html_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</td>\n", 6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__table_cell_to_html_8_0_i57);
MR_def_label(html_format__table_cell_to_html_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(html_format__table_cell_to_html_8_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(html_format__table_data_class_2_0,
		html_format__table_cell_to_html_8_0_i33);
MR_def_label(html_format__table_cell_to_html_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(html_format__table_cell_to_html_8_0_i31);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__html_format__table_column_class_to_string_1_0,
		html_format__table_cell_to_html_8_0_i37);
MR_def_label(html_format__table_cell_to_html_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__html_format__default_table_column_class_0_0,
		html_format__table_cell_to_html_8_0_i36);
MR_def_label(html_format__table_cell_to_html_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__html_format__table_column_class_to_string_1_0,
		html_format__table_cell_to_html_8_0_i37);
MR_def_label(html_format__table_cell_to_html_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_cell_to_html_8_0_i46);
MR_def_label(html_format__table_cell_to_html_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		html_format__table_cell_to_html_8_0_i39);
MR_def_label(html_format__table_cell_to_html_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(html_format__table_cell_to_html_8_0_i38);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_cell_to_html_8_0_i46);
MR_def_label(html_format__table_cell_to_html_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		html_format__table_cell_to_html_8_0_i41);
MR_def_label(html_format__table_cell_to_html_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(", check table structure", 23);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i42);
MR_def_label(html_format__table_cell_to_html_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Class map had no class for col ", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i43);
MR_def_label(html_format__table_cell_to_html_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("html_format", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140html_format.table_cell_to_html\'/8", 44);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		html_format__table_cell_to_html_8_0_i29);
MR_def_label(html_format__table_cell_to_html_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__html_format__table_data_to_html_2_0,
		html_format__table_cell_to_html_8_0_i46);
MR_def_label(html_format__table_cell_to_html_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(html_format__table_cell_to_html_8_0_i47);
	}
	MR_sv(2) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(5));
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i53);
MR_def_label(html_format__table_cell_to_html_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		html_format__table_cell_to_html_8_0_i49);
MR_def_label(html_format__table_cell_to_html_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i50);
MR_def_label(html_format__table_cell_to_html_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("colspan=", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i51);
MR_def_label(html_format__table_cell_to_html_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(5));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\">", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i53);
MR_def_label(html_format__table_cell_to_html_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("class=\"", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i54);
MR_def_label(html_format__table_cell_to_html_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i55);
MR_def_label(html_format__table_cell_to_html_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<td ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		html_format__table_cell_to_html_8_0_i56);
MR_def_label(html_format__table_cell_to_html_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</td>\n", 6);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__html_format__wrap_tags_3_0,
		html_format__table_cell_to_html_8_0_i57);
MR_def_label(html_format__table_cell_to_html_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(list__cons_3_0);

MR_BEGIN_MODULE(html_format_module32)
	MR_init_entry1(html_format__replace_special_char_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__replace_special_char_2_4_0);
	MR_init_label3(html_format__replace_special_char_2_4_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_special_char_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__replace_special_char_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(html_format__replace_special_char_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__html_format__replace_special_char_2_4_0_i4);
MR_def_label(html_format__replace_special_char_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(html_format__replace_special_char_2_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		html_format__replace_special_char_2_4_0_i6);
MR_def_label(html_format__replace_special_char_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
	}
MR_def_label(html_format__replace_special_char_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__cons_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module33)
	MR_init_entry1(html_format__special_html_char_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__special_html_char_2_0);
	MR_init_label5(html_format__special_html_char_2_0,3,4,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_html_char'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__special_html_char_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(html_format__special_html_char_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const("&quot;", 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(html_format__special_html_char_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const("&amp;", 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(html_format__special_html_char_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_string_const("&apos;", 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(html_format__special_html_char_2_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const("&lt;", 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(html_format__special_html_char_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const("&gt;", 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module34)
	MR_init_entry1(html_format__special_html_char_or_break_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__html_format__special_html_char_or_break_2_0);
	MR_init_label9(html_format__special_html_char_or_break_2_0,3,4,5,6,7,8,9,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_html_char_or_break'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(html_format__special_html_char_or_break_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(html_format__special_html_char_or_break_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const("&quot;", 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_or_break_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(html_format__special_html_char_or_break_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const("&amp;", 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_or_break_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(html_format__special_html_char_or_break_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_string_const("&apos;", 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_or_break_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(html_format__special_html_char_or_break_2_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const(".<wbr />", 8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_or_break_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(html_format__special_html_char_or_break_2_0_i7);
	}
	MR_r2 = (MR_Word) MR_string_const("/<wbr />", 8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_or_break_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(html_format__special_html_char_or_break_2_0_i8);
	}
	MR_r2 = (MR_Word) MR_string_const(":<wbr />", 8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_or_break_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(html_format__special_html_char_or_break_2_0_i9);
	}
	MR_r2 = (MR_Word) MR_string_const("&lt;", 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_or_break_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(html_format__special_html_char_or_break_2_0_i10);
	}
	MR_r2 = (MR_Word) MR_string_const("&gt;", 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_or_break_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,95)) {
		MR_GOTO_LAB(html_format__special_html_char_or_break_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const("_<wbr />", 8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(html_format__special_html_char_or_break_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(html_format_module35)
	MR_init_entry1(__Unify___html_format__column_class_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___html_format__column_class_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___html_format__column_class_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
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

MR_BEGIN_MODULE(html_format_module36)
	MR_init_entry1(__Compare___html_format__column_class_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___html_format__column_class_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___html_format__column_class_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module37)
	MR_init_entry1(__Unify___html_format__format_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___html_format__format_info_0_0);
	MR_init_label2(__Unify___html_format__format_info_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___html_format__format_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___html_format__format_info_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___html_format__format_info_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___html_format__format_info_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___html_format__format_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___html_format__format_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___html_format__format_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___html_format__format_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___html_format__format_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(html_format_module38)
	MR_init_entry1(__Compare___html_format__format_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___html_format__format_info_0_0);
	MR_init_label8(__Compare___html_format__format_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___html_format__format_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___html_format__format_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___html_format__format_info_0_0_i2);
MR_def_label(__Compare___html_format__format_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___html_format__format_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(6) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tempr3, 0) & (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 0) & (MR_Integer) 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___html_format__format_info_0_0_i5);
MR_def_label(__Compare___html_format__format_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___html_format__format_info_0_0_i53);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___html_format__format_info_0_0_i9);
MR_def_label(__Compare___html_format__format_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___html_format__format_info_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___html_format__format_info_0_0_i13);
MR_def_label(__Compare___html_format__format_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___html_format__format_info_0_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___html_format__format_info_0_0_i17);
MR_def_label(__Compare___html_format__format_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___html_format__format_info_0_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___html_format__format_info_0_0_i21);
MR_def_label(__Compare___html_format__format_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___html_format__format_info_0_0_i53);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___html_format__format_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___cord__cord_1_0);

MR_BEGIN_MODULE(html_format_module39)
	MR_init_entry1(__Unify___html_format__html_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___html_format__html_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___html_format__html_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___cord__cord_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___cord__cord_1_0);

MR_BEGIN_MODULE(html_format_module40)
	MR_init_entry1(__Compare___html_format__html_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___html_format__html_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___html_format__html_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___cord__cord_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module41)
	MR_init_entry1(__Unify___html_format__style_control_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___html_format__style_control_0_0);
	MR_init_label1(__Unify___html_format__style_control_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___html_format__style_control_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___html_format__style_control_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___html_format__style_control_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module42)
	MR_init_entry1(__Compare___html_format__style_control_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___html_format__style_control_0_0);
	MR_init_label2(__Compare___html_format__style_control_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___html_format__style_control_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___html_format__style_control_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___html_format__style_control_0_0_i2);
MR_def_label(__Compare___html_format__style_control_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___html_format__style_control_0_0,2)
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


MR_BEGIN_MODULE(html_format_module43)
	MR_init_entry1(__Unify___html_format__style_control_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___html_format__style_control_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___html_format__style_control_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, style_control);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module44)
	MR_init_entry1(__Compare___html_format__style_control_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___html_format__style_control_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___html_format__style_control_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, style_control);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module45)
	MR_init_entry1(__Unify___html_format__style_element_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___html_format__style_element_0_0);
	MR_init_label1(__Unify___html_format__style_element_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___html_format__style_element_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___html_format__style_element_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___html_format__style_element_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module46)
	MR_init_entry1(__Compare___html_format__style_element_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___html_format__style_element_0_0);
	MR_init_label2(__Compare___html_format__style_element_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___html_format__style_element_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___html_format__style_element_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___html_format__style_element_0_0_i2);
MR_def_label(__Compare___html_format__style_element_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___html_format__style_element_0_0,2)
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


MR_BEGIN_MODULE(html_format_module47)
	MR_init_entry1(__Unify___html_format__style_element_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___html_format__style_element_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___html_format__style_element_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, style_element);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module48)
	MR_init_entry1(__Compare___html_format__style_element_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___html_format__style_element_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___html_format__style_element_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, style_element);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module49)
	MR_init_entry1(__Unify___html_format__table_header_rows_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___html_format__table_header_rows_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___html_format__table_header_rows_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module50)
	MR_init_entry1(__Compare___html_format__table_header_rows_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___html_format__table_header_rows_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___html_format__table_header_rows_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module51)
	MR_init_entry1(fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0);
	MR_init_label3(fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__pseudo_link_to_html__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("[%s]", 4);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0_i4);
MR_def_label(fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("%s", 2);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0_i4);
MR_def_label(fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0_i7);
MR_def_label(fn__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module52)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0);
	MR_init_label3(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0,4,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__sep_map_join_html__ho1__[5]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0_i3);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0_i4);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r4 = MR_r5;
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__item_to_html_7_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module53)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0);
	MR_init_label4(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0,2,5,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map_join_html__ho4__[4]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0_i2);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__table_row_to_html_7_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0_i6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module54)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0);
	MR_init_label4(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0,2,5,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map_join_html__ho5__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0_i2);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__table_header_group_to_html_row_2_5_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0_i6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module55)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0);
	MR_init_label4(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0,2,5,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map_join_html__ho6__[3]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0_i2);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__table_header_group_to_html_row_1_6_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0_i6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module56)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0);
	MR_init_label4(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0,2,5,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map_join_html__ho9__[4]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0_i2);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__item_to_html_7_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0_i6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module57)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0);
	MR_init_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__sep_map_join_html_acc__ho15__[5]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(9);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r4 = MR_r5;
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__item_to_html_7_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0_i4);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0_i6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module58)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0);
	MR_init_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__sep_map_join_html_count_acc__ho16__[4]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(9);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__table_cell_to_html_8_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0_i4);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0_i6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module59)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0);
	MR_init_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__sep_map_join_html_acc__ho17__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__table_data_to_th_html_6_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0_i6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module60)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0);
	MR_init_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__sep_map_join_html_acc__ho18__[5]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(9);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r4 = MR_r5;
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__table_row_to_html_7_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0_i4);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0_i6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module61)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0);
	MR_init_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__sep_map_join_html_acc__ho19__[3]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__table_header_group_to_html_row_2_5_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0_i4);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0_i6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(html_format_module62)
	MR_init_entry1(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0);
	MR_init_label5(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__sep_map_join_html_acc__ho20__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(html_format__table_header_group_to_html_row_1_6_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0_i5);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0_i6);
MR_def_label(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_104_116_109_108_95_102_111_114_109_97_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__html_format_maybe_bunch_0(void)
{
	html_format_module0();
	html_format_module1();
	html_format_module2();
	html_format_module3();
	html_format_module4();
	html_format_module5();
	html_format_module6();
	html_format_module7();
	html_format_module8();
	html_format_module9();
	html_format_module10();
	html_format_module11();
	html_format_module12();
	html_format_module13();
	html_format_module14();
	html_format_module15();
	html_format_module16();
	html_format_module17();
	html_format_module18();
	html_format_module19();
	html_format_module20();
	html_format_module21();
	html_format_module22();
	html_format_module23();
	html_format_module24();
	html_format_module25();
	html_format_module26();
	html_format_module27();
	html_format_module28();
	html_format_module29();
	html_format_module30();
	html_format_module31();
	html_format_module32();
	html_format_module33();
	html_format_module34();
	html_format_module35();
	html_format_module36();
	html_format_module37();
	html_format_module38();
	html_format_module39();
}

static void mercury__html_format_maybe_bunch_1(void)
{
	html_format_module40();
	html_format_module41();
	html_format_module42();
	html_format_module43();
	html_format_module44();
	html_format_module45();
	html_format_module46();
	html_format_module47();
	html_format_module48();
	html_format_module49();
	html_format_module50();
	html_format_module51();
	html_format_module52();
	html_format_module53();
	html_format_module54();
	html_format_module55();
	html_format_module56();
	html_format_module57();
	html_format_module58();
	html_format_module59();
	html_format_module60();
	html_format_module61();
	html_format_module62();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__html_format__init(void);
void mercury__html_format__init_type_tables(void);
void mercury__html_format__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__html_format__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__html_format__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__html_format__init_threadscope_string_table(void);
#endif

void mercury__html_format__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__html_format_maybe_bunch_0();
	mercury__html_format_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_html_format__type_ctor_info_column_class_map_0,
		html_format__column_class_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_html_format__type_ctor_info_format_info_0,
		html_format__format_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_html_format__type_ctor_info_html_0,
		html_format__html_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_html_format__type_ctor_info_style_control_0,
		html_format__style_control_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_html_format__type_ctor_info_style_control_map_0,
		html_format__style_control_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_html_format__type_ctor_info_style_element_0,
		html_format__style_element_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_html_format__type_ctor_info_style_element_map_0,
		html_format__style_element_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_html_format__type_ctor_info_table_header_rows_0,
		html_format__table_header_rows_0_0);
	mercury__html_format__init_debugger();
}

void mercury__html_format__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_html_format__type_ctor_info_column_class_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_html_format__type_ctor_info_format_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_html_format__type_ctor_info_html_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_html_format__type_ctor_info_style_control_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_html_format__type_ctor_info_style_control_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_html_format__type_ctor_info_style_element_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_html_format__type_ctor_info_style_element_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_html_format__type_ctor_info_table_header_rows_0);
	}
}


void mercury__html_format__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__html_format__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__html_format);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__html_format__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__html_format__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
