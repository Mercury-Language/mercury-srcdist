/*
** Automatically generated from `make_hlds_passes.m'
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
INIT mercury__hlds__make_hlds__make_hlds_passes__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 532 "../library/io.int"
#include "io.mh"

#line 27 "hlds.make_hlds.make_hlds_passes.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 31 "hlds.make_hlds.make_hlds_passes.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "hlds.make_hlds.make_hlds_passes.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "hlds.make_hlds.make_hlds_passes.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "hlds.make_hlds.make_hlds_passes.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "hlds.make_hlds.make_hlds_passes.c"
#line 48 "hlds.make_hlds.make_hlds_passes.c"
#include "hlds.make_hlds.make_hlds_passes.mh"

#line 51 "hlds.make_hlds.make_hlds_passes.c"
#line 52 "hlds.make_hlds.make_hlds_passes.c"
#ifndef HLDS__MAKE_HLDS__MAKE_HLDS_PASSES_DECL_GUARD
#define HLDS__MAKE_HLDS__MAKE_HLDS_PASSES_DECL_GUARD

#line 56 "hlds.make_hlds.make_hlds_passes.c"
#line 57 "hlds.make_hlds.make_hlds_passes.c"

#endif
#line 60 "hlds.make_hlds.make_hlds_passes.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__make_hlds_passes__type_ctor_info_item_status_0,
	mercury_data_hlds__make_hlds__make_hlds_passes__type_ctor_info_add_marker_pred_info_0;
MR_decl_label1(hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_item_clause__983__1_4_0, 2)
MR_decl_label8(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0, 3,6,5,4,9,10,11,13)
MR_decl_label7(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0, 14,15,16,17,2,18,19)
MR_decl_label8(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0, 34,4,5,6,7,9,8,15)
MR_decl_label2(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0, 16,17)
MR_decl_label3(hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0, 2,3,4)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0, 10,11,12,13,14)
MR_decl_label3(hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0, 2,3,4)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0, 2,3,7,9,10,11,12,13)
MR_decl_label2(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0, 14,5)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0, 2,3,4,5,6,8,9,10)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0, 11,14,17,16,15,18,13,20)
MR_decl_label1(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0, 21)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0, 18,19,22,23,24,25,26,27)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0, 28,29,21,30,31,32,33,34)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0, 35,36,37,38,39,40,41,42)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0, 20,43,44,45,48,49,51,52)
MR_decl_label6(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0, 53,47,54,55,56,57)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0, 10,11,12,13,14,15,16,17)
MR_decl_label4(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0, 19,20,21,22)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0, 2,3,4,5,6,7,8,9)
MR_decl_label6(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0, 10,11,12,13,14,15)
MR_decl_label2(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_initialisation_14_0, 2,3)
MR_decl_label6(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0, 2,3,6,5,8,9)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0, 10,11,12,15,16,17,18,14)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0, 19,20,13,21,22,23,24,25)
MR_decl_label5(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0, 26,28,29,30,31)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 4,9,10,11,12,13,8,22)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 23,5,25,27,31,33,28,29)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 37,39,42,40,45,47,48,49)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 43,52,333,54,55,56,57,59)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 64,66,68,70,72,74,76,77)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 78,99,100,101,104,105,103,107)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 109,114,116,122,124,125,127,128)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 135,136,129,137,140,143,145,150)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 151,152,153,161,163,165,166,169)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 170,173,174,177,180,179,182,156)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 157,184,185,186,187,155,194,195)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 198,201,203,192,205,206,190,147)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 144,142,220,228,229,231,233,234)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 232,236,238,241,244,245,246,247)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 255,257,259,260,263,264,267,268)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 271,274,273,276,250,251,278,279)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 280,281,249,288,289,292,295,296)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 297,286,299,300,284,243,237,305)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 306,387,308,309,310,311,313,314)
MR_decl_label5(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0, 315,316,317,323,324)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0, 5,8,9,11,13,14,15,16)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0, 19,17,21,28,25,29,35,36)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0, 39,33,31,43,48,46,49,167)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0, 51,62,63,146,65,64,75,78)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0, 77,79,83,84,88,89,91,92)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0, 93,94,96,97,98,102,103,104)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0, 101,107,108,109,110,111,112,113)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0, 114,105,115,116,117,118,119,152)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0, 121,122,123,124,100,126,127,128)
MR_decl_label1(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0, 129)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0, 239,6,12,240,17,15,20,130)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0, 243,23,24,25,27,29,30,31)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0, 32,26,33,37,241,44,43,45)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0, 46,50,67,70,75,74,76,242)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0, 82,80,84,86,87,88,90,91)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0, 92,94,95,96,105,106,107,108)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0, 109,110,111,113,114,115,117,118)
MR_decl_label6(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0, 119,89,122,120,124,125)
MR_decl_label3(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0, 10,3,4)
MR_decl_label4(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0, 11,3,4,5)
MR_decl_label3(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0, 10,3,4)
MR_decl_label4(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0, 3,2,9,6)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0, 4,2,6,7,8,9,11,12)
MR_decl_label1(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0, 13)
MR_decl_label6(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0, 2,3,4,5,6,7)
MR_decl_label3(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0, 10,3,4)
MR_decl_label3(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0, 10,3,4)
MR_decl_label3(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0, 10,3,4)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0, 2,4,6,7,8,3,9,10)
MR_decl_label3(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0, 2,5,4)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0, 3,6,5,4,9,10,11,13)
MR_decl_label7(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0, 14,15,16,17,2,18,19)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0, 10,13,14,15,12,16,18,19)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0, 21,23,17,25,26,27,28,29)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0, 30,31,32,33,34,35,36,37)
MR_decl_label3(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0, 38,39,40)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0, 2,3,5,8,7,4,11,10)
MR_decl_label4(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0, 15,16,18,19)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0, 2,5,4,7,9,10,11,12)
MR_decl_label1(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0, 13)
MR_decl_label1(hlds__make_hlds__make_hlds_passes__get_matching_foreign_name_3_0, 1)
MR_decl_label6(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0, 3,5,6,8,11,2)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0, 5,6,4,8,9,10,11,12)
MR_decl_label1(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0, 1)
MR_decl_label5(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0, 2,4,6,3,7)
MR_decl_label7(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0, 14,3,4,5,6,7,8)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0, 32,4,5,7,6,13,14,15)
MR_decl_label8(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0, 23,3,4,5,10,11,9,13)
MR_decl_label1(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0, 7)
MR_decl_label1(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_set_code_1_0, 2)
MR_decl_label3(__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0, 4,6,1)
MR_decl_label4(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0, 3,2,5,21)
MR_decl_static(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__report_unexpected_decl_4_0)
MR_decl_static(fn__hlds__make_hlds__make_hlds_passes__this_file_0_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0)
MR_decl_static(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_get_code_1_0)
MR_decl_static(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_set_code_1_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_initialisation_14_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__get_matching_foreign_name_3_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__make_hlds_passes__add_marker_pred_info_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__make_hlds_passes__add_marker_pred_info_0_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0)
MR_decl_static(hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_item_clause__983__1_4_0)
MR_decl_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0)
MR_decl_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0)

static const struct mercury_type_0 mercury_common_0[5] =
{
{
MR_tbmkword(0, 3),
1
},
{
MR_tbmkword(0, 8),
1
},
{
MR_tbmkword(0, 7),
1
},
{
MR_tbmkword(0, 1),
0
},
{
MR_tbmkword(0, 0),
0
},
};

static const struct mercury_type_1 mercury_common_1[32] =
{
{
4,
MR_string_const("Error: unexpected or incorrect", 30)
},
{
4,
MR_string_const("declaration.", 12)
},
{
4,
MR_string_const("Warning:", 8)
},
{
4,
MR_string_const("declaration requires arity.", 27)
},
{
4,
MR_string_const("Warning: declaration not yet implemented.", 41)
},
{
4,
MR_string_const("Error: multiple foreign_name attributes", 39)
},
{
4,
MR_string_const("specified for the", 17)
},
{
4,
MR_string_const("backend.", 8)
},
{
4,
MR_string_const("Error: foreign_name mutable attribute not yet", 45)
},
{
4,
MR_string_const("implemented for the", 19)
},
{
4,
MR_string_const("Error: the inst", 15)
},
{
4,
MR_string_const("is not a valid inst for a mutable declaration.", 46)
},
{
4,
MR_string_const("In declaration of", 17)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("error: a field access function for an exported field", 52)
},
{
4,
MR_string_const("must also be exported.", 22)
},
{
4,
MR_string_const("Error:", 6)
},
{
4,
MR_string_const("declaration requires type_ctor_layout structures.", 49)
},
{
4,
MR_string_const("Don\'t use --no-type-layout to disable them.", 43)
},
{
4,
MR_string_const("used in initialise declaration has", 34)
},
{
4,
MR_string_const("invalid signature.", 18)
},
{
4,
MR_string_const("used in initialise declaration", 30)
},
{
4,
MR_string_const("multiple pred declarations.", 27)
},
{
4,
MR_string_const("does not have a corresponding pred declaration.", 47)
},
{
4,
MR_string_const("used in finalise declaration", 28)
},
{
4,
MR_string_const("has no pred declarations.", 25)
},
{
4,
MR_string_const("has invalid signature.", 22)
},
{
4,
MR_string_const("has multiple pred declarations.", 31)
},
{
4,
MR_string_const("Error: trailed mutable in non-trailing grade.", 45)
},
{
4,
MR_string_const("declaration for exported predicate or function", 46)
},
{
4,
MR_string_const("declaration conflicts with previous pragma for", 46)
},
{
3,
MR_string_const(".", 1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const struct mercury_type_2 mercury_common_2[37] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,1),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,3),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(2,3,0),
MR_TAG_COMMON(1,2,2)
}
},
{
{
MR_TAG_COMMON(3,1,2),
MR_TAG_COMMON(1,2,3)
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
MR_TAG_COMMON(3,1,4),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(0,4,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_item, foreign_name)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_ctor_field_defn)
}
},
{
{
MR_TAG_COMMON(3,1,15),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,14),
MR_TAG_COMMON(1,2,12)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,2,13)
}
},
{
{
MR_TAG_COMMON(3,1,13),
MR_TAG_COMMON(1,2,14)
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
MR_TAG_COMMON(3,1,18),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,17),
MR_TAG_COMMON(1,2,17)
}
},
{
{
MR_TAG_COMMON(3,1,20),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,19),
MR_TAG_COMMON(1,2,19)
}
},
{
{
MR_TAG_COMMON(3,1,22),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,21),
MR_TAG_COMMON(1,2,21)
}
},
{
{
MR_TAG_COMMON(3,1,23),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,21),
MR_TAG_COMMON(1,2,23)
}
},
{
{
MR_TAG_COMMON(3,1,25),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,24),
MR_TAG_COMMON(1,2,25)
}
},
{
{
MR_TAG_COMMON(3,1,26),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,24),
MR_TAG_COMMON(1,2,27)
}
},
{
{
MR_TAG_COMMON(3,1,27),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,24),
MR_TAG_COMMON(1,2,29)
}
},
{
{
MR_TAG_COMMON(3,1,24),
MR_TAG_COMMON(1,2,23)
}
},
{
{
MR_TAG_COMMON(3,1,28),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(0,4,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_TAG_COMMON(3,1,31),
MR_TAG_COMMON(1,2,0)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_string_const("external", 8)
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
MR_TAG_COMMON(1,2,4)
},
{
MR_TAG_COMMON(1,2,6)
},
{
MR_TAG_COMMON(1,2,32)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,8),
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(parse_tree__prog_item, foreign_name)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const struct mercury_type_7 mercury_common_7[3] =
{
{
2
},
{
0
},
{
1
},
};

static const struct mercury_type_8 mercury_common_8[11] =
{
{
MR_string_const(";\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("#endif\n", 7),
MR_tbmkword(0, 0)
},
{
MR_string_const(";\n", 2),
MR_TAG_COMMON(1,8,1)
},
{
MR_string_const("end\n", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("       X = Value\n", 17),
MR_TAG_COMMON(1,8,3)
},
{
MR_string_const("   {get_mutable_ack, Value} ->\n", 31),
MR_TAG_COMMON(1,8,4)
},
{
MR_string_const("receive\n", 8),
MR_TAG_COMMON(1,8,5)
},
{
MR_string_const(", self()},\n", 11),
MR_TAG_COMMON(1,8,6)
},
{
MR_string_const(" = MR_new_thread_local_mutable_index();\n", 40),
MR_tbmkword(0, 0)
},
{
MR_string_const(", MR_MUTEX_ATTR);\n", 18),
MR_TAG_COMMON(1,8,1)
},
{
MR_string_const("\' declaration", 13),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_recompilation__type_ctor_info_version_numbers_0;
extern const MR_TypeCtorInfo_Struct mercury_data_recompilation__type_ctor_info_recompilation_info_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(recompilation, version_numbers),
MR_CTOR0_ADDR(recompilation, recompilation_info),
MR_CTOR0_ADDR(recompilation, recompilation_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,35),
MR_COMMON(2,35)
}
},
};

MR_decl_entry(hlds__make_hlds__add_type__process_type_defn_8_0);
static const struct mercury_type_11 mercury_common_11[2] =
{
{
MR_COMMON(10,0),
MR_ENTRY_AP(hlds__make_hlds__add_type__process_type_defn_8_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0),
0
},
};

static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
1,
0
}
},
};

static const struct mercury_type_5 mercury_vector_common_5_0[6] =
{
{
1,
1
},
{
1,
1
},
{
1,
1
},
{
1,
1
},
{
1,
1
},
{
0,
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_need_qualifier_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_need_qualifier_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__make_hlds_passes__field_types_item_status_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__make_hlds_passes__du_functor_desc_item_status_0_0 = {
	"item_status",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__make_hlds_passes__field_types_item_status_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__make_hlds_passes__du_stag_ordered_item_status_0_0[] = {
	&mercury_data_hlds__make_hlds__make_hlds_passes__du_functor_desc_item_status_0_0

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__make_hlds_passes__du_ptag_ordered_item_status_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__make_hlds_passes__du_stag_ordered_item_status_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__make_hlds_passes__du_name_ordered_item_status_0[] = {
	&mercury_data_hlds__make_hlds__make_hlds_passes__du_functor_desc_item_status_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__make_hlds_passes__functor_number_map_item_status_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__make_hlds_passes__type_ctor_info_item_status_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0)),
	"hlds.make_hlds.make_hlds_passes",
	"item_status",
	{ (void *)mercury_data_hlds__make_hlds__make_hlds_passes__du_name_ordered_item_status_0 },
	{ (void *)mercury_data_hlds__make_hlds__make_hlds_passes__du_ptag_ordered_item_status_0 },
	1,
	4,
	mercury_data_hlds__make_hlds__make_hlds_passes__functor_number_map_item_status_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_VA_TypeInfo_Struct2 mercury_data___vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__make_hlds_passes__type_ctor_info_add_marker_pred_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__make_hlds_passes__add_marker_pred_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__make_hlds_passes__add_marker_pred_info_0_0)),
	"hlds.make_hlds.make_hlds_passes",
	"add_marker_pred_info",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.make_hlds_passes",
"hlds.make_hlds.make_hlds_passes",
"get_matching_foreign_name",
3,
0
},
"hlds.make_hlds.make_hlds_passes",
"make_hlds_passes.m",
866,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.make_hlds_passes",
"hlds.make_hlds.make_hlds_passes",
"lambda_make_hlds_passes_m_983",
4,
0
},
"hlds.make_hlds.make_hlds_passes",
"make_hlds_passes.m",
983,
"d7;c12;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_type",
"hlds.make_hlds.add_type",
"process_type_defn",
8,
0
},
"hlds.make_hlds.make_hlds_passes",
"make_hlds_passes.m",
172,
"d1;c11;q;c24;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_2 = {
{
MR_PREDICATE,
"hlds.make_hlds.make_hlds_passes",
"hlds.make_hlds.make_hlds_passes",
"add_builtin_type_ctor_special_preds",
3,
0
},
"hlds.make_hlds.make_hlds_passes",
"make_hlds_passes.m",
185,
"d1;c11;q;c25;t;c1;"
};

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_mark_as_external_2_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module0)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0);
	MR_init_label7(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0,14,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_mark_as_external_2_0,
		hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0_i14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_sym_arity_5_0);
MR_decl_entry(hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module1)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0);
	MR_init_label5(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0,2,4,6,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_sym_arity_5_0,
		hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_0,
		hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("\140:- external\' declaration", 25);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_0,
		hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(hlds__hlds_module__module_add_imported_module_specifiers_4_0);
MR_decl_entry(hlds__hlds_module__module_info_add_parents_to_used_modules_3_0);
MR_decl_entry(hlds__hlds_module__module_add_indirectly_imported_module_specifiers_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module2)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0);
	MR_init_label4(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0,3,2,9,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_module__module_add_imported_module_specifiers_4_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0_i6);
	}
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_add_imported_module_specifiers_4_0,
		hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_add_parents_to_used_modules_3_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_module__module_add_indirectly_imported_module_specifiers_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module3)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,5,6,4,8,9,10,11,12)
	MR_init_label1(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i5) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i6) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i1) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i1) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i1) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i1) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i1) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i1));
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i8) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i9) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i10) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i11) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i12) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0_i1));
MR_def_label(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module4)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__report_unexpected_decl_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__report_unexpected_decl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module5)
	MR_init_entry1(fn__hlds__make_hlds__make_hlds_passes__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__make_hlds_passes__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("make_hlds_passes.m", 18);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0);
MR_decl_entry(hlds__make_hlds__add_mode__module_add_inst_defn_12_0);
MR_decl_entry(hlds__make_hlds__add_mode__module_add_mode_defn_12_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(fn__hlds__make_hlds__add_pragma__lookup_current_backend_1_0);
MR_decl_entry(hlds__hlds_pred__init_markers_1_0);
MR_decl_entry(hlds__hlds_pred__add_marker_3_0);
MR_decl_entry(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0);
MR_decl_entry(hlds__make_hlds__add_pred__module_add_mode_13_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__make_hlds__add_class__module_add_class_defn_12_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_init_pred_decl_2_0);
MR_decl_entry(fn__parse_tree__prog_item__mutable_var_constant_1_0);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_2_0);
MR_decl_entry(fn__parse_tree__prog_mutable__lock_pred_decl_2_0);
MR_decl_entry(fn__parse_tree__prog_mutable__unlock_pred_decl_2_0);
MR_decl_entry(fn__parse_tree__prog_mutable__unsafe_get_pred_decl_4_0);
MR_decl_entry(fn__parse_tree__prog_mutable__unsafe_set_pred_decl_4_0);
MR_decl_entry(fn__parse_tree__prog_mutable__std_get_pred_decl_4_0);
MR_decl_entry(fn__parse_tree__prog_mutable__std_set_pred_decl_4_0);
MR_decl_entry(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0);
MR_decl_entry(fn__parse_tree__prog_mutable__io_get_pred_decl_4_0);
MR_decl_entry(fn__parse_tree__prog_mutable__io_set_pred_decl_4_0);
MR_decl_entry(fn__parse_tree__prog_mutable__constant_get_pred_decl_4_0);
MR_decl_entry(fn__parse_tree__prog_mutable__constant_set_pred_decl_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module6)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,5,8,9,11,13,14,15,16)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,19,17,21,28,25,29,35,36)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,39,33,31,43,48,46,49,167)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,51,62,63,146,65,64,75,78)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,77,79,83,84,88,89,91,92)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,93,94,96,97,98,102,103,104)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,101,107,108,109,110,111,112,113)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,114,105,115,116,117,118,119,152)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,121,122,123,124,100,126,127,128)
	MR_init_label1(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,129)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i167) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i5) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i11) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i13));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 3);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i167);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r6 = MR_r3;
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	MR_r7 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r8 = MR_r5;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 4);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r6 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_r3 = MR_ctfield(2, MR_tempr1, 2);
	MR_r8 = MR_r4;
	MR_r4 = MR_ctfield(2, MR_tempr1, 3);
	MR_r9 = MR_r5;
	MR_r5 = MR_ctfield(2, MR_tempr1, 4);
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_mode__module_add_inst_defn_12_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i14) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i16) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i62) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i75) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i167) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i167) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i83) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i167) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i167) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i167) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i88) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i167));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r6 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r8 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r9 = MR_r5;
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_mode__module_add_mode_defn_12_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i19);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i17);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_r6 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i21);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_RTAGS_TESTR(MR_tempr3,3,4)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i21);
	}
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i28);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,5)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r6, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i25);
	}
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i28);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,6)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i29);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i33);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i35);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_pragma__lookup_current_backend_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i36);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i39);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i84);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(5), 0);
	if ((MR_tempr1 != MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i152);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i84);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i43);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("module", 6);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__report_unexpected_decl_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i48);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i46);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("end_module", 10);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__report_unexpected_decl_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i48);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,7)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i49);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,5)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i51);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(10) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(11) = MR_ctfield(3, MR_tempr1, 7);
	MR_sv(12) = MR_ctfield(3, MR_tempr1, 10);
	MR_sv(13) = MR_ctfield(3, MR_tempr1, 12);
	MR_sv(14) = MR_ctfield(3, MR_tempr1, 13);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__init_markers_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i63);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i65);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_sv(1);
	MR_r12 = MR_sv(2);
	MR_r13 = MR_sv(3);
	MR_r14 = MR_sv(4);
	MR_r10 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i64);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(5), 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i146);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 20;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i146);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r12;
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i78);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_r6 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i77);
	}
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_tempr4;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_tempr1;
	MR_r6 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr2, 3);
	MR_r3 = MR_ctfield(3, MR_tempr2, 4);
	MR_r9 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr2, 6);
	MR_r10 = MR_r5;
	MR_r5 = MR_ctfield(0, MR_sv(2), 0);
	MR_r7 = MR_ctfield(1, MR_tempr3, 0);
	MR_r8 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_mode_13_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i78);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_passes__this_file_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i79);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("add_item_decl_pass_1: no pred_or_func on mode declaration", 57);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r7 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r9 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r10 = MR_r5;
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	MR_r6 = MR_ctfield(3, MR_tempr1, 6);
	MR_r8 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_class__module_add_class_defn_12_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i84);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr2, 5);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i89);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i91);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i92);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i93);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i94);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_0, ((MR_Integer) MR_tempr3 * (MR_Integer) 2));
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_sv(9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_init_pred_decl_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i96);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i97);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_constant_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i98);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i100);
	}
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i102);
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i101);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i103);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i104);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_sv(4) = MR_r4;
	MR_r4 = MR_sv(7);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(11),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i105);
	}
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__lock_pred_decl_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i107);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i108);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__unlock_pred_decl_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i109);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i110);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__unsafe_get_pred_decl_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i111);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i112);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__unsafe_set_pred_decl_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i113);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i114);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_sv(4) = MR_r4;
	MR_r4 = MR_sv(7);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__std_get_pred_decl_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i115);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i116);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__std_set_pred_decl_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i117);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i118);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i119);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i121);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__io_get_pred_decl_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i122);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i123);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__io_set_pred_decl_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i124);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i129);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__constant_get_pred_decl_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i126);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i127);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__constant_set_pred_decl_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i128);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0_i129);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module7)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0);
	MR_init_label3(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r5 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_8_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module8)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0);
	MR_init_label4(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0,11,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0_i11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0;
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0);
MR_decl_entry(fn__libs__globals__compilation_target_string_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module9)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,2,5,4,7,9,10,11,12)
	MR_init_label1(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__make_hlds_passes__get_matching_foreign_name_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r7;
	MR_tfield(0, MR_tempr1, 4) = MR_r6;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, foreign_name);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0,
		hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0,
		hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,1,6);
	MR_np_call_localret_ent(fn__libs__globals__compilation_target_string_1_0,
		hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0,
		hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__add_type__module_add_type_defn_11_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_and_mode_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);
MR_decl_entry(hlds__pred_table__predicate_table_search_func_sym_arity_5_0);
MR_decl_entry(hlds__pred_table__predicate_table_get_preds_2_0);
MR_decl_entry(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0);
MR_decl_entry(hlds__pred_table__predicate_table_set_preds_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(hlds__make_hlds__add_pragma__add_pragma_9_0);
MR_decl_entry(hlds__make_hlds__add_type__make_status_abstract_2_0);
MR_decl_entry(hlds__make_hlds__add_class__module_add_instance_defn_12_0);
MR_decl_entry(hlds__make_hlds__make_hlds_error__error_is_exported_4_0);
MR_decl_entry(fn__parse_tree__prog_item__mutable_var_maybe_foreign_names_1_0);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0);
MR_decl_entry(hlds__hlds_code_util__is_valid_mutable_inst_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(fn__varset__init_0_0);
MR_decl_entry(fn__hlds__hlds_out__mercury_expanded_inst_to_string_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module10)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,239,6,12,240,17,15,20,130)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,243,23,24,25,27,29,30,31)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,32,26,33,37,241,44,43,45)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,46,50,67,70,75,74,76,242)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,82,80,84,86,87,88,90,91)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,92,94,95,96,105,106,107,108)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,109,110,111,113,114,115,117,118)
	MR_init_label6(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,119,89,122,120,124,125)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i130) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i239) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i130) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i12));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	MR_r8 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r9 = MR_r5;
	MR_r5 = MR_ctfield(1, MR_tempr1, 4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_type__module_add_type_defn_11_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i45);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_sv(3), 1), 4);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i130) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i240) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i20) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i130) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i37) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i130) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i130) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i241) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i46) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i70) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i242) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i130));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 5);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i243);
	}
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 6);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_ctfield(3, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i23);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i24);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i25);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_sym_arity_5_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i27);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i26);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i29);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i30);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i31);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i32);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_passes__this_file_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i33);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("can\'t find func declaration", 27);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(hlds__make_hlds__add_pragma__add_pragma_9_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 4);
	MR_r6 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i43);
	}
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(10) = MR_ctfield(3, MR_tempr2, 6);
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_type__make_status_abstract_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i44);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_class__module_add_instance_defn_12_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i45);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r9 = MR_r4;
	MR_r10 = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_r5 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr1, 5);
	MR_r1 = MR_ctfield(3, MR_r1, 6);
	MR_r7 = MR_ctfield(0, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_class__module_add_instance_defn_12_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i45);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_r6,0,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i130);
	}
	MR_r6 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i50);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("\140initialise\' declaration", 24);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__error_is_exported_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i75);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r6, 0);
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i130);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_passes__this_file_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i67);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Bad introduced initialise declaration.", 38);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i130);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i74);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("\140finalise\' declaration", 22);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__error_is_exported_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i75);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_passes__this_file_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i76);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Bad introduced finalise declaration.", 36);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r1;
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_sv(7),0,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i80);
	}
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Word) MR_string_const("\140mutable\' declaration", 21);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__error_is_exported_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i82);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i84);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_sv(7);
	MR_sv(8) = MR_r5;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i84);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i86);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i87);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i88);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i90) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i107) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i107) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i105) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i107) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i109));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_maybe_foreign_names_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i91);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i92);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i94);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i96);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_ctfield(1, MR_tempr1, 0);
	MR_r8 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i95);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i96);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i117);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_sv(4) = MR_sv(6);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i89);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,1,8);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,1,9);
	MR_np_call_localret_ent(fn__libs__globals__compilation_target_string_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i106);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr9, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr10, 1) = MR_sv(8);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i89);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,1,8);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,1,9);
	MR_np_call_localret_ent(fn__libs__globals__compilation_target_string_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i108);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr9, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr10, 1) = MR_sv(8);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i89);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_maybe_foreign_names_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i110);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i111);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i113);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i115);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 4;
	MR_r7 = MR_ctfield(1, MR_tempr1, 0);
	MR_r8 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i114);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i115);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i117);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_sv(4) = MR_sv(6);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i89);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i118);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__add_pragma_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i119);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(4) = MR_r3;
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_code_util__is_valid_mutable_inst_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i122);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i120);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	}
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i124);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_out__mercury_expanded_inst_to_string_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0_i125);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr8, 2) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr9;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module11)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0);
	MR_init_label3(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,
		hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_8_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module12)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0);
	MR_init_label3(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,
		hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__is_field_access_function_name_5_0);
MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_ctor_field_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module13)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0);
	MR_init_label6(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0,3,5,6,8,11,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__is_field_access_function_name_5_0,
		hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i2);
	}
	if ((MR_sv(2) != MR_r2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i2);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_0,
		hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_ctor_field_table_2_0,
		hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_ctor_field_defn);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_ctor_field_defn);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i2);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module14)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0);
	MR_init_label3(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0,2,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_maybe_foreign_names_1_0,
		hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0,
		hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_ctfield(1, MR_tempr1, 0);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__get_global_name_from_foreign_names_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_mutex_var_name_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module15)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,2,3,5,8,7,4,11,10)
	MR_init_label4(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,15,16,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 221;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i5);
	}
	MR_sv(1) = (MR_Word) MR_string_const("MR_Unsigned", 11);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0,
		hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("MR_Word", 7);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(4),1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i11);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i10);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("extern ", 7);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i18);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_mutex_var_name_1_0,
		hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("    extern MercuryLock ", 23);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("#ifdef MR_THREAD_SAFE\n", 22);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,8,2);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_mutex_var_name_1_0,
		hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i16);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("    MercuryLock ", 16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("#ifdef MR_THREAD_SAFE\n", 22);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(";\n", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_string_const("extern ", 7);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i18);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(";\n", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,7,0);
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0_i19);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module16)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0);
	MR_init_label3(hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__get_c_mutable_global_foreign_decl_defn_7_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r5 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_8_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module17)
	MR_init_entry1(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_get_code_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_get_code_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\'ML_erlang_global_server\' ! {get_mutable, ", 42);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module18)
	MR_init_entry1(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_set_code_1_0);
	MR_init_label1(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_set_code_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_set_code_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const(", X}", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_set_code_1_0_i2);
MR_def_label(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_set_code_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'ML_erlang_global_server\' ! {set_mutable, ", 42);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_line_2_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(fn__parse_tree__prog_out__promise_to_string_1_0);
MR_decl_entry(string__format_3_0);
MR_decl_entry(hlds__make_hlds__add_clause__module_add_clause_14_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module19)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0);
	MR_init_label6(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_sv(11) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term__context_file_2_0,
		hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__promise_to_string_1_0,
		hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__%d__%s", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	}
	MR_np_call_localret_ent(string__format_3_0,
		hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_r8, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r8, 0) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(5);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(11);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(hlds__make_hlds__add_clause__module_add_clause_14_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_util__unqualify_name_1_0);
MR_decl_entry(fn__parse_tree__prog_out__simple_call_id_to_string_2_0);
MR_decl_entry(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0);
MR_decl_entry(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0);
MR_decl_entry(parse_tree__module_qual__mq_info_set_need_qual_flag_3_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0);
MR_decl_entry(hlds__make_hlds__add_pragma__module_add_pragma_foreign_proc_15_0);
MR_decl_entry(hlds__make_hlds__add_pragma__add_pragma_foreign_export_11_0);
MR_decl_entry(hlds__make_hlds__add_pragma__module_add_pragma_import_13_0);
MR_decl_entry(hlds__make_hlds__add_pragma__add_pragma_foreign_export_enum_11_0);
MR_decl_entry(hlds__make_hlds__add_pragma__add_pragma_foreign_enum_10_0);
MR_decl_entry(hlds__make_hlds__add_pragma__add_pragma_type_spec_8_0);
MR_decl_entry(fn__parse_tree__prog_out__eval_method_to_string_1_0);
MR_decl_entry(hlds__make_hlds__add_pragma__module_add_pragma_tabled_15_0);
MR_decl_entry(hlds__make_hlds__add_pragma__module_add_pragma_fact_table_11_0);
MR_decl_entry(hlds__make_hlds__add_pragma__add_pragma_reserve_tag_8_0);
MR_decl_entry(hlds__make_hlds__add_pragma__add_pragma_termination_info_10_0);
MR_decl_entry(hlds__make_hlds__add_pragma__add_pragma_termination2_info_11_0);
MR_decl_entry(hlds__make_hlds__add_pragma__add_pragma_structure_sharing_11_0);
MR_decl_entry(hlds__make_hlds__add_pragma__add_pragma_structure_reuse_11_0);
MR_decl_entry(term__var_list_to_term_list_2_0);
MR_decl_entry(hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(parse_tree__prog_type__type_is_io_state_1_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__parse_tree__prog_mode__di_mode_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__uo_mode_0_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(hlds__hlds_module__module_info_new_user_init_pred_5_0);
MR_decl_entry(hlds__hlds_module__module_info_new_user_final_pred_5_0);
MR_decl_entry(fn__parse_tree__prog_item__mutable_var_thread_local_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module20)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,4,9,10,11,12,13,8,22)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,23,5,25,27,31,33,28,29)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,37,39,42,40,45,47,48,49)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,43,52,333,54,55,56,57,59)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,64,66,68,70,72,74,76,77)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,78,99,100,101,104,105,103,107)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,109,114,116,122,124,125,127,128)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,135,136,129,137,140,143,145,150)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,151,152,153,161,163,165,166,169)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,170,173,174,177,180,179,182,156)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,157,184,185,186,187,155,194,195)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,198,201,203,192,205,206,190,147)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,144,142,220,228,229,231,233,234)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,232,236,238,241,244,245,246,247)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,255,257,259,260,263,264,267,268)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,271,274,273,276,250,251,278,279)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,280,281,249,288,289,292,295,296)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,297,286,299,300,284,243,237,305)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,306,387,308,309,310,311,313,314)
	MR_init_label5(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,315,316,317,323,324)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i4) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i27) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i37));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r12 = MR_ctfield(0, MR_tempr2, 5);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 4);
	MR_r13 = MR_tempr1;
	MR_r14 = MR_ctfield(0, MR_tempr2, 3);
	MR_r15 = MR_ctfield(0, MR_tempr2, 2);
	MR_r16 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i5);
	}
	MR_r17 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r17,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i8);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(1) = MR_r16;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r14;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r12;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_util__unqualify_name_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__simple_call_id_to_string_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("clause for ", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__error_is_exported_4_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	MR_r11 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r8 = (MR_Word) MR_tbmkword(0, 3);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i25);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r18 = MR_ctfield(1, MR_r17, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r18,
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i5) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i5) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i5) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i22) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i5) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i22));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r16;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r14;
	MR_sv(9) = MR_r13;
	MR_sv(10) = MR_r12;
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_passes__this_file_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i23);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Bad introduced clauses.", 23);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i25);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r6;
	MR_r6 = MR_r2;
	MR_r7 = MR_r3;
	MR_r9 = MR_r4;
	MR_r10 = MR_r5;
	MR_r1 = MR_r16;
	MR_r2 = MR_r15;
	MR_r3 = MR_r14;
	MR_r4 = MR_r13;
	MR_r5 = MR_r12;
	MR_r8 = (MR_Word) MR_tbmkword(0, 3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__module_add_clause_14_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i137);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 3);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29);
	}
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i31);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i33);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(8), 4);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i39) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i52) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i59) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i127) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i140) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i231) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i305) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,7)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i40);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_item_clause__983__1_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(3, MR_tempr1, 1);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i42);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i45);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i47);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_set_need_qual_flag_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i48);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i49);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(6);
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(17);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 5);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i54);
	}
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 6);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_ctfield(3, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i55);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i56);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i57);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(3, MR_r1, 2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r7),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i64) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i66));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_r9 = MR_r3;
	MR_r3 = MR_ctfield(2, MR_tempr1, 2);
	MR_r10 = MR_r4;
	MR_r4 = MR_ctfield(2, MR_tempr1, 3);
	MR_r11 = MR_r5;
	MR_r5 = MR_ctfield(2, MR_tempr1, 4);
	MR_r12 = MR_r6;
	MR_r6 = MR_ctfield(2, MR_tempr1, 5);
	MR_r7 = MR_ctfield(2, MR_r7, 6);
	MR_r8 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__module_add_pragma_foreign_proc_15_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i137);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r7, 0),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i68) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i70) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i72) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i74) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i76) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i99) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i107) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i109) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i114) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i116) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i122) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i124) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i333));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r7 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r8 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_r5 = MR_ctfield(3, MR_tempr1, 4);
	MR_r9 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__add_pragma_foreign_export_11_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i125);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r7 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r8 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r9 = MR_r5;
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	MR_r10 = MR_r6;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__module_add_pragma_import_13_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i137);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r7 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r8 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	MR_r9 = MR_r6;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__add_pragma_foreign_export_enum_11_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i125);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r8 = MR_r6;
	MR_r6 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(1) = MR_tempr1;
	MR_r7 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_sv(1), 4);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__add_pragma_foreign_enum_10_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i125);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i77);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i78);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i387);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__add_pragma_type_spec_8_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i137);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(11) = MR_ctfield(3, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i100);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 177;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i101);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i103);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__eval_method_to_string_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i104);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":- pragma ", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i105);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,18);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(17);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(hlds__make_hlds__add_pragma__module_add_pragma_tabled_15_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_tempr1;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_sv(1), 3);
	MR_r8 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__module_add_pragma_fact_table_11_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i137);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__add_pragma_reserve_tag_8_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i125);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r8 = MR_r6;
	MR_r6 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r7 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__add_pragma_termination_info_10_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i125);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r7 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r8 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	MR_r9 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__add_pragma_termination2_info_11_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i125);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r7 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r8 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	MR_r9 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__add_pragma_structure_sharing_11_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i125);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r7 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r8 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	MR_r9 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__add_pragma_structure_reuse_11_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i125);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i128);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i136);
	}
	MR_r5 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i135);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i129);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r9 = MR_sv(6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_promise_clause_12_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i137);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r7 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i142);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(12) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(13) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i143);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i145);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i144);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i147);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i147);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i150);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i151);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i152);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(fn__map__values_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i153);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(15) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(16));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i156);
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i157);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(7);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i157);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i157);
	}
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i161);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i156);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i163);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i156);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i165);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i166);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i169);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i170);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(10) = MR_ctfield(1, MR_sv(11), 0);
	MR_sv(11) = MR_ctfield(1, MR_sv(11), 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i173);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i174);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TESTR(MR_sv(11),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i177);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i180);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i179);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i296);
	}
	MR_r1 = MR_sv(1);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i182);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(16));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i184);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i155);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_new_user_init_pred_5_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i185);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i186);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i187);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 6);
	MR_r7 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_sv(13);
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 4) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 5) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr4),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i4) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i27) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i37));
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(15) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(16));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i192);
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i192);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i194);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i195);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i198);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i201);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i203);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i296);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i203);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(16));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i205);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i190);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_new_user_init_pred_5_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i206);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_r7 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(13);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr2),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i4) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i27) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i37));
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,20);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_r1 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr9, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr10, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(17);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,22);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_r1 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr9, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr10, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(17);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,24);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_r1 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr9, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr10, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(17);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r7, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i228);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_tempr2 = MR_r1;
	MR_sv(13) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_ctfield(3, MR_sv(1), 3);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_new_user_init_pred_5_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i220);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_r7 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(13);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr2),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i4) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i27) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i37));
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_passes__this_file_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i229);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Bad introduced initialise declaration.", 38);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r7 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i233);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_tempr1 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 3);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i232);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_passes__this_file_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i234);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Bad introduced finalise declaration.", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i232);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i236);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i238);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i237);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i241);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,26);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(17);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i243);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i244);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i245);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i246);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(fn__map__values_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i247);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(15) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(16));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i250);
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i251);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(9);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i251);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i251);
	}
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i255);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i250);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i257);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i250);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i259);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i260);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(12) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(13) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i263);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i264);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TEST(MR_sv(13),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(12) = MR_ctfield(1, MR_sv(13), 0);
	MR_sv(13) = MR_ctfield(1, MR_sv(13), 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i267);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i268);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i271);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i274);
	}
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i273);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i296);
	}
	MR_r1 = MR_sv(8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i276);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(16));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i278);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i249);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_new_user_final_pred_5_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i279);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,7,2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i280);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i281);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 6);
	MR_r7 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 4) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 5) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr4),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i4) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i27) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i37));
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(15) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(16));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i286);
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i286);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i288);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i289);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i292);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i295);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i297);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i296);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i297);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(16));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i299);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i284);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_new_user_final_pred_5_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i300);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_r7 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,7,2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr2),
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i4) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i27) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i29) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i37));
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,28);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(17);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,30);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr9, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr10, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(17);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,31);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(17);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 5);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i306);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i308);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,387)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i309);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i310);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i311);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i313) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i387) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i387) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i387) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i387) MR_AND
		MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i323));
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i314);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_constant_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i315);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_thread_local_1_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i316);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_c_mutable_defn_and_decl_11_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i317);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r7 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,323)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_r5 = (MR_Integer) 4;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__decide_mutable_target_var_name_9_0,
		hlds__make_hlds__make_hlds_passes__add_item_clause_10_0_i324);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_box_policy_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module21)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,2,3,4,5,6,8,9,10)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,11,14,17,16,15,18,13,20)
	MR_init_label1(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(15) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(16) = MR_tempr1;
	MR_sv(17) = MR_r6;
	MR_sv(18) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 6);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_constant_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_thread_local_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 221;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i8);
	}
	MR_sv(12) = MR_r1;
	MR_sv(13) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = (MR_Integer) 1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(parse_tree__prog_data__set_box_policy_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i13);
	}
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i16);
	}
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r7 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r9 = MR_sv(15);
	MR_r11 = MR_sv(16);
	MR_r12 = MR_sv(17);
	MR_r13 = MR_sv(18);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r7 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r8 = (MR_Word) MR_string_const("MR_Word", 7);
	MR_r9 = MR_sv(15);
	MR_r11 = MR_sv(16);
	MR_r12 = MR_sv(17);
	MR_r13 = MR_sv(18);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r10;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i18);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r4;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r7 = MR_r3;
	MR_r3 = MR_sv(8);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i21);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i20);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(15);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(17);
	MR_r11 = MR_sv(18);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0_i21);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_preds_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r13 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r14 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r10 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r12 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r9 = MR_sv(14);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(parse_tree__prog_data__set_purity_3_0);
MR_decl_entry(parse_tree__prog_data__set_thread_safe_3_0);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module22)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,2,3,4,5,6,7,8,9)
	MR_init_label5(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,10,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_sv(12) = MR_r7;
	MR_sv(13) = MR_r9;
	MR_sv(14) = MR_r10;
	MR_sv(15) = MR_r11;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Word) MR_string_const("X", 1);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("X = ", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(7);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(2, MR_tempr3, 1) = MR_sv(16);
	MR_tfield(2, MR_tempr3, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr3, 3) = MR_sv(17);
	MR_tfield(2, MR_tempr3, 4) = MR_sv(9);
	MR_tfield(2, MR_tempr3, 5) = MR_sv(10);
	MR_tfield(2, MR_tempr3, 6) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_r4 = MR_sv(13);
	MR_sv(13) = MR_tempr1;
	MR_r5 = MR_sv(14);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr5;
	MR_r6 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const(" = X;", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_constant_mutable_access_preds_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(5);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(9);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(10);
	MR_tfield(2, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(14);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0);
MR_decl_entry(fn__parse_tree__prog_item__mutable_var_trailed_1_0);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module23)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,10,11,12,13,14,15,16,17)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,18,19,22,23,24,25,26,27)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,28,29,21,30,31,32,33,34)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,35,36,37,38,39,40,41,42)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,20,43,44,45,48,49,51,52)
	MR_init_label6(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,53,47,54,55,56,57)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(33);
	MR_sv(33) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r10;
	MR_sv(18) = MR_r9;
	MR_sv(19) = MR_r11;
	MR_sv(20) = MR_r12;
	MR_sv(21) = MR_r13;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_thread_local_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_mutex_var_name_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(25), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(25), 0) = MR_sv(9);
	MR_sv(24) = MR_r1;
	MR_sv(26) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Word) MR_string_const("X", 1);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i16);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(31) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	}
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(32) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i18);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_trailed_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i19);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i21);
	}
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(");", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i22);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", X, ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i23);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i24);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_get_thread_local_mutable(", 28);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i25);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(");", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i26);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", X, ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i27);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i28);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_set_thread_local_mutable(", 28);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i29);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(25);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_r4 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(22);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(23);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(24);
	MR_tfield(2, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(26);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r3 = MR_sv(9);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(21);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i20);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_string_const("\");\n#endif\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i30);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n                \"", 19);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i31);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i32);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  MR_LOCK(&", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i33);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#ifdef MR_THREAD_SAFE\n", 22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i34);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_string_const("\");\n#endif\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i35);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n                \"", 19);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i36);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i37);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  MR_UNLOCK(&", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i38);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#ifdef MR_THREAD_SAFE\n", 22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i39);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i40);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("X = ", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i41);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("= X;", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i42);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(25);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(22);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(23);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(24);
	MR_tfield(2, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(26);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r3 = MR_sv(9);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(21);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i43);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(25);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(27);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(28);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(29);
	MR_tfield(2, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(26);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i44);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(25);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(30);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 3) = MR_sv(31);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(15);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(32);
	MR_tfield(2, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(26);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i45);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(17),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i47);
	}
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_tempr1;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i48);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 172;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i49);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i51);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,33);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(11);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i54);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i52);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_trail_current_value(&", 24);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i53);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(2) = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i54);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_sv(10) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i54);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i55);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	}
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i56);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0_i57);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_primitive_preds_17_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(25);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(16);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(15);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(26);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(33);
	MR_decr_sp(33);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_util__goal_list_to_conj_2_0);
MR_decl_entry(fn__term__context_init_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module24)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,10,11,12,13,14,15,16,17)
	MR_init_label4(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,19,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_sv(15) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Word) MR_string_const("X", 1);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tempr6 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr3, 1) = MR_r1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(16) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__goal_list_to_conj_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(11) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_sv(10) = MR_tempr3;
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(1,7,0);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(17);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr3, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 5) = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(11) = MR_tempr1;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tempr5 = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(16);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__goal_list_to_conj_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(17);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr3, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 5) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i16);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i19);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_decr_sp_and_return(18);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const("IO", 2);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i20);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i21);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tempr7 = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 6);
	MR_r1 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_sv(17);
	MR_tfield(0, MR_tempr6, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr6, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr6, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr6, 4) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 5) = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0_i22);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_user_access_preds_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0);
MR_decl_entry(fn__parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module25)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,2,3,7,9,10,11,12,13)
	MR_init_label2(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,14,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r10;
	MR_sv(12) = MR_r12;
	MR_sv(13) = MR_r13;
	MR_sv(14) = MR_r14;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tempr2 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_tempr2;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i5);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,8);
	MR_sv(3) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r4;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_mutex_var_name_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("   pthread_mutex_init(&", 23);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("#ifdef MR_THREAD_SAFE\n", 22);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(10);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(2, MR_tempr3, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr3, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr3, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr3, 4) = MR_sv(4);
	MR_tfield(2, MR_tempr3, 5) = MR_r1;
	MR_tfield(2, MR_tempr3, 6) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(15);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr5;
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(15);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr3, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 5) = MR_tempr4;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr5;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_c_mutable_initialisation_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tempr6 = MR_sv(10);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 6);
	MR_r6 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(15);
	MR_tfield(0, MR_tempr4, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr4, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr4, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr4, 5) = MR_tempr3;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr6;
	MR_tempr5 = MR_tempr4;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr5;
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module26)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0);
	MR_init_label6(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0,2,3,6,5,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(9) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(10) = MR_tempr1;
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 6);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_constant_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_preds_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(3);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r8 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r9 = MR_r3;
	MR_r3 = MR_sv(8);
	MR_r10 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_initialisation_14_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module27)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,2,3,4,5,6,7,8,9)
	MR_init_label6(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,10,11,12,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r7;
	MR_sv(14) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Word) MR_string_const("X", 1);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_get_code_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tempr7 = MR_sv(5);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr5, 0) = MR_sv(10);
	MR_tfield(2, MR_tempr5, 1) = MR_sv(16);
	MR_tfield(2, MR_tempr5, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr5, 3) = MR_tempr2;
	MR_tfield(2, MR_tempr5, 4) = MR_sv(7);
	MR_tfield(2, MR_tempr5, 5) = MR_sv(8);
	MR_tfield(2, MR_tempr5, 6) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr6, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(3, MR_tempr6, 2) = MR_tempr5;
	MR_r5 = MR_sv(14);
	MR_sv(14) = MR_tempr3;
	MR_r6 = MR_sv(15);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr7;
	MR_r4 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(", X}", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'ML_erlang_global_server\' ! {set_mutable, ", 42);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_constant_mutable_access_preds_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(2, MR_tempr3, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr3, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(2, MR_tempr3, 4) = MR_sv(7);
	MR_tfield(2, MR_tempr3, 5) = MR_sv(8);
	MR_tfield(2, MR_tempr3, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(15);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module28)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,10,11,12,15,16,17,18,14)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,19,20,13,21,22,23,24,25)
	MR_init_label5(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,26,28,29,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(16) = MR_r10;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_thread_local_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Word) MR_string_const("X", 1);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	}
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(18), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(18), 0) = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i14);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("})", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("X = get({\'MR_thread_local_mutable\', ", 36);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i16);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("}, X)", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i17);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("put({\'MR_thread_local_mutable\', ", 32);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i18);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_r3 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(12);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 3) = MR_sv(17);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(10);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(8);
	MR_tfield(2, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(19);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r3 = MR_sv(6);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i13);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_get_code_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i19);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_passes__erlang_mutable_set_code_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i20);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(12);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 3) = MR_sv(17);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(10);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(8);
	MR_tfield(2, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(19);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r3 = MR_sv(6);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	}
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i21);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(11) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i22);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i23);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	}
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i24);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(10);
	MR_tfield(2, MR_tempr2, 5) = MR_r1;
	MR_tfield(2, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(19);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i25);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i26);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i28);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(20);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_string_const("IO", 2);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i29);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i30);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr11 = MR_sv(9);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tempr12 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 15;
	MR_tempr13 = MR_sv(12);
	MR_tfield(3, MR_tempr3, 1) = MR_tempr13;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr5, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr11;
	MR_tempr14 = MR_r1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr7, 1) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 6);
	MR_r1 = MR_tempr10;
	MR_tfield(0, MR_tempr10, 0) = MR_sv(19);
	MR_tfield(0, MR_tempr10, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr10, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr10, 3) = MR_tempr13;
	MR_tfield(0, MR_tempr10, 4) = MR_tempr7;
	MR_tfield(0, MR_tempr10, 5) = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr7;
	MR_r3 = MR_tempr12;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0_i31);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_user_access_preds_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tempr4 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(19);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr3, 5) = MR_tempr2;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr5;
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module29)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_initialisation_14_0);
	MR_init_label2(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_initialisation_14_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_initialisation_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_np_call_localret_ent(fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_initialisation_14_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_initialisation_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tempr2 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_erlang_mutable_initialisation_14_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_erlang_mutable_initialisation_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module30)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0);
	MR_init_label3(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_10_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module31)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0);
	MR_init_label3(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_get_globals_3_0);
MR_decl_entry(parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_init_6_0);
MR_decl_entry(hlds__hlds_module__module_info_set_used_modules_3_0);
MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(parse_tree__prog_out__maybe_write_string_4_0);
MR_decl_entry(parse_tree__prog_out__maybe_report_stats_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(map__foldl3_8_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0);
MR_decl_entry(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0);
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(hlds__hlds_module__module_info_optimize_2_0);
MR_decl_entry(hlds__make_hlds__qual_info__init_qual_info_3_0);
MR_decl_entry(parse_tree__module_qual__mq_info_get_type_error_flag_2_0);
MR_decl_entry(parse_tree__module_qual__mq_info_get_mode_error_flag_2_0);
MR_decl_entry(parse_tree__error_util__sort_error_specs_2_0);
MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_num_errors_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module32)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,10,13,14,15,12,16,18,19)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,21,23,17,25,26,27,28,29)
	MR_init_label8(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,30,31,32,33,34,35,36,37)
	MR_init_label3(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,38,39,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	}
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_init_6_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_used_modules_3_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_r1 = (MR_Integer) 43;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Processed all items in pass 1\n", 32);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_report_stats_3_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i12);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,2,34);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,11,0);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_np_call_localret_ent(map__foldl3_8_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Integer) 0;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i18);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i16);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_sv(7);
	MR_sv(7) = (MR_Integer) 1;
	MR_sv(8) = (MR_Integer) 1;
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i18);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i19);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i17);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i21);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i17);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i23);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,1);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i25);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_optimize_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i26);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("% Processed all items in pass 2\n", 32);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i27);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_report_stats_3_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i28);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__init_qual_info_3_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i29);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 8);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_list_clauses_8_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i30);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i31);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_get_type_error_flag_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i32);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__bool__or_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i33);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__bool__or_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i34);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_get_mode_error_flag_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i35);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__bool__or_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i36);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__error_util__sort_error_specs_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i37);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i38);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i39);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0_i40);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_stratified_preds_2_0);
MR_decl_entry(set__insert_list_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_stratified_preds_3_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module33)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0,2,4,6,7,8,3,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_sym_arity_5_0,
		hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_stratified_preds_2_0,
		hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__insert_list_3_0,
		hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_stratified_preds_3_0,
		hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\140:- pragma ", 11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_0,
		hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_stratified_pred_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(hlds__hlds_pred__pred_info_is_exported_1_0);
MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module34)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,32,4,5,7,6,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i32);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_exported_1_0,
		hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i6);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i6);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i6);
	}
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_sv(4) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_sv(4) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,
		hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bool__or_3_0,
		hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module35)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,3,6,5,4,9,10,11,13)
	MR_init_label7(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,14,15,16,17,2,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(10) = MR_tempr1;
	MR_sv(11) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_sym_arity_5_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i2);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("make_hlds_passes.m", 18);
	MR_r2 = (MR_Word) MR_string_const("get_matching_pred_ids: unqualified name", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__pragma_add_marker_7_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i13);
	}
	MR_r2 = MR_sv(9);
	MR_sv(1) = MR_sv(11);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i16);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error: \140:- pragma ", 18);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,12);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,29);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i16);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i17);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\140:- pragma ", 11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i18);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_0,
		hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0_i19);
MR_def_label(hlds__make_hlds__make_hlds_passes__do_add_pred_marker_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module36)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,23,3,4,5,10,11,9,13)
	MR_init_label1(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(8);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0_i9);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, marker);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__semidet_fail_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module37)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0);
	MR_init_label8(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,4,2,6,7,8,9,11,12)
	MR_init_label1(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_np_call_localret_ent(builtin__semidet_fail_0_0,
		hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0_i2);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_r6 = (MR_Integer) 1;
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r7 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_r6;
	MR_r6 = (MR_Integer) 0;
MR_def_label(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r7;
	MR_np_call_localret_ent(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,
		hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__pragma_check_markers_4_0,
		hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0_i11);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error: \140:- pragma ", 18);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0_i13);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_pred_marker_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,36);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,30);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(8);
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
MR_decl_entry(varset__init_1_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(parse_tree__prog_type__construct_type_3_0);
MR_decl_entry(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module38)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0);
	MR_init_label3(hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,12,0);
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Word) MR_tbmkword(0, 8);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module39)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__get_matching_foreign_name_3_0);
	MR_init_label1(hlds__make_hlds__make_hlds_passes__get_matching_foreign_name_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__get_matching_foreign_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.make_hlds.make_hlds_passes.get_matching_foreign_name/3-0", 1,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, foreign_name);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__make_hlds__make_hlds_passes__get_matching_foreign_name_3_0_i1);
MR_def_label(hlds__make_hlds__make_hlds_passes__get_matching_foreign_name_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	if ((MR_fv(1) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module40)
	MR_init_entry1(__Unify___hlds__make_hlds__make_hlds_passes__add_marker_pred_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__make_hlds_passes__add_marker_pred_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module41)
	MR_init_entry1(__Compare___hlds__make_hlds__make_hlds_passes__add_marker_pred_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__make_hlds_passes__add_marker_pred_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__import_status_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module42)
	MR_init_entry1(__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0);
	MR_init_label3(__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__import_status_0_0,
		__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0_i4);
MR_def_label(__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__make_hlds_passes__item_status_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__import_status_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module43)
	MR_init_entry1(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0);
	MR_init_label4(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0_i2);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__import_status_0_0,
		__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0_i5);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_passes__item_status_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_recompilation__type_ctor_info_version_numbers_0;
MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module44)
	MR_init_entry1(hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_item_clause__983__1_4_0);
	MR_init_label1(hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_item_clause__983__1_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_item_clause__983__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(recompilation, version_numbers);
	MR_r4 = MR_ctfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_item_clause__983__1_4_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_item_clause__983__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module45)
	MR_init_entry1(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0);
	MR_init_label8(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,3,6,5,4,9,10,11,13)
	MR_init_label7(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,14,15,16,17,2,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r9;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i3);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_sym_arity_5_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i6);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i2);
	}
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i4);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("make_hlds_passes.m", 18);
	MR_r2 = (MR_Word) MR_string_const("get_matching_pred_ids: unqualified name", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i4);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i9);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i10);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i11);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i13);
	}
	MR_r2 = MR_sv(8);
	MR_sv(1) = MR_sv(10);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i16);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i14);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error: \140:- pragma ", 18);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i15);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,12);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,29);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i16);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i17);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\140:- pragma ", 11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i18);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0_i19);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_passes_module46)
	MR_init_entry1(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0);
	MR_init_label8(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,34,4,5,6,7,9,8,15)
	MR_init_label2(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i34);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i4);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i5);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i6);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i7);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_exported_1_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i9);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i8);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i8);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,3)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i8);
	}
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_sv(3) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_np_call_localret_ent(map__det_update_4_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i15);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_sv(3) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_np_call_localret_ent(map__det_update_4_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i15);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i16);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bool__or_3_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0_i17);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_112_97_115_115_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__make_hlds_passes_maybe_bunch_0(void)
{
	hlds__make_hlds__make_hlds_passes_module0();
	hlds__make_hlds__make_hlds_passes_module1();
	hlds__make_hlds__make_hlds_passes_module2();
	hlds__make_hlds__make_hlds_passes_module3();
	hlds__make_hlds__make_hlds_passes_module4();
	hlds__make_hlds__make_hlds_passes_module5();
	hlds__make_hlds__make_hlds_passes_module6();
	hlds__make_hlds__make_hlds_passes_module7();
	hlds__make_hlds__make_hlds_passes_module8();
	hlds__make_hlds__make_hlds_passes_module9();
	hlds__make_hlds__make_hlds_passes_module10();
	hlds__make_hlds__make_hlds_passes_module11();
	hlds__make_hlds__make_hlds_passes_module12();
	hlds__make_hlds__make_hlds_passes_module13();
	hlds__make_hlds__make_hlds_passes_module14();
	hlds__make_hlds__make_hlds_passes_module15();
	hlds__make_hlds__make_hlds_passes_module16();
	hlds__make_hlds__make_hlds_passes_module17();
	hlds__make_hlds__make_hlds_passes_module18();
	hlds__make_hlds__make_hlds_passes_module19();
	hlds__make_hlds__make_hlds_passes_module20();
	hlds__make_hlds__make_hlds_passes_module21();
	hlds__make_hlds__make_hlds_passes_module22();
	hlds__make_hlds__make_hlds_passes_module23();
	hlds__make_hlds__make_hlds_passes_module24();
	hlds__make_hlds__make_hlds_passes_module25();
	hlds__make_hlds__make_hlds_passes_module26();
	hlds__make_hlds__make_hlds_passes_module27();
	hlds__make_hlds__make_hlds_passes_module28();
	hlds__make_hlds__make_hlds_passes_module29();
	hlds__make_hlds__make_hlds_passes_module30();
	hlds__make_hlds__make_hlds_passes_module31();
	hlds__make_hlds__make_hlds_passes_module32();
	hlds__make_hlds__make_hlds_passes_module33();
	hlds__make_hlds__make_hlds_passes_module34();
	hlds__make_hlds__make_hlds_passes_module35();
	hlds__make_hlds__make_hlds_passes_module36();
	hlds__make_hlds__make_hlds_passes_module37();
	hlds__make_hlds__make_hlds_passes_module38();
	hlds__make_hlds__make_hlds_passes_module39();
}

static void mercury__hlds__make_hlds__make_hlds_passes_maybe_bunch_1(void)
{
	hlds__make_hlds__make_hlds_passes_module40();
	hlds__make_hlds__make_hlds_passes_module41();
	hlds__make_hlds__make_hlds_passes_module42();
	hlds__make_hlds__make_hlds_passes_module43();
	hlds__make_hlds__make_hlds_passes_module44();
	hlds__make_hlds__make_hlds_passes_module45();
	hlds__make_hlds__make_hlds_passes_module46();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__make_hlds_passes__init(void);
void mercury__hlds__make_hlds__make_hlds_passes__init_type_tables(void);
void mercury__hlds__make_hlds__make_hlds_passes__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__make_hlds_passes__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__make_hlds_passes__init_complexity_procs(void);
#endif

void mercury__hlds__make_hlds__make_hlds_passes__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__make_hlds_passes_maybe_bunch_0();
	mercury__hlds__make_hlds__make_hlds_passes_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__make_hlds_passes__type_ctor_info_item_status_0,
		hlds__make_hlds__make_hlds_passes__item_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__make_hlds_passes__type_ctor_info_add_marker_pred_info_0,
		hlds__make_hlds__make_hlds_passes__add_marker_pred_info_0_0);
	mercury__hlds__make_hlds__make_hlds_passes__init_debugger();
}

void mercury__hlds__make_hlds__make_hlds_passes__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__make_hlds_passes__type_ctor_info_item_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__make_hlds_passes__type_ctor_info_add_marker_pred_info_0);
	}
}


void mercury__hlds__make_hlds__make_hlds_passes__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__make_hlds_passes__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__make_hlds_passes);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__make_hlds_passes__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
