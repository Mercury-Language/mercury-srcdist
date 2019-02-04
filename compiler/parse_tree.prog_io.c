/*
** Automatically generated from `prog_io.m'
** by the Mercury compiler,
** version rotd-2011-09-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__parse_tree__prog_io__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "parse_tree.prog_io.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "parse_tree.prog_io.c"
#line 58 "../library/dir.int"
#include "dir.mh"

#line 36 "parse_tree.prog_io.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "parse_tree.prog_io.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "parse_tree.prog_io.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "parse_tree.prog_io.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 52 "parse_tree.prog_io.c"
#line 53 "parse_tree.prog_io.c"
#include "parse_tree.prog_io.mh"

#line 56 "parse_tree.prog_io.c"
#line 57 "parse_tree.prog_io.c"
#ifndef PARSE_TREE__PROG_IO_DECL_GUARD
#define PARSE_TREE__PROG_IO_DECL_GUARD

#line 61 "parse_tree.prog_io.c"
#line 62 "parse_tree.prog_io.c"

#endif
#line 65 "parse_tree.prog_io.c"

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
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_io__type_ctor_info_maker_2,
	mercury_data_parse_tree__prog_io__type_ctor_info_maybe_return_timestamp_0,
	mercury_data_parse_tree__prog_io__type_ctor_info_module_end_0,
	mercury_data_parse_tree__prog_io__type_ctor_info_module_error_0,
	mercury_data_parse_tree__prog_io__type_ctor_info_read_item_result_0;
MR_decl_label1(parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0, 3)
MR_decl_label10(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0, 2,3,6,5,22,23,24,26,28,21)
MR_decl_label5(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0, 36,32,38,40,41)
MR_decl_label3(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0, 28,6,2)
MR_decl_label8(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0, 4,5,7,10,9,19,23,1)
MR_decl_label2(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0, 2,4)
MR_decl_label2(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0, 2,4)
MR_decl_label2(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0, 2,4)
MR_decl_label1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_0, 3)
MR_decl_label10(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0, 11,13,15,17,60,19,12,24,6,7)
MR_decl_label3(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0, 35,34,1)
MR_decl_label4(parse_tree__prog_io__actually_read_opt_file_8_0, 2,4,5,6)
MR_decl_label4(parse_tree__prog_io__check_end_module_7_0, 10,5,6,2)
MR_decl_label2(parse_tree__prog_io__check_module_has_expected_name_4_0, 5,2)
MR_decl_label10(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0, 126,3,4,142,9,5,11,14,12,18)
MR_decl_label10(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0, 16,21,25,22,20,30,29,150,36,149)
MR_decl_label3(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0, 40,38,45)
MR_decl_label2(parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0, 5,2)
MR_decl_label1(parse_tree__prog_io__constrain_inst_vars_in_mode_2_0, 3)
MR_decl_label4(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0, 4,5,3,8)
MR_decl_label1(parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0, 3)
MR_decl_label10(parse_tree__prog_io__find_module_name_5_0, 2,5,6,26,4,27,29,28,34,33)
MR_decl_label6(parse_tree__prog_io__find_module_name_5_0, 37,38,39,41,42,43)
MR_decl_label10(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0, 3,4,5,9,10,11,12,18,13,23)
MR_decl_label2(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0, 24,25)
MR_decl_label10(parse_tree__prog_io__get_constraints_6_0, 5,6,10,12,7,17,18,19,2,23)
MR_decl_label1(parse_tree__prog_io__get_purity_3_0, 2)
MR_decl_label10(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0, 128,3,9,14,24,20,28,60,36,1)
MR_decl_label5(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0, 4,6,2,9,1)
MR_decl_label3(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0, 4,3,1)
MR_decl_label1(parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0, 3)
MR_decl_label4(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0, 6,20,5,1)
MR_decl_label1(parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0, 3)
MR_decl_label10(parse_tree__prog_io__parse_attributed_decl_8_0, 3,10,7,22,15,12,26,30,37,39)
MR_decl_label10(parse_tree__prog_io__parse_attributed_decl_8_0, 34,44,43,48,47,52,51,58,64,68)
MR_decl_label10(parse_tree__prog_io__parse_attributed_decl_8_0, 69,55,72,75,71,79,85,88,84,95)
MR_decl_label10(parse_tree__prog_io__parse_attributed_decl_8_0, 96,97,99,92,103,108,113,118,127,129)
MR_decl_label10(parse_tree__prog_io__parse_attributed_decl_8_0, 123,664,140,137,143,142,147,146,153,150)
MR_decl_label3(parse_tree__prog_io__parse_attributed_decl_8_0, 156,158,1)
MR_decl_label8(parse_tree__prog_io__parse_attrs_and_decl_6_0, 68,7,5,14,12,16,2,34)
MR_decl_label10(parse_tree__prog_io__parse_clause_7_0, 2,5,14,17,19,22,25,7,31,33)
MR_decl_label2(parse_tree__prog_io__parse_clause_7_0, 38,3)
MR_decl_label6(parse_tree__prog_io__parse_determinism_suffix_4_0, 14,9,10,18,26,2)
MR_decl_label10(parse_tree__prog_io__parse_func_decl_base_9_0, 2,4,13,14,16,20,19,23,35,43)
MR_decl_label10(parse_tree__prog_io__parse_func_decl_base_9_0, 46,44,49,57,58,63,64,65,6,68)
MR_decl_label10(parse_tree__prog_io__parse_func_decl_base_2_14_0, 4,2,6,13,18,14,25,30,26,37)
MR_decl_label10(parse_tree__prog_io__parse_func_decl_base_2_14_0, 38,39,42,43,44,46,49,48,55,66)
MR_decl_label1(parse_tree__prog_io__parse_func_decl_base_2_14_0, 41)
MR_decl_label10(parse_tree__prog_io__parse_func_mode_decl_13_0, 3,5,7,10,12,14,15,17,20,19)
MR_decl_label7(parse_tree__prog_io__parse_func_mode_decl_13_0, 27,40,11,49,2,58,68)
MR_decl_label5(parse_tree__prog_io__parse_item_5_0, 2,140,17,24,28)
MR_decl_label9(parse_tree__prog_io__parse_mode_decl_7_0, 2,3,4,11,8,5,22,24,25)
MR_decl_label6(parse_tree__prog_io__parse_mode_decl_base_10_0, 10,11,13,2,16,18)
MR_decl_label1(parse_tree__prog_io__parse_module_name_4_0, 3)
MR_decl_label10(parse_tree__prog_io__parse_pred_decl_base_12_0, 2,4,8,11,12,13,15,19,23,29)
MR_decl_label10(parse_tree__prog_io__parse_pred_decl_base_12_0, 25,42,37,52,54,55,56,51,61,66)
MR_decl_label10(parse_tree__prog_io__parse_pred_decl_base_12_0, 74,75,76,22,87,18,96,99,107,108)
MR_decl_label1(parse_tree__prog_io__parse_pred_decl_base_12_0, 109)
MR_decl_label10(parse_tree__prog_io__parse_pred_mode_decl_12_0, 3,5,7,10,11,14,17,13,26,39)
MR_decl_label3(parse_tree__prog_io__parse_pred_mode_decl_12_0, 2,48,56)
MR_decl_label10(parse_tree__prog_io__parse_pred_or_func_decl_8_0, 2,3,4,5,13,10,24,21,32,6)
MR_decl_label5(parse_tree__prog_io__parse_pred_or_func_decl_8_0, 41,43,45,46,47)
MR_decl_label6(parse_tree__prog_io__parse_type_and_mode_3_0, 9,11,13,2,15,1)
MR_decl_label8(parse_tree__prog_io__parse_type_and_mode_list_3_0, 95,11,13,15,4,17,21,1)
MR_decl_label4(parse_tree__prog_io__parse_with_inst_suffix_3_0, 10,9,14,2)
MR_decl_label5(parse_tree__prog_io__parse_with_type_suffix_4_0, 9,8,11,13,2)
MR_decl_label10(parse_tree__prog_io__read_all_items_8_0, 2,3,4,5,8,10,11,16,12,13)
MR_decl_label2(parse_tree__prog_io__read_all_items_8_0, 20,21)
MR_decl_label10(parse_tree__prog_io__read_first_item_12_0, 108,2,3,4,5,15,13,19,17,42)
MR_decl_label5(parse_tree__prog_io__read_first_item_12_0, 43,10,44,47,55)
MR_decl_label2(parse_tree__prog_io__read_items_loop_13_0, 2,3)
MR_decl_label4(parse_tree__prog_io__read_items_loop_2_14_0, 22,5,4,7)
MR_decl_label10(parse_tree__prog_io__read_items_loop_ok_14_0, 7,4,12,9,17,18,14,3,24,25)
MR_decl_label10(parse_tree__prog_io__read_items_loop_ok_14_0, 23,27,165,34,35,33,37,46,53,55)
MR_decl_label3(parse_tree__prog_io__read_items_loop_ok_14_0, 29,63,62)
MR_decl_label6(parse_tree__prog_io__read_term_to_item_result_6_0, 48,10,4,18,19,21)
MR_decl_label10(parse_tree__prog_io__search_for_module_source_7_0, 2,6,8,10,13,15,16,17,20,24)
MR_decl_label10(parse_tree__prog_io__search_for_module_source_7_0, 26,28,29,31,33,34,35,22,42,43)
MR_decl_label10(parse_tree__prog_io__search_for_module_source_7_0, 48,49,50,52,53,54,55,56,57,58)
MR_decl_label5(parse_tree__prog_io__search_for_module_source_7_0, 59,45,61,5,3)
MR_decl_label10(parse_tree__prog_io__search_for_module_source_2_7_0, 27,2,3,9,7,11,12,13,14,15)
MR_decl_label1(parse_tree__prog_io__search_for_module_source_2_7_0, 29)
MR_decl_label1(parse_tree__prog_io__verify_type_and_mode_list_1_0, 2)
MR_decl_label3(parse_tree__prog_io__verify_type_and_mode_list_2_2_0, 5,2,1)
MR_decl_label5(fn__parse_tree__prog_io__desugar_field_access_1_0, 13,2,30,35,176)
MR_decl_label3(fn__parse_tree__prog_io__drop_one_qualifier_2_2_0, 6,7,2)
MR_decl_label1(fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0, 3)
MR_decl_label4(__Unify___parse_tree__prog_io__module_end_0_0, 14,5,7,1)
MR_decl_label4(__Unify___parse_tree__prog_io__read_item_result_0_0, 5,19,6,1)
MR_decl_label6(__Compare___parse_tree__prog_io__module_end_0_0, 24,7,5,9,11,16)
MR_decl_label7(__Compare___parse_tree__prog_io__read_item_result_0_0, 30,31,5,11,9,15,16)
MR_decl_static(parse_tree__prog_io__check_end_module_7_0)
MR_decl_static(parse_tree__prog_io__make_module_decl_3_0)
MR_decl_static(parse_tree__prog_io__dummy_term_with_context_2_0)
MR_decl_static(parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0)
MR_decl_static(parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0)
MR_decl_static(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0)
MR_def_extern_entry(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0)
MR_decl_static(parse_tree__prog_io__parse_type_and_mode_3_0)
MR_decl_static(parse_tree__prog_io__parse_type_and_mode_list_3_0)
MR_decl_static(parse_tree__prog_io__verify_type_and_mode_list_2_2_0)
MR_decl_static(parse_tree__prog_io__verify_type_and_mode_list_1_0)
MR_decl_static(parse_tree__prog_io__get_constraints_6_0)
MR_decl_static(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0)
MR_decl_static(parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0)
MR_decl_static(parse_tree__prog_io__get_purity_3_0)
MR_decl_static(fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0)
MR_decl_static(parse_tree__prog_io__parse_pred_decl_base_12_0)
MR_decl_static(parse_tree__prog_io__parse_func_decl_base_2_14_0)
MR_decl_static(fn__parse_tree__prog_io__desugar_field_access_1_0)
MR_decl_static(parse_tree__prog_io__parse_func_decl_base_9_0)
MR_decl_static(parse_tree__prog_io__parse_determinism_suffix_4_0)
MR_decl_static(parse_tree__prog_io__parse_with_type_suffix_4_0)
MR_decl_static(parse_tree__prog_io__parse_with_inst_suffix_3_0)
MR_decl_static(parse_tree__prog_io__parse_pred_or_func_decl_8_0)
MR_decl_static(parse_tree__prog_io__inst_var_constraints_are_consistent_in_modes_3_0)
MR_def_extern_entry(parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0)
MR_decl_static(parse_tree__prog_io__parse_pred_mode_decl_12_0)
MR_decl_static(parse_tree__prog_io__parse_func_mode_decl_13_0)
MR_decl_static(parse_tree__prog_io__parse_mode_decl_base_10_0)
MR_decl_static(parse_tree__prog_io__parse_mode_decl_7_0)
MR_decl_static(parse_tree__prog_io__parse_module_name_4_0)
MR_decl_static(parse_tree__prog_io__parse_attributed_decl_8_0)
MR_decl_static(parse_tree__prog_io__parse_attrs_and_decl_6_0)
MR_def_extern_entry(parse_tree__prog_io__parse_decl_5_0)
MR_decl_static(parse_tree__prog_io__parse_clause_7_0)
MR_def_extern_entry(parse_tree__prog_io__parse_item_5_0)
MR_decl_static(parse_tree__prog_io__read_term_to_item_result_6_0)
MR_decl_static(parse_tree__prog_io__read_first_item_12_0)
MR_decl_static(parse_tree__prog_io__read_items_loop_ok_14_0)
MR_decl_static(parse_tree__prog_io__read_items_loop_13_0)
MR_decl_static(parse_tree__prog_io__read_items_loop_2_14_0)
MR_decl_static(parse_tree__prog_io__read_all_items_8_0)
MR_def_extern_entry(parse_tree__prog_io__actually_read_module_12_0)
MR_def_extern_entry(parse_tree__prog_io__actually_read_module_if_changed_12_0)
MR_def_extern_entry(parse_tree__prog_io__check_module_has_expected_name_4_0)
MR_def_extern_entry(parse_tree__prog_io__actually_read_opt_file_8_0)
MR_decl_static(fn__parse_tree__prog_io__drop_one_qualifier_2_2_0)
MR_decl_static(parse_tree__prog_io__search_for_module_source_2_7_0)
MR_def_extern_entry(parse_tree__prog_io__search_for_module_source_7_0)
MR_def_extern_entry(parse_tree__prog_io__find_module_name_5_0)
MR_def_extern_entry(parse_tree__prog_io__constrain_inst_vars_in_mode_2_0)
MR_decl_static(parse_tree__prog_io__inst_var_constraints_are_consistent_in_insts_3_0)
MR_decl_static(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0)
MR_decl_static(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0)
MR_decl_static(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0)
MR_decl_static(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0)
MR_decl_static(parse_tree__prog_io__parse_module_specifier_3_0)
MR_decl_static(parse_tree__prog_io__make_pseudo_import_module_decl_4_0)
MR_decl_static(parse_tree__prog_io__make_pseudo_use_module_decl_4_0)
MR_decl_static(parse_tree__prog_io__make_pseudo_include_module_decl_4_0)
MR_decl_static(__Unify___parse_tree__prog_io__maker_2_0)
MR_decl_static(__Compare___parse_tree__prog_io__maker_2_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io__maybe_return_timestamp_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io__maybe_return_timestamp_0_0)
MR_decl_static(__Unify___parse_tree__prog_io__module_end_0_0)
MR_decl_static(__Compare___parse_tree__prog_io__module_end_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io__module_error_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io__module_error_0_0)
MR_decl_static(__Unify___parse_tree__prog_io__read_item_result_0_0)
MR_decl_static(__Compare___parse_tree__prog_io__read_item_result_0_0)
MR_decl_static(parse_tree__prog_io__IntroducedFrom__pred__parse_clause__986__1_2_0)
MR_decl_static(parse_tree__prog_io__IntroducedFrom__pred__parse_clause__1002__1_2_0)
MR_decl_static(parse_tree__prog_io__IntroducedFrom__pred__get_class_context_and_inst_constraints__1988__1_2_0)
MR_decl_static(parse_tree__prog_io__IntroducedFrom__pred__parse_promise__2076__1_2_0)
MR_decl_static(parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0)
MR_decl_static(parse_tree__prog_io__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__2386__1_3_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_and_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe1_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_1;
static const struct mercury_type_0 mercury_common_0[101] =
{
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,0),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(2,2,0),
MR_TAG_COMMON(1,0,1)
}
},
{
{
MR_TAG_COMMON(3,1,1),
MR_TAG_COMMON(1,0,2)
}
},
{
{
MR_TAG_COMMON(3,1,2),
MR_TAG_COMMON(1,0,3)
}
},
{
{
MR_TAG_COMMON(2,2,1),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(3,1,3),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_TAG_COMMON(0,3,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_TAG_COMMON(3,1,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,2,3),
MR_TAG_COMMON(1,0,15)
}
},
{
{
MR_TAG_COMMON(2,2,4),
MR_TAG_COMMON(1,0,15)
}
},
{
{
MR_TAG_COMMON(3,1,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,6),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(2,2,5),
MR_TAG_COMMON(1,0,20)
}
},
{
{
MR_TAG_COMMON(3,1,3),
MR_TAG_COMMON(1,0,21)
}
},
{
{
MR_TAG_COMMON(0,3,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(2,2,5),
MR_TAG_COMMON(1,0,24)
}
},
{
{
MR_TAG_COMMON(3,1,8),
MR_TAG_COMMON(1,0,25)
}
},
{
{
MR_TAG_COMMON(0,3,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,9),
MR_TAG_COMMON(1,0,28)
}
},
{
{
MR_TAG_COMMON(3,1,11),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(3,1,12),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(3,1,13),
MR_TAG_COMMON(1,0,31)
}
},
{
{
MR_TAG_COMMON(0,3,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,14),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,16),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(0,3,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,17),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(3,1,18),
MR_TAG_COMMON(1,0,37)
}
},
{
{
MR_TAG_COMMON(0,3,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,19),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(3,1,20),
MR_TAG_COMMON(1,0,40)
}
},
{
{
MR_TAG_COMMON(0,3,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_TAG_COMMON(3,1,4),
MR_TAG_COMMON(1,0,16)
}
},
{
{
MR_TAG_COMMON(2,2,3),
MR_TAG_COMMON(1,0,1)
}
},
{
{
MR_TAG_COMMON(3,1,25),
MR_TAG_COMMON(1,0,45)
}
},
{
{
MR_TAG_COMMON(3,1,26),
MR_TAG_COMMON(1,0,46)
}
},
{
{
MR_TAG_COMMON(0,3,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode)
}
},
{
{
MR_TAG_COMMON(3,1,27),
MR_TAG_COMMON(1,0,45)
}
},
{
{
MR_TAG_COMMON(2,2,6),
MR_TAG_COMMON(1,0,50)
}
},
{
{
MR_TAG_COMMON(3,1,3),
MR_TAG_COMMON(1,0,51)
}
},
{
{
MR_TAG_COMMON(0,3,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,2,5),
MR_TAG_COMMON(1,0,30)
}
},
{
{
MR_TAG_COMMON(3,1,29),
MR_TAG_COMMON(1,0,54)
}
},
{
{
MR_TAG_COMMON(0,3,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,30),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(2,2,5),
MR_TAG_COMMON(1,0,57)
}
},
{
{
MR_TAG_COMMON(3,1,3),
MR_TAG_COMMON(1,0,58)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,2,7),
MR_TAG_COMMON(1,0,30)
}
},
{
{
MR_TAG_COMMON(3,1,31),
MR_TAG_COMMON(1,0,61)
}
},
{
{
MR_TAG_COMMON(3,1,32),
MR_TAG_COMMON(1,0,62)
}
},
{
{
MR_TAG_COMMON(2,2,5),
MR_TAG_COMMON(1,0,63)
}
},
{
{
MR_TAG_COMMON(3,1,3),
MR_TAG_COMMON(1,0,64)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__prog_data, determinism)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_TAG_COMMON(3,1,37),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(3,1,38),
MR_TAG_COMMON(1,0,70)
}
},
{
{
MR_TAG_COMMON(0,3,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,2,8),
MR_TAG_COMMON(1,0,15)
}
},
{
{
MR_TAG_COMMON(3,1,40),
MR_TAG_COMMON(1,0,73)
}
},
{
{
MR_TAG_COMMON(3,1,4),
MR_TAG_COMMON(1,0,73)
}
},
{
{
MR_TAG_COMMON(3,1,41),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(3,1,42),
MR_TAG_COMMON(1,0,76)
}
},
{
{
MR_TAG_COMMON(3,1,43),
MR_TAG_COMMON(1,0,77)
}
},
{
{
MR_TAG_COMMON(0,3,14),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(parse_tree__prog_io_util, maybe1),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
{
{
MR_TAG_COMMON(3,1,45),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(0,3,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,46),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_TAG_COMMON(3,1,47),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,50),
MR_TAG_COMMON(1,0,2)
}
},
{
{
MR_TAG_COMMON(0,3,16),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_TAG_COMMON(2,2,10),
MR_TAG_COMMON(1,0,30)
}
},
{
{
MR_TAG_COMMON(3,1,58),
MR_TAG_COMMON(1,0,94)
}
},
{
{
MR_TAG_COMMON(0,3,17),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,59),
MR_TAG_COMMON(1,0,94)
}
},
{
{
MR_TAG_COMMON(0,3,18),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_1 mercury_common_1[60] =
{
{
4,
MR_string_const("declaration.", 12)
},
{
4,
MR_string_const("does not match", 14)
},
{
4,
MR_string_const("declaration", 11)
},
{
4,
MR_string_const("Error:", 6)
},
{
4,
MR_string_const("In", 2)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("specified without argument modes.", 33)
},
{
4,
MR_string_const("not specified.", 14)
},
{
4,
MR_string_const("Error: arguments have modes but", 31)
},
{
4,
MR_string_const("Error: inconsistent constraints on", 34)
},
{
4,
MR_string_const("inst variables in", 17)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("have modes.", 11)
},
{
4,
MR_string_const("Error: some but not all arguments", 33)
},
{
4,
MR_string_const("Error: syntax error in", 22)
},
{
4,
MR_string_const("at", 2)
},
{
4,
MR_string_const("Error: some but not all arguments have modes.", 45)
},
{
4,
MR_string_const("but function result does not.", 29)
},
{
4,
MR_string_const("Error: function arguments have modes,", 37)
},
{
4,
MR_string_const("but function arguments do not.", 30)
},
{
4,
MR_string_const("Error: function result has mode,", 32)
},
{
4,
MR_string_const("Error: inconsistent constraints", 31)
},
{
4,
MR_string_const("on inst variables in function declaration:", 42)
},
{
4,
MR_string_const("Error: syntax error in arguments of", 35)
},
{
4,
MR_string_const("declaration at", 14)
},
{
4,
MR_string_const("in return type of", 17)
},
{
4,
MR_string_const("Error: syntax error", 19)
},
{
4,
MR_string_const("expected in", 11)
},
{
4,
MR_string_const("Error: invalid determinism category", 35)
},
{
4,
MR_string_const("Error: invalid inst in", 22)
},
{
4,
MR_string_const("and determinism both specified.", 31)
},
{
4,
MR_string_const("without", 7)
},
{
4,
MR_string_const("specified", 9)
},
{
4,
MR_string_const("on inst variables", 17)
},
{
4,
MR_string_const("in predicate mode declaration:", 30)
},
{
4,
MR_string_const("Error: syntax error in mode declaration at", 42)
},
{
4,
MR_string_const("in function mode declaration:", 29)
},
{
4,
MR_string_const("of function mode declaration.", 29)
},
{
4,
MR_string_const("Error: syntax error in return mode", 34)
},
{
4,
MR_string_const("function mode declaration at", 28)
},
{
4,
MR_string_const("In function", 11)
},
{
4,
MR_string_const("(e.g. \":- module \'Foo\'.\").", 26)
},
{
4,
MR_string_const("must be quoted using single quotes", 34)
},
{
4,
MR_string_const("Error: module names starting with capital letters", 49)
},
{
4,
MR_string_const("Error: unrecognized declaration:", 32)
},
{
4,
MR_string_const("Error: atom expected after \140:-\'.", 32)
},
{
4,
MR_string_const("In equation head:", 17)
},
{
4,
MR_string_const("In clause head:", 15)
},
{
4,
MR_string_const("Error: source file", 18)
},
{
4,
MR_string_const("contains module named", 21)
},
{
4,
MR_string_const("Error: module must start with a", 31)
},
{
4,
MR_string_const("Warning: ", 9)
},
{
4,
MR_string_const("Error: file", 11)
},
{
4,
MR_string_const("contains the wrong module.", 26)
},
{
4,
MR_string_const("Expected module", 15)
},
{
3,
MR_string_const(",", 1)
},
{
4,
MR_string_const("found module", 12)
},
{
4,
MR_string_const("error opening", 13)
},
{
4,
MR_string_const("Error: invalid module name in", 29)
},
{
4,
MR_string_const("Error: invalid version number in", 32)
},
};

static const struct mercury_type_2 mercury_common_2[11] =
{
{
MR_string_const(":- module", 9)
},
{
MR_string_const(":- end_module", 13)
},
{
MR_string_const("", 0)
},
{
MR_string_const(":- func", 7)
},
{
MR_string_const(":- pred", 7)
},
{
MR_string_const("with_inst", 9)
},
{
MR_string_const("=", 1)
},
{
MR_string_const("with_type", 9)
},
{
MR_string_const(":- mode", 7)
},
{
MR_string_const("true", 4)
},
{
MR_string_const(":- version_numbers", 18)
},
};

static const struct mercury_type_3 mercury_common_3[19] =
{
{
MR_TAG_COMMON(1,0,6)
},
{
MR_TAG_COMMON(1,0,22)
},
{
MR_TAG_COMMON(1,0,26)
},
{
MR_TAG_COMMON(1,0,32)
},
{
MR_TAG_COMMON(1,0,35)
},
{
MR_TAG_COMMON(1,0,38)
},
{
MR_TAG_COMMON(1,0,41)
},
{
MR_TAG_COMMON(1,0,47)
},
{
MR_TAG_COMMON(1,0,52)
},
{
MR_tbmkword(0, 0)
},
{
MR_TAG_COMMON(1,0,55)
},
{
MR_TAG_COMMON(1,0,59)
},
{
MR_TAG_COMMON(1,0,65)
},
{
MR_TAG_COMMON(1,0,71)
},
{
MR_TAG_COMMON(1,0,78)
},
{
MR_TAG_COMMON(1,0,83)
},
{
MR_TAG_COMMON(1,0,89)
},
{
MR_TAG_COMMON(1,0,95)
},
{
MR_TAG_COMMON(1,0,97)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_decl_attribute_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,8),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,9),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_io_util, decl_attribute),
MR_CTOR0_ADDR(term, context)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_mode_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_and_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_modes_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_pred_mode_decl_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_func_mode_decl_13_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_insts_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__2386__1_3_0_1;
static const struct mercury_type_5 mercury_common_5[18] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_mode_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_modes_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__parse_pred_mode_decl_12_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__parse_func_mode_decl_13_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,80),
MR_COMMON(0,81),
MR_COMMON(0,82)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,80),
MR_COMMON(0,81),
MR_COMMON(0,82)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,80),
MR_COMMON(0,81),
MR_COMMON(0,82)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_insts_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__2386__1_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_clause_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_clause_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_1;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,13),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__parse_clause_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,81),
MR_COMMON(0,87)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__parse_clause_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,81),
MR_COMMON(0,87)
},
{
(MR_Word *) &mercury_data__closure_layout__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,13),
MR_COMMON(0,100)
},
};

static const struct mercury_type_8 mercury_common_8[11] =
{
{
MR_COMMON(7,0),
MR_ENTRY_AP(parse_tree__prog_io__IntroducedFrom__pred__get_class_context_and_inst_constraints__1988__1_2_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0),
0
},
{
MR_COMMON(5,6),
MR_ENTRY_AP(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0),
0
},
{
MR_COMMON(5,7),
MR_ENTRY_AP(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(parse_tree__prog_io__IntroducedFrom__pred__parse_clause__986__1_2_0),
0
},
{
MR_COMMON(7,2),
MR_ENTRY_AP(parse_tree__prog_io__IntroducedFrom__pred__parse_clause__1002__1_2_0),
0
},
{
MR_COMMON(5,13),
MR_ENTRY_AP(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0),
0
},
{
MR_COMMON(5,14),
MR_ENTRY_AP(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0),
0
},
{
MR_COMMON(5,15),
MR_ENTRY_AP(parse_tree__prog_io__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__2386__1_3_0),
0
},
{
MR_COMMON(5,17),
MR_ENTRY_AP(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0),
0
},
{
MR_COMMON(7,3),
MR_ENTRY_AP(parse_tree__prog_io__IntroducedFrom__pred__parse_promise__2076__1_2_0),
0
},
};

static const struct mercury_type_9 mercury_common_9[3] =
{
{
0
},
{
1
},
{
23
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__read_items_loop_ok_14_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__read_items_loop_ok_14_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__read_items_loop_ok_14_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_3;
static const struct mercury_type_10 mercury_common_10[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(0,80),
MR_COMMON(0,81),
MR_COMMON(0,82)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__read_items_loop_ok_14_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(term, context),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(parse_tree__prog_item, item)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__read_items_loop_ok_14_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(term, context),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(parse_tree__prog_item, item)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__read_items_loop_ok_14_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(term, context),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(parse_tree__prog_item, item)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(0,93),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
22,
1
},
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__actually_read_opt_file_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__file_util__type_ctor_info_maybe_open_file_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io__actually_read_opt_file_8_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(libs__file_util, maybe_open_file),
MR_COMMON(0,91),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,92),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_pred_2__pseudo_1__pseudo_2 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io__type_ctor_info_maker_2 = {
	2,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io__maker_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io__maker_2_0)),
	"parse_tree.prog_io",
	"maker",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_2__pseudo_1__pseudo_2 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_0 = {
	"do_return_timestamp",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_1 = {
	"do_not_return_timestamp",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_io__enum_value_ordered_maybe_return_timestamp_0[] = {
	&mercury_data_parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_0,
	&mercury_data_parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_io__enum_name_ordered_maybe_return_timestamp_0[] = {
	&mercury_data_parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_1,
	&mercury_data_parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_0
};

const MR_Integer mercury_data_parse_tree__prog_io__functor_number_map_maybe_return_timestamp_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io__type_ctor_info_maybe_return_timestamp_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io__maybe_return_timestamp_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io__maybe_return_timestamp_0_0)),
	"parse_tree.prog_io",
	"maybe_return_timestamp",
	{ (void *)mercury_data_parse_tree__prog_io__enum_name_ordered_maybe_return_timestamp_0 },
	{ (void *)mercury_data_parse_tree__prog_io__enum_value_ordered_maybe_return_timestamp_0 },
	2,
	4,
	mercury_data_parse_tree__prog_io__functor_number_map_maybe_return_timestamp_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io__du_functor_desc_module_end_0_0 = {
	"module_end_no",
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
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io__field_types_module_end_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io__du_functor_desc_module_end_0_1 = {
	"module_end_yes",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io__field_types_module_end_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io__du_stag_ordered_module_end_0_0[] = {
	&mercury_data_parse_tree__prog_io__du_functor_desc_module_end_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io__du_stag_ordered_module_end_0_1[] = {
	&mercury_data_parse_tree__prog_io__du_functor_desc_module_end_0_1

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_io__du_ptag_ordered_module_end_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__prog_io__du_stag_ordered_module_end_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io__du_stag_ordered_module_end_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io__du_name_ordered_module_end_0[] = {
	&mercury_data_parse_tree__prog_io__du_functor_desc_module_end_0_0,
	&mercury_data_parse_tree__prog_io__du_functor_desc_module_end_0_1
};

const MR_Integer mercury_data_parse_tree__prog_io__functor_number_map_module_end_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io__type_ctor_info_module_end_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io__module_end_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io__module_end_0_0)),
	"parse_tree.prog_io",
	"module_end",
	{ (void *)mercury_data_parse_tree__prog_io__du_name_ordered_module_end_0 },
	{ (void *)mercury_data_parse_tree__prog_io__du_ptag_ordered_module_end_0 },
	2,
	4,
	mercury_data_parse_tree__prog_io__functor_number_map_module_end_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_io__enum_functor_desc_module_error_0_0 = {
	"no_module_errors",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_io__enum_functor_desc_module_error_0_1 = {
	"some_module_errors",
	1
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_io__enum_functor_desc_module_error_0_2 = {
	"fatal_module_errors",
	2
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_io__enum_value_ordered_module_error_0[] = {
	&mercury_data_parse_tree__prog_io__enum_functor_desc_module_error_0_0,
	&mercury_data_parse_tree__prog_io__enum_functor_desc_module_error_0_1,
	&mercury_data_parse_tree__prog_io__enum_functor_desc_module_error_0_2
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_io__enum_name_ordered_module_error_0[] = {
	&mercury_data_parse_tree__prog_io__enum_functor_desc_module_error_0_2,
	&mercury_data_parse_tree__prog_io__enum_functor_desc_module_error_0_0,
	&mercury_data_parse_tree__prog_io__enum_functor_desc_module_error_0_1
};

const MR_Integer mercury_data_parse_tree__prog_io__functor_number_map_module_error_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io__type_ctor_info_module_error_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io__module_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io__module_error_0_0)),
	"parse_tree.prog_io",
	"module_error",
	{ (void *)mercury_data_parse_tree__prog_io__enum_name_ordered_module_error_0 },
	{ (void *)mercury_data_parse_tree__prog_io__enum_value_ordered_module_error_0 },
	3,
	4,
	mercury_data_parse_tree__prog_io__functor_number_map_module_error_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io__du_functor_desc_read_item_result_0_0 = {
	"read_item_eof",
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io__field_types_read_item_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io__du_functor_desc_read_item_result_0_1 = {
	"read_item_errors",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io__field_types_read_item_result_0_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io__field_types_read_item_result_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io__du_functor_desc_read_item_result_0_2 = {
	"read_item_ok",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io__field_types_read_item_result_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io__du_stag_ordered_read_item_result_0_0[] = {
	&mercury_data_parse_tree__prog_io__du_functor_desc_read_item_result_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io__du_stag_ordered_read_item_result_0_1[] = {
	&mercury_data_parse_tree__prog_io__du_functor_desc_read_item_result_0_1

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io__du_stag_ordered_read_item_result_0_2[] = {
	&mercury_data_parse_tree__prog_io__du_functor_desc_read_item_result_0_2

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_io__du_ptag_ordered_read_item_result_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__prog_io__du_stag_ordered_read_item_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io__du_stag_ordered_read_item_result_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io__du_stag_ordered_read_item_result_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io__du_name_ordered_read_item_result_0[] = {
	&mercury_data_parse_tree__prog_io__du_functor_desc_read_item_result_0_0,
	&mercury_data_parse_tree__prog_io__du_functor_desc_read_item_result_0_1,
	&mercury_data_parse_tree__prog_io__du_functor_desc_read_item_result_0_2
};

const MR_Integer mercury_data_parse_tree__prog_io__functor_number_map_read_item_result_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io__type_ctor_info_read_item_result_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io__read_item_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io__read_item_result_0_0)),
	"parse_tree.prog_io",
	"read_item_result",
	{ (void *)mercury_data_parse_tree__prog_io__du_name_ordered_read_item_result_0 },
	{ (void *)mercury_data_parse_tree__prog_io__du_ptag_ordered_read_item_result_0 },
	3,
	4,
	mercury_data_parse_tree__prog_io__functor_number_map_read_item_result_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"lambda_prog_io_m_2076",
2,
0
},
"parse_tree.prog_io",
"prog_io.m",
2076,
"38"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__2386__1_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"inst_var_constraints_are_consistent_in_inst",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2373,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"constrain_inst_vars_in_inst",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2263,
"29"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_3 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"inst_var_constraints_are_consistent_in_inst_var",
4,
0
},
"parse_tree.prog_io",
"prog_io.m",
2415,
"55"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"lambda_prog_io_m_2386",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2386,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"inst_var_constraints_are_consistent_in_inst",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2373,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_insts_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"inst_var_constraints_are_consistent_in_inst",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2373,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__actually_read_opt_file_8_0_1 = {
{
MR_PREDICATE,
"libs.file_util",
"libs.file_util",
"search_for_file",
6,
0
},
"parse_tree.prog_io",
"prog_io.m",
233,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__read_items_loop_ok_14_0_3 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"make_pseudo_include_module_decl",
4,
0
},
"parse_tree.prog_io",
"prog_io.m",
817,
"53"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__read_items_loop_ok_14_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"make_pseudo_use_module_decl",
4,
0
},
"parse_tree.prog_io",
"prog_io.m",
813,
"47"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__read_items_loop_ok_14_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"make_pseudo_import_module_decl",
4,
0
},
"parse_tree.prog_io",
"prog_io.m",
809,
"41"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_clause_7_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"lambda_prog_io_m_1002",
2,
0
},
"parse_tree.prog_io",
"prog_io.m",
1002,
"55"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_clause_7_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"lambda_prog_io_m_986",
2,
0
},
"parse_tree.prog_io",
"prog_io.m",
986,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_4 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"parse_module_name",
4,
0
},
"parse_tree.prog_io",
"prog_io.m",
1200,
"139"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_3 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"parse_module_specifier",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
1122,
"62"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"parse_module_specifier",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
1122,
"62"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_attributed_decl_8_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"parse_module_specifier",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
1122,
"62"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_func_mode_decl_13_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"constrain_inst_vars_in_mode",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
1874,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__parse_pred_mode_decl_12_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"constrain_inst_vars_in_mode",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
1818,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"inst_var_constraints_are_consistent_in_mode",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2336,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_are_consistent_in_modes_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"inst_var_constraints_are_consistent_in_mode",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2336,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"inst_var_constraints_type_mode_consistent",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2342,
"3"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"lambda_prog_io_m_1988",
2,
0
},
"parse_tree.prog_io",
"prog_io.m",
1988,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_mode_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"constrain_inst_vars_in_inst",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2236,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"lambda_prog_io_m_2260",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2260,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"constrain_inst_vars_in_inst",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2303,
"77"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"constrain_inst_vars_in_inst",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2321,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"constrain_inst_vars_in_mode",
3,
0
},
"parse_tree.prog_io",
"prog_io.m",
2313,
"6"
};


MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module0)
	MR_init_entry1(parse_tree__prog_io__check_end_module_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__check_end_module_7_0);
	MR_init_label4(parse_tree__prog_io__check_end_module_7_0,10,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_end_module'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__check_end_module_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__check_end_module_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__check_end_module_7_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__check_end_module_7_0_i6);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0), 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_io__check_end_module_7_0_i10);
MR_def_label(parse_tree__prog_io__check_end_module_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_io__check_end_module_7_0_i5);
	}
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_io__check_end_module_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(parse_tree__prog_io__check_end_module_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_io__check_end_module_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("parse_tree.prog_io", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140parse_tree.prog_io.check_end_module\'/7", 49);
	MR_r3 = (MR_Word) MR_string_const("no \140:- module\' declaration", 26);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module1)
	MR_init_entry1(parse_tree__prog_io__make_module_decl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__make_module_decl_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_module_decl'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__make_module_decl_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) -1;
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_tempr1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module2)
	MR_init_entry1(parse_tree__prog_io__dummy_term_with_context_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__dummy_term_with_context_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dummy_term_with_context'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__dummy_term_with_context_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module3)
	MR_init_entry1(parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0);
	MR_init_label1(parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constrain_inst_vars_in_pred_inst_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0_i3);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module4)
	MR_init_entry1(parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0);
	MR_init_label2(parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constrain_inst_vars_in_inst_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0_i5);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module5)
	MR_init_entry1(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__constrain_inst_vars_in_inst_3_0);
	MR_init_label10(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,126,3,4,142,9,5,11,14,12,18)
	MR_init_label10(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,16,21,25,22,20,30,29,150,36,149)
	MR_init_label3(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,40,38,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constrain_inst_vars_in_inst'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i5);
	}
	MR_r3 = MR_tfield(2, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i142);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_tfield(2, MR_r2, 0);
	MR_tfield(2, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_body((MR_Integer) MR_r3, (MR_Integer) 1);
	MR_np_call_localret_ent(parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i9);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i11);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i126);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i14);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i18);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i20);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i21);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i25);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i29);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_io__constrain_inst_vars_in_inst_name_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i30);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i149);
	}
	MR_r3 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i150);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tfield(3, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_body((MR_Integer) MR_r3, (MR_Integer) 1);
	MR_np_call_localret_ent(parse_tree__prog_io__constrain_inst_vars_in_pred_inst_info_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i36);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_r5;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i40);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i45);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		parse_tree__prog_io__constrain_inst_vars_in_inst_3_0_i45);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module6)
	MR_init_entry1(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__constrain_inst_vars_in_mode_3_0);
	MR_init_label4(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0,4,5,3,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constrain_inst_vars_in_mode'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__constrain_inst_vars_in_mode_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_mode_3_0_i4);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_mode_3_0_i5);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__constrain_inst_vars_in_mode_3_0_i8);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_util__maybe_parse_type_2_0);
MR_decl_entry(parse_tree__prog_io_util__convert_mode_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module7)
	MR_init_entry1(parse_tree__prog_io__parse_type_and_mode_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_type_and_mode_3_0);
	MR_init_label6(parse_tree__prog_io__parse_type_and_mode_3_0,9,11,13,2,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_type_and_mode'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_type_and_mode_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_3_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("::", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_3_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_3_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_3_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__maybe_parse_type_2_0,
		parse_tree__prog_io__parse_type_and_mode_3_0_i9);
MR_def_label(parse_tree__prog_io__parse_type_and_mode_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_3_0,
		parse_tree__prog_io__parse_type_and_mode_3_0_i11);
MR_def_label(parse_tree__prog_io__parse_type_and_mode_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0,
		parse_tree__prog_io__parse_type_and_mode_3_0_i13);
MR_def_label(parse_tree__prog_io__parse_type_and_mode_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io__parse_type_and_mode_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_io_util__maybe_parse_type_2_0,
		parse_tree__prog_io__parse_type_and_mode_3_0_i15);
MR_def_label(parse_tree__prog_io__parse_type_and_mode_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io__parse_type_and_mode_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module8)
	MR_init_entry1(parse_tree__prog_io__parse_type_and_mode_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_type_and_mode_list_3_0);
	MR_init_label8(parse_tree__prog_io__parse_type_and_mode_list_3_0,95,11,13,15,4,17,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_type_and_mode_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_type_and_mode_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i95);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io__parse_type_and_mode_list_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i4);
	}
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("::", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i4);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__maybe_parse_type_2_0,
		parse_tree__prog_io__parse_type_and_mode_list_3_0_i11);
MR_def_label(parse_tree__prog_io__parse_type_and_mode_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_3_0,
		parse_tree__prog_io__parse_type_and_mode_list_3_0_i13);
MR_def_label(parse_tree__prog_io__parse_type_and_mode_list_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0,
		parse_tree__prog_io__parse_type_and_mode_list_3_0_i15);
MR_def_label(parse_tree__prog_io__parse_type_and_mode_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_localcall_lab(parse_tree__prog_io__parse_type_and_mode_list_3_0,
		parse_tree__prog_io__parse_type_and_mode_list_3_0_i21);
MR_def_label(parse_tree__prog_io__parse_type_and_mode_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_io_util__maybe_parse_type_2_0,
		parse_tree__prog_io__parse_type_and_mode_list_3_0_i17);
MR_def_label(parse_tree__prog_io__parse_type_and_mode_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_localcall_lab(parse_tree__prog_io__parse_type_and_mode_list_3_0,
		parse_tree__prog_io__parse_type_and_mode_list_3_0_i21);
MR_def_label(parse_tree__prog_io__parse_type_and_mode_list_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_type_and_mode_list_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io__parse_type_and_mode_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module9)
	MR_init_entry1(parse_tree__prog_io__verify_type_and_mode_list_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__verify_type_and_mode_list_2_2_0);
	MR_init_label3(parse_tree__prog_io__verify_type_and_mode_list_2_2_0,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'verify_type_and_mode_list_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__verify_type_and_mode_list_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__verify_type_and_mode_list_2_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__verify_type_and_mode_list_2_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__verify_type_and_mode_list_2_2_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(parse_tree__prog_io__verify_type_and_mode_list_2_2_0);
	}
MR_def_label(parse_tree__prog_io__verify_type_and_mode_list_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__verify_type_and_mode_list_2_2_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(parse_tree__prog_io__verify_type_and_mode_list_2_2_0);
MR_def_label(parse_tree__prog_io__verify_type_and_mode_list_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io__verify_type_and_mode_list_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module10)
	MR_init_entry1(parse_tree__prog_io__verify_type_and_mode_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__verify_type_and_mode_list_1_0);
	MR_init_label1(parse_tree__prog_io__verify_type_and_mode_list_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'verify_type_and_mode_list'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__verify_type_and_mode_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__verify_type_and_mode_list_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(parse_tree__prog_io__verify_type_and_mode_list_2_2_0);
	}
MR_def_label(parse_tree__prog_io__verify_type_and_mode_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__map__old_merge_2_0);
MR_decl_entry(fn__parse_tree__prog_io_util__get_any_errors2_1_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module11)
	MR_init_entry1(parse_tree__prog_io__get_constraints_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__get_constraints_6_0);
	MR_init_label10(parse_tree__prog_io__get_constraints_6_0,5,6,10,12,7,17,18,19,2,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_constraints'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__get_constraints_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__get_constraints_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr3, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(parse_tree__prog_io__get_constraints_6_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 0);
	if ((MR_r1 != MR_tempr2)) {
		MR_GOTO_LAB(parse_tree__prog_io__get_constraints_6_0_i2);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(1) = MR_tempr4;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_0,
		parse_tree__prog_io__get_constraints_6_0_i5);
MR_def_label(parse_tree__prog_io__get_constraints_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(parse_tree__prog_io__get_constraints_6_0,
		parse_tree__prog_io__get_constraints_6_0_i6);
MR_def_label(parse_tree__prog_io__get_constraints_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__get_constraints_6_0_i7);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__get_constraints_6_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__get_constraints_6_0_i10);
MR_def_label(parse_tree__prog_io__get_constraints_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__map__old_merge_2_0,
		parse_tree__prog_io__get_constraints_6_0_i12);
MR_def_label(parse_tree__prog_io__get_constraints_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_io__get_constraints_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors2_1_0,
		parse_tree__prog_io__get_constraints_6_0_i17);
MR_def_label(parse_tree__prog_io__get_constraints_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors2_1_0,
		parse_tree__prog_io__get_constraints_6_0_i18);
MR_def_label(parse_tree__prog_io__get_constraints_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__get_constraints_6_0_i19);
MR_def_label(parse_tree__prog_io__get_constraints_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_io__get_constraints_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_io__get_constraints_6_0_i23);
MR_def_label(parse_tree__prog_io__get_constraints_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module12)
	MR_init_entry1(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__get_class_context_and_inst_constraints_5_0);
	MR_init_label10(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,3,4,5,9,10,11,12,18,13,23)
	MR_init_label2(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_class_context_and_inst_constraints'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i3);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i4);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i5);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i9);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__get_constraints_6_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i10);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__get_constraints_6_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i11);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i12);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tempr5 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_tempr5, 0);
	MR_tempr2 = MR_tempr4;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tfield(1, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__map__old_merge_2_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i18);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tfield(1, MR_r2, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors2_1_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i23);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors2_1_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i24);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__get_class_context_and_inst_constraints_5_0_i25);
MR_def_label(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_3);

MR_BEGIN_MODULE(parse_tree__prog_io_module13)
	MR_init_entry1(parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0);
	MR_init_label1(parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_var_constraints_types_modes_self_consistent'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0_i3);
MR_def_label(parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module14)
	MR_init_entry1(parse_tree__prog_io__get_purity_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__get_purity_3_0);
	MR_init_label1(parse_tree__prog_io__get_purity_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_purity'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__get_purity_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__get_purity_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__get_purity_3_0_i2);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io__get_purity_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module15)
	MR_init_entry1(fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0);
	MR_init_label1(fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_or_func_decl_pieces'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,16);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,17);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_0);
MR_decl_entry(fn__term__get_term_context_1_0);
MR_decl_entry(varset__coerce_2_0);
MR_decl_entry(parse_tree__prog_io_util__check_no_attributes_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__describe_error_term_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module16)
	MR_init_entry1(parse_tree__prog_io__parse_pred_decl_base_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_pred_decl_base_12_0);
	MR_init_label10(parse_tree__prog_io__parse_pred_decl_base_12_0,2,4,8,11,12,13,15,19,23,29)
	MR_init_label10(parse_tree__prog_io__parse_pred_decl_base_12_0,25,42,37,52,54,55,56,51,61,66)
	MR_init_label10(parse_tree__prog_io__parse_pred_decl_base_12_0,74,75,76,22,87,18,96,99,107,108)
	MR_init_label1(parse_tree__prog_io__parse_pred_decl_base_12_0,109)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_pred_decl_base'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_pred_decl_base_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(14) = MR_r1;
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(13) = MR_tempr1;
	MR_sv(11) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r10;
	MR_sv(6) = MR_r11;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i2);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_decr_sp_and_return(17);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_sv(10) = MR_tfield(1, MR_r2, 2);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(1,0,18);
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i8);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(3,1,5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,19);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i11);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i12);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i13);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i15);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(17);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_type_and_mode_list_3_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i19);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i18);
	}
	MR_sv(10) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_io__verify_type_and_mode_list_1_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i23);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i22);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i25);
	}
	if (MR_LTAGS_TEST(MR_sv(10),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(10), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i25);
	}
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(1,0,22);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i29);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,23);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i37);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i37);
	}
	if (MR_LTAGS_TEST(MR_sv(10),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(10), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i37);
	}
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(1,0,26);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i42);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,27);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i52);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_decl_base_12_0_i51);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_io__get_purity_3_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i54);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(varset__coerce_2_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i55);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__coerce_2_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i56);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
	}
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__describe_error_term_2_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i61);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,29);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i66);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i74);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i75);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i76);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(1,0,32);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i87);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,33);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__describe_error_term_2_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i96);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(1,0,34);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_io__pred_or_func_decl_pieces_1_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i99);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i107);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i108);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_pred_decl_base_12_0_i109);
MR_def_label(parse_tree__prog_io__parse_pred_decl_base_12_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module17)
	MR_init_entry1(parse_tree__prog_io__parse_func_decl_base_2_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_func_decl_base_2_14_0);
	MR_init_label10(parse_tree__prog_io__parse_func_decl_base_2_14_0,4,2,6,13,18,14,25,30,26,37)
	MR_init_label10(parse_tree__prog_io__parse_func_decl_base_2_14_0,38,39,42,43,44,46,49,48,55,66)
	MR_init_label1(parse_tree__prog_io__parse_func_decl_base_2_14_0,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_func_decl_base_2'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_func_decl_base_2_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(15) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(7) = MR_r12;
	MR_sv(8) = MR_r13;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_io__verify_type_and_mode_list_1_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i4);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i2);
	}
	MR_r2 = MR_sv(10);
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i13);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tempr1 = MR_sv(14);
	MR_tempr2 = MR_sv(10);
	MR_tempr3 = MR_sv(1);
	MR_tempr4 = MR_sv(2);
	MR_tempr5 = MR_sv(3);
	MR_tempr6 = MR_sv(4);
	MR_tempr7 = MR_sv(5);
	MR_tempr8 = MR_sv(6);
	MR_tempr9 = MR_sv(11);
	MR_tempr10 = MR_sv(7);
	MR_tempr11 = MR_sv(8);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,0,35);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i6);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,36);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(10);
	}
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(14),0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i14);
	}
	if (MR_LTAGS_TEST(MR_sv(13),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(13), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i14);
	}
	MR_sv(10) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,38);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i18);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,39);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_tempr4;
	MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i25);
	}
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(14),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i26);
	}
	if (MR_LTAGS_TEST(MR_sv(13),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(13), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i26);
	}
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,41);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i30);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,42);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i37);
	}
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i38);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i39);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i41);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__prog_io__get_purity_3_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i42);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__coerce_2_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i43);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__coerce_2_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i44);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i46);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_io__inst_var_constraints_types_modes_self_consistent_1_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i49);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_2_14_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_sv(11);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
	}
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__describe_error_term_2_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i55);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(15) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_func_decl_base_2_14_0_i66);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(15);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
MR_def_label(parse_tree__prog_io__parse_func_decl_base_2_14_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module18)
	MR_init_entry1(fn__parse_tree__prog_io__desugar_field_access_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_io__desugar_field_access_1_0);
	MR_init_label5(fn__parse_tree__prog_io__desugar_field_access_1_0,13,2,30,35,176)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'desugar_field_access'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_io__desugar_field_access_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,43);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__parse_tree__prog_io__desugar_field_access_1_0_i13);
MR_def_label(fn__parse_tree__prog_io__desugar_field_access_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__prog_io__desugar_field_access_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr4, MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr5,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__desugar_field_access_1_0_i176);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_r1 = MR_tfield(0, MR_tempr4, 0);
	MR_r2 = (MR_Word) MR_string_const(" :=", 3);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_io__desugar_field_access_1_0_i30);
MR_def_label(fn__parse_tree__prog_io__desugar_field_access_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,43);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__parse_tree__prog_io__desugar_field_access_1_0_i35);
MR_def_label(fn__parse_tree__prog_io__desugar_field_access_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__prog_io__desugar_field_access_1_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_io_util__get_any_errors1_1_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module19)
	MR_init_entry1(parse_tree__prog_io__parse_func_decl_base_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_func_decl_base_9_0);
	MR_init_label10(parse_tree__prog_io__parse_func_decl_base_9_0,2,4,13,14,16,20,19,23,35,43)
	MR_init_label10(parse_tree__prog_io__parse_func_decl_base_9_0,46,44,49,57,58,63,64,65,6,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_func_decl_base'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_func_decl_base_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(14) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i2);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_decr_sp_and_return(16);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i6);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("=", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i6);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i6);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i6);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i6);
	}
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	MR_sv(9) = MR_tfield(1, MR_r2, 1);
	MR_sv(11) = MR_tfield(1, MR_r2, 2);
	MR_sv(13) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io__desugar_field_access_1_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i13);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,0,44);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i14);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i16);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(16);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_type_and_mode_list_3_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i20);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_sv(11) = MR_tempr1;
	MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i43);
	}
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__describe_error_term_2_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i23);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,24);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,2,3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,23);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i35);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_sv(11) = MR_tempr1;
	}
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_io__parse_type_and_mode_3_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i46);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r14 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r6 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_r11 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r4 = MR_sv(14);
	MR_r1 = MR_sv(10);
	MR_sv(14) = MR_tempr1;
	MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i57);
	}
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(1,0,47);
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i49);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,48);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_r6 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_r11 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r4 = MR_sv(14);
	MR_r1 = MR_sv(10);
	MR_sv(14) = MR_tempr1;
	}
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(11),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i58);
	}
	if (MR_PTAG_TESTR(MR_sv(14),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_decl_base_9_0_i58);
	}
	MR_r2 = MR_tfield(1, MR_sv(11), 0);
	MR_r3 = MR_tfield(1, MR_sv(14), 0);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(parse_tree__prog_io__parse_func_decl_base_2_14_0);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,49);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors1_1_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i63);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors1_1_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i64);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i65);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(16);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(1,0,52);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_func_decl_base_9_0_i68);
MR_def_label(parse_tree__prog_io__parse_func_decl_base_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,53);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_util__standard_det_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module20)
	MR_init_entry1(parse_tree__prog_io__parse_determinism_suffix_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_determinism_suffix_4_0);
	MR_init_label6(parse_tree__prog_io__parse_determinism_suffix_4_0,14,9,10,18,26,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_determinism_suffix'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_determinism_suffix_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_determinism_suffix_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_determinism_suffix_4_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("is", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_determinism_suffix_4_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_determinism_suffix_4_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_determinism_suffix_4_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_determinism_suffix_4_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tempr4 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tempr4;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_determinism_suffix_4_0_i10);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_determinism_suffix_4_0_i10);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_determinism_suffix_4_0_i10);
	}
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__standard_det_2_0,
		parse_tree__prog_io__parse_determinism_suffix_4_0_i14);
MR_def_label(parse_tree__prog_io__parse_determinism_suffix_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_determinism_suffix_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_io__parse_determinism_suffix_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
MR_def_label(parse_tree__prog_io__parse_determinism_suffix_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__describe_error_term_2_0,
		parse_tree__prog_io__parse_determinism_suffix_4_0_i18);
MR_def_label(parse_tree__prog_io__parse_determinism_suffix_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,28);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_determinism_suffix_4_0_i26);
MR_def_label(parse_tree__prog_io__parse_determinism_suffix_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_io__parse_determinism_suffix_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_util__parse_type_4_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module21)
	MR_init_entry1(parse_tree__prog_io__parse_with_type_suffix_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_with_type_suffix_4_0);
	MR_init_label5(parse_tree__prog_io__parse_with_type_suffix_4_0,9,8,11,13,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_with_type_suffix'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_with_type_suffix_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_type_suffix_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_type_suffix_4_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_type_suffix_4_0_i2);
	}
	MR_r6 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_type_suffix_4_0_i2);
	}
	MR_tempr3 = MR_tfield(0, MR_r2, 0);
	MR_r6 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_type_suffix_4_0_i2);
	}
	MR_r7 = MR_tfield(0, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const(":", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_type_suffix_4_0_i9);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r6 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_r6;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r1 = MR_tfield(1, MR_r5, 0);
	MR_GOTO_LAB(parse_tree__prog_io__parse_with_type_suffix_4_0_i8);
	}
MR_def_label(parse_tree__prog_io__parse_with_type_suffix_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("with_type", 9)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_type_suffix_4_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r1 = MR_tfield(1, MR_r5, 0);
	}
MR_def_label(parse_tree__prog_io__parse_with_type_suffix_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_type_4_0,
		parse_tree__prog_io__parse_with_type_suffix_4_0_i11);
MR_def_label(parse_tree__prog_io__parse_with_type_suffix_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_type_suffix_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_io__parse_with_type_suffix_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_io__parse_with_type_suffix_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_util__convert_inst_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module22)
	MR_init_entry1(parse_tree__prog_io__parse_with_inst_suffix_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_with_inst_suffix_3_0);
	MR_init_label4(parse_tree__prog_io__parse_with_inst_suffix_3_0,10,9,14,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_with_inst_suffix'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_with_inst_suffix_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_inst_suffix_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_inst_suffix_3_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("with_inst", 9)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_inst_suffix_3_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_inst_suffix_3_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_inst_suffix_3_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_inst_suffix_3_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_inst_3_0,
		parse_tree__prog_io__parse_with_inst_suffix_3_0_i10);
MR_def_label(parse_tree__prog_io__parse_with_inst_suffix_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_with_inst_suffix_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io__parse_with_inst_suffix_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,0,55);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_with_inst_suffix_3_0_i14);
MR_def_label(parse_tree__prog_io__parse_with_inst_suffix_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,56);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io__parse_with_inst_suffix_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_util__parse_condition_suffix_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module23)
	MR_init_entry1(parse_tree__prog_io__parse_pred_or_func_decl_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_pred_or_func_decl_8_0);
	MR_init_label10(parse_tree__prog_io__parse_pred_or_func_decl_8_0,2,3,4,5,13,10,24,21,32,6)
	MR_init_label5(parse_tree__prog_io__parse_pred_or_func_decl_8_0,41,43,45,46,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_pred_or_func_decl'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_pred_or_func_decl_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_condition_suffix_3_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i2);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_determinism_suffix_4_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i3);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_io__parse_with_inst_suffix_3_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i4);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_with_type_suffix_4_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i5);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_or_func_decl_8_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_or_func_decl_8_0_i6);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_or_func_decl_8_0_i6);
	}
	MR_r3 = MR_tfield(1, MR_r2, 0);
	MR_r4 = MR_tfield(1, MR_sv(8), 0);
	MR_r5 = MR_tfield(1, MR_sv(7), 0);
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_or_func_decl_8_0_i10);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_or_func_decl_8_0_i10);
	}
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,59);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i13);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,60);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_or_func_decl_8_0_i21);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_or_func_decl_8_0_i21);
	}
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,65);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i24);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,66);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_or_func_decl_8_0_i32);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_or_func_decl_8_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(parse_tree__prog_io__parse_func_decl_base_9_0);
	}
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(parse_tree__prog_io__parse_pred_decl_base_12_0);
	}
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,67);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors1_1_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i41);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,68);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors1_1_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i43);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,69);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors1_1_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i45);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i46);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_pred_or_func_decl_8_0_i47);
MR_def_label(parse_tree__prog_io__parse_pred_or_func_decl_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module24)
	MR_init_entry1(parse_tree__prog_io__inst_var_constraints_are_consistent_in_modes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__inst_var_constraints_are_consistent_in_modes_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_var_constraints_are_consistent_in_modes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__inst_var_constraints_are_consistent_in_modes_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module25)
	MR_init_entry1(parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0);
	MR_init_label1(parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_var_constraints_are_self_consistent_in_modes'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0_i3);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_util__convert_mode_list_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module26)
	MR_init_entry1(parse_tree__prog_io__parse_pred_mode_decl_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_pred_mode_decl_12_0);
	MR_init_label10(parse_tree__prog_io__parse_pred_mode_decl_12_0,3,5,7,10,11,14,17,13,26,39)
	MR_init_label3(parse_tree__prog_io__parse_pred_mode_decl_12_0,2,48,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_pred_mode_decl'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_pred_mode_decl_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_sv(7) = MR_r11;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_list_3_0,
		parse_tree__prog_io__parse_pred_mode_decl_12_0_i3);
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_mode_decl_12_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,
		parse_tree__prog_io__parse_pred_mode_decl_12_0_i5);
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_mode_decl_12_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_decr_sp_and_return(13);
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_r2, 2);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__parse_pred_mode_decl_12_0_i10);
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__coerce_2_0,
		parse_tree__prog_io__parse_pred_mode_decl_12_0_i11);
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0,
		parse_tree__prog_io__parse_pred_mode_decl_12_0_i14);
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_mode_decl_12_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_pred_mode_decl_12_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r3 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
	}
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r3 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
	}
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__describe_error_term_2_0,
		parse_tree__prog_io__parse_pred_mode_decl_12_0_i26);
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,34);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,33);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_pred_mode_decl_12_0_i39);
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__describe_error_term_2_0,
		parse_tree__prog_io__parse_pred_mode_decl_12_0_i48);
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,35);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(11) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_pred_mode_decl_12_0_i56);
MR_def_label(parse_tree__prog_io__parse_pred_mode_decl_12_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module27)
	MR_init_entry1(parse_tree__prog_io__parse_func_mode_decl_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_func_mode_decl_13_0);
	MR_init_label10(parse_tree__prog_io__parse_func_mode_decl_13_0,3,5,7,10,12,14,15,17,20,19)
	MR_init_label7(parse_tree__prog_io__parse_func_mode_decl_13_0,27,40,11,49,2,58,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_func_mode_decl'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_func_mode_decl_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r12;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_list_3_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i3);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_mode_decl_13_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__get_class_context_and_inst_constraints_5_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i5);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_mode_decl_13_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_decr_sp_and_return(14);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_r2, 2);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i10);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_3_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i12);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_mode_decl_13_0_i11);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i14);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__coerce_2_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i15);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i17);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_io__inst_var_constraints_are_self_consistent_in_modes_1_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i20);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_func_mode_decl_13_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,9,1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
	}
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__describe_error_term_2_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i27);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,36);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,33);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i40);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,0,71);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i49);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,72);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__describe_error_term_2_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i58);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,39);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,23);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(11) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_func_mode_decl_13_0_i68);
MR_def_label(parse_tree__prog_io__parse_func_mode_decl_13_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module28)
	MR_init_entry1(parse_tree__prog_io__parse_mode_decl_base_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_mode_decl_base_10_0);
	MR_init_label6(parse_tree__prog_io__parse_mode_decl_base_10_0,10,11,13,2,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_mode_decl_base'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_mode_decl_base_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_base_10_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_base_10_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_base_10_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("=", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_base_10_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_base_10_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_base_10_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_base_10_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io__desugar_field_access_1_0,
		parse_tree__prog_io__parse_mode_decl_base_10_0_i10);
MR_def_label(parse_tree__prog_io__parse_mode_decl_base_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,0,74);
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_0,
		parse_tree__prog_io__parse_mode_decl_base_10_0_i11);
MR_def_label(parse_tree__prog_io__parse_mode_decl_base_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_base_10_0_i13);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(parse_tree__prog_io__parse_mode_decl_base_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(7);
	MR_r12 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(parse_tree__prog_io__parse_func_mode_decl_13_0);
	}
MR_def_label(parse_tree__prog_io__parse_mode_decl_base_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,0,75);
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_0,
		parse_tree__prog_io__parse_mode_decl_base_10_0_i16);
MR_def_label(parse_tree__prog_io__parse_mode_decl_base_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_base_10_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(parse_tree__prog_io__parse_mode_decl_base_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(7);
	MR_r11 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(parse_tree__prog_io__parse_pred_mode_decl_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module29)
	MR_init_entry1(parse_tree__prog_io__parse_mode_decl_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_mode_decl_7_0);
	MR_init_label9(parse_tree__prog_io__parse_mode_decl_7_0,2,3,4,11,8,5,22,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_mode_decl'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_mode_decl_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_condition_suffix_3_0,
		parse_tree__prog_io__parse_mode_decl_7_0_i2);
MR_def_label(parse_tree__prog_io__parse_mode_decl_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_io__parse_determinism_suffix_4_0,
		parse_tree__prog_io__parse_mode_decl_7_0_i3);
MR_def_label(parse_tree__prog_io__parse_mode_decl_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_io__parse_with_inst_suffix_3_0,
		parse_tree__prog_io__parse_mode_decl_7_0_i4);
MR_def_label(parse_tree__prog_io__parse_mode_decl_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_7_0_i5);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_7_0_i5);
	}
	MR_r3 = MR_tfield(1, MR_r2, 0);
	MR_r4 = MR_tfield(1, MR_sv(6), 0);
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_7_0_i8);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_mode_decl_7_0_i8);
	}
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,0,59);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_mode_decl_7_0_i11);
MR_def_label(parse_tree__prog_io__parse_mode_decl_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,60);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_io__parse_mode_decl_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__prog_io__parse_mode_decl_base_10_0);
	}
MR_def_label(parse_tree__prog_io__parse_mode_decl_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(8) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,67);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors1_1_0,
		parse_tree__prog_io__parse_mode_decl_7_0_i22);
MR_def_label(parse_tree__prog_io__parse_mode_decl_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,68);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io_util__get_any_errors1_1_0,
		parse_tree__prog_io__parse_mode_decl_7_0_i24);
MR_def_label(parse_tree__prog_io__parse_mode_decl_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_mode_decl_7_0_i25);
MR_def_label(parse_tree__prog_io__parse_mode_decl_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module30)
	MR_init_entry1(parse_tree__prog_io__parse_module_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_module_name_4_0);
	MR_init_label1(parse_tree__prog_io__parse_module_name_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_module_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_module_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_module_name_4_0_i3);
	}
	MR_np_tailcall_ent(parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_0);
MR_def_label(parse_tree__prog_io__parse_module_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r3, 1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,79);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_mode_defn__parse_inst_defn_6_0);
MR_decl_entry(parse_tree__prog_io_mode_defn__parse_mode_defn_8_0);
MR_decl_entry(parse_tree__prog_io_type_defn__parse_type_defn_7_0);
MR_decl_entry(parse_tree__prog_io_pragma__parse_pragma_6_0);
MR_decl_entry(parse_tree__prog_io_mutable__parse_mutable_decl_6_0);
MR_decl_entry(parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_0);
MR_decl_entry(parse_tree__prog_io_typeclass__parse_instance_6_0);
MR_decl_entry(parse_tree__prog_io_typeclass__parse_typeclass_6_0);
MR_decl_entry(fn__parse_tree__prog_io_sym_name__root_module_name_0_0);
MR_decl_entry(mdbcomp__prim_data__sym_name_get_module_name_default_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
MR_decl_entry(parse_tree__prog_io_util__parse_list_3_0);
MR_decl_entry(parse_tree__prog_io_mutable__parse_finalise_decl_6_0);
MR_decl_entry(parse_tree__prog_io_mutable__parse_initialise_decl_6_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module31)
	MR_init_entry1(parse_tree__prog_io__parse_attributed_decl_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_attributed_decl_8_0);
	MR_init_label10(parse_tree__prog_io__parse_attributed_decl_8_0,3,10,7,22,15,12,26,30,37,39)
	MR_init_label10(parse_tree__prog_io__parse_attributed_decl_8_0,34,44,43,48,47,52,51,58,64,68)
	MR_init_label10(parse_tree__prog_io__parse_attributed_decl_8_0,69,55,72,75,71,79,85,88,84,95)
	MR_init_label10(parse_tree__prog_io__parse_attributed_decl_8_0,96,97,99,92,103,108,113,118,127,129)
	MR_init_label10(parse_tree__prog_io__parse_attributed_decl_8_0,123,664,140,137,143,142,147,146,153,150)
	MR_init_label3(parse_tree__prog_io__parse_attributed_decl_8_0,156,158,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_attributed_decl'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_attributed_decl_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("func", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_pred_or_func_decl_8_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("inst", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i7);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_sv(4) = MR_r5;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_mode_defn__parse_inst_defn_6_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i10);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("mode", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_r3 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr5, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i15);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i15);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("==", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i15);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i15);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i15);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i15);
	}
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_condition_suffix_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i22);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_mode_defn__parse_mode_defn_8_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(parse_tree__prog_io__parse_mode_decl_7_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("pred", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i26);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_pred_or_func_decl_8_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("type", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i30);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_type_defn__parse_type_defn_7_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("module", 6)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i34);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_module_name_4_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i37);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i39);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_tempr1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("pragma", 6)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i43);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_call_localret_ent(parse_tree__prog_io_pragma__parse_pragma_6_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i44);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("mutable", 7)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i47);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_call_localret_ent(parse_tree__prog_io_mutable__parse_mutable_decl_6_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i48);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("promise", 7)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i51);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Integer) 3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i52);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("external", 8)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i55);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r8 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i58);
	}
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i68);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r8;
	MR_r9 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r4, 0);
	MR_r9 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_r9 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r9, MR_string_const("low_level_backend", 17)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i64);
	}
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,9,1);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i68);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r9, MR_string_const("high_level_backend", 18)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i68);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i69);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("instance", 8)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i71);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_call_localret_ent(parse_tree__prog_io_typeclass__parse_instance_6_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i72);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i75);
	}
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("interface", 9)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i79);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("typeclass", 9)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i84);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_call_localret_ent(parse_tree__prog_io_typeclass__parse_typeclass_6_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i85);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i88);
	}
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("end_module", 10)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i92);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(6) = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io_sym_name__root_module_name_0_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i95);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__sym_name_get_module_name_default_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i96);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_io__parse_module_name_4_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i97);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i99);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("use_module", 10)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i103);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(5,10);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__parse_module_specifier_3_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("export_module", 13)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i108);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(5,11);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__parse_module_specifier_3_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("import_module", 13)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i113);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(5,12);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__parse_module_specifier_3_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("implementation", 14)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i118);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tfield(0, MR_tempr1, 2) = MR_r7;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("include_module", 14)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i123);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__parse_module_name_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_list_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i127);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i129);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr2);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("version_numbers", 15)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i664);
	}
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_tailcall_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,664)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (!(((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("finalise", 8)) == 0) || (strcmp((char *) (MR_Word *) MR_r3, MR_string_const("finalize", 8)) == 0)))) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i137);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_sv(4) = MR_r5;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_mutable__parse_finalise_decl_6_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i140);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("promise_exclusive", 17)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i142);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i143);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("promise_exhaustive", 18)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i146);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i147);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("initialise", 10)) == 0) || (strcmp((char *) (MR_Word *) MR_r3, MR_string_const("initialize", 10)) == 0)))) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i150);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_sv(4) = MR_r5;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_mutable__parse_initialise_decl_6_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i153);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("promise_exclusive_exhaustive", 28)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Integer) 2;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i156);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attributed_decl_8_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		parse_tree__prog_io__parse_attributed_decl_8_0_i158);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(parse_tree__prog_io__parse_attributed_decl_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_util__parse_decl_attribute_4_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module32)
	MR_init_entry1(parse_tree__prog_io__parse_attrs_and_decl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_attrs_and_decl_6_0);
	MR_init_label8(parse_tree__prog_io__parse_attrs_and_decl_6_0,68,7,5,14,12,16,2,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_attrs_and_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_attrs_and_decl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_io__parse_attrs_and_decl_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attrs_and_decl_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attrs_and_decl_6_0_i2);
	}
	MR_sv(7) = MR_tfield(0, MR_tempr4, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr2;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_decl_attribute_4_0,
		parse_tree__prog_io__parse_attrs_and_decl_6_0_i7);
MR_def_label(parse_tree__prog_io__parse_attrs_and_decl_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attrs_and_decl_6_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(parse_tree__prog_io__parse_attrs_and_decl_6_0_i68);
	}
MR_def_label(parse_tree__prog_io__parse_attrs_and_decl_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r7;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_attributed_decl_8_0,
		parse_tree__prog_io__parse_attrs_and_decl_6_0_i14);
MR_def_label(parse_tree__prog_io__parse_attrs_and_decl_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_attrs_and_decl_6_0_i12);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(parse_tree__prog_io__parse_attrs_and_decl_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0,
		parse_tree__prog_io__parse_attrs_and_decl_6_0_i16);
MR_def_label(parse_tree__prog_io__parse_attrs_and_decl_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,44);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_io__parse_attrs_and_decl_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_attrs_and_decl_6_0_i34);
MR_def_label(parse_tree__prog_io__parse_attrs_and_decl_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,84);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module33)
	MR_init_entry1(parse_tree__prog_io__parse_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_decl_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_decl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__parse_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_io__parse_attrs_and_decl_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_goal__parse_goal_5_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module34)
	MR_init_entry1(parse_tree__prog_io__parse_clause_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_clause_7_0);
	MR_init_label10(parse_tree__prog_io__parse_clause_7_0,2,5,14,17,19,22,25,7,31,33)
	MR_init_label2(parse_tree__prog_io__parse_clause_7_0,38,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_clause'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_clause_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_io_goal__parse_goal_5_0,
		parse_tree__prog_io__parse_clause_7_0_i2);
MR_def_label(parse_tree__prog_io__parse_clause_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_clause_7_0_i3);
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(varset__coerce_2_0,
		parse_tree__prog_io__parse_clause_7_0_i5);
MR_def_label(parse_tree__prog_io__parse_clause_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_clause_7_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_clause_7_0_i7);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("=", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_clause_7_0_i7);
	}
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_clause_7_0_i7);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_clause_7_0_i7);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_clause_7_0_i7);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io__desugar_field_access_1_0,
		parse_tree__prog_io__parse_clause_7_0_i14);
MR_def_label(parse_tree__prog_io__parse_clause_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,0,85);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_0,
		parse_tree__prog_io__parse_clause_7_0_i17);
MR_def_label(parse_tree__prog_io__parse_clause_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_clause_7_0_i19);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(parse_tree__prog_io__parse_clause_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,43);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__parse_clause_7_0_i22);
MR_def_label(parse_tree__prog_io__parse_clause_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,86);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__parse_clause_7_0_i25);
MR_def_label(parse_tree__prog_io__parse_clause_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(8);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_sv(5);
	MR_tfield(0, MR_r2, 6) = MR_sv(2);
	MR_tfield(0, MR_r2, 7) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(parse_tree__prog_io__parse_clause_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,0,88);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_0,
		parse_tree__prog_io__parse_clause_7_0_i31);
MR_def_label(parse_tree__prog_io__parse_clause_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_clause_7_0_i33);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(parse_tree__prog_io__parse_clause_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,5);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__parse_clause_7_0_i38);
MR_def_label(parse_tree__prog_io__parse_clause_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 3) = MR_sv(8);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_sv(5);
	MR_tfield(0, MR_r2, 6) = MR_sv(2);
	MR_tfield(0, MR_r2, 7) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	}
MR_def_label(parse_tree__prog_io__parse_clause_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_dcg__parse_dcg_clause_7_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module35)
	MR_init_entry1(parse_tree__prog_io__parse_item_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_item_5_0);
	MR_init_label5(parse_tree__prog_io__parse_item_5_0,2,140,17,24,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_item'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__parse_item_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const(":-", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i2);
	}
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_io__parse_attrs_and_decl_6_0);
	}
MR_def_label(parse_tree__prog_io__parse_item_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i140);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i140);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("-->", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i140);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i140);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i140);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i140);
	}
	MR_tempr3 = MR_tempr4;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr3, 2);
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_io_dcg__parse_dcg_clause_7_0);
	}
MR_def_label(parse_tree__prog_io__parse_item_5_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i17);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const(":-", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i17);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i17);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i17);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__parse_item_5_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_tempr4;
	MR_r3 = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(varset__coerce_2_0,
		parse_tree__prog_io__parse_item_5_0_i28);
MR_def_label(parse_tree__prog_io__parse_item_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__parse_item_5_0_i24);
MR_def_label(parse_tree__prog_io__parse_item_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(varset__coerce_2_0,
		parse_tree__prog_io__parse_item_5_0_i28);
MR_def_label(parse_tree__prog_io__parse_item_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_io__parse_clause_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__context_init_2_0);
MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module36)
	MR_init_entry1(parse_tree__prog_io__read_term_to_item_result_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__read_term_to_item_result_6_0);
	MR_init_label6(parse_tree__prog_io__read_term_to_item_result_6_0,48,10,4,18,19,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term_to_item_result'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__read_term_to_item_result_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_term_to_item_result_6_0_i48);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(parse_tree__prog_io__read_term_to_item_result_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_term_to_item_result_6_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr3 = MR_r3;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__term__context_init_2_0,
		parse_tree__prog_io__read_term_to_item_result_6_0_i10);
MR_def_label(parse_tree__prog_io__read_term_to_item_result_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io__read_term_to_item_result_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		parse_tree__prog_io__read_term_to_item_result_6_0_i18);
MR_def_label(parse_tree__prog_io__read_term_to_item_result_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_item_5_0,
		parse_tree__prog_io__read_term_to_item_result_6_0_i19);
MR_def_label(parse_tree__prog_io__read_term_to_item_result_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_term_to_item_result_6_0_i21);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_io__read_term_to_item_result_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parser__read_term_filename_4_0);
MR_decl_entry(mdbcomp__prim_data__match_sym_name_2_0);
MR_decl_entry(fn__parse_tree__prog_item__get_item_context_1_0);
MR_decl_entry(term__context_init_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module37)
	MR_init_entry1(parse_tree__prog_io__read_first_item_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__read_first_item_12_0);
	MR_init_label10(parse_tree__prog_io__read_first_item_12_0,108,2,3,4,5,15,13,19,17,42)
	MR_init_label5(parse_tree__prog_io__read_first_item_12_0,43,10,44,47,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_first_item'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__read_first_item_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_io__read_first_item_12_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(parser__read_term_filename_4_0,
		parse_tree__prog_io__read_first_item_12_0_i2);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_io_sym_name__root_module_name_0_0,
		parse_tree__prog_io__read_first_item_12_0_i3);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_io__read_term_to_item_result_6_0,
		parse_tree__prog_io__read_first_item_12_0_i4);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i5);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(3, MR_tempr1, 1), 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,13)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i5);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i108);
	}
MR_def_label(parse_tree__prog_io__read_first_item_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i10);
	}
	MR_tempr2 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__match_sym_name_2_0,
		parse_tree__prog_io__read_first_item_12_0_i15);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i42);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__match_sym_name_2_0,
		parse_tree__prog_io__read_first_item_12_0_i19);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i17);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i42);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,1,49);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,1,48);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = ((MR_Integer) 22 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_sv(2) = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
MR_def_label(parse_tree__prog_io__read_first_item_12_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_io__make_module_decl_3_0,
		parse_tree__prog_io__read_first_item_12_0_i43);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_first_item_12_0_i44);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__get_item_context_1_0,
		parse_tree__prog_io__read_first_item_12_0_i47);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(term__context_init_3_0,
		parse_tree__prog_io__read_first_item_12_0_i47);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,90);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__make_module_decl_3_0,
		parse_tree__prog_io__read_first_item_12_0_i55);
MR_def_label(parse_tree__prog_io__read_first_item_12_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 1;
	MR_r1 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module38)
	MR_init_entry1(parse_tree__prog_io__read_items_loop_ok_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__read_items_loop_ok_14_0);
	MR_init_label10(parse_tree__prog_io__read_items_loop_ok_14_0,7,4,12,9,17,18,14,3,24,25)
	MR_init_label10(parse_tree__prog_io__read_items_loop_ok_14_0,23,27,165,34,35,33,37,46,53,55)
	MR_init_label3(parse_tree__prog_io__read_items_loop_ok_14_0,29,63,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_items_loop_ok'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__read_items_loop_ok_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 2);
	MR_r9 = MR_tfield(0, MR_tempr1, 2);
	MR_r11 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r12 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i4);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__make_pseudo_import_module_decl_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r11;
	MR_tfield(0, MR_tempr1, 4) = MR_r9;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_r12, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i7);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i18);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r12,3,3)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i9);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__make_pseudo_use_module_decl_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r11;
	MR_tfield(0, MR_tempr1, 4) = MR_r9;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_r12, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i12);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i18);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r12,3,4)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i14);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__make_pseudo_include_module_decl_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r11;
	MR_tfield(0, MR_tempr1, 4) = MR_r9;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_r12, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i17);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i18);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i23);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(3) = MR_tfield(0, MR_body((MR_Integer) MR_r2, (MR_Integer) 1), 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_io_sym_name__root_module_name_0_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i24);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__sym_name_get_module_name_default_3_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i25);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_r2, (MR_Integer) 0), 0);
	MR_r2 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i29);
	}
	MR_r10 = MR_tfield(3, MR_r2, 1);
	MR_r9 = MR_tfield(0, MR_r10, 0);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i165);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r9, 0);
	MR_r11 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i34);
	}
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_r10;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_r9 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_r9;
	MR_r2 = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_sv(10) = MR_tfield(0, MR_tempr2, 1);
	MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i33);
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r10;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_r11;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i35);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(7);
	MR_decr_sp_and_return(11);
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,51);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i46);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		parse_tree__prog_io__read_items_loop_ok_14_0_i53);
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i55);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i62);
	}
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r2, 1), 1);
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_ok_14_0_i63);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io__read_items_loop_ok_14_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module39)
	MR_init_entry1(parse_tree__prog_io__read_items_loop_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__read_items_loop_13_0);
	MR_init_label2(parse_tree__prog_io__read_items_loop_13_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_items_loop'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__read_items_loop_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parser__read_term_filename_4_0,
		parse_tree__prog_io__read_items_loop_13_0_i2);
MR_def_label(parse_tree__prog_io__read_items_loop_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__read_term_to_item_result_6_0,
		parse_tree__prog_io__read_items_loop_13_0_i3);
MR_def_label(parse_tree__prog_io__read_items_loop_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_io__read_items_loop_2_14_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module40)
	MR_init_entry1(parse_tree__prog_io__read_items_loop_2_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__read_items_loop_2_14_0);
	MR_init_label4(parse_tree__prog_io__read_items_loop_2_14_0,22,5,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_items_loop_2'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__read_items_loop_2_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_2_14_0_i22);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_proceed();
MR_def_label(parse_tree__prog_io__read_items_loop_2_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_items_loop_2_14_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__read_items_loop_2_14_0_i5);
MR_def_label(parse_tree__prog_io__read_items_loop_2_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_io__read_items_loop_13_0);
	}
MR_def_label(parse_tree__prog_io__read_items_loop_2_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r8;
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_io__read_items_loop_ok_14_0,
		parse_tree__prog_io__read_items_loop_2_14_0_i7);
MR_def_label(parse_tree__prog_io__read_items_loop_2_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_io__read_items_loop_13_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__init_2_0);
MR_decl_entry(io__input_stream_3_0);
MR_decl_entry(io__input_stream_name_4_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module41)
	MR_init_entry1(parse_tree__prog_io__read_all_items_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__read_all_items_8_0);
	MR_init_label10(parse_tree__prog_io__read_all_items_8_0,2,3,4,5,8,10,11,16,12,13)
	MR_init_label2(parse_tree__prog_io__read_all_items_8_0,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_all_items'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__read_all_items_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(counter__init_2_0,
		parse_tree__prog_io__read_all_items_8_0_i2);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(io__input_stream_3_0,
		parse_tree__prog_io__read_all_items_8_0_i3);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__input_stream_name_4_0,
		parse_tree__prog_io__read_all_items_8_0_i4);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__read_first_item_12_0,
		parse_tree__prog_io__read_all_items_8_0_i5);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_all_items_8_0_i8);
	}
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__read_items_loop_13_0,
		parse_tree__prog_io__read_all_items_8_0_i11);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_r4, 0);
	MR_r4 = MR_r7;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__read_term_to_item_result_6_0,
		parse_tree__prog_io__read_all_items_8_0_i10);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__read_items_loop_2_14_0,
		parse_tree__prog_io__read_all_items_8_0_i11);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_all_items_8_0_i13);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_all_items_8_0_i13);
	}
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr3 = MR_body((MR_Integer) MR_tempr2, (MR_Integer) 1);
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_io__read_all_items_8_0_i16);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__read_all_items_8_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_io__read_all_items_8_0_i20);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_io__read_all_items_8_0_i20);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__check_end_module_7_0,
		parse_tree__prog_io__read_all_items_8_0_i21);
MR_def_label(parse_tree__prog_io__read_all_items_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module42)
	MR_init_entry1(parse_tree__prog_io__actually_read_module_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__actually_read_module_12_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'actually_read_module'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__actually_read_module_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module43)
	MR_init_entry1(parse_tree__prog_io__actually_read_module_if_changed_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__actually_read_module_if_changed_12_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'actually_read_module_if_changed'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__actually_read_module_if_changed_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	MR_np_tailcall_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module44)
	MR_init_entry1(parse_tree__prog_io__check_module_has_expected_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__check_module_has_expected_name_4_0);
	MR_init_label2(parse_tree__prog_io__check_module_has_expected_name_4_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_module_has_expected_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__check_module_has_expected_name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_io__check_module_has_expected_name_4_0_i5);
MR_def_label(parse_tree__prog_io__check_module_has_expected_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_io__check_module_has_expected_name_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,56);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,55);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,54);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,53);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,52);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io__check_module_has_expected_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
MR_decl_entry(libs__file_util__search_for_file_6_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module45)
	MR_init_entry1(parse_tree__prog_io__actually_read_opt_file_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__actually_read_opt_file_8_0);
	MR_init_label4(parse_tree__prog_io__actually_read_opt_file_8_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'actually_read_opt_file'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__actually_read_opt_file_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 619;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		parse_tree__prog_io__actually_read_opt_file_8_0_i2);
MR_def_label(parse_tree__prog_io__actually_read_opt_file_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__file_util__search_for_file_6_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,
		parse_tree__prog_io__actually_read_opt_file_8_0_i4);
MR_def_label(parse_tree__prog_io__actually_read_opt_file_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__check_module_has_expected_name_4_0,
		parse_tree__prog_io__actually_read_opt_file_8_0_i5);
MR_def_label(parse_tree__prog_io__actually_read_opt_file_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io__actually_read_opt_file_8_0_i6);
MR_def_label(parse_tree__prog_io__actually_read_opt_file_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module46)
	MR_init_entry1(fn__parse_tree__prog_io__drop_one_qualifier_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_io__drop_one_qualifier_2_2_0);
	MR_init_label3(fn__parse_tree__prog_io__drop_one_qualifier_2_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'drop_one_qualifier_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_io__drop_one_qualifier_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io__drop_one_qualifier_2_2_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(fn__parse_tree__prog_io__drop_one_qualifier_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_r1,0))
		continue;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	}
	break;
	} /* end while */
MR_def_label(fn__parse_tree__prog_io__drop_one_qualifier_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__parse_tree__prog_io__drop_one_qualifier_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module47)
	MR_init_entry1(parse_tree__prog_io__search_for_module_source_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__search_for_module_source_2_7_0);
	MR_init_label10(parse_tree__prog_io__search_for_module_source_2_7_0,27,2,3,9,7,11,12,13,14,15)
	MR_init_label1(parse_tree__prog_io__search_for_module_source_2_7_0,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_for_module_source_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__search_for_module_source_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(".m", 2);
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		parse_tree__prog_io__search_for_module_source_2_7_0_i2);
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__file_util__search_for_file_6_0,
		parse_tree__prog_io__search_for_module_source_2_7_0_i3);
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_2_7_0_i29);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_2_7_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_io__drop_one_qualifier_2_2_0,
		parse_tree__prog_io__search_for_module_source_2_7_0_i9);
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_2_7_0_i27);
	}
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		parse_tree__prog_io__search_for_module_source_2_7_0_i11);
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		parse_tree__prog_io__search_for_module_source_2_7_0_i12);
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' in directories ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_2_7_0_i13);
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_2_7_0_i14);
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot find source for module \140", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_2_7_0_i15);
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(parse_tree__prog_io__search_for_module_source_2_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__dir__basename_1_0);
MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(parse_tree__file_names__file_name_to_module_name_2_0);
MR_decl_entry(io__seen_2_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(libs__file_util__search_for_file_returning_dir_6_0);
MR_decl_entry(fn__dir__this_directory_0_0);
MR_decl_entry(fn__f_100_105_114_95_95_47_2_0);
MR_decl_entry(io__set_input_stream_4_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module48)
	MR_init_entry1(parse_tree__prog_io__search_for_module_source_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__search_for_module_source_7_0);
	MR_init_label10(parse_tree__prog_io__search_for_module_source_7_0,2,6,8,10,13,15,16,17,20,24)
	MR_init_label10(parse_tree__prog_io__search_for_module_source_7_0,26,28,29,31,33,34,35,22,42,43)
	MR_init_label10(parse_tree__prog_io__search_for_module_source_7_0,48,49,50,52,53,54,55,56,57,58)
	MR_init_label5(parse_tree__prog_io__search_for_module_source_7_0,59,45,61,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_for_module_source'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__search_for_module_source_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__search_for_module_source_2_7_0,
		parse_tree__prog_io__search_for_module_source_7_0_i2);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__dir__basename_1_0,
		parse_tree__prog_io__search_for_module_source_7_0_i6);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(".m", 2);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		parse_tree__prog_io__search_for_module_source_7_0_i8);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i5);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i10);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_io__search_for_module_source_7_0_i13);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__input_stream_3_0,
		parse_tree__prog_io__search_for_module_source_7_0_i15);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_io__search_for_module_source_2_7_0,
		parse_tree__prog_io__search_for_module_source_7_0_i16);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i17);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(io__seen_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i20);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i22);
	}
	MR_r1 = MR_tfield(0, MR_sv(5), 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_sv(6)) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i22);
	}
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__dir__basename_1_0,
		parse_tree__prog_io__search_for_module_source_7_0_i24);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i22);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(".m", 2);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		parse_tree__prog_io__search_for_module_source_7_0_i26);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i22);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i28);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__match_sym_name_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i29);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i22);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__close_input_3_0,
		parse_tree__prog_io__search_for_module_source_7_0_i31);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(9), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(9), 0) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		parse_tree__prog_io__search_for_module_source_7_0_i33);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i34);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' in directories ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i35);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i55);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(".int", 4);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		parse_tree__prog_io__search_for_module_source_7_0_i42);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(libs__file_util__search_for_file_returning_dir_6_0,
		parse_tree__prog_io__search_for_module_source_7_0_i43);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i45);
	}
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		parse_tree__prog_io__search_for_module_source_7_0_i48);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), (char *) (MR_Word *) MR_r1) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_io__search_for_module_source_7_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__close_input_3_0,
		parse_tree__prog_io__search_for_module_source_7_0_i49);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i50);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(9), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(9), 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		parse_tree__prog_io__search_for_module_source_7_0_i52);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i53);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' in directories ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i54);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i55);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot find source for module \140", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i56);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const(" in interface search path", 25);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i57);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", but found ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i58);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_io__search_for_module_source_7_0_i59);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		parse_tree__prog_io__search_for_module_source_7_0_i61);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(parse_tree__prog_io__search_for_module_source_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(parse_tree__error_util__write_error_spec_8_0);
MR_decl_entry(dir__basename_2_0);
MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module49)
	MR_init_entry1(parse_tree__prog_io__find_module_name_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__find_module_name_5_0);
	MR_init_label10(parse_tree__prog_io__find_module_name_5_0,2,5,6,26,4,27,29,28,34,33)
	MR_init_label6(parse_tree__prog_io__find_module_name_5_0,37,38,39,41,42,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_module_name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__find_module_name_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__open_input_4_0,
		parse_tree__prog_io__find_module_name_5_0_i2);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__find_module_name_5_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		parse_tree__prog_io__find_module_name_5_0_i5);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_compile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		parse_tree__prog_io__find_module_name_5_0_i6);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,57);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_spec_8_0,
		parse_tree__prog_io__find_module_name_5_0_i26);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		parse_tree__prog_io__find_module_name_5_0_i27);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".m", 2);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		parse_tree__prog_io__find_module_name_5_0_i29);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__find_module_name_5_0_i28);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(dir__basename_2_0,
		parse_tree__prog_io__find_module_name_5_0_i34);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(dir__basename_2_0,
		parse_tree__prog_io__find_module_name_5_0_i34);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__find_module_name_5_0_i33);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		parse_tree__prog_io__find_module_name_5_0_i37);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		parse_tree__prog_io__find_module_name_5_0_i37);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(counter__init_2_0,
		parse_tree__prog_io__find_module_name_5_0_i38);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__read_first_item_12_0,
		parse_tree__prog_io__find_module_name_5_0_i39);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r5;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		parse_tree__prog_io__find_module_name_5_0_i41);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		parse_tree__prog_io__find_module_name_5_0_i42);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__close_input_3_0,
		parse_tree__prog_io__find_module_name_5_0_i43);
MR_def_label(parse_tree__prog_io__find_module_name_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module50)
	MR_init_entry1(parse_tree__prog_io__constrain_inst_vars_in_mode_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__constrain_inst_vars_in_mode_2_0);
	MR_init_label1(parse_tree__prog_io__constrain_inst_vars_in_mode_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constrain_inst_vars_in_mode'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io__constrain_inst_vars_in_mode_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_io__constrain_inst_vars_in_mode_2_0_i3);
MR_def_label(parse_tree__prog_io__constrain_inst_vars_in_mode_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_io__constrain_inst_vars_in_mode_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module51)
	MR_init_entry1(parse_tree__prog_io__inst_var_constraints_are_consistent_in_insts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__inst_var_constraints_are_consistent_in_insts_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_var_constraints_are_consistent_in_insts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__inst_var_constraints_are_consistent_in_insts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__fold_4_3);

MR_BEGIN_MODULE(parse_tree__prog_io_module52)
	MR_init_entry1(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0);
	MR_init_label10(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,128,3,9,14,24,20,28,60,36,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_var_constraints_are_consistent_in_inst'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,7);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_3);
	}
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i60);
	}
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_tempr1, (MR_Integer) 1), 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_io__inst_var_constraints_are_consistent_in_modes_3_0);
	}
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,8);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_3);
	}
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(set__fold_4_3,
		parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i24);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i128);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i60);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_io__inst_var_constraints_are_consistent_in_insts_3_0);
	}
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i60);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i60);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i60);
	}
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_tempr1, (MR_Integer) 1), 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_io__inst_var_constraints_are_consistent_in_modes_3_0);
	}
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i60);
	}
	MR_r1 = (MR_Word) MR_string_const("parse_tree.prog_io", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140parse_tree.prog_io.inst_var_constraints_are_consistent_in_inst\'/3", 76);
	MR_r3 = (MR_Word) MR_string_const("unconstrained inst_var", 22);
	MR_np_call_localret_ent(require__unexpected_3_0,
		parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0_i60);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module53)
	MR_init_entry1(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0);
	MR_init_label3(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0,4,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_var_constraints_are_consistent_in_mode'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,
		parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0_i4);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_tailcall_ent(parse_tree__prog_io__inst_var_constraints_are_consistent_in_insts_3_0);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_mode_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module54)
	MR_init_entry1(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0);
	MR_init_label4(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0,6,20,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_var_constraints_type_mode_consistent'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0_i20);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0,
		parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0_i6);
MR_def_label(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_3_0);
MR_def_label(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r3, 1);
	MR_np_tailcall_ent(parse_tree__prog_io__inst_var_constraints_are_consistent_in_insts_3_0);
MR_def_label(parse_tree__prog_io__inst_var_constraints_type_mode_consistent_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module55)
	MR_init_entry1(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0);
	MR_init_label5(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0,4,6,2,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_var_constraints_are_consistent_in_inst_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0_i4);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0_i6);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0_i1);
	}
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0_i9);
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io__inst_var_constraints_are_consistent_in_inst_var_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_sym_name__parse_symbol_name_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module56)
	MR_init_entry1(parse_tree__prog_io__parse_module_specifier_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__parse_module_specifier_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_module_specifier'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__parse_module_specifier_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(parse_tree__prog_io_sym_name__parse_symbol_name_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module57)
	MR_init_entry1(parse_tree__prog_io__make_pseudo_import_module_decl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__make_pseudo_import_module_decl_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_pseudo_import_module_decl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__make_pseudo_import_module_decl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module58)
	MR_init_entry1(parse_tree__prog_io__make_pseudo_use_module_decl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__make_pseudo_use_module_decl_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_pseudo_use_module_decl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__make_pseudo_use_module_decl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module59)
	MR_init_entry1(parse_tree__prog_io__make_pseudo_include_module_decl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__make_pseudo_include_module_decl_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_pseudo_include_module_decl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__make_pseudo_include_module_decl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module60)
	MR_init_entry1(__Unify___parse_tree__prog_io__maker_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_io__maker_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_io__maker_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module61)
	MR_init_entry1(__Compare___parse_tree__prog_io__maker_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_io__maker_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_io__maker_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module62)
	MR_init_entry1(__Unify___parse_tree__prog_io__maybe_return_timestamp_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_io__maybe_return_timestamp_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io__maybe_return_timestamp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module63)
	MR_init_entry1(__Compare___parse_tree__prog_io__maybe_return_timestamp_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_io__maybe_return_timestamp_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io__maybe_return_timestamp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module64)
	MR_init_entry1(__Unify___parse_tree__prog_io__module_end_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_io__module_end_0_0);
	MR_init_label4(__Unify___parse_tree__prog_io__module_end_0_0,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_io__module_end_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io__module_end_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io__module_end_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_io__module_end_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_io__module_end_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io__module_end_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_io__module_end_0_0_i7);
MR_def_label(__Unify___parse_tree__prog_io__module_end_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io__module_end_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___parse_tree__prog_io__module_end_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module65)
	MR_init_entry1(__Compare___parse_tree__prog_io__module_end_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_io__module_end_0_0);
	MR_init_label6(__Compare___parse_tree__prog_io__module_end_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_io__module_end_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__module_end_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__module_end_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__module_end_0_0_i7);
	}
MR_def_label(__Compare___parse_tree__prog_io__module_end_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_io__module_end_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_io__module_end_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__module_end_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_io__module_end_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_io__module_end_0_0_i11);
MR_def_label(__Compare___parse_tree__prog_io__module_end_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__module_end_0_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___parse_tree__prog_io__module_end_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module66)
	MR_init_entry1(__Unify___parse_tree__prog_io__module_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_io__module_error_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io__module_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module67)
	MR_init_entry1(__Compare___parse_tree__prog_io__module_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_io__module_error_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io__module_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___parse_tree__prog_item__item_0_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module68)
	MR_init_entry1(__Unify___parse_tree__prog_io__read_item_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_io__read_item_result_0_0);
	MR_init_label4(__Unify___parse_tree__prog_io__read_item_result_0_0,5,19,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_io__read_item_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io__read_item_result_0_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io__read_item_result_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_io__read_item_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io__read_item_result_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io__read_item_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_io__read_item_result_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_io__read_item_result_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io__read_item_result_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_0_0);
MR_def_label(__Unify___parse_tree__prog_io__read_item_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___parse_tree__prog_item__item_0_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module69)
	MR_init_entry1(__Compare___parse_tree__prog_io__read_item_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_io__read_item_result_0_0);
	MR_init_label7(__Compare___parse_tree__prog_io__read_item_result_0_0,30,31,5,11,9,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_io__read_item_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__read_item_result_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__read_item_result_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__read_item_result_0_0_i31);
	}
MR_def_label(__Compare___parse_tree__prog_io__read_item_result_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_io__read_item_result_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_io__read_item_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__read_item_result_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__read_item_result_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_io__read_item_result_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__read_item_result_0_0_i31);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_io__read_item_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__read_item_result_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_io__read_item_result_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io__read_item_result_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_io__read_item_result_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__coerce_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module70)
	MR_init_entry1(parse_tree__prog_io__IntroducedFrom__pred__parse_clause__986__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__IntroducedFrom__pred__parse_clause__986__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__parse_clause__986__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__IntroducedFrom__pred__parse_clause__986__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(term__coerce_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module71)
	MR_init_entry1(parse_tree__prog_io__IntroducedFrom__pred__parse_clause__1002__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__IntroducedFrom__pred__parse_clause__1002__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__parse_clause__1002__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__IntroducedFrom__pred__parse_clause__1002__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(term__coerce_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__coerce_var_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module72)
	MR_init_entry1(parse_tree__prog_io__IntroducedFrom__pred__get_class_context_and_inst_constraints__1988__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__IntroducedFrom__pred__get_class_context_and_inst_constraints__1988__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_class_context_and_inst_constraints__1988__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__IntroducedFrom__pred__get_class_context_and_inst_constraints__1988__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(term__coerce_var_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module73)
	MR_init_entry1(parse_tree__prog_io__IntroducedFrom__pred__parse_promise__2076__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__IntroducedFrom__pred__parse_promise__2076__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__parse_promise__2076__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__IntroducedFrom__pred__parse_promise__2076__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(term__coerce_var_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module74)
	MR_init_entry1(parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0);
	MR_init_label1(parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,16);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__constrain_inst_vars_in_inst_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0_i3);
MR_def_label(parse_tree__prog_io__IntroducedFrom__pred__constrain_inst_vars_in_inst__2260__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module75)
	MR_init_entry1(parse_tree__prog_io__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__2386__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_io__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__2386__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__2386__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io__IntroducedFrom__pred__inst_var_constraints_are_consistent_in_inst__2386__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,9);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(io__input_stream_name_3_0);
MR_decl_entry(io__file_modification_time_4_0);
MR_decl_entry(fn__libs__timestamp__time_t_to_timestamp_1_0);
MR_decl_entry(__Unify___libs__timestamp__timestamp_0_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module76)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0);
	MR_init_label10(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,2,3,6,5,22,23,24,26,28,21)
	MR_init_label5(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,36,32,38,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_actually_read_module__[1]_0'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(io__input_stream_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i2);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i3);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i5);
	}
	MR_sv(1) = MR_sv(2);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("mercury_compile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i6);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i22);
	}
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i21);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__input_stream_name_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i23);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__file_modification_time_4_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i24);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i26);
	}
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_r1;
	MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i21);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__libs__timestamp__time_t_to_timestamp_1_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i28);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_tempr1;
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i32);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(5), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i32);
	}
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___libs__timestamp__timestamp_0_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i36);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i32);
	}
	MR_sv(1) = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i40);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_io__read_all_items_8_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i38);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i40);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_input_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0_i41);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__recompilation__version__version_numbers_version_number_0_0);
MR_decl_entry(parse_tree__prog_io_sym_name__try_parse_symbol_name_2_0);
MR_decl_entry(recompilation__version__parse_version_numbers_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module77)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0);
	MR_init_label10(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,11,13,15,17,60,19,12,24,6,7)
	MR_init_label3(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,35,34,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__process_version_numbers__[2]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i1);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_tempr4 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i7);
	}
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i7);
	}
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i7);
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__recompilation__version__version_numbers_version_number_0_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i11);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) != MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__try_parse_symbol_name_2_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i13);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i12);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i15);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i12);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(recompilation__version__parse_version_numbers_2_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i17);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i19);
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__check_no_attributes_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i60);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,0,95);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i24);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,96);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__dummy_term_with_context_2_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0_i35);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("interface file needs to be recreated, the version numbers are out of date", 73);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(1, MR_sv(4), 1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,98);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module78)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0);
	MR_init_label8(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,4,5,7,10,9,19,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parse_promise__[1]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_i1);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	MR_sv(5) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__coerce_2_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_i4);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_goal__parse_goal_5_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_i5);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_i7);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_i9);
	}
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(5), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(3, MR_tempr1, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(3, MR_tempr1, 1);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_i19);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,99);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0_i23);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module79)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0);
	MR_init_label3(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0,28,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__get_quant_vars__[2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0_i2);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if ((MR_r1 != MR_tempr2)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0_i6);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0_i28);
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module80)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___parse_tree__prog_io__maker_2__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_module81)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___parse_tree__prog_io__maker_2__[1, 2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module82)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_0);
	MR_init_label1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__process_maybe1__ho2__[4]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_0_i3);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tfield(0, MR_tempr2, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr2);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module83)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0);
	MR_init_label2(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parse_symlist_decl__ho3__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_list_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0_i2);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0_i4);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr2);
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module84)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0);
	MR_init_label2(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parse_symlist_decl__ho4__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_list_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0_i2);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0_i4);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr2);
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_module85)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0);
	MR_init_label2(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parse_symlist_decl__ho5__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_list_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0_i2);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0_i4);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr2);
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_io_util__check_no_attributes_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__prog_io_maybe_bunch_0(void)
{
	parse_tree__prog_io_module0();
	parse_tree__prog_io_module1();
	parse_tree__prog_io_module2();
	parse_tree__prog_io_module3();
	parse_tree__prog_io_module4();
	parse_tree__prog_io_module5();
	parse_tree__prog_io_module6();
	parse_tree__prog_io_module7();
	parse_tree__prog_io_module8();
	parse_tree__prog_io_module9();
	parse_tree__prog_io_module10();
	parse_tree__prog_io_module11();
	parse_tree__prog_io_module12();
	parse_tree__prog_io_module13();
	parse_tree__prog_io_module14();
	parse_tree__prog_io_module15();
	parse_tree__prog_io_module16();
	parse_tree__prog_io_module17();
	parse_tree__prog_io_module18();
	parse_tree__prog_io_module19();
	parse_tree__prog_io_module20();
	parse_tree__prog_io_module21();
	parse_tree__prog_io_module22();
	parse_tree__prog_io_module23();
	parse_tree__prog_io_module24();
	parse_tree__prog_io_module25();
	parse_tree__prog_io_module26();
	parse_tree__prog_io_module27();
	parse_tree__prog_io_module28();
	parse_tree__prog_io_module29();
	parse_tree__prog_io_module30();
	parse_tree__prog_io_module31();
	parse_tree__prog_io_module32();
	parse_tree__prog_io_module33();
	parse_tree__prog_io_module34();
	parse_tree__prog_io_module35();
	parse_tree__prog_io_module36();
	parse_tree__prog_io_module37();
	parse_tree__prog_io_module38();
	parse_tree__prog_io_module39();
}

static void mercury__parse_tree__prog_io_maybe_bunch_1(void)
{
	parse_tree__prog_io_module40();
	parse_tree__prog_io_module41();
	parse_tree__prog_io_module42();
	parse_tree__prog_io_module43();
	parse_tree__prog_io_module44();
	parse_tree__prog_io_module45();
	parse_tree__prog_io_module46();
	parse_tree__prog_io_module47();
	parse_tree__prog_io_module48();
	parse_tree__prog_io_module49();
	parse_tree__prog_io_module50();
	parse_tree__prog_io_module51();
	parse_tree__prog_io_module52();
	parse_tree__prog_io_module53();
	parse_tree__prog_io_module54();
	parse_tree__prog_io_module55();
	parse_tree__prog_io_module56();
	parse_tree__prog_io_module57();
	parse_tree__prog_io_module58();
	parse_tree__prog_io_module59();
	parse_tree__prog_io_module60();
	parse_tree__prog_io_module61();
	parse_tree__prog_io_module62();
	parse_tree__prog_io_module63();
	parse_tree__prog_io_module64();
	parse_tree__prog_io_module65();
	parse_tree__prog_io_module66();
	parse_tree__prog_io_module67();
	parse_tree__prog_io_module68();
	parse_tree__prog_io_module69();
	parse_tree__prog_io_module70();
	parse_tree__prog_io_module71();
	parse_tree__prog_io_module72();
	parse_tree__prog_io_module73();
	parse_tree__prog_io_module74();
	parse_tree__prog_io_module75();
	parse_tree__prog_io_module76();
	parse_tree__prog_io_module77();
	parse_tree__prog_io_module78();
	parse_tree__prog_io_module79();
}

static void mercury__parse_tree__prog_io_maybe_bunch_2(void)
{
	parse_tree__prog_io_module80();
	parse_tree__prog_io_module81();
	parse_tree__prog_io_module82();
	parse_tree__prog_io_module83();
	parse_tree__prog_io_module84();
	parse_tree__prog_io_module85();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_io__init(void);
void mercury__parse_tree__prog_io__init_type_tables(void);
void mercury__parse_tree__prog_io__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_io__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_io__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__parse_tree__prog_io__init_threadscope_string_table(void);
#endif

void mercury__parse_tree__prog_io__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_io_maybe_bunch_0();
	mercury__parse_tree__prog_io_maybe_bunch_1();
	mercury__parse_tree__prog_io_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io__type_ctor_info_maker_2,
		parse_tree__prog_io__maker_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io__type_ctor_info_maybe_return_timestamp_0,
		parse_tree__prog_io__maybe_return_timestamp_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io__type_ctor_info_module_end_0,
		parse_tree__prog_io__module_end_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io__type_ctor_info_module_error_0,
		parse_tree__prog_io__module_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io__type_ctor_info_read_item_result_0,
		parse_tree__prog_io__read_item_result_0_0);
	mercury__parse_tree__prog_io__init_debugger();
}

void mercury__parse_tree__prog_io__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io__type_ctor_info_maker_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io__type_ctor_info_maybe_return_timestamp_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io__type_ctor_info_module_end_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io__type_ctor_info_module_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io__type_ctor_info_read_item_result_0);
	}
}


void mercury__parse_tree__prog_io__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_io__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__prog_io);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_io__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__parse_tree__prog_io__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
