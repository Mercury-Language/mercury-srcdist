/*
** Automatically generated from `old_query.m'
** by the Mercury compiler,
** version 10.04.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__old_query__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 539 "../library/io.int"
#include "io.mh"

#line 28 "old_query.c"
#line 547 "../library/io.int"
#include "string.mh"

#line 32 "old_query.c"
#line 268 "profile.int"
#include "profile.mh"

#line 36 "old_query.c"
#line 149 "../library/array.int"
#include "array.mh"

#line 40 "old_query.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "old_query.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "old_query.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "old_query.c"
#line 53 "old_query.c"
#include "old_query.mh"

#line 56 "old_query.c"
#line 57 "old_query.c"
#ifndef OLD_QUERY_DECL_GUARD
#define OLD_QUERY_DECL_GUARD

#line 61 "old_query.c"
#line 62 "old_query.c"

#endif
#line 65 "old_query.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
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
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Integer f4;
	MR_Integer f5;
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
	MR_Integer f1[3];
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[3];
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
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_String f4;
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_old_query__type_ctor_info_assume_cross_clique_0,
	mercury_data_old_query__type_ctor_info_call_site_context_0,
	mercury_data_old_query__type_ctor_info_call_site_display_0,
	mercury_data_old_query__type_ctor_info_call_site_proc_name_0,
	mercury_data_old_query__type_ctor_info_url_with_proc_name_0,
	mercury_data_old_query__type_ctor_info_wrap_with_url_0;
MR_decl_label8(old_query__accumulate_csd_prof_info_7_0, 2,3,4,5,6,8,10,7)
MR_decl_label2(old_query__append_csdi_to_string_3_0, 2,3)
MR_decl_label10(old_query__append_slot_to_string_3_0, 4,6,7,8,9,10,11,3,13,14)
MR_decl_label1(old_query__append_slot_to_string_3_0, 15)
MR_decl_label10(old_query__call_site_clique_to_html_7_0, 2,6,5,9,12,13,15,8,3,19)
MR_decl_label3(old_query__call_site_clique_to_html_7_0, 18,17,21)
MR_decl_label4(old_query__child_call_sites_4_0, 2,3,4,5)
MR_decl_label10(old_query__clique_ancestors_to_html_7_0, 2,4,6,21,7,8,10,13,14,15)
MR_decl_label1(old_query__clique_ancestors_to_html_7_0, 16)
MR_decl_label10(old_query__clique_to_html_6_0, 3,2,4,5,8,10,11,12,15,17)
MR_decl_label10(old_query__clique_to_html_6_0, 20,21,14,28,29,30,32,33,34,35)
MR_decl_label10(old_query__clique_to_html_6_0, 31,36,37,38,39,40,41,42,43,44)
MR_decl_label2(old_query__clique_to_html_6_0, 45,46)
MR_decl_label10(old_query__generate_clique_page_7_0, 2,3,4,5,6,7,9,10,11,12)
MR_decl_label5(old_query__generate_clique_page_7_0, 13,14,15,16,17)
MR_decl_label10(old_query__generate_proc_callers_page_9_0, 2,5,4,7,8,10,12,13,14,15)
MR_decl_label6(old_query__generate_proc_callers_page_9_0, 16,17,19,20,21,22)
MR_decl_label4(old_query__group_proc_dynamics_by_proc_static_4_0, 3,4,7,5)
MR_decl_label10(old_query__multi_call_site_clique_to_html_10_0, 2,3,5,8,11,12,13,14,15,16)
MR_decl_label7(old_query__multi_call_site_clique_to_html_10_0, 17,18,19,20,21,22,24)
MR_decl_label10(old_query__old_exec_6_0, 6,4,9,10,3,14,16,18,20,22)
MR_decl_label10(old_query__old_exec_6_0, 24,25,29,28,32,33,27,37,41,39)
MR_decl_label10(old_query__old_exec_6_0, 44,45,38,53,51,56,57,58,49,61)
MR_decl_label10(old_query__old_exec_6_0, 62,65,64,68,70,67,74,75,73,77)
MR_decl_label10(old_query__proc_callers_to_html_8_0, 2,6,10,14,18,4,21,3,22,29)
MR_decl_label10(old_query__proc_callers_to_html_8_0, 34,35,36,37,38,39,40,41,42,43)
MR_decl_label10(old_query__proc_callers_to_html_8_0, 44,45,46,28,49,54,55,56,57,58)
MR_decl_label10(old_query__proc_callers_to_html_8_0, 59,60,61,62,63,64,65,66,67,48)
MR_decl_label10(old_query__proc_callers_to_html_8_0, 70,75,76,77,78,79,80,81,82,83)
MR_decl_label10(old_query__proc_callers_to_html_8_0, 84,85,86,87,88,69,90,95,96,97)
MR_decl_label10(old_query__proc_callers_to_html_8_0, 98,99,100,101,102,103,104,105,106,107)
MR_decl_label10(old_query__proc_callers_to_html_8_0, 27,109,110,111,113,114,117,118,119,115)
MR_decl_label10(old_query__proc_callers_to_html_8_0, 120,123,124,125,121,126,129,130,131,127)
MR_decl_label4(old_query__proc_callers_to_html_8_0, 133,134,135,137)
MR_decl_label10(old_query__proc_in_clique_to_html_7_0, 3,5,6,7,8,9,10,11,12,14)
MR_decl_label10(old_query__proc_in_clique_to_html_7_0, 21,22,23,24,26,27,28,29,30,2)
MR_decl_label10(old_query__procs_in_clique_to_html_7_0, 3,43,8,10,11,12,13,16,17,18)
MR_decl_label6(old_query__procs_in_clique_to_html_7_0, 19,20,21,22,23,24)
MR_decl_label5(old_query__select_line_bunch_6_0, 3,2,6,8,7)
MR_decl_label2(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0, 3,6)
MR_decl_label2(fn__old_query__append_pdi_to_string_2_0, 2,3)
MR_decl_label10(fn__old_query__call_site_dynamic_to_html_5_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label4(fn__old_query__call_site_dynamic_to_html_5_0, 13,14,15,16)
MR_decl_label4(fn__old_query__call_site_kind_and_callee_to_html_1_0, 3,4,5,6)
MR_decl_label6(fn__old_query__call_site_summary_group_to_html_7_0, 3,4,5,6,7,8)
MR_decl_label10(fn__old_query__call_site_summary_to_html_3_0, 2,4,5,6,7,10,12,13,14,15)
MR_decl_label10(fn__old_query__call_to_html_8_0, 4,3,2,6,5,8,10,12,11,15)
MR_decl_label10(fn__old_query__call_to_html_8_0, 16,17,18,19,20,22,23,28,26,31)
MR_decl_label9(fn__old_query__call_to_html_8_0, 33,21,37,36,39,41,42,43,44)
MR_decl_label10(fn__old_query__chase_the_action_5_0, 32,2,3,4,5,6,7,9,10,11)
MR_decl_label7(fn__old_query__chase_the_action_5_0, 12,13,14,15,16,17,34)
MR_decl_label10(fn__old_query__generate_call_site_dynamic_debug_page_2_0, 3,5,6,7,8,9,10,11,12,13)
MR_decl_label1(fn__old_query__generate_call_site_dynamic_debug_page_2_0, 2)
MR_decl_label10(fn__old_query__generate_call_site_static_debug_page_2_0, 3,5,6,7,8,10,11,12,13,14)
MR_decl_label10(fn__old_query__generate_call_site_static_debug_page_2_0, 15,16,17,18,19,20,21,22,23,24)
MR_decl_label3(fn__old_query__generate_call_site_static_debug_page_2_0, 25,26,2)
MR_decl_label9(fn__old_query__generate_clique_debug_page_2_0, 3,5,6,7,8,10,11,12,2)
MR_decl_label10(fn__old_query__generate_menu_page_3_0, 2,3,4,6,9,10,15,17,18,19)
MR_decl_label10(fn__old_query__generate_menu_page_3_0, 20,11,24,25,27,29,31,36,39,42)
MR_decl_label10(fn__old_query__generate_menu_page_3_0, 43,44,45,46,47,32,51,52,55,58)
MR_decl_label10(fn__old_query__generate_menu_page_3_0, 60,62,63,66,67,68,69,70,71,72)
MR_decl_label10(fn__old_query__generate_menu_page_3_0, 73,74,75,76,77,78,79,80,81,82)
MR_decl_label10(fn__old_query__generate_menu_page_3_0, 83,84,85,86,87,88,89,90,91,92)
MR_decl_label10(fn__old_query__generate_menu_page_3_0, 93,94,95,96,97,98,99,100,101,102)
MR_decl_label10(fn__old_query__generate_module_page_5_0, 4,5,10,7,12,15,16,17,18,19)
MR_decl_label10(fn__old_query__generate_module_page_5_0, 20,21,22,24,25,26,27,28,29,30)
MR_decl_label1(fn__old_query__generate_module_page_5_0, 31)
MR_decl_label10(fn__old_query__generate_modules_page_3_0, 2,3,5,6,9,12,13,14,17,18)
MR_decl_label9(fn__old_query__generate_modules_page_3_0, 19,20,21,22,23,24,25,26,27)
MR_decl_label10(fn__old_query__generate_proc_dynamic_debug_page_2_0, 3,5,6,7,8,9,11,12,13,2)
MR_decl_label10(fn__old_query__generate_proc_page_4_0, 2,3,4,5,6,7,9,10,11,12)
MR_decl_label8(fn__old_query__generate_proc_page_4_0, 13,14,15,16,17,18,19,20)
MR_decl_label10(fn__old_query__generate_proc_static_debug_page_2_0, 3,5,6,7,8,9,10,11,12,13)
MR_decl_label2(fn__old_query__generate_proc_static_debug_page_2_0, 14,2)
MR_decl_label10(fn__old_query__generate_top_procs_page_7_0, 3,2,4,7,8,9,6,12,13,14)
MR_decl_label10(fn__old_query__generate_top_procs_page_7_0, 15,18,19,20,21,22,23,24,25,17)
MR_decl_label10(fn__old_query__generate_top_procs_page_7_0, 30,31,32,35,36,37,39,40,41,42)
MR_decl_label9(fn__old_query__generate_top_procs_page_7_0, 43,44,45,46,47,48,49,50,51)
MR_decl_label10(fn__old_query__lookup_proc_total_to_html_5_0, 2,6,4,8,9,11,12,13,14,15)
MR_decl_label5(fn__old_query__lookup_proc_total_to_html_5_0, 16,17,18,19,1)
MR_decl_label10(fn__old_query__lookup_proc_total_to_two_id_line_5_0, 2,3,4,6,7,8,9,10,11,12)
MR_decl_label2(fn__old_query__lookup_proc_total_to_two_id_line_5_0, 13,14)
MR_decl_label10(fn__old_query__maybe_extract_action_clique_4_0, 34,3,4,17,5,6,7,8,9,10)
MR_decl_label4(fn__old_query__menu_item_4_0, 2,3,4,5)
MR_decl_label8(fn__old_query__module_summary_to_html_3_0, 5,3,8,9,10,11,12,1)
MR_decl_label10(fn__old_query__multi_call_site_summary_to_html_7_0, 3,6,9,12,2,17,20,21,22,23)
MR_decl_label2(fn__old_query__multi_call_site_summary_to_html_7_0, 28,25)
MR_decl_label10(fn__old_query__normal_call_site_summary_to_html_7_0, 2,5,6,7,8,9,4,15,16,13)
MR_decl_label10(fn__old_query__present_stats_1_0, 2,4,5,6,7,8,9,10,11,12)
MR_decl_label10(fn__old_query__present_stats_1_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(fn__old_query__present_stats_1_0, 23,24,25,26,27,28,29,31,32,33)
MR_decl_label10(fn__old_query__present_stats_1_0, 34,35,36,37,38,39,40,41,42,43)
MR_decl_label9(fn__old_query__present_stats_1_0, 44,45,46,47,48,49,50,51,52)
MR_decl_label10(fn__old_query__proc_callers_banner_8_0, 3,4,5,6,7,8,11,12,13,9)
MR_decl_label10(fn__old_query__proc_callers_banner_8_0, 17,18,19,15,22,23,24,25,26,27)
MR_decl_label10(fn__old_query__proc_callers_banner_8_0, 21,31,32,33,34,35,29,41,43,44)
MR_decl_label10(fn__old_query__proc_callers_banner_8_0, 45,46,47,48,49,50,51,52,53,54)
MR_decl_label10(fn__old_query__proc_callers_call_site_to_html_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label4(fn__old_query__proc_callers_call_site_to_html_4_0, 12,13,14,15)
MR_decl_label8(fn__old_query__proc_callers_clique_to_html_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(fn__old_query__proc_callers_module_to_html_4_0, 2,3,4,5)
MR_decl_label10(fn__old_query__proc_callers_proc_to_html_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label3(fn__old_query__proc_callers_proc_to_html_4_0, 12,13,14)
MR_decl_label10(fn__old_query__proc_summary_to_html_3_0, 2,3,4,5,9,10,12,13,21,15)
MR_decl_label3(fn__old_query__proc_summary_to_html_3_0, 16,18,19)
MR_decl_label10(fn__old_query__proc_summary_toggles_to_html_3_0, 6,7,8,9,10,11,12,13,14,15)
MR_decl_label4(fn__old_query__proc_summary_toggles_to_html_3_0, 16,17,18,19)
MR_decl_label10(fn__old_query__proc_total_to_two_id_line_7_0, 2,4,5,6,7,8,9,10,11,12)
MR_decl_label5(fn__old_query__wrap_clique_links_5_0, 4,5,6,7,8)
MR_decl_label5(fn__old_query__wrap_module_links_5_0, 4,5,6,7,8)
MR_decl_label5(fn__old_query__wrap_modules_links_4_0, 3,4,5,6,7)
MR_decl_label5(fn__old_query__wrap_proc_callers_links_7_0, 4,5,6,7,8)
MR_decl_label5(fn__old_query__wrap_proc_links_5_0, 4,5,6,7,8)
MR_decl_label7(fn__old_query__wrap_top_procs_links_5_0, 3,24,6,7,8,9,10)
MR_decl_label2(__Unify___old_query__call_site_display_0_0, 6,1)
MR_decl_label4(__Unify___old_query__wrap_with_url_0_0, 5,13,6,1)
MR_decl_label6(__Compare___old_query__call_site_display_0_0, 3,2,5,9,13,37)
MR_decl_label9(__Compare___old_query__wrap_with_url_0_0, 7,5,11,33,9,25,14,26,15)
MR_decl_static(fn__old_query__generate_proc_static_debug_page_2_0)
MR_decl_static(fn__old_query__generate_proc_dynamic_debug_page_2_0)
MR_decl_static(fn__old_query__generate_call_site_static_debug_page_2_0)
MR_decl_static(fn__old_query__generate_call_site_dynamic_debug_page_2_0)
MR_decl_static(fn__old_query__generate_clique_debug_page_2_0)
MR_decl_static(fn__old_query__menu_text_0_0)
MR_decl_static(fn__old_query__menu_item_4_0)
MR_decl_static(fn__old_query__present_stats_1_0)
MR_decl_static(fn__old_query__generate_menu_page_3_0)
MR_decl_static(fn__old_query__call_to_html_8_0)
MR_decl_static(fn__old_query__call_site_dynamic_to_html_5_0)
MR_decl_static(old_query__clique_ancestors_to_html_7_0)
MR_decl_static(old_query__clique_to_html_6_0)
MR_decl_static(old_query__generate_clique_page_7_0)
MR_decl_static(fn__old_query__chase_the_action_5_0)
MR_decl_static(fn__old_query__proc_total_to_two_id_line_7_0)
MR_decl_static(fn__old_query__lookup_proc_total_to_two_id_line_5_0)
MR_decl_static(fn__old_query__proc_summary_to_html_3_0)
MR_decl_static(fn__old_query__proc_summary_toggles_to_html_3_0)
MR_decl_static(fn__old_query__generate_proc_page_4_0)
MR_decl_static(old_query__select_line_bunch_6_0)
MR_decl_static(fn__old_query__proc_callers_banner_8_0)
MR_decl_static(old_query__proc_callers_to_html_8_0)
MR_decl_static(old_query__generate_proc_callers_page_9_0)
MR_decl_static(fn__old_query__generate_modules_page_3_0)
MR_decl_static(fn__old_query__generate_module_page_5_0)
MR_decl_static(fn__old_query__generate_top_procs_page_7_0)
MR_def_extern_entry(old_query__old_exec_6_0)
MR_decl_static(old_query__append_slot_to_string_3_0)
MR_decl_static(old_query__append_csdi_to_string_3_0)
MR_decl_static(fn__old_query__append_pdi_to_string_2_0)
MR_decl_static(fn__old_query__call_site_kind_and_callee_to_html_1_0)
MR_decl_static(old_query__not_mercury_runtime_1_0)
MR_decl_static(fn__old_query__module_summary_to_html_3_0)
MR_decl_static(old_query__proc_group_contains_2_0)
MR_decl_static(old_query__group_proc_dynamics_by_proc_static_4_0)
MR_decl_static(old_query__child_call_sites_4_0)
MR_decl_static(old_query__proc_in_clique_to_html_7_0)
MR_decl_static(old_query__procs_in_clique_to_html_7_0)
MR_decl_static(fn__old_query__lookup_proc_total_to_html_5_0)
MR_decl_static(fn__old_query__maybe_extract_action_clique_4_0)
MR_decl_static(fn__old_query__downward_summary_display_0_0)
MR_decl_static(old_query__multi_call_site_clique_to_html_10_0)
MR_decl_static(old_query__call_site_clique_to_html_7_0)
MR_decl_static(fn__old_query__call_site_summary_group_to_html_7_0)
MR_decl_static(fn__old_query__normal_call_site_summary_to_html_7_0)
MR_decl_static(fn__old_query__multi_call_site_summary_to_html_7_0)
MR_decl_static(fn__old_query__call_site_summary_to_html_3_0)
MR_decl_static(old_query__accumulate_csd_prof_info_7_0)
MR_decl_static(fn__old_query__proc_callers_call_site_to_html_4_0)
MR_decl_static(fn__old_query__proc_callers_proc_to_html_4_0)
MR_decl_static(fn__old_query__proc_callers_module_to_html_4_0)
MR_decl_static(fn__old_query__proc_callers_clique_to_html_4_0)
MR_decl_static(fn__old_query__wrap_clique_links_5_0)
MR_decl_static(fn__old_query__wrap_proc_links_5_0)
MR_decl_static(fn__old_query__wrap_proc_callers_links_7_0)
MR_decl_static(fn__old_query__wrap_module_links_5_0)
MR_decl_static(fn__old_query__wrap_modules_links_4_0)
MR_decl_static(fn__old_query__wrap_top_procs_links_5_0)
MR_decl_static(__Unify___old_query__assume_cross_clique_0_0)
MR_decl_static(__Compare___old_query__assume_cross_clique_0_0)
MR_decl_static(__Unify___old_query__call_site_context_0_0)
MR_decl_static(__Compare___old_query__call_site_context_0_0)
MR_decl_static(__Unify___old_query__call_site_display_0_0)
MR_decl_static(__Compare___old_query__call_site_display_0_0)
MR_decl_static(__Unify___old_query__call_site_proc_name_0_0)
MR_decl_static(__Compare___old_query__call_site_proc_name_0_0)
MR_decl_static(__Unify___old_query__url_with_proc_name_0_0)
MR_decl_static(__Compare___old_query__url_with_proc_name_0_0)
MR_decl_static(__Unify___old_query__wrap_with_url_0_0)
MR_decl_static(__Compare___old_query__wrap_with_url_0_0)
MR_decl_static(fn__old_query__IntroducedFrom__func__module_to_html__724__1_1_0)
MR_decl_static(old_query__IntroducedFrom__pred__normal_call_site_summary_to_html__1156__1_2_0)
MR_decl_static(fn__old_query__IntroducedFrom__func__multi_call_site_summary_to_html__1191__1_2_0)
MR_decl_static(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_proc_dynamic_debug_page_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_clique_debug_page_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__append_slot_to_string_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__procs_in_clique_to_html_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__procs_in_clique_to_html_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__multi_call_site_summary_to_html_7_0_2;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_proc_dynamic_debug_page_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, call_site_array_slot),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_clique_debug_page_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__append_slot_to_string_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__procs_in_clique_to_html_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(measurements, own_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__procs_in_clique_to_html_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__multi_call_site_summary_to_html_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(9,15),
MR_COMMON(9,11)
}
},
};

MR_decl_entry(fn__apply_exclusion__pair_self_1_0);
MR_decl_entry(fn__profile__wrap_proc_static_ptr_1_0);
static const struct mercury_type_1 mercury_common_1[9] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(old_query__append_slot_to_string_3_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(fn__old_query__append_pdi_to_string_2_0),
0
},
{
MR_COMMON(7,2),
MR_ENTRY_AP(fn__apply_exclusion__pair_self_1_0),
0
},
{
MR_COMMON(7,3),
MR_ENTRY_AP(fn__apply_exclusion__pair_self_1_0),
0
},
{
MR_COMMON(7,4),
MR_ENTRY_AP(fn__apply_exclusion__pair_self_1_0),
0
},
{
MR_COMMON(15,0),
MR_ENTRY_AP(old_query__not_mercury_runtime_1_0),
0
},
{
MR_COMMON(7,5),
MR_ENTRY_AP(fn__old_query__IntroducedFrom__func__module_to_html__724__1_1_0),
0
},
{
MR_COMMON(7,6),
MR_ENTRY_AP(fn__profile__wrap_proc_static_ptr_1_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(old_query__append_csdi_to_string_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_old_html_format__type_ctor_info_sub_lines_1;
extern const MR_TypeCtorInfo_Struct mercury_data_old_html_format__type_ctor_info_two_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_old_html_format__type_ctor_info_sub_lines_1;
extern const MR_TypeCtorInfo_Struct mercury_data_old_html_format__type_ctor_info_two_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_exclude__type_ctor_info_exclude_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
static const struct mercury_type_2 mercury_common_2[12] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
{
{
MR_CTOR1_ADDR(old_html_format, sub_lines),
MR_CTOR0_ADDR(old_html_format, two_id)
}
},
{
{
MR_CTOR1_ADDR(old_html_format, sub_lines),
MR_CTOR0_ADDR(old_html_format, two_id)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(exclude, exclude_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(9,23)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,9,4)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
};

static const MR_Float mercury_float_const_0pt10000000000000001 = 0.10000000000000001;
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;
static const MR_Float mercury_float_const_100pt00000000000000 = 100.00000000000000;
static const MR_Float mercury_float_const_1000000pt0000000000 = 1000000.0000000000;
static const struct mercury_type_3 mercury_common_3[6] =
{
{
MR_tbmkword(0, 0)
},
{
MR_TAG_COMMON(1,4,0)
},
{
(MR_Word *) &mercury_float_const_0pt10000000000000001
},
{
(MR_Word *) &mercury_float_const_1pt0000000000000000
},
{
(MR_Word *) &mercury_float_const_100pt00000000000000
},
{
(MR_Word *) &mercury_float_const_1000000pt0000000000
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
90
},
{
1
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
1,
100
}
},
};

static const struct mercury_type_6 mercury_common_6[10] =
{
{
4,
MR_TAG_COMMON(0,5,0),
2,
0,
1
},
{
4,
MR_TAG_COMMON(0,5,0),
2,
1,
1
},
{
4,
MR_TAG_COMMON(0,5,0),
3,
0,
1
},
{
4,
MR_TAG_COMMON(1,3,2),
2,
0,
1
},
{
4,
MR_TAG_COMMON(1,3,3),
2,
1,
1
},
{
4,
MR_TAG_COMMON(2,3,4),
2,
1,
1
},
{
4,
MR_TAG_COMMON(1,3,2),
3,
0,
1
},
{
4,
MR_TAG_COMMON(1,3,3),
3,
1,
1
},
{
4,
MR_TAG_COMMON(2,3,5),
3,
1,
1
},
{
4,
MR_TAG_COMMON(1,3,3),
5,
1,
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__call_site_dynamic_to_html_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__clique_to_html_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__group_proc_dynamics_by_proc_static_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__normal_call_site_summary_to_html_7_0_1;
static const struct mercury_type_7 mercury_common_7[9] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__call_site_dynamic_to_html_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__old_query__clique_to_html_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(9,2)
},
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(9,7)
},
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(9,7)
},
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(9,7)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(9,15),
MR_COMMON(9,11)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_static_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__old_query__group_proc_dynamics_by_proc_static_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__normal_call_site_summary_to_html_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(profile, proc_static_ptr)
},
};

static const struct mercury_type_8 mercury_common_8[3] =
{
{
{
0,
0,
0
},
MR_tbmkword(0, 0)
},
{
{
1,
1,
1
},
MR_TAG_COMMON(1,4,1)
},
{
{
0,
1,
1
},
MR_TAG_COMMON(1,4,1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_top_procs__type_ctor_info_line_group_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_old_html_format__type_ctor_info_one_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_old_html_format__type_ctor_info_one_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_top_procs__type_ctor_info_line_group_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
static const struct mercury_type_9 mercury_common_9[25] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(2,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,2,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(2,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,2,0)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(old_html_format, two_id),
MR_TAG_COMMON(0,2,4)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(old_html_format, two_id),
MR_COMMON(2,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_TAG_COMMON(0,2,7)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(old_html_format, two_id),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_COMMON(2,8)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(old_html_format, two_id),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_TAG_COMMON(0,2,7)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(old_html_format, one_id),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(2,8)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(old_html_format, one_id),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,2,7)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(2,8)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,2,7)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(2,8)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(profile, module_data)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(profile, module_data)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(old_html_format, two_id),
MR_COMMON(2,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__clique_to_html_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__proc_summary_to_html_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_3;
static const struct mercury_type_10 mercury_common_10[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__clique_to_html_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(9,0),
MR_COMMON(9,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__proc_summary_to_html_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_COMMON(9,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(2,6),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(9,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(9,21),
MR_COMMON(9,15)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__clique_to_html_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__clique_to_html_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_in_clique_to_html_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__procs_in_clique_to_html_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__call_site_summary_group_to_html_7_0_1;
static const struct mercury_type_11 mercury_common_11[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__clique_to_html_6_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_INT_CTOR_ADDR,
MR_COMMON(9,2),
MR_STRING_CTOR_ADDR,
MR_COMMON(2,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__clique_to_html_6_0_4,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_INT_CTOR_ADDR,
MR_COMMON(9,2),
MR_STRING_CTOR_ADDR,
MR_COMMON(2,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_in_clique_to_html_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_INT_CTOR_ADDR,
MR_COMMON(9,22),
MR_COMMON(2,9),
MR_COMMON(2,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__procs_in_clique_to_html_7_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_STRING_CTOR_ADDR,
MR_COMMON(2,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__call_site_summary_group_to_html_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__generate_clique_page_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_order_criteria_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__chase_the_action_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_proc_page_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_display_limit_0;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__multi_call_site_clique_to_html_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_call_site_display_0;
static const struct mercury_type_12 mercury_common_12[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__generate_clique_page_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(profile, clique_ptr),
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(query, order_criteria),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__chase_the_action_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(profile, clique_ptr),
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(query, order_criteria),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_proc_page_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(query, order_criteria),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_BOOL_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(9,15)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_5,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(query, order_criteria),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_BOOL_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(9,15)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_4,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(query, display_limit),
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(query, order_criteria),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__multi_call_site_clique_to_html_10_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(old_query, call_site_display),
MR_COMMON(2,11),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(9,11)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__proc_summary_to_html_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_old_html_format__type_ctor_info_totals_disposition_0;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_in_clique_to_html_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__old_query__multi_call_site_clique_to_html_10_0_2;
static const struct mercury_type_13 mercury_common_13[13] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__proc_summary_to_html_3_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(old_html_format, totals_disposition),
MR_COMMON(9,5),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_5,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(9,10),
MR_COMMON(9,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_6,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(9,14),
MR_COMMON(9,15)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_7,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(9,17),
MR_COMMON(9,15)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_8,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(9,19),
MR_COMMON(9,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_9,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(old_html_format, totals_disposition),
MR_COMMON(9,11),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(query, order_criteria),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(old_html_format, totals_disposition),
MR_COMMON(9,11),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(old_html_format, totals_disposition),
MR_COMMON(9,11),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(old_html_format, totals_disposition),
MR_COMMON(9,11),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(old_html_format, totals_disposition),
MR_COMMON(9,11),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__proc_in_clique_to_html_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(old_html_format, totals_disposition),
MR_COMMON(9,5),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__multi_call_site_clique_to_html_10_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(2,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__generate_proc_callers_page_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_caller_groups_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__multi_call_site_summary_to_html_7_0_1;
static const struct mercury_type_14 mercury_common_14[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__old_query__generate_proc_callers_page_9_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(query, caller_groups),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(query, order_criteria),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__multi_call_site_summary_to_html_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(9,19),
MR_COMMON(9,15)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_2;
static const struct mercury_type_15 mercury_common_15[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(9,21)
},
};

static const struct mercury_type_16 mercury_common_16[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_17 mercury_common_17[1] =
{
{
MR_COMMON(0,5),
MR_ENTRY_AP(fn__old_query__IntroducedFrom__func__multi_call_site_summary_to_html__1191__1_2_0),
1,
MR_string_const("", 0)
},
};

static const MR_EnumFunctorDesc mercury_data_old_query__enum_functor_desc_assume_cross_clique_0_0 = {
	"assume_cross_clique",
	0
};

static const MR_EnumFunctorDesc mercury_data_old_query__enum_functor_desc_assume_cross_clique_0_1 = {
	"assume_within_clique",
	1
};

const MR_EnumFunctorDescPtr mercury_data_old_query__enum_value_ordered_assume_cross_clique_0[] = {
	&mercury_data_old_query__enum_functor_desc_assume_cross_clique_0_0,
	&mercury_data_old_query__enum_functor_desc_assume_cross_clique_0_1
};

const MR_EnumFunctorDescPtr mercury_data_old_query__enum_name_ordered_assume_cross_clique_0[] = {
	&mercury_data_old_query__enum_functor_desc_assume_cross_clique_0_0,
	&mercury_data_old_query__enum_functor_desc_assume_cross_clique_0_1
};

const MR_Integer mercury_data_old_query__functor_number_map_assume_cross_clique_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_assume_cross_clique_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___old_query__assume_cross_clique_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___old_query__assume_cross_clique_0_0)),
	"old_query",
	"assume_cross_clique",
	{ (void *)mercury_data_old_query__enum_name_ordered_assume_cross_clique_0 },
	{ (void *)mercury_data_old_query__enum_value_ordered_assume_cross_clique_0 },
	2,
	4,
	mercury_data_old_query__functor_number_map_assume_cross_clique_0
};

static const MR_EnumFunctorDesc mercury_data_old_query__enum_functor_desc_call_site_context_0_0 = {
	"call_context",
	0
};

static const MR_EnumFunctorDesc mercury_data_old_query__enum_functor_desc_call_site_context_0_1 = {
	"empty_context",
	1
};

const MR_EnumFunctorDescPtr mercury_data_old_query__enum_value_ordered_call_site_context_0[] = {
	&mercury_data_old_query__enum_functor_desc_call_site_context_0_0,
	&mercury_data_old_query__enum_functor_desc_call_site_context_0_1
};

const MR_EnumFunctorDescPtr mercury_data_old_query__enum_name_ordered_call_site_context_0[] = {
	&mercury_data_old_query__enum_functor_desc_call_site_context_0_0,
	&mercury_data_old_query__enum_functor_desc_call_site_context_0_1
};

const MR_Integer mercury_data_old_query__functor_number_map_call_site_context_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_call_site_context_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___old_query__call_site_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___old_query__call_site_context_0_0)),
	"old_query",
	"call_site_context",
	{ (void *)mercury_data_old_query__enum_name_ordered_call_site_context_0 },
	{ (void *)mercury_data_old_query__enum_value_ordered_call_site_context_0 },
	2,
	4,
	mercury_data_old_query__functor_number_map_call_site_context_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_call_site_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_call_site_proc_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_url_with_proc_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_wrap_with_url_0;

const MR_PseudoTypeInfo mercury_data_old_query__field_types_call_site_display_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_old_query__type_ctor_info_call_site_context_0,
	(MR_PseudoTypeInfo) &mercury_data_old_query__type_ctor_info_call_site_proc_name_0,
	(MR_PseudoTypeInfo) &mercury_data_old_query__type_ctor_info_url_with_proc_name_0,
	(MR_PseudoTypeInfo) &mercury_data_old_query__type_ctor_info_wrap_with_url_0
};

const MR_ConstString mercury_data_old_query__field_names_call_site_display_0_0[] = {
	"display_context",
	"display_proc_name",
	"display_url",
	"display_wrap"
};

static const MR_DuFunctorDesc mercury_data_old_query__du_functor_desc_call_site_display_0_0 = {
	"call_site_display",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_old_query__field_types_call_site_display_0_0,
	mercury_data_old_query__field_names_call_site_display_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_old_query__du_stag_ordered_call_site_display_0_0[] = {
	&mercury_data_old_query__du_functor_desc_call_site_display_0_0

};

const MR_DuPtagLayout mercury_data_old_query__du_ptag_ordered_call_site_display_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_old_query__du_stag_ordered_call_site_display_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_old_query__du_name_ordered_call_site_display_0[] = {
	&mercury_data_old_query__du_functor_desc_call_site_display_0_0
};

const MR_Integer mercury_data_old_query__functor_number_map_call_site_display_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_call_site_display_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___old_query__call_site_display_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___old_query__call_site_display_0_0)),
	"old_query",
	"call_site_display",
	{ (void *)mercury_data_old_query__du_name_ordered_call_site_display_0 },
	{ (void *)mercury_data_old_query__du_ptag_ordered_call_site_display_0 },
	1,
	4,
	mercury_data_old_query__functor_number_map_call_site_display_0
};

static const MR_EnumFunctorDesc mercury_data_old_query__enum_functor_desc_call_site_proc_name_0_0 = {
	"caller_proc_name",
	0
};

static const MR_EnumFunctorDesc mercury_data_old_query__enum_functor_desc_call_site_proc_name_0_1 = {
	"callee_proc_name",
	1
};

const MR_EnumFunctorDescPtr mercury_data_old_query__enum_value_ordered_call_site_proc_name_0[] = {
	&mercury_data_old_query__enum_functor_desc_call_site_proc_name_0_0,
	&mercury_data_old_query__enum_functor_desc_call_site_proc_name_0_1
};

const MR_EnumFunctorDescPtr mercury_data_old_query__enum_name_ordered_call_site_proc_name_0[] = {
	&mercury_data_old_query__enum_functor_desc_call_site_proc_name_0_1,
	&mercury_data_old_query__enum_functor_desc_call_site_proc_name_0_0
};

const MR_Integer mercury_data_old_query__functor_number_map_call_site_proc_name_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_call_site_proc_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___old_query__call_site_proc_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___old_query__call_site_proc_name_0_0)),
	"old_query",
	"call_site_proc_name",
	{ (void *)mercury_data_old_query__enum_name_ordered_call_site_proc_name_0 },
	{ (void *)mercury_data_old_query__enum_value_ordered_call_site_proc_name_0 },
	2,
	4,
	mercury_data_old_query__functor_number_map_call_site_proc_name_0
};

static const MR_EnumFunctorDesc mercury_data_old_query__enum_functor_desc_url_with_proc_name_0_0 = {
	"caller_clique",
	0
};

static const MR_EnumFunctorDesc mercury_data_old_query__enum_functor_desc_url_with_proc_name_0_1 = {
	"callee_clique",
	1
};

const MR_EnumFunctorDescPtr mercury_data_old_query__enum_value_ordered_url_with_proc_name_0[] = {
	&mercury_data_old_query__enum_functor_desc_url_with_proc_name_0_0,
	&mercury_data_old_query__enum_functor_desc_url_with_proc_name_0_1
};

const MR_EnumFunctorDescPtr mercury_data_old_query__enum_name_ordered_url_with_proc_name_0[] = {
	&mercury_data_old_query__enum_functor_desc_url_with_proc_name_0_1,
	&mercury_data_old_query__enum_functor_desc_url_with_proc_name_0_0
};

const MR_Integer mercury_data_old_query__functor_number_map_url_with_proc_name_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_url_with_proc_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___old_query__url_with_proc_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___old_query__url_with_proc_name_0_0)),
	"old_query",
	"url_with_proc_name",
	{ (void *)mercury_data_old_query__enum_name_ordered_url_with_proc_name_0 },
	{ (void *)mercury_data_old_query__enum_value_ordered_url_with_proc_name_0 },
	2,
	4,
	mercury_data_old_query__functor_number_map_url_with_proc_name_0
};

static const MR_DuFunctorDesc mercury_data_old_query__du_functor_desc_wrap_with_url_0_0 = {
	"wrap_url_always",
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
extern const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_assume_cross_clique_0;

const MR_PseudoTypeInfo mercury_data_old_query__field_types_wrap_with_url_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_old_query__type_ctor_info_assume_cross_clique_0
};

static const MR_DuFunctorDesc mercury_data_old_query__du_functor_desc_wrap_with_url_0_1 = {
	"wrap_url_if_cross_clique",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_old_query__field_types_wrap_with_url_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_old_query__du_functor_desc_wrap_with_url_0_2 = {
	"wrap_url_never",
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

const MR_DuFunctorDescPtr mercury_data_old_query__du_stag_ordered_wrap_with_url_0_0[] = {
	&mercury_data_old_query__du_functor_desc_wrap_with_url_0_0,
	&mercury_data_old_query__du_functor_desc_wrap_with_url_0_2

};

const MR_DuFunctorDescPtr mercury_data_old_query__du_stag_ordered_wrap_with_url_0_1[] = {
	&mercury_data_old_query__du_functor_desc_wrap_with_url_0_1

};

const MR_DuPtagLayout mercury_data_old_query__du_ptag_ordered_wrap_with_url_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_old_query__du_stag_ordered_wrap_with_url_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_old_query__du_stag_ordered_wrap_with_url_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_old_query__du_name_ordered_wrap_with_url_0[] = {
	&mercury_data_old_query__du_functor_desc_wrap_with_url_0_0,
	&mercury_data_old_query__du_functor_desc_wrap_with_url_0_1,
	&mercury_data_old_query__du_functor_desc_wrap_with_url_0_2
};

const MR_Integer mercury_data_old_query__functor_number_map_wrap_with_url_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_old_query__type_ctor_info_wrap_with_url_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___old_query__wrap_with_url_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___old_query__wrap_with_url_0_0)),
	"old_query",
	"wrap_with_url",
	{ (void *)mercury_data_old_query__du_name_ordered_wrap_with_url_0 },
	{ (void *)mercury_data_old_query__du_ptag_ordered_wrap_with_url_0 },
	3,
	4,
	mercury_data_old_query__functor_number_map_wrap_with_url_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__multi_call_site_summary_to_html_7_0_2 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"lambda_old_query_m_1191",
3,
0
},
"old_query",
"old_query.m",
1191,
"c22;s1-2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__multi_call_site_summary_to_html_7_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"call_site_summary_group_to_html",
8,
0
},
"old_query",
"old_query.m",
1176,
"c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__normal_call_site_summary_to_html_7_0_1 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"lambda_old_query_m_1156",
2,
0
},
"old_query",
"old_query.m",
1156,
"c3;s2-2;c2;s1-2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__call_site_summary_group_to_html_7_0_1 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"accumulate_csd_prof_info",
7,
0
},
"old_query",
"old_query.m",
1202,
"c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__multi_call_site_clique_to_html_10_0_2 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"maybe_extract_action_clique",
5,
0
},
"old_query",
"old_query.m",
1088,
"c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__multi_call_site_clique_to_html_10_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"call_site_dynamic_to_html",
6,
0
},
"old_query",
"old_query.m",
1085,
"c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__procs_in_clique_to_html_7_0_3 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"proc_in_clique_to_html",
7,
0
},
"old_query",
"old_query.m",
862,
"d1;c8;d3;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__procs_in_clique_to_html_7_0_2 = {
{
MR_PREDICATE,
"profile",
"profile",
"deep_lookup_pd_desc",
3,
0
},
"old_query",
"old_query.m",
857,
"d1;c8;d3;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__procs_in_clique_to_html_7_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"deep_lookup_pd_own",
3,
0
},
"old_query",
"old_query.m",
856,
"d1;c8;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_in_clique_to_html_7_0_2 = {
{
MR_FUNCTION,
"old_html_format",
"old_html_format",
"two_id_line_group_to_html",
5,
0
},
"old_query",
"old_query.m",
902,
"d1;c8;t;c17;d2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_in_clique_to_html_7_0_1 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"call_site_clique_to_html",
7,
0
},
"old_query",
"old_query.m",
896,
"d1;c8;t;c17;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__group_proc_dynamics_by_proc_static_4_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"valid_proc_dynamic_ptr",
2,
0
},
"old_query",
"old_query.m",
829,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__append_slot_to_string_3_0_1 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"append_csdi_to_string",
3,
0
},
"old_query",
"old_query.m",
278,
"s1-2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_4 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"wrap_top_procs_links",
6,
0
},
"old_query",
"old_query.m",
655,
"c3;s2-2;c10;s2-2;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_3 = {
{
MR_FUNCTION,
"old_html_format",
"old_html_format",
"two_id_line_to_html",
5,
0
},
"old_query",
"old_query.m",
648,
"c3;s2-2;c10;s2-2;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_2 = {
{
MR_FUNCTION,
"profile",
"profile",
"wrap_proc_static_ptr",
2,
0
},
"old_query",
"old_query.m",
646,
"c3;s2-2;c10;s2-2;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_top_procs_page_7_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"lookup_proc_total_to_html",
6,
0
},
"old_query",
"old_query.m",
644,
"c3;s2-2;c10;s2-2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_5 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"wrap_module_links",
6,
0
},
"old_query",
"old_query.m",
589,
"c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_4 = {
{
MR_FUNCTION,
"old_html_format",
"old_html_format",
"two_id_line_to_html",
5,
0
},
"old_query",
"old_query.m",
726,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_3 = {
{
MR_FUNCTION,
"old_html_format",
"old_html_format",
"two_id_line_to_html",
5,
0
},
"old_query",
"old_query.m",
726,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_2 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"lambda_old_query_m_724",
2,
0
},
"old_query",
"old_query.m",
724,
"d1;c14;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_module_page_5_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"lookup_proc_total_to_html",
6,
0
},
"old_query",
"old_query.m",
711,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_4 = {
{
MR_FUNCTION,
"old_html_format",
"old_html_format",
"two_id_line_to_html",
5,
0
},
"old_query",
"old_query.m",
678,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_3 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"module_summary_to_html",
4,
0
},
"old_query",
"old_query.m",
673,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_2 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"not_mercury_runtime",
1,
0
},
"old_query",
"old_query.m",
672,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_modules_page_3_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"wrap_modules_links",
5,
0
},
"old_query",
"old_query.m",
572,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__generate_proc_callers_page_9_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"wrap_proc_callers_links",
8,
0
},
"old_query",
"old_query.m",
551,
"c2;s2-2;c4;e;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_9 = {
{
MR_FUNCTION,
"old_html_format",
"old_html_format",
"two_id_line_to_html",
5,
0
},
"old_query",
"old_query.m",
1588,
"c36;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_8 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"proc_callers_proc_to_html",
5,
0
},
"old_query",
"old_query.m",
1525,
"c26;s4-4;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_7 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"proc_callers_module_to_html",
5,
0
},
"old_query",
"old_query.m",
1543,
"c26;s3-4;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_6 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"proc_callers_clique_to_html",
5,
0
},
"old_query",
"old_query.m",
1562,
"c26;s2-4;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_5 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"proc_callers_call_site_to_html",
5,
0
},
"old_query",
"old_query.m",
1507,
"c26;s1-4;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_4 = {
{
MR_FUNCTION,
"apply_exclusion",
"apply_exclusion",
"pair_self",
2,
0
},
"old_query",
"old_query.m",
1465,
"c3;s2-2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_3 = {
{
MR_FUNCTION,
"apply_exclusion",
"apply_exclusion",
"pair_self",
2,
0
},
"old_query",
"old_query.m",
1480,
"c3;s1-2;c3;s3-3;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_2 = {
{
MR_FUNCTION,
"apply_exclusion",
"apply_exclusion",
"pair_contour",
4,
0
},
"old_query",
"old_query.m",
1483,
"c3;s1-2;c3;s2-3;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__proc_callers_to_html_8_0_1 = {
{
MR_FUNCTION,
"apply_exclusion",
"apply_exclusion",
"pair_self",
2,
0
},
"old_query",
"old_query.m",
1475,
"c3;s1-2;c3;s1-3;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_proc_page_4_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"wrap_proc_links",
6,
0
},
"old_query",
"old_query.m",
526,
"c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__proc_summary_to_html_3_0_2 = {
{
MR_FUNCTION,
"old_html_format",
"old_html_format",
"two_id_line_group_to_html",
5,
0
},
"old_query",
"old_query.m",
1768,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__proc_summary_to_html_3_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"call_site_summary_to_html",
4,
0
},
"old_query",
"old_query.m",
1765,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__chase_the_action_5_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"wrap_clique_links",
6,
0
},
"old_query",
"old_query.m",
513,
"c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__generate_clique_page_7_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"wrap_clique_links",
6,
0
},
"old_query",
"old_query.m",
513,
"c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__clique_to_html_6_0_4 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"procs_in_clique_to_html",
7,
0
},
"old_query",
"old_query.m",
764,
"c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__clique_to_html_6_0_3 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"procs_in_clique_to_html",
7,
0
},
"old_query",
"old_query.m",
764,
"c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__clique_to_html_6_0_2 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"proc_group_contains",
2,
0
},
"old_query",
"old_query.m",
757,
"c16;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__old_query__clique_to_html_6_0_1 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"group_proc_dynamics_by_proc_static",
4,
0
},
"old_query",
"old_query.m",
749,
"c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__call_site_dynamic_to_html_5_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"valid_call_site_dynamic_ptr",
2,
0
},
"old_query",
"old_query.m",
1297,
"c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_clique_debug_page_2_0_1 = {
{
MR_FUNCTION,
"old_query",
"old_query",
"append_pdi_to_string",
3,
0
},
"old_query",
"old_query.m",
248,
"t;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__old_query__generate_proc_dynamic_debug_page_2_0_1 = {
{
MR_PREDICATE,
"old_query",
"old_query",
"append_slot_to_string",
3,
0
},
"old_query",
"old_query.m",
263,
"d1;c4;"
};


MR_decl_entry(profile__valid_proc_static_ptr_2_0);
MR_decl_entry(profile__deep_lookup_proc_statics_3_0);
MR_decl_entry(fn__array__max_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(old_query_module0)
	MR_init_entry1(fn__old_query__generate_proc_static_debug_page_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__generate_proc_static_debug_page_2_0);
	MR_init_label10(fn__old_query__generate_proc_static_debug_page_2_0,3,5,6,7,8,9,10,11,12,13)
	MR_init_label2(fn__old_query__generate_proc_static_debug_page_2_0,14,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_proc_static_debug_page'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__generate_proc_static_debug_page_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i3);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__old_query__generate_proc_static_debug_page_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i5);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 3);
	MR_sv(2) = MR_tfield(0, MR_r1, 4);
	MR_sv(3) = MR_tfield(0, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_tfield(0, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(fn__array__max_1_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i6);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i7);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i8);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i9);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i10);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i11);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i12);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i13);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_static_debug_page_2_0_i14);
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<HTML>\n", 7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__old_query__generate_proc_static_debug_page_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<HTML>\nInvalid proc_static_ptr</HTML>\n", 38);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_proc_dynamic_ptr_2_0);
MR_decl_entry(profile__deep_lookup_proc_dynamics_3_0);
MR_decl_entry(array__to_list_2_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(old_query_module1)
	MR_init_entry1(fn__old_query__generate_proc_dynamic_debug_page_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__generate_proc_dynamic_debug_page_2_0);
	MR_init_label10(fn__old_query__generate_proc_dynamic_debug_page_2_0,3,5,6,7,8,9,11,12,13,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_proc_dynamic_debug_page'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__generate_proc_dynamic_debug_page_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__valid_proc_dynamic_ptr_2_0,
		fn__old_query__generate_proc_dynamic_debug_page_2_0_i3);
MR_def_label(fn__old_query__generate_proc_dynamic_debug_page_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__old_query__generate_proc_dynamic_debug_page_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		fn__old_query__generate_proc_dynamic_debug_page_2_0_i5);
MR_def_label(fn__old_query__generate_proc_dynamic_debug_page_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__generate_proc_dynamic_debug_page_2_0_i6);
MR_def_label(fn__old_query__generate_proc_dynamic_debug_page_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_dynamic_debug_page_2_0_i7);
MR_def_label(fn__old_query__generate_proc_dynamic_debug_page_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_static ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_dynamic_debug_page_2_0_i8);
MR_def_label(fn__old_query__generate_proc_dynamic_debug_page_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		fn__old_query__generate_proc_dynamic_debug_page_2_0_i9);
MR_def_label(fn__old_query__generate_proc_dynamic_debug_page_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_string_const("multi", 5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		fn__old_query__generate_proc_dynamic_debug_page_2_0_i11);
MR_def_label(fn__old_query__generate_proc_dynamic_debug_page_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_dynamic_debug_page_2_0_i12);
MR_def_label(fn__old_query__generate_proc_dynamic_debug_page_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_dynamic_debug_page_2_0_i13);
MR_def_label(fn__old_query__generate_proc_dynamic_debug_page_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<HTML>\n", 7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__old_query__generate_proc_dynamic_debug_page_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<HTML>\nInvalid proc_dynamic_ptr</HTML>\n", 39);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_call_site_static_ptr_2_0);
MR_decl_entry(profile__deep_lookup_call_site_statics_3_0);

MR_BEGIN_MODULE(old_query_module2)
	MR_init_entry1(fn__old_query__generate_call_site_static_debug_page_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__generate_call_site_static_debug_page_2_0);
	MR_init_label10(fn__old_query__generate_call_site_static_debug_page_2_0,3,5,6,7,8,10,11,12,13,14)
	MR_init_label10(fn__old_query__generate_call_site_static_debug_page_2_0,15,16,17,18,19,20,21,22,23,24)
	MR_init_label3(fn__old_query__generate_call_site_static_debug_page_2_0,25,26,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_call_site_static_debug_page'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__generate_call_site_static_debug_page_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__valid_call_site_static_ptr_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i3);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__old_query__generate_call_site_static_debug_page_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i5);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i6);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i7);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i8);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,3)) {
		MR_GOTO_LAB(fn__old_query__generate_call_site_static_debug_page_2_0_i10);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("callback", 8);
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i18);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(fn__old_query__generate_call_site_static_debug_page_2_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("higher_order_call", 17);
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i18);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,2)) {
		MR_GOTO_LAB(fn__old_query__generate_call_site_static_debug_page_2_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("method_call", 11);
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i18);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__old_query__generate_call_site_static_debug_page_2_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("special_call", 12);
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i18);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i14);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i15);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i16);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("normal ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i17);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i18);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i19);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i20);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i21);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i22);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i23);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i24);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i25);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_static_debug_page_2_0_i26);
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<HTML>\n", 7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__old_query__generate_call_site_static_debug_page_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<HTML>\nInvalid call_site_static_ptr</HTML>\n", 43);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_call_site_dynamic_ptr_2_0);
MR_decl_entry(profile__deep_lookup_call_site_dynamics_3_0);
MR_decl_entry(fn__measurements__own_to_string_1_0);

MR_BEGIN_MODULE(old_query_module3)
	MR_init_entry1(fn__old_query__generate_call_site_dynamic_debug_page_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__generate_call_site_dynamic_debug_page_2_0);
	MR_init_label10(fn__old_query__generate_call_site_dynamic_debug_page_2_0,3,5,6,7,8,9,10,11,12,13)
	MR_init_label1(fn__old_query__generate_call_site_dynamic_debug_page_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_call_site_dynamic_debug_page'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__generate_call_site_dynamic_debug_page_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		fn__old_query__generate_call_site_dynamic_debug_page_2_0_i3);
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__old_query__generate_call_site_dynamic_debug_page_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__old_query__generate_call_site_dynamic_debug_page_2_0_i5);
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__generate_call_site_dynamic_debug_page_2_0_i6);
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__generate_call_site_dynamic_debug_page_2_0_i7);
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(fn__measurements__own_to_string_1_0,
		fn__old_query__generate_call_site_dynamic_debug_page_2_0_i8);
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_dynamic_debug_page_2_0_i9);
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_dynamic_debug_page_2_0_i10);
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_dynamic_debug_page_2_0_i11);
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_dynamic_debug_page_2_0_i12);
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_call_site_dynamic_debug_page_2_0_i13);
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<HTML>\n", 7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__old_query__generate_call_site_dynamic_debug_page_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<HTML>\nInvalid call_site_dynamic_ptr</HTML>\n", 44);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_clique_ptr_2_0);
MR_decl_entry(profile__deep_lookup_clique_parents_3_0);
MR_decl_entry(profile__deep_lookup_clique_members_3_0);
MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(old_query_module4)
	MR_init_entry1(fn__old_query__generate_clique_debug_page_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__generate_clique_debug_page_2_0);
	MR_init_label9(fn__old_query__generate_clique_debug_page_2_0,3,5,6,7,8,10,11,12,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_clique_debug_page'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__generate_clique_debug_page_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__valid_clique_ptr_2_0,
		fn__old_query__generate_clique_debug_page_2_0_i3);
MR_def_label(fn__old_query__generate_clique_debug_page_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__old_query__generate_clique_debug_page_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		fn__old_query__generate_clique_debug_page_2_0_i5);
MR_def_label(fn__old_query__generate_clique_debug_page_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__generate_clique_debug_page_2_0_i6);
MR_def_label(fn__old_query__generate_clique_debug_page_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" ->", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_clique_debug_page_2_0_i7);
MR_def_label(fn__old_query__generate_clique_debug_page_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_members_3_0,
		fn__old_query__generate_clique_debug_page_2_0_i8);
MR_def_label(fn__old_query__generate_clique_debug_page_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__old_query__generate_clique_debug_page_2_0_i10);
MR_def_label(fn__old_query__generate_clique_debug_page_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_clique_debug_page_2_0_i11);
MR_def_label(fn__old_query__generate_clique_debug_page_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_clique_debug_page_2_0_i12);
MR_def_label(fn__old_query__generate_clique_debug_page_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<HTML>\n", 7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__old_query__generate_clique_debug_page_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<HTML>\nInvalid call_site_dynamic_ptr</HTML>\n", 44);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module5)
	MR_init_entry1(fn__old_query__menu_text_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__menu_text_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'menu_text'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__menu_text_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("You can start exploring the deep profile at the following points.\n", 66);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__old_html_format__deep_cmd_pref_to_url_3_0);

MR_BEGIN_MODULE(old_query_module6)
	MR_init_entry1(fn__old_query__menu_item_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__menu_item_4_0);
	MR_init_label4(fn__old_query__menu_item_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'menu_item'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__menu_item_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__menu_item_4_0_i2);
MR_def_label(fn__old_query__menu_item_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("</A>\n", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__menu_item_4_0_i3);
MR_def_label(fn__old_query__menu_item_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\">", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__menu_item_4_0_i4);
MR_def_label(fn__old_query__menu_item_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__menu_item_4_0_i5);
MR_def_label(fn__old_query__menu_item_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=\"", 9);
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

MR_decl_entry(old_html_format__lookup_ticks_per_sec_3_0);

MR_BEGIN_MODULE(old_query_module7)
	MR_init_entry1(fn__old_query__present_stats_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__present_stats_1_0);
	MR_init_label10(fn__old_query__present_stats_1_0,2,4,5,6,7,8,9,10,11,12)
	MR_init_label10(fn__old_query__present_stats_1_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(fn__old_query__present_stats_1_0,23,24,25,26,27,28,29,31,32,33)
	MR_init_label10(fn__old_query__present_stats_1_0,34,35,36,37,38,39,40,41,42,43)
	MR_init_label9(fn__old_query__present_stats_1_0,44,45,46,47,48,49,50,51,52)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'present_stats'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__present_stats_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(old_html_format__lookup_ticks_per_sec_3_0,
		fn__old_query__present_stats_1_0_i2);
MR_def_label(fn__old_query__present_stats_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__old_query__present_stats_1_0_i4);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("</TD></TR>\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i5);
MR_def_label(fn__old_query__present_stats_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (assumed)", 10);
	MR_r2 = (MR_Word) MR_string_const("</TD></TR>\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i5);
MR_def_label(fn__old_query__present_stats_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__present_stats_1_0_i6);
MR_def_label(fn__old_query__present_stats_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i7);
MR_def_label(fn__old_query__present_stats_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD ALIGN=right>", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i8);
MR_def_label(fn__old_query__present_stats_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__present_stats_1_0_i9);
MR_def_label(fn__old_query__present_stats_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD></TR>\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i10);
MR_def_label(fn__old_query__present_stats_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD ALIGN=right>", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i11);
MR_def_label(fn__old_query__present_stats_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__present_stats_1_0_i12);
MR_def_label(fn__old_query__present_stats_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD></TR>\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i13);
MR_def_label(fn__old_query__present_stats_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD ALIGN=right>", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i14);
MR_def_label(fn__old_query__present_stats_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 8);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__present_stats_1_0_i15);
MR_def_label(fn__old_query__present_stats_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD></TR>\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i16);
MR_def_label(fn__old_query__present_stats_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD ALIGN=right>", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i17);
MR_def_label(fn__old_query__present_stats_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__present_stats_1_0_i18);
MR_def_label(fn__old_query__present_stats_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD></TR>\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i19);
MR_def_label(fn__old_query__present_stats_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD ALIGN=right>", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i20);
MR_def_label(fn__old_query__present_stats_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__present_stats_1_0_i21);
MR_def_label(fn__old_query__present_stats_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD></TR>\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i22);
MR_def_label(fn__old_query__present_stats_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD ALIGN=right>", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i23);
MR_def_label(fn__old_query__present_stats_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__present_stats_1_0_i24);
MR_def_label(fn__old_query__present_stats_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD></TR>\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i25);
MR_def_label(fn__old_query__present_stats_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD ALIGN=right>", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i26);
MR_def_label(fn__old_query__present_stats_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__present_stats_1_0_i27);
MR_def_label(fn__old_query__present_stats_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD></TR>\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i28);
MR_def_label(fn__old_query__present_stats_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD ALIGN=right>", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i29);
MR_def_label(fn__old_query__present_stats_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 10);
	}
	MR_np_call_localret_ent(fn__array__max_1_0,
		fn__old_query__present_stats_1_0_i31);
MR_def_label(fn__old_query__present_stats_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__present_stats_1_0_i32);
MR_def_label(fn__old_query__present_stats_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD></TR>\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i33);
MR_def_label(fn__old_query__present_stats_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD ALIGN=right>", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i34);
MR_def_label(fn__old_query__present_stats_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TABLE>\n", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i35);
MR_def_label(fn__old_query__present_stats_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TR><TD ALIGN=left>Cliques:</TD>\n", 33);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i36);
MR_def_label(fn__old_query__present_stats_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i37);
MR_def_label(fn__old_query__present_stats_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TR><TD ALIGN=left>ProcStatic structures:</TD>\n", 47);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i38);
MR_def_label(fn__old_query__present_stats_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i39);
MR_def_label(fn__old_query__present_stats_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TR><TD ALIGN=left>CallSiteStatic structures:</TD>\n", 51);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i40);
MR_def_label(fn__old_query__present_stats_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i41);
MR_def_label(fn__old_query__present_stats_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TR><TD ALIGN=left>ProcDynamic structures:</TD>\n", 48);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i42);
MR_def_label(fn__old_query__present_stats_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i43);
MR_def_label(fn__old_query__present_stats_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TR><TD ALIGN=left>CallSiteDynamic structures:</TD>\n", 52);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i44);
MR_def_label(fn__old_query__present_stats_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i45);
MR_def_label(fn__old_query__present_stats_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TR><TD ALIGN=left>Call sequence numbers:</TD>\n", 47);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i46);
MR_def_label(fn__old_query__present_stats_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i47);
MR_def_label(fn__old_query__present_stats_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TR><TD ALIGN=left>Quanta in instrumentation:</TD>\n", 51);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i48);
MR_def_label(fn__old_query__present_stats_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i49);
MR_def_label(fn__old_query__present_stats_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TR><TD ALIGN=left>Quanta in user code:</TD>\n", 45);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i50);
MR_def_label(fn__old_query__present_stats_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i51);
MR_def_label(fn__old_query__present_stats_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TR><TD ALIGN=left>Quanta per second:</TD>\n", 43);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__present_stats_1_0_i52);
MR_def_label(fn__old_query__present_stats_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TABLE>\n", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__query__should_display_times_1_0);
MR_decl_entry(fn__old_html_format__page_banner_2_0);
MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__old_html_format__page_footer_3_0);

MR_BEGIN_MODULE(old_query_module8)
	MR_init_entry1(fn__old_query__generate_menu_page_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__generate_menu_page_3_0);
	MR_init_label10(fn__old_query__generate_menu_page_3_0,2,3,4,6,9,10,15,17,18,19)
	MR_init_label10(fn__old_query__generate_menu_page_3_0,20,11,24,25,27,29,31,36,39,42)
	MR_init_label10(fn__old_query__generate_menu_page_3_0,43,44,45,46,47,32,51,52,55,58)
	MR_init_label10(fn__old_query__generate_menu_page_3_0,60,62,63,66,67,68,69,70,71,72)
	MR_init_label10(fn__old_query__generate_menu_page_3_0,73,74,75,76,77,78,79,80,81,82)
	MR_init_label10(fn__old_query__generate_menu_page_3_0,83,84,85,86,87,88,89,90,91,92)
	MR_init_label10(fn__old_query__generate_menu_page_3_0,93,94,95,96,97,98,99,100,101,102)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_menu_page'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__generate_menu_page_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__should_display_times_1_0,
		fn__old_query__generate_menu_page_3_0_i2);
MR_def_label(fn__old_query__generate_menu_page_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		fn__old_query__generate_menu_page_3_0_i3);
MR_def_label(fn__old_query__generate_menu_page_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__old_query__menu_text_0_0,
		fn__old_query__generate_menu_page_3_0_i4);
MR_def_label(fn__old_query__generate_menu_page_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,3,0);
	MR_r4 = (MR_Word) MR_string_const("Exploring the call graph, starting at the root.", 47);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i6);
MR_def_label(fn__old_query__generate_menu_page_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,3,1);
	MR_r4 = (MR_Word) MR_string_const("Exploring the call graph, starting at the action.", 49);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i9);
MR_def_label(fn__old_query__generate_menu_page_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 3);
	MR_r4 = (MR_Word) MR_string_const("Exploring the program module by module.", 39);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i10);
MR_def_label(fn__old_query__generate_menu_page_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__old_query__generate_menu_page_3_0_i11);
	}
	MR_sv(9) = MR_r1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_r4 = (MR_Word) MR_string_const("Top 100 most expensive procedures: time, self.", 46);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i15);
MR_def_label(fn__old_query__generate_menu_page_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,1);
	MR_r4 = (MR_Word) MR_string_const("Top 100 most expensive procedures: time, self+descendants.", 58);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i17);
MR_def_label(fn__old_query__generate_menu_page_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i18);
MR_def_label(fn__old_query__generate_menu_page_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i19);
MR_def_label(fn__old_query__generate_menu_page_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i20);
MR_def_label(fn__old_query__generate_menu_page_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,2);
	MR_r4 = (MR_Word) MR_string_const("Top 100 most expensive procedures: callseqs, self.", 50);
	MR_GOTO_LAB(fn__old_query__generate_menu_page_3_0_i24);
MR_def_label(fn__old_query__generate_menu_page_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(10) = (MR_Word) MR_string_const("", 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,2);
	MR_r4 = (MR_Word) MR_string_const("Top 100 most expensive procedures: callseqs, self.", 50);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,5,0);
MR_def_label(fn__old_query__generate_menu_page_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i25);
MR_def_label(fn__old_query__generate_menu_page_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("Top 100 most expensive procedures: callseqs, self+descendants.", 62);
	}
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i27);
MR_def_label(fn__old_query__generate_menu_page_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("Top 100 most expensive procedures: words, self.", 47);
	}
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i29);
MR_def_label(fn__old_query__generate_menu_page_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("Top 100 most expensive procedures: words, self+descendants.", 59);
	}
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i31);
MR_def_label(fn__old_query__generate_menu_page_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__old_query__generate_menu_page_3_0_i32);
	}
	MR_sv(4) = MR_r1;
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,3);
	MR_r4 = (MR_Word) MR_string_const("Procedures above 0.1% threshold: time, self.", 44);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i36);
MR_def_label(fn__old_query__generate_menu_page_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,4);
	MR_r4 = (MR_Word) MR_string_const("Procedures above 1% threshold: time, self+descendants.", 54);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i39);
MR_def_label(fn__old_query__generate_menu_page_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,5);
	MR_r4 = (MR_Word) MR_string_const("Procedures above 1 second threshold: time, self+descendants.", 60);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i42);
MR_def_label(fn__old_query__generate_menu_page_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i43);
MR_def_label(fn__old_query__generate_menu_page_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i44);
MR_def_label(fn__old_query__generate_menu_page_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i45);
MR_def_label(fn__old_query__generate_menu_page_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i46);
MR_def_label(fn__old_query__generate_menu_page_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i47);
MR_def_label(fn__old_query__generate_menu_page_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,6);
	MR_r4 = (MR_Word) MR_string_const("Procedures above 0.1% threshold: callseqs, self.", 48);
	MR_GOTO_LAB(fn__old_query__generate_menu_page_3_0_i51);
MR_def_label(fn__old_query__generate_menu_page_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(14) = (MR_Word) MR_string_const("", 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,6);
	MR_r4 = (MR_Word) MR_string_const("Procedures above 0.1% threshold: callseqs, self.", 48);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(1,3,2);
MR_def_label(fn__old_query__generate_menu_page_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i52);
MR_def_label(fn__old_query__generate_menu_page_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,7);
	MR_r4 = (MR_Word) MR_string_const("Procedures above 1% threshold: callseqs, self+descendants.", 58);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i55);
MR_def_label(fn__old_query__generate_menu_page_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,8);
	MR_r4 = (MR_Word) MR_string_const("Procedures above 1,000,000 callseqs threshold: callseqs, self+descendants.", 74);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i58);
MR_def_label(fn__old_query__generate_menu_page_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(16);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("Procedures above 0.1% threshold: words, self.", 45);
	}
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i60);
MR_def_label(fn__old_query__generate_menu_page_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,6,9);
	MR_r4 = (MR_Word) MR_string_const("Procedures above 1% threshold: words, self+descendants.", 55);
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i62);
MR_def_label(fn__old_query__generate_menu_page_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = (MR_Integer) 2097152;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__old_query__generate_menu_page_3_0_i63);
MR_def_label(fn__old_query__generate_menu_page_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Integer) 1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("Procedures above 2M words threshold: words, self+descendants.", 61);
	}
	MR_np_call_localret_ent(fn__old_query__menu_item_4_0,
		fn__old_query__generate_menu_page_3_0_i66);
MR_def_label(fn__old_query__generate_menu_page_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_query__present_stats_1_0,
		fn__old_query__generate_menu_page_3_0_i67);
MR_def_label(fn__old_query__generate_menu_page_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		fn__old_query__generate_menu_page_3_0_i68);
MR_def_label(fn__old_query__generate_menu_page_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i69);
MR_def_label(fn__old_query__generate_menu_page_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i70);
MR_def_label(fn__old_query__generate_menu_page_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("</ul>\n", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i71);
MR_def_label(fn__old_query__generate_menu_page_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i72);
MR_def_label(fn__old_query__generate_menu_page_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i73);
MR_def_label(fn__old_query__generate_menu_page_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i74);
MR_def_label(fn__old_query__generate_menu_page_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i75);
MR_def_label(fn__old_query__generate_menu_page_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i76);
MR_def_label(fn__old_query__generate_menu_page_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i77);
MR_def_label(fn__old_query__generate_menu_page_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i78);
MR_def_label(fn__old_query__generate_menu_page_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i79);
MR_def_label(fn__old_query__generate_menu_page_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i80);
MR_def_label(fn__old_query__generate_menu_page_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i81);
MR_def_label(fn__old_query__generate_menu_page_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i82);
MR_def_label(fn__old_query__generate_menu_page_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i83);
MR_def_label(fn__old_query__generate_menu_page_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i84);
MR_def_label(fn__old_query__generate_menu_page_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i85);
MR_def_label(fn__old_query__generate_menu_page_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i86);
MR_def_label(fn__old_query__generate_menu_page_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i87);
MR_def_label(fn__old_query__generate_menu_page_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i88);
MR_def_label(fn__old_query__generate_menu_page_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i89);
MR_def_label(fn__old_query__generate_menu_page_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i90);
MR_def_label(fn__old_query__generate_menu_page_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i91);
MR_def_label(fn__old_query__generate_menu_page_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i92);
MR_def_label(fn__old_query__generate_menu_page_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i93);
MR_def_label(fn__old_query__generate_menu_page_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i94);
MR_def_label(fn__old_query__generate_menu_page_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i95);
MR_def_label(fn__old_query__generate_menu_page_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i96);
MR_def_label(fn__old_query__generate_menu_page_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i97);
MR_def_label(fn__old_query__generate_menu_page_3_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i98);
MR_def_label(fn__old_query__generate_menu_page_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<li>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i99);
MR_def_label(fn__old_query__generate_menu_page_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<ul>\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i100);
MR_def_label(fn__old_query__generate_menu_page_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i101);
MR_def_label(fn__old_query__generate_menu_page_3_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_menu_page_3_0_i102);
MR_def_label(fn__old_query__generate_menu_page_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__profile__dummy_clique_ptr_0_0);
MR_decl_entry(fn__old_html_format__proc_dynamic_name_2_0);
MR_decl_entry(fn__html_format__escape_break_html_string_1_0);

MR_BEGIN_MODULE(old_query_module9)
	MR_init_entry1(fn__old_query__call_to_html_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__call_to_html_8_0);
	MR_init_label10(fn__old_query__call_to_html_8_0,4,3,2,6,5,8,10,12,11,15)
	MR_init_label10(fn__old_query__call_to_html_8_0,16,17,18,19,20,22,23,28,26,31)
	MR_init_label9(fn__old_query__call_to_html_8_0,33,21,37,36,39,41,42,43,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_to_html'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__call_to_html_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_np_call_localret_ent(fn__profile__dummy_clique_ptr_0_0,
		fn__old_query__call_to_html_8_0_i4);
MR_def_label(fn__old_query__call_to_html_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i2);
	}
MR_def_label(fn__old_query__call_to_html_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r8;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	}
MR_def_label(fn__old_query__call_to_html_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i6);
	}
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r3 = MR_r5;
	MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i5);
MR_def_label(fn__old_query__call_to_html_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("", 0);
MR_def_label(fn__old_query__call_to_html_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i8);
	}
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(fn__old_html_format__proc_dynamic_name_2_0,
		fn__old_query__call_to_html_8_0_i10);
MR_def_label(fn__old_query__call_to_html_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__proc_dynamic_name_2_0,
		fn__old_query__call_to_html_8_0_i10);
MR_def_label(fn__old_query__call_to_html_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_r3;
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(8);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(6) = MR_tempr2;
	MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i11);
	}
MR_def_label(fn__old_query__call_to_html_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(6) = MR_tempr2;
	}
MR_def_label(fn__old_query__call_to_html_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__call_to_html_8_0_i15);
MR_def_label(fn__old_query__call_to_html_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__call_to_html_8_0_i16);
MR_def_label(fn__old_query__call_to_html_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</A>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_to_html_8_0_i17);
MR_def_label(fn__old_query__call_to_html_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\">", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_to_html_8_0_i18);
MR_def_label(fn__old_query__call_to_html_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_to_html_8_0_i19);
MR_def_label(fn__old_query__call_to_html_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=\"", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_to_html_8_0_i20);
MR_def_label(fn__old_query__call_to_html_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_sv(3), 3);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i22);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_sv(3);
	MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i21);
MR_def_label(fn__old_query__call_to_html_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i23);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__call_to_html_8_0_i33);
MR_def_label(fn__old_query__call_to_html_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i26);
	}
	MR_r4 = MR_tfield(1, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i28);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_sv(3);
	MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i21);
MR_def_label(fn__old_query__call_to_html_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__call_to_html_8_0_i33);
MR_def_label(fn__old_query__call_to_html_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) == MR_sv(8))) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i31);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_sv(3);
	MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i21);
MR_def_label(fn__old_query__call_to_html_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__call_to_html_8_0_i33);
MR_def_label(fn__old_query__call_to_html_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_tempr1;
	}
MR_def_label(fn__old_query__call_to_html_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(3)) != 0)) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i36);
	}
	MR_np_call_localret_ent(profile__valid_clique_ptr_2_0,
		fn__old_query__call_to_html_8_0_i37);
MR_def_label(fn__old_query__call_to_html_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__old_query__call_to_html_8_0_i36);
	}
	MR_r1 = MR_sv(5);
	MR_sv(1) = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_to_html_8_0_i41);
MR_def_label(fn__old_query__call_to_html_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__call_to_html_8_0_i39);
MR_def_label(fn__old_query__call_to_html_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_to_html_8_0_i41);
MR_def_label(fn__old_query__call_to_html_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_to_html_8_0_i42);
MR_def_label(fn__old_query__call_to_html_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_to_html_8_0_i43);
MR_def_label(fn__old_query__call_to_html_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_to_html_8_0_i44);
MR_def_label(fn__old_query__call_to_html_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__require_2_0);
MR_decl_entry(profile__deep_lookup_csd_desc_3_0);
MR_decl_entry(profile__deep_lookup_clique_index_3_0);
MR_decl_entry(profile__deep_lookup_call_site_static_map_3_0);

MR_BEGIN_MODULE(old_query_module10)
	MR_init_entry1(fn__old_query__call_site_dynamic_to_html_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__call_site_dynamic_to_html_5_0);
	MR_init_label10(fn__old_query__call_site_dynamic_to_html_5_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label4(fn__old_query__call_site_dynamic_to_html_5_0,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_dynamic_to_html'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__call_site_dynamic_to_html_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__valid_call_site_dynamic_ptr_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("call_site_dynamic_to_html: invalid call_site_dynamic_ptr", 56);
	}
	MR_np_call_localret_ent(require__require_2_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i3);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i4);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_sv(8) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i5);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i6);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_static_map_3_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i7);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i8);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_tfield(0, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i9);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i10);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i11);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i12);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i13);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__old_query__call_to_html_8_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i14);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__old_html_format__proc_dynamic_name_2_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i15);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__call_site_dynamic_to_html_5_0_i16);
MR_def_label(fn__old_query__call_site_dynamic_to_html_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(10);
	MR_tfield(0, MR_r2, 1) = MR_sv(11);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_sv(8);
	MR_tfield(0, MR_r2, 4) = MR_sv(9);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__old_html_format__two_id_line_to_html_4_0);

MR_BEGIN_MODULE(old_query_module11)
	MR_init_entry1(old_query__clique_ancestors_to_html_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__clique_ancestors_to_html_7_0);
	MR_init_label10(old_query__clique_ancestors_to_html_7_0,2,4,6,21,7,8,10,13,14,15)
	MR_init_label1(old_query__clique_ancestors_to_html_7_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clique_ancestors_to_html'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__clique_ancestors_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		old_query__clique_ancestors_to_html_7_0_i2);
MR_def_label(old_query__clique_ancestors_to_html_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		old_query__clique_ancestors_to_html_7_0_i4);
MR_def_label(old_query__clique_ancestors_to_html_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__clique_ancestors_to_html_7_0_i21);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		old_query__clique_ancestors_to_html_7_0_i6);
MR_def_label(old_query__clique_ancestors_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 4);
	if ((MR_r3 != MR_tempr1)) {
		MR_GOTO_LAB(old_query__clique_ancestors_to_html_7_0_i7);
	}
	}
MR_def_label(old_query__clique_ancestors_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(old_query__clique_ancestors_to_html_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(old_query__clique_ancestors_to_html_7_0_i8);
	}
	if (MR_INT_GT(MR_sv(3),0)) {
		MR_GOTO_LAB(old_query__clique_ancestors_to_html_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(old_query__clique_ancestors_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		old_query__clique_ancestors_to_html_7_0_i10);
MR_def_label(old_query__clique_ancestors_to_html_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_query__call_site_dynamic_to_html_5_0,
		old_query__clique_ancestors_to_html_7_0_i13);
MR_def_label(old_query__clique_ancestors_to_html_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__two_id_line_to_html_4_0,
		old_query__clique_ancestors_to_html_7_0_i14);
MR_def_label(old_query__clique_ancestors_to_html_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_localcall_lab(old_query__clique_ancestors_to_html_7_0,
		old_query__clique_ancestors_to_html_7_0_i15);
MR_def_label(old_query__clique_ancestors_to_html_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__clique_ancestors_to_html_7_0_i16);
MR_def_label(old_query__clique_ancestors_to_html_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(list__map2_4_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(fn__old_html_format__header_row_4_0);
MR_decl_entry(fn__old_html_format__separator_row_3_0);

MR_BEGIN_MODULE(old_query_module12)
	MR_init_entry1(old_query__clique_to_html_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__clique_to_html_6_0);
	MR_init_label10(old_query__clique_to_html_6_0,3,2,4,5,8,10,11,12,15,17)
	MR_init_label10(old_query__clique_to_html_6_0,20,21,14,28,29,30,32,33,34,35)
	MR_init_label10(old_query__clique_to_html_6_0,31,36,37,38,39,40,41,42,43,44)
	MR_init_label2(old_query__clique_to_html_6_0,45,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clique_to_html'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__clique_to_html_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(0, MR_r1, 3);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(old_query__clique_to_html_6_0_i3);
	}
	MR_r5 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(old_query__clique_to_html_6_0_i2);
MR_def_label(old_query__clique_to_html_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r3 = MR_tfield(1, MR_r6, 0);
	MR_r4 = (MR_Integer) 1;
MR_def_label(old_query__clique_to_html_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(old_query__clique_ancestors_to_html_7_0,
		old_query__clique_to_html_6_0_i4);
MR_def_label(old_query__clique_to_html_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_clique_members_3_0,
		old_query__clique_to_html_6_0_i5);
MR_def_label(old_query__clique_to_html_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(old_query__group_proc_dynamics_by_proc_static_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(8) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_sv(11) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		old_query__clique_to_html_6_0_i8);
MR_def_label(old_query__clique_to_html_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		old_query__clique_to_html_6_0_i10);
MR_def_label(old_query__clique_to_html_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		old_query__clique_to_html_6_0_i11);
MR_def_label(old_query__clique_to_html_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		old_query__clique_to_html_6_0_i12);
MR_def_label(old_query__clique_to_html_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		old_query__clique_to_html_6_0_i15);
MR_def_label(old_query__clique_to_html_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__clique_to_html_6_0_i14);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		old_query__clique_to_html_6_0_i17);
MR_def_label(old_query__clique_to_html_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(old_query__proc_group_contains_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,9,3);
	MR_r1 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		old_query__clique_to_html_6_0_i20);
MR_def_label(old_query__clique_to_html_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		old_query__clique_to_html_6_0_i21);
MR_def_label(old_query__clique_to_html_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(old_query__procs_in_clique_to_html_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		old_query__clique_to_html_6_0_i28);
MR_def_label(old_query__clique_to_html_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(old_query__procs_in_clique_to_html_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_tfield(0, MR_r1, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r5 = MR_sv(8);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		old_query__clique_to_html_6_0_i28);
MR_def_label(old_query__clique_to_html_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		old_query__clique_to_html_6_0_i29);
MR_def_label(old_query__clique_to_html_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		old_query__clique_to_html_6_0_i30);
MR_def_label(old_query__clique_to_html_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(old_query__clique_to_html_6_0_i32);
	}
	MR_r2 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Ancestors:", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(old_query__clique_to_html_6_0_i31);
MR_def_label(old_query__clique_to_html_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		old_query__clique_to_html_6_0_i33);
MR_def_label(old_query__clique_to_html_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" closest ancestors:", 19);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__clique_to_html_6_0_i34);
MR_def_label(old_query__clique_to_html_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("The ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__clique_to_html_6_0_i35);
MR_def_label(old_query__clique_to_html_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
MR_def_label(old_query__clique_to_html_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__old_html_format__header_row_4_0,
		old_query__clique_to_html_6_0_i36);
MR_def_label(old_query__clique_to_html_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		old_query__clique_to_html_6_0_i37);
MR_def_label(old_query__clique_to_html_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		old_query__clique_to_html_6_0_i38);
MR_def_label(old_query__clique_to_html_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Procedures of the clique:", 25);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__old_html_format__header_row_4_0,
		old_query__clique_to_html_6_0_i39);
MR_def_label(old_query__clique_to_html_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		old_query__clique_to_html_6_0_i40);
MR_def_label(old_query__clique_to_html_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__clique_to_html_6_0_i41);
MR_def_label(old_query__clique_to_html_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__clique_to_html_6_0_i42);
MR_def_label(old_query__clique_to_html_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__clique_to_html_6_0_i43);
MR_def_label(old_query__clique_to_html_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__clique_to_html_6_0_i44);
MR_def_label(old_query__clique_to_html_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__clique_to_html_6_0_i45);
MR_def_label(old_query__clique_to_html_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__clique_to_html_6_0_i46);
MR_def_label(old_query__clique_to_html_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__old_html_format__table_start_1_0);
MR_decl_entry(fn__old_html_format__fields_header_4_0);
MR_decl_entry(fn__old_html_format__table_end_1_0);

MR_BEGIN_MODULE(old_query_module13)
	MR_init_entry1(old_query__generate_clique_page_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__generate_clique_page_7_0);
	MR_init_label10(old_query__generate_clique_page_7_0,2,3,4,5,6,7,9,10,11,12)
	MR_init_label5(old_query__generate_clique_page_7_0,13,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_clique_page'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__generate_clique_page_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(old_query__clique_to_html_6_0,
		old_query__generate_clique_page_7_0_i2);
MR_def_label(old_query__generate_clique_page_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		old_query__generate_clique_page_7_0_i3);
MR_def_label(old_query__generate_clique_page_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		old_query__generate_clique_page_7_0_i4);
MR_def_label(old_query__generate_clique_page_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":</H3>\n", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_clique_page_7_0_i5);
MR_def_label(old_query__generate_clique_page_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>Clique ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_clique_page_7_0_i6);
MR_def_label(old_query__generate_clique_page_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__table_start_1_0,
		old_query__generate_clique_page_7_0_i7);
MR_def_label(old_query__generate_clique_page_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__wrap_clique_links_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__old_html_format__fields_header_4_0,
		old_query__generate_clique_page_7_0_i9);
MR_def_label(old_query__generate_clique_page_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__table_end_1_0,
		old_query__generate_clique_page_7_0_i10);
MR_def_label(old_query__generate_clique_page_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		old_query__generate_clique_page_7_0_i11);
MR_def_label(old_query__generate_clique_page_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_clique_page_7_0_i12);
MR_def_label(old_query__generate_clique_page_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_clique_page_7_0_i13);
MR_def_label(old_query__generate_clique_page_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_clique_page_7_0_i14);
MR_def_label(old_query__generate_clique_page_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_clique_page_7_0_i15);
MR_def_label(old_query__generate_clique_page_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_clique_page_7_0_i16);
MR_def_label(old_query__generate_clique_page_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_clique_page_7_0_i17);
MR_def_label(old_query__generate_clique_page_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module14)
	MR_init_entry1(fn__old_query__chase_the_action_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__chase_the_action_5_0);
	MR_init_label10(fn__old_query__chase_the_action_5_0,32,2,3,4,5,6,7,9,10,11)
	MR_init_label7(fn__old_query__chase_the_action_5_0,12,13,14,15,16,17,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'chase_the_action'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__chase_the_action_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(fn__old_query__chase_the_action_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(old_query__clique_to_html_6_0,
		fn__old_query__chase_the_action_5_0_i2);
MR_def_label(fn__old_query__chase_the_action_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		fn__old_query__chase_the_action_5_0_i3);
MR_def_label(fn__old_query__chase_the_action_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__chase_the_action_5_0_i4);
MR_def_label(fn__old_query__chase_the_action_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":</H3>\n", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__chase_the_action_5_0_i5);
MR_def_label(fn__old_query__chase_the_action_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>Clique ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__chase_the_action_5_0_i6);
MR_def_label(fn__old_query__chase_the_action_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__table_start_1_0,
		fn__old_query__chase_the_action_5_0_i7);
MR_def_label(fn__old_query__chase_the_action_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__wrap_clique_links_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__old_html_format__fields_header_4_0,
		fn__old_query__chase_the_action_5_0_i9);
MR_def_label(fn__old_query__chase_the_action_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__table_end_1_0,
		fn__old_query__chase_the_action_5_0_i10);
MR_def_label(fn__old_query__chase_the_action_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		fn__old_query__chase_the_action_5_0_i11);
MR_def_label(fn__old_query__chase_the_action_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__chase_the_action_5_0_i12);
MR_def_label(fn__old_query__chase_the_action_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__chase_the_action_5_0_i13);
MR_def_label(fn__old_query__chase_the_action_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__chase_the_action_5_0_i14);
MR_def_label(fn__old_query__chase_the_action_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__chase_the_action_5_0_i15);
MR_def_label(fn__old_query__chase_the_action_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__chase_the_action_5_0_i16);
MR_def_label(fn__old_query__chase_the_action_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__chase_the_action_5_0_i17);
MR_def_label(fn__old_query__chase_the_action_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(fn__old_query__chase_the_action_5_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__old_query__chase_the_action_5_0_i34);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(fn__old_query__chase_the_action_5_0_i32);
	}
MR_def_label(fn__old_query__chase_the_action_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(old_html_format__proc_static_to_line_group_info_7_0);

MR_BEGIN_MODULE(old_query_module15)
	MR_init_entry1(fn__old_query__proc_total_to_two_id_line_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__proc_total_to_two_id_line_7_0);
	MR_init_label10(fn__old_query__proc_total_to_two_id_line_7_0,2,4,5,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_total_to_two_id_line'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__proc_total_to_two_id_line_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(old_html_format__proc_static_to_line_group_info_7_0,
		fn__old_query__proc_total_to_two_id_line_7_0_i2);
MR_def_label(fn__old_query__proc_total_to_two_id_line_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__old_query__proc_total_to_two_id_line_7_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_total_to_two_id_line_7_0_i5);
MR_def_label(fn__old_query__proc_total_to_two_id_line_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = (MR_Word) MR_string_const("<B>", 3);
	MR_r1 = (MR_Word) MR_string_const("</B>", 4);
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_total_to_two_id_line_7_0_i5);
MR_def_label(fn__old_query__proc_total_to_two_id_line_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_total_to_two_id_line_7_0_i6);
MR_def_label(fn__old_query__proc_total_to_two_id_line_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_total_to_two_id_line_7_0_i7);
MR_def_label(fn__old_query__proc_total_to_two_id_line_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_total_to_two_id_line_7_0_i8);
MR_def_label(fn__old_query__proc_total_to_two_id_line_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_total_to_two_id_line_7_0_i9);
MR_def_label(fn__old_query__proc_total_to_two_id_line_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__proc_total_to_two_id_line_7_0_i10);
MR_def_label(fn__old_query__proc_total_to_two_id_line_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_total_to_two_id_line_7_0_i11);
MR_def_label(fn__old_query__proc_total_to_two_id_line_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id COLSPAN=", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_total_to_two_id_line_7_0_i12);
MR_def_label(fn__old_query__proc_total_to_two_id_line_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_ps_own_3_0);
MR_decl_entry(profile__deep_lookup_ps_desc_3_0);

MR_BEGIN_MODULE(old_query_module16)
	MR_init_entry1(fn__old_query__lookup_proc_total_to_two_id_line_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__lookup_proc_total_to_two_id_line_5_0);
	MR_init_label10(fn__old_query__lookup_proc_total_to_two_id_line_5_0,2,3,4,6,7,8,9,10,11,12)
	MR_init_label2(fn__old_query__lookup_proc_total_to_two_id_line_5_0,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_proc_total_to_two_id_line'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__lookup_proc_total_to_two_id_line_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i2);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_ps_desc_3_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i3);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(old_html_format__proc_static_to_line_group_info_7_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i4);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__old_query__lookup_proc_total_to_two_id_line_5_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i7);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = (MR_Word) MR_string_const("<B>", 3);
	MR_r1 = (MR_Word) MR_string_const("</B>", 4);
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i7);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i8);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i9);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i10);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i11);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i12);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i13);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id COLSPAN=", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_two_id_line_5_0_i14);
MR_def_label(fn__old_query__lookup_proc_total_to_two_id_line_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_tfield(0, MR_r2, 4) = MR_sv(1);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__top_procs__sort_line_groups_2_0);
MR_decl_entry(fn__old_html_format__two_id_line_group_to_html_4_0);

MR_BEGIN_MODULE(old_query_module17)
	MR_init_entry1(fn__old_query__proc_summary_to_html_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__proc_summary_to_html_3_0);
	MR_init_label10(fn__old_query__proc_summary_to_html_3_0,2,3,4,5,9,10,12,13,21,15)
	MR_init_label3(fn__old_query__proc_summary_to_html_3_0,16,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_summary_to_html'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__proc_summary_to_html_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_query__lookup_proc_total_to_two_id_line_5_0,
		fn__old_query__proc_summary_to_html_3_0_i2);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__two_id_line_to_html_4_0,
		fn__old_query__proc_summary_to_html_3_0_i3);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__old_query__proc_summary_to_html_3_0_i4);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		fn__old_query__proc_summary_to_html_3_0_i5);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__call_site_summary_to_html_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(old_html_format, two_id);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,9,4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__old_query__proc_summary_to_html_3_0_i9);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		fn__old_query__proc_summary_to_html_3_0_i10);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_html_format__two_id_line_group_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__old_query__proc_summary_to_html_3_0_i12);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__old_query__proc_summary_to_html_3_0_i13);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__old_query__proc_summary_to_html_3_0_i15);
	}
MR_def_label(fn__old_query__proc_summary_to_html_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		fn__old_query__proc_summary_to_html_3_0_i18);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		fn__old_query__proc_summary_to_html_3_0_i16);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_to_html_3_0_i21);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_to_html_3_0_i19);
MR_def_label(fn__old_query__proc_summary_to_html_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module18)
	MR_init_entry1(fn__old_query__proc_summary_toggles_to_html_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__proc_summary_toggles_to_html_3_0);
	MR_init_label10(fn__old_query__proc_summary_toggles_to_html_3_0,6,7,8,9,10,11,12,13,14,15)
	MR_init_label4(fn__old_query__proc_summary_toggles_to_html_3_0,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_summary_toggles_to_html'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__proc_summary_toggles_to_html_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tempr5 = MR_r3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 100;
	MR_tfield(3, MR_tempr1, 5) = MR_tfield(0, MR_r1, 6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 6);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Integer) 100;
	MR_tfield(3, MR_tempr2, 5) = MR_tfield(3, MR_tempr1, 5);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 6);
	MR_sv(4) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 4) = (MR_Integer) 100;
	MR_tfield(3, MR_tempr3, 5) = MR_tfield(3, MR_tempr1, 5);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 6);
	MR_sv(5) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr4, 2) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 4) = (MR_Integer) 100;
	MR_tfield(3, MR_tempr4, 5) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i6);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Parent call sites]</A>\n", 26);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i7);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i8);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i9);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Parent procedures]</A>\n", 26);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i10);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i11);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i12);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Parent modules]</A>\n", 23);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i13);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i14);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i15);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Parent cliques]</A>\n", 23);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i16);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i17);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i18);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_summary_toggles_to_html_3_0_i19);
MR_def_label(fn__old_query__proc_summary_toggles_to_html_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__old_html_format__proc_static_name_2_0);
MR_decl_entry(fn__html_format__escape_html_string_1_0);

MR_BEGIN_MODULE(old_query_module19)
	MR_init_entry1(fn__old_query__generate_proc_page_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__generate_proc_page_4_0);
	MR_init_label10(fn__old_query__generate_proc_page_4_0,2,3,4,5,6,7,9,10,11,12)
	MR_init_label8(fn__old_query__generate_proc_page_4_0,13,14,15,16,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_proc_page'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__generate_proc_page_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		fn__old_query__generate_proc_page_4_0_i2);
MR_def_label(fn__old_query__generate_proc_page_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__old_html_format__proc_static_name_2_0,
		fn__old_query__generate_proc_page_4_0_i3);
MR_def_label(fn__old_query__generate_proc_page_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__html_format__escape_html_string_1_0,
		fn__old_query__generate_proc_page_4_0_i4);
MR_def_label(fn__old_query__generate_proc_page_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":</H3>\n", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_page_4_0_i5);
MR_def_label(fn__old_query__generate_proc_page_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>Summary of procedure ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_page_4_0_i6);
MR_def_label(fn__old_query__generate_proc_page_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__table_start_1_0,
		fn__old_query__generate_proc_page_4_0_i7);
MR_def_label(fn__old_query__generate_proc_page_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__wrap_proc_links_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__old_html_format__fields_header_4_0,
		fn__old_query__generate_proc_page_4_0_i9);
MR_def_label(fn__old_query__generate_proc_page_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__old_query__proc_summary_to_html_3_0,
		fn__old_query__generate_proc_page_4_0_i10);
MR_def_label(fn__old_query__generate_proc_page_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__table_end_1_0,
		fn__old_query__generate_proc_page_4_0_i11);
MR_def_label(fn__old_query__generate_proc_page_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_query__proc_summary_toggles_to_html_3_0,
		fn__old_query__generate_proc_page_4_0_i12);
MR_def_label(fn__old_query__generate_proc_page_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		fn__old_query__generate_proc_page_4_0_i13);
MR_def_label(fn__old_query__generate_proc_page_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_page_4_0_i14);
MR_def_label(fn__old_query__generate_proc_page_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_page_4_0_i15);
MR_def_label(fn__old_query__generate_proc_page_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_page_4_0_i16);
MR_def_label(fn__old_query__generate_proc_page_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_page_4_0_i17);
MR_def_label(fn__old_query__generate_proc_page_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_page_4_0_i18);
MR_def_label(fn__old_query__generate_proc_page_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_page_4_0_i19);
MR_def_label(fn__old_query__generate_proc_page_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_proc_page_4_0_i20);
MR_def_label(fn__old_query__generate_proc_page_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__drop_3_0);
MR_decl_entry(list__take_upto_3_0);

MR_BEGIN_MODULE(old_query_module20)
	MR_init_entry1(old_query__select_line_bunch_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__select_line_bunch_6_0);
	MR_init_label5(old_query__select_line_bunch_6_0,3,2,6,8,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select_line_bunch'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__select_line_bunch_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = (((MR_Integer) MR_tempr1 - (MR_Integer) 1) * (MR_Integer) MR_tempr2);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__drop_3_0,
		old_query__select_line_bunch_6_0_i3);
MR_def_label(old_query__select_line_bunch_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__select_line_bunch_6_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(old_query__select_line_bunch_6_0_i2);
	}
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_sv(2);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r6;
	MR_r4 = ((MR_Integer) MR_r5 - (MR_Integer) MR_sv(5));
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(old_query__select_line_bunch_6_0_i6);
MR_def_label(old_query__select_line_bunch_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
MR_def_label(old_query__select_line_bunch_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(old_query__select_line_bunch_6_0_i7);
	}
	MR_np_call_localret_ent(list__take_upto_3_0,
		old_query__select_line_bunch_6_0_i8);
MR_def_label(old_query__select_line_bunch_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(old_query__select_line_bunch_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module21)
	MR_init_entry1(fn__old_query__proc_callers_banner_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__proc_callers_banner_8_0);
	MR_init_label10(fn__old_query__proc_callers_banner_8_0,3,4,5,6,7,8,11,12,13,9)
	MR_init_label10(fn__old_query__proc_callers_banner_8_0,17,18,19,15,22,23,24,25,26,27)
	MR_init_label10(fn__old_query__proc_callers_banner_8_0,21,31,32,33,34,35,29,41,43,44)
	MR_init_label10(fn__old_query__proc_callers_banner_8_0,45,46,47,48,49,50,51,52,53,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_callers_banner'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__proc_callers_banner_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__proc_callers_banner_8_0_i3);
MR_def_label(fn__old_query__proc_callers_banner_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__proc_callers_banner_8_0_i4);
MR_def_label(fn__old_query__proc_callers_banner_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</A>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i5);
MR_def_label(fn__old_query__proc_callers_banner_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\">", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i6);
MR_def_label(fn__old_query__proc_callers_banner_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i7);
MR_def_label(fn__old_query__proc_callers_banner_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=\"", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i8);
MR_def_label(fn__old_query__proc_callers_banner_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__old_query__proc_callers_banner_8_0_i9);
	}
	MR_r2 = (MR_Word) MR_string_const("</H3>", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i11);
MR_def_label(fn__old_query__proc_callers_banner_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("s calling ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i12);
MR_def_label(fn__old_query__proc_callers_banner_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i13);
MR_def_label(fn__old_query__proc_callers_banner_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>There are no ", 17);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__old_query__proc_callers_banner_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__old_query__proc_callers_banner_8_0_i15);
	}
	MR_r2 = (MR_Word) MR_string_const(":</H3>\n", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i17);
MR_def_label(fn__old_query__proc_callers_banner_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" calling ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i18);
MR_def_label(fn__old_query__proc_callers_banner_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i19);
MR_def_label(fn__old_query__proc_callers_banner_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>There is one ", 17);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__old_query__proc_callers_banner_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) > (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(fn__old_query__proc_callers_banner_8_0_i21);
	}
	MR_r2 = (MR_Word) MR_string_const(":</H3>", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i22);
MR_def_label(fn__old_query__proc_callers_banner_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("s calling ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i23);
MR_def_label(fn__old_query__proc_callers_banner_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i24);
MR_def_label(fn__old_query__proc_callers_banner_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i25);
MR_def_label(fn__old_query__proc_callers_banner_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__proc_callers_banner_8_0_i26);
MR_def_label(fn__old_query__proc_callers_banner_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i27);
MR_def_label(fn__old_query__proc_callers_banner_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>The ", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__old_query__proc_callers_banner_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__old_query__proc_callers_banner_8_0_i29);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__proc_callers_banner_8_0_i31);
MR_def_label(fn__old_query__proc_callers_banner_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":</H3>", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i32);
MR_def_label(fn__old_query__proc_callers_banner_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", showing first ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i33);
MR_def_label(fn__old_query__proc_callers_banner_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i34);
MR_def_label(fn__old_query__proc_callers_banner_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("s calling ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i35);
MR_def_label(fn__old_query__proc_callers_banner_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i51);
MR_def_label(fn__old_query__proc_callers_banner_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_tempr1 * (MR_Integer) MR_tempr2);
	MR_r3 = ((((MR_Integer) MR_tempr1 - (MR_Integer) 1) * (MR_Integer) MR_tempr2) + (MR_Integer) 1);
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(fn__old_query__proc_callers_banner_8_0_i41);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__proc_callers_banner_8_0_i43);
MR_def_label(fn__old_query__proc_callers_banner_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__proc_callers_banner_8_0_i43);
MR_def_label(fn__old_query__proc_callers_banner_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":</H3>", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i44);
MR_def_label(fn__old_query__proc_callers_banner_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" to ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i45);
MR_def_label(fn__old_query__proc_callers_banner_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__proc_callers_banner_8_0_i46);
MR_def_label(fn__old_query__proc_callers_banner_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i47);
MR_def_label(fn__old_query__proc_callers_banner_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", showing ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i48);
MR_def_label(fn__old_query__proc_callers_banner_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i49);
MR_def_label(fn__old_query__proc_callers_banner_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("s calling ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i50);
MR_def_label(fn__old_query__proc_callers_banner_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i51);
MR_def_label(fn__old_query__proc_callers_banner_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i52);
MR_def_label(fn__old_query__proc_callers_banner_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__proc_callers_banner_8_0_i53);
MR_def_label(fn__old_query__proc_callers_banner_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_banner_8_0_i54);
MR_def_label(fn__old_query__proc_callers_banner_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>There are ", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_proc_callers_3_0);
MR_decl_entry(fn__apply_exclusion__pair_contour_3_0);
MR_decl_entry(fn__apply_exclusion__group_csds_by_call_site_2_0);
MR_decl_entry(fn__apply_exclusion__group_csds_by_clique_2_0);
MR_decl_entry(fn__old_html_format__add_ranks_1_0);
MR_decl_entry(fn__apply_exclusion__group_csds_by_module_2_0);
MR_decl_entry(fn__apply_exclusion__group_csds_by_procedure_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(old_query_module22)
	MR_init_entry1(old_query__proc_callers_to_html_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__proc_callers_to_html_8_0);
	MR_init_label10(old_query__proc_callers_to_html_8_0,2,6,10,14,18,4,21,3,22,29)
	MR_init_label10(old_query__proc_callers_to_html_8_0,34,35,36,37,38,39,40,41,42,43)
	MR_init_label10(old_query__proc_callers_to_html_8_0,44,45,46,28,49,54,55,56,57,58)
	MR_init_label10(old_query__proc_callers_to_html_8_0,59,60,61,62,63,64,65,66,67,48)
	MR_init_label10(old_query__proc_callers_to_html_8_0,70,75,76,77,78,79,80,81,82,83)
	MR_init_label10(old_query__proc_callers_to_html_8_0,84,85,86,87,88,69,90,95,96,97)
	MR_init_label10(old_query__proc_callers_to_html_8_0,98,99,100,101,102,103,104,105,106,107)
	MR_init_label10(old_query__proc_callers_to_html_8_0,27,109,110,111,113,114,117,118,119,115)
	MR_init_label10(old_query__proc_callers_to_html_8_0,120,123,124,125,121,126,129,130,131,127)
	MR_init_label4(old_query__proc_callers_to_html_8_0,133,134,135,137)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_callers_to_html'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__proc_callers_to_html_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_callers_3_0,
		old_query__proc_callers_to_html_8_0_i2);
MR_def_label(old_query__proc_callers_to_html_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 6);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i4);
	}
	MR_r6 = MR_tfield(0, MR_tfield(0, MR_sv(2), 26), 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i6);
	}
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__proc_callers_to_html_8_0_i21);
MR_def_label(old_query__proc_callers_to_html_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__apply_exclusion__pair_contour_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(2, MR_r6, 0);
	MR_sv(7) = MR_r5;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__proc_callers_to_html_8_0_i21);
MR_def_label(old_query__proc_callers_to_html_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tfield(1, MR_r6, 0);
	MR_r2 = (MR_Word) MR_string_const("\n<br>", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i14);
MR_def_label(old_query__proc_callers_to_html_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(8), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__proc_callers_to_html_8_0_i18);
MR_def_label(old_query__proc_callers_to_html_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i3);
MR_def_label(old_query__proc_callers_to_html_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__proc_callers_to_html_8_0_i21);
MR_def_label(old_query__proc_callers_to_html_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(old_query__proc_callers_to_html_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__old_html_format__proc_static_name_2_0,
		old_query__proc_callers_to_html_8_0_i22);
MR_def_label(old_query__proc_callers_to_html_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_sv(9) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tempr6 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr6;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 100;
	MR_tempr7 = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 6);
	MR_sv(10) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr6;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Integer) 100;
	MR_tfield(3, MR_tempr2, 5) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 6);
	MR_sv(11) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr6;
	MR_tfield(3, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 4) = (MR_Integer) 100;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 6);
	MR_sv(12) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr6;
	MR_tfield(3, MR_tempr4, 2) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 4) = (MR_Integer) 100;
	MR_tfield(3, MR_tempr4, 5) = MR_tempr7;
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i28);
	}
	MR_tempr5 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__apply_exclusion__group_csds_by_call_site_2_0,
		old_query__proc_callers_to_html_8_0_i29);
MR_def_label(old_query__proc_callers_to_html_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__proc_callers_call_site_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(old_html_format, two_id);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__proc_callers_to_html_8_0_i34);
MR_def_label(old_query__proc_callers_to_html_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		old_query__proc_callers_to_html_8_0_i35);
MR_def_label(old_query__proc_callers_to_html_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i36);
MR_def_label(old_query__proc_callers_to_html_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by procedure]</A>\n", 35);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i37);
MR_def_label(old_query__proc_callers_to_html_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i38);
MR_def_label(old_query__proc_callers_to_html_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i39);
MR_def_label(old_query__proc_callers_to_html_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by module]</A>\n", 32);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i40);
MR_def_label(old_query__proc_callers_to_html_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i41);
MR_def_label(old_query__proc_callers_to_html_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i42);
MR_def_label(old_query__proc_callers_to_html_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by clique]</A>\n", 32);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i43);
MR_def_label(old_query__proc_callers_to_html_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i44);
MR_def_label(old_query__proc_callers_to_html_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i45);
MR_def_label(old_query__proc_callers_to_html_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i46);
MR_def_label(old_query__proc_callers_to_html_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(10) = (MR_Integer) 0;
	MR_sv(11) = (MR_Word) MR_string_const("call site", 9);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i27);
MR_def_label(old_query__proc_callers_to_html_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),3)) {
		MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__apply_exclusion__group_csds_by_clique_2_0,
		old_query__proc_callers_to_html_8_0_i49);
MR_def_label(old_query__proc_callers_to_html_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__proc_callers_clique_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(old_html_format, one_id);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,12);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,13);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__proc_callers_to_html_8_0_i54);
MR_def_label(old_query__proc_callers_to_html_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		old_query__proc_callers_to_html_8_0_i55);
MR_def_label(old_query__proc_callers_to_html_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__add_ranks_1_0,
		old_query__proc_callers_to_html_8_0_i56);
MR_def_label(old_query__proc_callers_to_html_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i57);
MR_def_label(old_query__proc_callers_to_html_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by call site]</A>\n", 35);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i58);
MR_def_label(old_query__proc_callers_to_html_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i59);
MR_def_label(old_query__proc_callers_to_html_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i60);
MR_def_label(old_query__proc_callers_to_html_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by procedure]</A>\n", 35);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i61);
MR_def_label(old_query__proc_callers_to_html_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i62);
MR_def_label(old_query__proc_callers_to_html_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i63);
MR_def_label(old_query__proc_callers_to_html_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by module]</A>\n", 32);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i64);
MR_def_label(old_query__proc_callers_to_html_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i65);
MR_def_label(old_query__proc_callers_to_html_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i66);
MR_def_label(old_query__proc_callers_to_html_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i67);
MR_def_label(old_query__proc_callers_to_html_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(10) = (MR_Integer) 0;
	MR_sv(11) = (MR_Word) MR_string_const("clique", 6);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i27);
MR_def_label(old_query__proc_callers_to_html_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i69);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__apply_exclusion__group_csds_by_module_2_0,
		old_query__proc_callers_to_html_8_0_i70);
MR_def_label(old_query__proc_callers_to_html_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__proc_callers_module_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(old_html_format, one_id);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,16);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,13);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__proc_callers_to_html_8_0_i75);
MR_def_label(old_query__proc_callers_to_html_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		old_query__proc_callers_to_html_8_0_i76);
MR_def_label(old_query__proc_callers_to_html_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__add_ranks_1_0,
		old_query__proc_callers_to_html_8_0_i77);
MR_def_label(old_query__proc_callers_to_html_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i78);
MR_def_label(old_query__proc_callers_to_html_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by call site]</A>\n", 35);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i79);
MR_def_label(old_query__proc_callers_to_html_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i80);
MR_def_label(old_query__proc_callers_to_html_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i81);
MR_def_label(old_query__proc_callers_to_html_8_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by procedure]</A>\n", 35);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i82);
MR_def_label(old_query__proc_callers_to_html_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i83);
MR_def_label(old_query__proc_callers_to_html_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i84);
MR_def_label(old_query__proc_callers_to_html_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by clique]</A>\n", 32);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i85);
MR_def_label(old_query__proc_callers_to_html_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i86);
MR_def_label(old_query__proc_callers_to_html_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i87);
MR_def_label(old_query__proc_callers_to_html_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i88);
MR_def_label(old_query__proc_callers_to_html_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(10) = (MR_Integer) 1;
	MR_sv(11) = (MR_Word) MR_string_const("module", 6);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i27);
MR_def_label(old_query__proc_callers_to_html_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__apply_exclusion__group_csds_by_procedure_2_0,
		old_query__proc_callers_to_html_8_0_i90);
MR_def_label(old_query__proc_callers_to_html_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__proc_callers_proc_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(old_html_format, two_id);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,18);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__proc_callers_to_html_8_0_i95);
MR_def_label(old_query__proc_callers_to_html_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		old_query__proc_callers_to_html_8_0_i96);
MR_def_label(old_query__proc_callers_to_html_8_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i97);
MR_def_label(old_query__proc_callers_to_html_8_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by call site]</A>\n", 35);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i98);
MR_def_label(old_query__proc_callers_to_html_8_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i99);
MR_def_label(old_query__proc_callers_to_html_8_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i100);
MR_def_label(old_query__proc_callers_to_html_8_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by module]</A>\n", 32);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i101);
MR_def_label(old_query__proc_callers_to_html_8_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i102);
MR_def_label(old_query__proc_callers_to_html_8_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i103);
MR_def_label(old_query__proc_callers_to_html_8_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">[Group callers by clique]</A>\n", 32);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i104);
MR_def_label(old_query__proc_callers_to_html_8_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i105);
MR_def_label(old_query__proc_callers_to_html_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i106);
MR_def_label(old_query__proc_callers_to_html_8_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i107);
MR_def_label(old_query__proc_callers_to_html_8_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(10) = (MR_Integer) 0;
	MR_sv(11) = (MR_Word) MR_string_const("procedure", 9);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,9);
MR_def_label(old_query__proc_callers_to_html_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(list__length_2_0,
		old_query__proc_callers_to_html_8_0_i109);
MR_def_label(old_query__proc_callers_to_html_8_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 100;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(old_query__select_line_bunch_6_0,
		old_query__proc_callers_to_html_8_0_i110);
MR_def_label(old_query__proc_callers_to_html_8_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Integer) 100;
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__old_query__proc_callers_banner_8_0,
		old_query__proc_callers_to_html_8_0_i111);
MR_def_label(old_query__proc_callers_to_html_8_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_html_format__two_id_line_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__proc_callers_to_html_8_0_i113);
MR_def_label(old_query__proc_callers_to_html_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		old_query__proc_callers_to_html_8_0_i114);
MR_def_label(old_query__proc_callers_to_html_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(6),1)) {
		MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i115);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 100;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(7);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i117);
MR_def_label(old_query__proc_callers_to_html_8_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">First group</A>\n", 18);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i118);
MR_def_label(old_query__proc_callers_to_html_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i119);
MR_def_label(old_query__proc_callers_to_html_8_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i120);
MR_def_label(old_query__proc_callers_to_html_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(13) = (MR_Word) MR_string_const("", 0);
MR_def_label(old_query__proc_callers_to_html_8_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(6),2)) {
		MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i121);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 100;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i123);
MR_def_label(old_query__proc_callers_to_html_8_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">Previous group</A>\n", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i124);
MR_def_label(old_query__proc_callers_to_html_8_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i125);
MR_def_label(old_query__proc_callers_to_html_8_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i126);
MR_def_label(old_query__proc_callers_to_html_8_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
MR_def_label(old_query__proc_callers_to_html_8_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(6);
	MR_tempr1 = ((MR_Integer) MR_tempr3 * (MR_Integer) 100);
	if (((MR_Integer) MR_sv(5) <= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i127);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 6);
	MR_r3 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr2, 3) = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 4) = (MR_Integer) 100;
	MR_tfield(3, MR_tempr2, 5) = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		old_query__proc_callers_to_html_8_0_i129);
MR_def_label(old_query__proc_callers_to_html_8_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\">Next group</A>\n", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i130);
MR_def_label(old_query__proc_callers_to_html_8_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i131);
MR_def_label(old_query__proc_callers_to_html_8_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i133);
MR_def_label(old_query__proc_callers_to_html_8_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i133);
MR_def_label(old_query__proc_callers_to_html_8_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i134);
MR_def_label(old_query__proc_callers_to_html_8_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_callers_to_html_8_0_i135);
MR_def_label(old_query__proc_callers_to_html_8_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(old_query__proc_callers_to_html_8_0_i137);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(old_query__proc_callers_to_html_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_sv(8), 0);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module23)
	MR_init_entry1(old_query__generate_proc_callers_page_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__generate_proc_callers_page_9_0);
	MR_init_label10(old_query__generate_proc_callers_page_9_0,2,5,4,7,8,10,12,13,14,15)
	MR_init_label6(old_query__generate_proc_callers_page_9_0,16,17,19,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_proc_callers_page'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__generate_proc_callers_page_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(2);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(old_query__proc_callers_to_html_8_0,
		old_query__generate_proc_callers_page_9_0_i2);
MR_def_label(old_query__generate_proc_callers_page_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(old_query__generate_proc_callers_page_9_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const("</H3>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_proc_callers_page_9_0_i5);
MR_def_label(old_query__generate_proc_callers_page_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>", 4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(old_query__generate_proc_callers_page_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		old_query__generate_proc_callers_page_9_0_i7);
MR_def_label(old_query__generate_proc_callers_page_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(old_query__generate_proc_callers_page_9_0_i8);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		old_query__generate_proc_callers_page_9_0_i19);
MR_def_label(old_query__generate_proc_callers_page_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__old_html_format__table_start_1_0,
		old_query__generate_proc_callers_page_9_0_i10);
MR_def_label(old_query__generate_proc_callers_page_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__wrap_proc_callers_links_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__old_html_format__fields_header_4_0,
		old_query__generate_proc_callers_page_9_0_i12);
MR_def_label(old_query__generate_proc_callers_page_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__old_html_format__table_end_1_0,
		old_query__generate_proc_callers_page_9_0_i13);
MR_def_label(old_query__generate_proc_callers_page_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_proc_callers_page_9_0_i14);
MR_def_label(old_query__generate_proc_callers_page_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_proc_callers_page_9_0_i15);
MR_def_label(old_query__generate_proc_callers_page_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_proc_callers_page_9_0_i16);
MR_def_label(old_query__generate_proc_callers_page_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_proc_callers_page_9_0_i17);
MR_def_label(old_query__generate_proc_callers_page_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		old_query__generate_proc_callers_page_9_0_i19);
MR_def_label(old_query__generate_proc_callers_page_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_proc_callers_page_9_0_i20);
MR_def_label(old_query__generate_proc_callers_page_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_proc_callers_page_9_0_i21);
MR_def_label(old_query__generate_proc_callers_page_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__generate_proc_callers_page_9_0_i22);
MR_def_label(old_query__generate_proc_callers_page_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__list__filter_map_2_0);

MR_BEGIN_MODULE(old_query_module24)
	MR_init_entry1(fn__old_query__generate_modules_page_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__generate_modules_page_3_0);
	MR_init_label10(fn__old_query__generate_modules_page_3_0,2,3,5,6,9,12,13,14,17,18)
	MR_init_label9(fn__old_query__generate_modules_page_3_0,19,20,21,22,23,24,25,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_modules_page'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__generate_modules_page_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		fn__old_query__generate_modules_page_3_0_i2);
MR_def_label(fn__old_query__generate_modules_page_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__old_html_format__table_start_1_0,
		fn__old_query__generate_modules_page_3_0_i3);
MR_def_label(fn__old_query__generate_modules_page_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__wrap_modules_links_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__old_html_format__fields_header_4_0,
		fn__old_query__generate_modules_page_3_0_i5);
MR_def_label(fn__old_query__generate_modules_page_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tfield(0, MR_sv(3), 25);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__old_query__generate_modules_page_3_0_i6);
MR_def_label(fn__old_query__generate_modules_page_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,9,20);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		fn__old_query__generate_modules_page_3_0_i9);
MR_def_label(fn__old_query__generate_modules_page_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__module_summary_to_html_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(old_html_format, one_id);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_sv(10) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,20);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,13);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		fn__old_query__generate_modules_page_3_0_i12);
MR_def_label(fn__old_query__generate_modules_page_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tfield(0, MR_sv(2), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		fn__old_query__generate_modules_page_3_0_i13);
MR_def_label(fn__old_query__generate_modules_page_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__add_ranks_1_0,
		fn__old_query__generate_modules_page_3_0_i14);
MR_def_label(fn__old_query__generate_modules_page_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_html_format__two_id_line_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__old_query__generate_modules_page_3_0_i17);
MR_def_label(fn__old_query__generate_modules_page_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		fn__old_query__generate_modules_page_3_0_i18);
MR_def_label(fn__old_query__generate_modules_page_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__old_query__generate_modules_page_3_0_i19);
MR_def_label(fn__old_query__generate_modules_page_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_modules_page_3_0_i20);
MR_def_label(fn__old_query__generate_modules_page_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__old_html_format__table_end_1_0,
		fn__old_query__generate_modules_page_3_0_i21);
MR_def_label(fn__old_query__generate_modules_page_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		fn__old_query__generate_modules_page_3_0_i22);
MR_def_label(fn__old_query__generate_modules_page_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_modules_page_3_0_i23);
MR_def_label(fn__old_query__generate_modules_page_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_modules_page_3_0_i24);
MR_def_label(fn__old_query__generate_modules_page_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_modules_page_3_0_i25);
MR_def_label(fn__old_query__generate_modules_page_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_modules_page_3_0_i26);
MR_def_label(fn__old_query__generate_modules_page_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>The modules of the program:</H3>\n", 37);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_modules_page_3_0_i27);
MR_def_label(fn__old_query__generate_modules_page_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module25)
	MR_init_entry1(fn__old_query__generate_module_page_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__generate_module_page_5_0);
	MR_init_label10(fn__old_query__generate_module_page_5_0,4,5,10,7,12,15,16,17,18,19)
	MR_init_label10(fn__old_query__generate_module_page_5_0,20,21,22,24,25,26,27,28,29,30)
	MR_init_label1(fn__old_query__generate_module_page_5_0,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_module_page'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__generate_module_page_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__lookup_proc_total_to_html_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_string_const("", 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(old_html_format, one_id);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_sv(7) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,9,13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(8);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		fn__old_query__generate_module_page_5_0_i4);
MR_def_label(fn__old_query__generate_module_page_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_sv(3), 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(old_html_format, one_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		fn__old_query__generate_module_page_5_0_i5);
MR_def_label(fn__old_query__generate_module_page_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(5) == (MR_Integer) MR_tbmkword(0, 0)) || ((MR_Integer) MR_sv(5) == (MR_Integer) MR_tbmkword(0, 1))))) {
		MR_GOTO_LAB(fn__old_query__generate_module_page_5_0_i7);
	}
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,9,9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__old_query__generate_module_page_5_0_i10);
MR_def_label(fn__old_query__generate_module_page_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_html_format__two_id_line_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_sv(5) = (MR_Integer) 0;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__old_query__generate_module_page_5_0_i15);
MR_def_label(fn__old_query__generate_module_page_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__add_ranks_1_0,
		fn__old_query__generate_module_page_5_0_i12);
MR_def_label(fn__old_query__generate_module_page_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_html_format__two_id_line_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_sv(5) = (MR_Integer) 2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__old_query__generate_module_page_5_0_i15);
MR_def_label(fn__old_query__generate_module_page_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		fn__old_query__generate_module_page_5_0_i16);
MR_def_label(fn__old_query__generate_module_page_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__old_query__generate_module_page_5_0_i17);
MR_def_label(fn__old_query__generate_module_page_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_module_page_5_0_i18);
MR_def_label(fn__old_query__generate_module_page_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		fn__old_query__generate_module_page_5_0_i19);
MR_def_label(fn__old_query__generate_module_page_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(":</H3>\n", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_module_page_5_0_i20);
MR_def_label(fn__old_query__generate_module_page_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>The procedures of module ", 29);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_module_page_5_0_i21);
MR_def_label(fn__old_query__generate_module_page_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__table_start_1_0,
		fn__old_query__generate_module_page_5_0_i22);
MR_def_label(fn__old_query__generate_module_page_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__wrap_module_links_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__old_html_format__fields_header_4_0,
		fn__old_query__generate_module_page_5_0_i24);
MR_def_label(fn__old_query__generate_module_page_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__old_html_format__table_end_1_0,
		fn__old_query__generate_module_page_5_0_i25);
MR_def_label(fn__old_query__generate_module_page_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		fn__old_query__generate_module_page_5_0_i26);
MR_def_label(fn__old_query__generate_module_page_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_module_page_5_0_i27);
MR_def_label(fn__old_query__generate_module_page_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_module_page_5_0_i28);
MR_def_label(fn__old_query__generate_module_page_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_module_page_5_0_i29);
MR_def_label(fn__old_query__generate_module_page_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_module_page_5_0_i30);
MR_def_label(fn__old_query__generate_module_page_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_module_page_5_0_i31);
MR_def_label(fn__old_query__generate_module_page_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__top_procs__find_top_procs_5_0);
MR_decl_entry(fn__old_html_format__toggle_cost_criteria_in_top_procs_cmd_6_0);
MR_decl_entry(fn__old_html_format__cost_criteria_to_description_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(old_query_module26)
	MR_init_entry1(fn__old_query__generate_top_procs_page_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__generate_top_procs_page_7_0);
	MR_init_label10(fn__old_query__generate_top_procs_page_7_0,3,2,4,7,8,9,6,12,13,14)
	MR_init_label10(fn__old_query__generate_top_procs_page_7_0,15,18,19,20,21,22,23,24,25,17)
	MR_init_label10(fn__old_query__generate_top_procs_page_7_0,30,31,32,35,36,37,39,40,41,42)
	MR_init_label9(fn__old_query__generate_top_procs_page_7_0,43,44,45,46,47,48,49,50,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_top_procs_page'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__generate_top_procs_page_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__old_query__generate_top_procs_page_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r4 = MR_r2;
	MR_r1 = MR_r3;
	MR_sv(4) = MR_r6;
	MR_r5 = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__old_query__generate_top_procs_page_7_0_i2);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r2;
	MR_r1 = MR_r3;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r5;
	MR_r5 = MR_r7;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
MR_def_label(fn__old_query__generate_top_procs_page_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_np_call_localret_ent(fn__top_procs__find_top_procs_5_0,
		fn__old_query__generate_top_procs_page_7_0_i4);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__old_query__generate_top_procs_page_7_0_i6);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		fn__old_query__generate_top_procs_page_7_0_i7);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		fn__old_query__generate_top_procs_page_7_0_i8);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i9);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i25);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(fn__old_html_format__toggle_cost_criteria_in_top_procs_cmd_6_0,
		fn__old_query__generate_top_procs_page_7_0_i12);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__old_html_format__cost_criteria_to_description_3_0,
		fn__old_query__generate_top_procs_page_7_0_i13);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</H3>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i14);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>Top procedures ", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i15);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(fn__old_query__generate_top_procs_page_7_0_i17);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		fn__old_query__generate_top_procs_page_7_0_i18);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		fn__old_query__generate_top_procs_page_7_0_i19);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i20);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i21);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i22);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("No procedures match the specification.\n", 39);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i23);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i24);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i25);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__old_query__generate_top_procs_page_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__lookup_proc_total_to_html_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_string_const("", 0);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_sv(9) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,9,13);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__old_query__generate_top_procs_page_7_0_i30);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		fn__old_query__generate_top_procs_page_7_0_i31);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__add_ranks_1_0,
		fn__old_query__generate_top_procs_page_7_0_i32);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_html_format__two_id_line_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__old_query__generate_top_procs_page_7_0_i35);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		fn__old_query__generate_top_procs_page_7_0_i36);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__old_html_format__table_start_1_0,
		fn__old_query__generate_top_procs_page_7_0_i37);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__wrap_top_procs_links_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__old_html_format__fields_header_4_0,
		fn__old_query__generate_top_procs_page_7_0_i39);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__old_query__generate_top_procs_page_7_0_i40);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__old_html_format__table_end_1_0,
		fn__old_query__generate_top_procs_page_7_0_i41);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		fn__old_query__generate_top_procs_page_7_0_i42);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i43);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i44);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i45);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i46);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i47);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i48);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i49);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i50);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__generate_top_procs_page_7_0_i51);
MR_def_label(fn__old_query__generate_top_procs_page_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(old_query_module27)
	MR_init_entry1(old_query__old_exec_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__old_exec_6_0);
	MR_init_label10(old_query__old_exec_6_0,6,4,9,10,3,14,16,18,20,22)
	MR_init_label10(old_query__old_exec_6_0,24,25,29,28,32,33,27,37,41,39)
	MR_init_label10(old_query__old_exec_6_0,44,45,38,53,51,56,57,58,49,61)
	MR_init_label10(old_query__old_exec_6_0,62,65,64,68,70,67,74,75,73,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'old_exec'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__old_query__old_exec_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(profile__valid_clique_ptr_2_0,
		old_query__old_exec_6_0_i6);
MR_def_label(old_query__old_exec_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 100;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(old_query__generate_clique_page_7_0);
MR_def_label(old_query__old_exec_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		old_query__old_exec_6_0_i9);
MR_def_label(old_query__old_exec_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		old_query__old_exec_6_0_i10);
MR_def_label(old_query__old_exec_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There is no clique with that number.\n", 37);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__old_exec_6_0_i58);
MR_def_label(old_query__old_exec_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i14);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__old_query__generate_call_site_dynamic_debug_page_2_0);
MR_def_label(old_query__old_exec_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__old_query__generate_call_site_static_debug_page_2_0);
MR_def_label(old_query__old_exec_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i18);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__old_query__generate_clique_debug_page_2_0);
MR_def_label(old_query__old_exec_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__old_query__generate_proc_dynamic_debug_page_2_0);
MR_def_label(old_query__old_exec_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i22);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__old_query__generate_proc_static_debug_page_2_0);
MR_def_label(old_query__old_exec_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("old_query.m: deep_cmd_dump_proc_var_use is unsupported by old_exec\n", 67);
	MR_proceed();
MR_def_label(old_query__old_exec_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i25);
	}
	MR_np_tailcall_ent(fn__old_query__generate_menu_page_3_0);
MR_def_label(old_query__old_exec_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i27);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r3 = MR_tfield(0, MR_r3, 25);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		old_query__old_exec_6_0_i29);
MR_def_label(old_query__old_exec_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i28);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__old_query__generate_module_page_5_0);
	}
MR_def_label(old_query__old_exec_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		old_query__old_exec_6_0_i32);
MR_def_label(old_query__old_exec_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		old_query__old_exec_6_0_i33);
MR_def_label(old_query__old_exec_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There is no procedure with that number.\n", 40);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__old_exec_6_0_i58);
MR_def_label(old_query__old_exec_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("old_query.m: deep_cmd_module_getter_setters is unsupported by old_exec\n", 71);
	MR_proceed();
MR_def_label(old_query__old_exec_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i38);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		old_query__old_exec_6_0_i41);
MR_def_label(old_query__old_exec_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i39);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__old_query__generate_proc_page_4_0);
MR_def_label(old_query__old_exec_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		old_query__old_exec_6_0_i44);
MR_def_label(old_query__old_exec_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		old_query__old_exec_6_0_i45);
MR_def_label(old_query__old_exec_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There is no procedure with that number.\n", 40);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__old_exec_6_0_i58);
MR_def_label(old_query__old_exec_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i49);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(3, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		old_query__old_exec_6_0_i53);
MR_def_label(old_query__old_exec_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i51);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(old_query__generate_proc_callers_page_9_0);
MR_def_label(old_query__old_exec_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_banner_2_0,
		old_query__old_exec_6_0_i56);
MR_def_label(old_query__old_exec_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__old_html_format__page_footer_3_0,
		old_query__old_exec_6_0_i57);
MR_def_label(old_query__old_exec_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There is no procedure with that number.\n", 40);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__old_exec_6_0_i58);
MR_def_label(old_query__old_exec_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(old_query__old_exec_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i61);
	}
	MR_r1 = (MR_Word) MR_string_const("old_query.m: deep_cmd_procrep_coverage is unsupported by old_exec\n", 66);
	MR_proceed();
MR_def_label(old_query__old_exec_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i62);
	}
	MR_np_tailcall_ent(fn__old_query__generate_modules_page_3_0);
MR_def_label(old_query__old_exec_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i64);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r3, 3);
	MR_r2 = (MR_Word) MR_string_const(".</H3>\n", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__old_exec_6_0_i65);
MR_def_label(old_query__old_exec_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>Shutting down deep profile server for ", 42);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(old_query__old_exec_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i67);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r1, 4);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		old_query__old_exec_6_0_i68);
MR_def_label(old_query__old_exec_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i70);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 100;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(old_query__generate_clique_page_7_0);
	}
MR_def_label(old_query__old_exec_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(1, MR_sv(4), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__old_query__chase_the_action_5_0);
	}
MR_def_label(old_query__old_exec_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i73);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		old_query__old_exec_6_0_i74);
MR_def_label(old_query__old_exec_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" minutes</H3>\n", 14);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__old_exec_6_0_i75);
MR_def_label(old_query__old_exec_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>Timeout set to ", 19);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(old_query__old_exec_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(old_query__old_exec_6_0_i77);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_r1, 2);
	MR_r4 = MR_tfield(3, MR_r1, 3);
	MR_r5 = MR_tfield(3, MR_r1, 4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(fn__old_query__generate_top_procs_page_7_0);
	}
MR_def_label(old_query__old_exec_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exec: found restart command", 27);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module28)
	MR_init_entry1(old_query__append_slot_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__append_slot_to_string_3_0);
	MR_init_label10(old_query__append_slot_to_string_3_0,4,6,7,8,9,10,11,3,13,14)
	MR_init_label1(old_query__append_slot_to_string_3_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_slot_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__append_slot_to_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(old_query__append_slot_to_string_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		old_query__append_slot_to_string_3_0_i4);
MR_def_label(old_query__append_slot_to_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(list__foldl_4_0,
		old_query__append_slot_to_string_3_0_i6);
MR_def_label(old_query__append_slot_to_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		old_query__append_slot_to_string_3_0_i7);
MR_def_label(old_query__append_slot_to_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		old_query__append_slot_to_string_3_0_i8);
MR_def_label(old_query__append_slot_to_string_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("): [", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__append_slot_to_string_3_0_i9);
MR_def_label(old_query__append_slot_to_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("multi(", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__append_slot_to_string_3_0_i10);
MR_def_label(old_query__append_slot_to_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("]", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__append_slot_to_string_3_0_i11);
MR_def_label(old_query__append_slot_to_string_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__append_slot_to_string_3_0_i14);
MR_def_label(old_query__append_slot_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		old_query__append_slot_to_string_3_0_i13);
MR_def_label(old_query__append_slot_to_string_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("normal ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__append_slot_to_string_3_0_i14);
MR_def_label(old_query__append_slot_to_string_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__append_slot_to_string_3_0_i15);
MR_def_label(old_query__append_slot_to_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module29)
	MR_init_entry1(old_query__append_csdi_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__append_csdi_to_string_3_0);
	MR_init_label2(old_query__append_csdi_to_string_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_csdi_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__append_csdi_to_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		old_query__append_csdi_to_string_3_0_i2);
MR_def_label(old_query__append_csdi_to_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__append_csdi_to_string_3_0_i3);
MR_def_label(old_query__append_csdi_to_string_3_0,3)
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


MR_BEGIN_MODULE(old_query_module30)
	MR_init_entry1(fn__old_query__append_pdi_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__append_pdi_to_string_2_0);
	MR_init_label2(fn__old_query__append_pdi_to_string_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_pdi_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__append_pdi_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__append_pdi_to_string_2_0_i2);
MR_def_label(fn__old_query__append_pdi_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__append_pdi_to_string_2_0_i3);
MR_def_label(fn__old_query__append_pdi_to_string_2_0,3)
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


MR_BEGIN_MODULE(old_query_module31)
	MR_init_entry1(fn__old_query__call_site_kind_and_callee_to_html_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__call_site_kind_and_callee_to_html_1_0);
	MR_init_label4(fn__old_query__call_site_kind_and_callee_to_html_1_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_kind_and_callee_to_html'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__call_site_kind_and_callee_to_html_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__old_query__call_site_kind_and_callee_to_html_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("callback", 8);
	MR_proceed();
MR_def_label(fn__old_query__call_site_kind_and_callee_to_html_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__old_query__call_site_kind_and_callee_to_html_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("higher_order_call", 17);
	MR_proceed();
MR_def_label(fn__old_query__call_site_kind_and_callee_to_html_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__old_query__call_site_kind_and_callee_to_html_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("method_call", 11);
	MR_proceed();
MR_def_label(fn__old_query__call_site_kind_and_callee_to_html_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__old_query__call_site_kind_and_callee_to_html_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("special_call", 12);
	MR_proceed();
MR_def_label(fn__old_query__call_site_kind_and_callee_to_html_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("normal_call", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module32)
	MR_init_entry1(old_query__not_mercury_runtime_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__not_mercury_runtime_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'not_mercury_runtime'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__not_mercury_runtime_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r2, MR_string_const("Mercury runtime", 15)) != 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__compute_is_active_1_0);

MR_BEGIN_MODULE(old_query_module33)
	MR_init_entry1(fn__old_query__module_summary_to_html_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__module_summary_to_html_3_0);
	MR_init_label8(fn__old_query__module_summary_to_html_3_0,5,3,8,9,10,11,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_summary_to_html'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__module_summary_to_html_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tfield(0, MR_r1, 9), 2);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(fn__old_query__module_summary_to_html_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__measurements__compute_is_active_1_0,
		fn__old_query__module_summary_to_html_3_0_i5);
MR_def_label(fn__old_query__module_summary_to_html_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(fn__old_query__module_summary_to_html_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
MR_def_label(fn__old_query__module_summary_to_html_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_sv(4) = MR_r5;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__module_summary_to_html_3_0_i8);
MR_def_label(fn__old_query__module_summary_to_html_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("</A></TD>\n", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__module_summary_to_html_3_0_i9);
MR_def_label(fn__old_query__module_summary_to_html_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\">", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__module_summary_to_html_3_0_i10);
MR_def_label(fn__old_query__module_summary_to_html_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__module_summary_to_html_3_0_i11);
MR_def_label(fn__old_query__module_summary_to_html_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD><A HREF=\"", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__module_summary_to_html_3_0_i12);
MR_def_label(fn__old_query__module_summary_to_html_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__old_query__module_summary_to_html_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(old_query_module34)
	MR_init_entry1(old_query__proc_group_contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__proc_group_contains_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_group_contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__proc_group_contains_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(list__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(old_query_module35)
	MR_init_entry1(old_query__group_proc_dynamics_by_proc_static_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__group_proc_dynamics_by_proc_static_4_0);
	MR_init_label4(old_query__group_proc_dynamics_by_proc_static_4_0,3,4,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_proc_dynamics_by_proc_static'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__group_proc_dynamics_by_proc_static_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__valid_proc_dynamic_ptr_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("group_proc_dynamics_by_proc_static: invalid PDPtr", 49);
	}
	MR_np_call_localret_ent(require__require_2_0,
		old_query__group_proc_dynamics_by_proc_static_4_0_i3);
MR_def_label(old_query__group_proc_dynamics_by_proc_static_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		old_query__group_proc_dynamics_by_proc_static_4_0_i4);
MR_def_label(old_query__group_proc_dynamics_by_proc_static_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		old_query__group_proc_dynamics_by_proc_static_4_0_i7);
MR_def_label(old_query__group_proc_dynamics_by_proc_static_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__group_proc_dynamics_by_proc_static_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(old_query__group_proc_dynamics_by_proc_static_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_proc_dynamics_3_0);
MR_decl_entry(profile__lookup_proc_statics_3_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(old_query_module36)
	MR_init_entry1(old_query__child_call_sites_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__child_call_sites_4_0);
	MR_init_label4(old_query__child_call_sites_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'child_call_sites'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__child_call_sites_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(profile__lookup_proc_dynamics_3_0,
		old_query__child_call_sites_4_0_i2);
MR_def_label(old_query__child_call_sites_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		old_query__child_call_sites_4_0_i3);
MR_def_label(old_query__child_call_sites_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 8);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		old_query__child_call_sites_4_0_i4);
MR_def_label(old_query__child_call_sites_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		old_query__child_call_sites_4_0_i5);
MR_def_label(old_query__child_call_sites_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(assoc_list__from_corresponding_lists_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_pd_own_3_0);
MR_decl_entry(profile__deep_lookup_pd_desc_3_0);

MR_BEGIN_MODULE(old_query_module37)
	MR_init_entry1(old_query__proc_in_clique_to_html_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__proc_in_clique_to_html_7_0);
	MR_init_label10(old_query__proc_in_clique_to_html_7_0,3,5,6,7,8,9,10,11,12,14)
	MR_init_label10(old_query__proc_in_clique_to_html_7_0,21,22,23,24,26,27,28,29,30,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_in_clique_to_html'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__proc_in_clique_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__valid_proc_dynamic_ptr_2_0,
		old_query__proc_in_clique_to_html_7_0_i3);
MR_def_label(old_query__proc_in_clique_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__proc_in_clique_to_html_7_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_pd_own_3_0,
		old_query__proc_in_clique_to_html_7_0_i5);
MR_def_label(old_query__proc_in_clique_to_html_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_pd_desc_3_0,
		old_query__proc_in_clique_to_html_7_0_i6);
MR_def_label(old_query__proc_in_clique_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		old_query__proc_in_clique_to_html_7_0_i7);
MR_def_label(old_query__proc_in_clique_to_html_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__old_query__proc_total_to_two_id_line_7_0,
		old_query__proc_in_clique_to_html_7_0_i8);
MR_def_label(old_query__proc_in_clique_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_tempr2, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(old_query__child_call_sites_4_0,
		old_query__proc_in_clique_to_html_7_0_i9);
MR_def_label(old_query__proc_in_clique_to_html_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		old_query__proc_in_clique_to_html_7_0_i10);
MR_def_label(old_query__proc_in_clique_to_html_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__two_id_line_to_html_4_0,
		old_query__proc_in_clique_to_html_7_0_i11);
MR_def_label(old_query__proc_in_clique_to_html_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_in_clique_to_html_7_0_i12);
MR_def_label(old_query__proc_in_clique_to_html_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(old_query__proc_in_clique_to_html_7_0_i14);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(old_query__proc_in_clique_to_html_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(old_query__call_site_clique_to_html_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(old_html_format, two_id);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,9,4);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,24);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		old_query__proc_in_clique_to_html_7_0_i21);
MR_def_label(old_query__proc_in_clique_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		old_query__proc_in_clique_to_html_7_0_i22);
MR_def_label(old_query__proc_in_clique_to_html_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		old_query__proc_in_clique_to_html_7_0_i23);
MR_def_label(old_query__proc_in_clique_to_html_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		old_query__proc_in_clique_to_html_7_0_i24);
MR_def_label(old_query__proc_in_clique_to_html_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_html_format__two_id_line_group_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__proc_in_clique_to_html_7_0_i26);
MR_def_label(old_query__proc_in_clique_to_html_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		old_query__proc_in_clique_to_html_7_0_i27);
MR_def_label(old_query__proc_in_clique_to_html_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		old_query__proc_in_clique_to_html_7_0_i28);
MR_def_label(old_query__proc_in_clique_to_html_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_in_clique_to_html_7_0_i29);
MR_def_label(old_query__proc_in_clique_to_html_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__proc_in_clique_to_html_7_0_i30);
MR_def_label(old_query__proc_in_clique_to_html_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(old_query__proc_in_clique_to_html_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
MR_decl_entry(list__map_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
MR_decl_entry(fn__measurements__sum_own_infos_1_0);
MR_decl_entry(fn__measurements__sum_inherit_infos_1_0);

MR_BEGIN_MODULE(old_query_module38)
	MR_init_entry1(old_query__procs_in_clique_to_html_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__procs_in_clique_to_html_7_0);
	MR_init_label10(old_query__procs_in_clique_to_html_7_0,3,43,8,10,11,12,13,16,17,18)
	MR_init_label6(old_query__procs_in_clique_to_html_7_0,19,20,21,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'procs_in_clique_to_html'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__procs_in_clique_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(0, MR_r5, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(old_query__procs_in_clique_to_html_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(old_query__procs_in_clique_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(old_query__procs_in_clique_to_html_7_0_i43);
	}
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	MR_np_tailcall_ent(old_query__proc_in_clique_to_html_7_0);
	}
MR_def_label(old_query__procs_in_clique_to_html_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__deep_lookup_pd_own_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_r5, 0);
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		old_query__procs_in_clique_to_html_7_0_i8);
MR_def_label(old_query__procs_in_clique_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__deep_lookup_pd_desc_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_3_0,
		old_query__procs_in_clique_to_html_7_0_i10);
MR_def_label(old_query__procs_in_clique_to_html_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__sum_own_infos_1_0,
		old_query__procs_in_clique_to_html_7_0_i11);
MR_def_label(old_query__procs_in_clique_to_html_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__sum_inherit_infos_1_0,
		old_query__procs_in_clique_to_html_7_0_i12);
MR_def_label(old_query__procs_in_clique_to_html_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("summary ", 8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_query__proc_total_to_two_id_line_7_0,
		old_query__procs_in_clique_to_html_7_0_i13);
MR_def_label(old_query__procs_in_clique_to_html_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(old_query__proc_in_clique_to_html_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map2_4_0,
		old_query__procs_in_clique_to_html_7_0_i16);
MR_def_label(old_query__procs_in_clique_to_html_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_np_call_localret_ent(list__condense_2_0,
		old_query__procs_in_clique_to_html_7_0_i17);
MR_def_label(old_query__procs_in_clique_to_html_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		old_query__procs_in_clique_to_html_7_0_i18);
MR_def_label(old_query__procs_in_clique_to_html_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		old_query__procs_in_clique_to_html_7_0_i19);
MR_def_label(old_query__procs_in_clique_to_html_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__old_html_format__two_id_line_to_html_4_0,
		old_query__procs_in_clique_to_html_7_0_i20);
MR_def_label(old_query__procs_in_clique_to_html_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__old_html_format__separator_row_3_0,
		old_query__procs_in_clique_to_html_7_0_i21);
MR_def_label(old_query__procs_in_clique_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__procs_in_clique_to_html_7_0_i22);
MR_def_label(old_query__procs_in_clique_to_html_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__procs_in_clique_to_html_7_0_i23);
MR_def_label(old_query__procs_in_clique_to_html_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__procs_in_clique_to_html_7_0_i24);
MR_def_label(old_query__procs_in_clique_to_html_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module39)
	MR_init_entry1(fn__old_query__lookup_proc_total_to_html_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__lookup_proc_total_to_html_5_0);
	MR_init_label10(fn__old_query__lookup_proc_total_to_html_5_0,2,6,4,8,9,11,12,13,14,15)
	MR_init_label5(fn__old_query__lookup_proc_total_to_html_5_0,16,17,18,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_proc_total_to_html'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__lookup_proc_total_to_html_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i2);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_sv(1), 9), 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__old_query__lookup_proc_total_to_html_5_0_i4);
	}
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__compute_is_active_1_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i6);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(fn__old_query__lookup_proc_total_to_html_5_0_i1);
	}
	MR_r1 = MR_sv(6);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_ps_desc_3_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i8);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(old_html_format__proc_static_to_line_group_info_7_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i9);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__old_query__lookup_proc_total_to_html_5_0_i11);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i12);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = (MR_Word) MR_string_const("<B>", 3);
	MR_r1 = (MR_Word) MR_string_const("</B>", 4);
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i12);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i13);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i14);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i15);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i16);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i17);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i18);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id COLSPAN=", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__lookup_proc_total_to_html_5_0_i19);
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_tfield(0, MR_r2, 4) = MR_sv(1);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__old_query__lookup_proc_total_to_html_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__add_own_to_inherit_2_0);
MR_decl_entry(fn__profile__root_total_info_1_0);
MR_decl_entry(fn__measurements__inherit_callseqs_1_0);

MR_BEGIN_MODULE(old_query_module40)
	MR_init_entry1(fn__old_query__maybe_extract_action_clique_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__maybe_extract_action_clique_4_0);
	MR_init_label10(fn__old_query__maybe_extract_action_clique_4_0,34,3,4,17,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_extract_action_clique'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__maybe_extract_action_clique_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,100)) {
		MR_GOTO_LAB(fn__old_query__maybe_extract_action_clique_4_0_i34);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__old_query__maybe_extract_action_clique_4_0,34)
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
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__old_query__maybe_extract_action_clique_4_0_i3);
MR_def_label(fn__old_query__maybe_extract_action_clique_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		fn__old_query__maybe_extract_action_clique_4_0_i4);
MR_def_label(fn__old_query__maybe_extract_action_clique_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(fn__old_query__maybe_extract_action_clique_4_0_i5);
	}
MR_def_label(fn__old_query__maybe_extract_action_clique_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(fn__old_query__maybe_extract_action_clique_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		fn__old_query__maybe_extract_action_clique_4_0_i6);
MR_def_label(fn__old_query__maybe_extract_action_clique_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(5), 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_inherit_2_0,
		fn__old_query__maybe_extract_action_clique_4_0_i7);
MR_def_label(fn__old_query__maybe_extract_action_clique_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__profile__root_total_info_1_0,
		fn__old_query__maybe_extract_action_clique_4_0_i8);
MR_def_label(fn__old_query__maybe_extract_action_clique_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__old_query__maybe_extract_action_clique_4_0_i9);
MR_def_label(fn__old_query__maybe_extract_action_clique_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__old_query__maybe_extract_action_clique_4_0_i10);
MR_def_label(fn__old_query__maybe_extract_action_clique_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(1) * (MR_Integer) 100);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(3));
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__old_query__maybe_extract_action_clique_4_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module41)
	MR_init_entry1(fn__old_query__downward_summary_display_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__downward_summary_display_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'downward_summary_display'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__downward_summary_display_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(top_procs__sum_line_group_measurements_3_0);

MR_BEGIN_MODULE(old_query_module42)
	MR_init_entry1(old_query__multi_call_site_clique_to_html_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__multi_call_site_clique_to_html_10_0);
	MR_init_label10(old_query__multi_call_site_clique_to_html_10_0,2,3,5,8,11,12,13,14,15,16)
	MR_init_label7(old_query__multi_call_site_clique_to_html_10_0,17,18,19,20,21,22,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'multi_call_site_clique_to_html'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__multi_call_site_clique_to_html_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(fn__old_query__call_site_kind_and_callee_to_html_1_0,
		old_query__multi_call_site_clique_to_html_10_0_i2);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0,
		old_query__multi_call_site_clique_to_html_10_0_i3);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(old_html_format, two_id);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_np_call_localret_ent(fn__old_query__downward_summary_display_0_0,
		old_query__multi_call_site_clique_to_html_10_0_i5);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(12,7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__call_site_dynamic_to_html_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 5) = MR_r1;
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(12);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__multi_call_site_clique_to_html_10_0_i8);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__maybe_extract_action_clique_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_sv(5) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		old_query__multi_call_site_clique_to_html_10_0_i11);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		old_query__multi_call_site_clique_to_html_10_0_i12);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(top_procs__sum_line_group_measurements_3_0,
		old_query__multi_call_site_clique_to_html_10_0_i13);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		old_query__multi_call_site_clique_to_html_10_0_i14);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		old_query__multi_call_site_clique_to_html_10_0_i15);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__multi_call_site_clique_to_html_10_0_i16);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__multi_call_site_clique_to_html_10_0_i17);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__multi_call_site_clique_to_html_10_0_i18);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__multi_call_site_clique_to_html_10_0_i19);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__multi_call_site_clique_to_html_10_0_i20);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__multi_call_site_clique_to_html_10_0_i21);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		old_query__multi_call_site_clique_to_html_10_0_i22);
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 4);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(old_query__multi_call_site_clique_to_html_10_0_i24);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 5) = MR_r1;
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(old_query__multi_call_site_clique_to_html_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_TAG_COMMON(0,16,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__old_html_format__line_to_two_id_subline_group_1_0);
MR_decl_entry(old_html_format__call_site_context_4_0);

MR_BEGIN_MODULE(old_query_module43)
	MR_init_entry1(old_query__call_site_clique_to_html_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__call_site_clique_to_html_7_0);
	MR_init_label10(old_query__call_site_clique_to_html_7_0,2,6,5,9,12,13,15,8,3,19)
	MR_init_label3(old_query__call_site_clique_to_html_7_0,18,17,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_clique_to_html'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__call_site_clique_to_html_7_0)
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		old_query__call_site_clique_to_html_7_0_i2);
MR_def_label(old_query__call_site_clique_to_html_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 2);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(old_query__call_site_clique_to_html_7_0_i3);
	}
	if (MR_PTAG_TESTR(MR_sv(6),0)) {
		MR_GOTO_LAB(old_query__call_site_clique_to_html_7_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_sv(6), 0);
	MR_GOTO_LAB(old_query__call_site_clique_to_html_7_0_i5);
MR_def_label(old_query__call_site_clique_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("call_site_clique_to_html: normal_call error", 43);
	MR_np_call_localret_ent(require__error_1_0,
		old_query__call_site_clique_to_html_7_0_i5);
MR_def_label(old_query__call_site_clique_to_html_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		old_query__call_site_clique_to_html_7_0_i9);
MR_def_label(old_query__call_site_clique_to_html_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__call_site_clique_to_html_7_0_i8);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,2);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(fn__old_query__call_site_dynamic_to_html_5_0,
		old_query__call_site_clique_to_html_7_0_i12);
MR_def_label(old_query__call_site_clique_to_html_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(old_html_format, two_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__line_to_two_id_subline_group_1_0,
		old_query__call_site_clique_to_html_7_0_i13);
MR_def_label(old_query__call_site_clique_to_html_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__old_query__maybe_extract_action_clique_4_0,
		old_query__call_site_clique_to_html_7_0_i15);
MR_def_label(old_query__call_site_clique_to_html_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(old_query__call_site_clique_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(old_query__call_site_clique_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(old_query__call_site_clique_to_html_7_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		old_query__call_site_clique_to_html_7_0_i19);
MR_def_label(old_query__call_site_clique_to_html_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(old_query__call_site_clique_to_html_7_0_i17);
MR_def_label(old_query__call_site_clique_to_html_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("call_site_clique_to_html: non-normal_call error", 47);
	MR_np_call_localret_ent(require__error_1_0,
		old_query__call_site_clique_to_html_7_0_i17);
MR_def_label(old_query__call_site_clique_to_html_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(old_html_format__call_site_context_4_0,
		old_query__call_site_clique_to_html_7_0_i21);
MR_def_label(old_query__call_site_clique_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(old_query__multi_call_site_clique_to_html_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__zero_own_prof_info_0_0);
MR_decl_entry(fn__measurements__zero_inherit_prof_info_0_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(fn__old_html_format__proc_static_to_html_ref_3_0);

MR_BEGIN_MODULE(old_query_module44)
	MR_init_entry1(fn__old_query__call_site_summary_group_to_html_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__call_site_summary_group_to_html_7_0);
	MR_init_label6(fn__old_query__call_site_summary_group_to_html_7_0,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_summary_group_to_html'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__call_site_summary_group_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(old_query__accumulate_csd_prof_info_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r6;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r7;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__old_query__call_site_summary_group_to_html_7_0_i3);
MR_def_label(fn__old_query__call_site_summary_group_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__old_query__call_site_summary_group_to_html_7_0_i4);
MR_def_label(fn__old_query__call_site_summary_group_to_html_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__old_query__call_site_summary_group_to_html_7_0_i5);
MR_def_label(fn__old_query__call_site_summary_group_to_html_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(8), 3);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__old_html_format__proc_static_to_html_ref_3_0,
		fn__old_query__call_site_summary_group_to_html_7_0_i6);
MR_def_label(fn__old_query__call_site_summary_group_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_site_summary_group_to_html_7_0_i7);
MR_def_label(fn__old_query__call_site_summary_group_to_html_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_site_summary_group_to_html_7_0_i8);
MR_def_label(fn__old_query__call_site_summary_group_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module45)
	MR_init_entry1(fn__old_query__normal_call_site_summary_to_html_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__normal_call_site_summary_to_html_7_0);
	MR_init_label10(fn__old_query__normal_call_site_summary_to_html_7_0,2,5,6,7,8,9,4,15,16,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normal_call_site_summary_to_html'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__normal_call_site_summary_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
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
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__old_query__normal_call_site_summary_to_html_7_0_i2);
MR_def_label(fn__old_query__normal_call_site_summary_to_html_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(fn__old_query__normal_call_site_summary_to_html_7_0_i4);
	}
	MR_sv(7) = MR_tfield(0, MR_r1, 3);
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__old_query__normal_call_site_summary_to_html_7_0_i5);
MR_def_label(fn__old_query__normal_call_site_summary_to_html_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__old_query__normal_call_site_summary_to_html_7_0_i6);
MR_def_label(fn__old_query__normal_call_site_summary_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__old_html_format__proc_static_to_html_ref_3_0,
		fn__old_query__normal_call_site_summary_to_html_7_0_i7);
MR_def_label(fn__old_query__normal_call_site_summary_to_html_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__normal_call_site_summary_to_html_7_0_i8);
MR_def_label(fn__old_query__normal_call_site_summary_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__normal_call_site_summary_to_html_7_0_i9);
MR_def_label(fn__old_query__normal_call_site_summary_to_html_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(7);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(1);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_tfield(0, MR_r2, 6) = (MR_Word) MR_TAG_COMMON(0,16,0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(fn__old_query__normal_call_site_summary_to_html_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__old_query__normal_call_site_summary_to_html_7_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(old_query__IntroducedFrom__pred__normal_call_site_summary_to_html__1156__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tfield(1, MR_tempr3, 0), 0);
	MR_tempr2 = MR_tempr3;
	MR_sv(7) = MR_tfield(0, MR_r1, 3);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("call_site_summary_to_html: callee mismatch", 42);
	}
	MR_np_call_localret_ent(require__require_2_0,
		fn__old_query__normal_call_site_summary_to_html_7_0_i15);
MR_def_label(fn__old_query__normal_call_site_summary_to_html_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(fn__old_query__call_site_summary_group_to_html_7_0,
		fn__old_query__normal_call_site_summary_to_html_7_0_i16);
MR_def_label(fn__old_query__normal_call_site_summary_to_html_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(old_html_format, one_id);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__old_html_format__line_to_two_id_subline_group_1_0);
	}
MR_def_label(fn__old_query__normal_call_site_summary_to_html_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("normal_call_site_summary_to_html: too many procedures", 53);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module46)
	MR_init_entry1(fn__old_query__multi_call_site_summary_to_html_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__multi_call_site_summary_to_html_7_0);
	MR_init_label10(fn__old_query__multi_call_site_summary_to_html_7_0,3,6,9,12,2,17,20,21,22,23)
	MR_init_label2(fn__old_query__multi_call_site_summary_to_html_7_0,28,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'multi_call_site_summary_to_html'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__multi_call_site_summary_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,3)) {
		MR_GOTO_LAB(fn__old_query__multi_call_site_summary_to_html_7_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("callback", 8);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,9,18);
	MR_GOTO_LAB(fn__old_query__multi_call_site_summary_to_html_7_0_i2);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(fn__old_query__multi_call_site_summary_to_html_7_0_i6);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("higher_order_call", 17);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,9,18);
	MR_GOTO_LAB(fn__old_query__multi_call_site_summary_to_html_7_0_i2);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,2)) {
		MR_GOTO_LAB(fn__old_query__multi_call_site_summary_to_html_7_0_i9);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("method_call", 11);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,9,18);
	MR_GOTO_LAB(fn__old_query__multi_call_site_summary_to_html_7_0_i2);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__old_query__multi_call_site_summary_to_html_7_0_i12);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("special_call", 12);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,9,18);
	MR_GOTO_LAB(fn__old_query__multi_call_site_summary_to_html_7_0_i2);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("normal_call", 11);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,9,18);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0,
		fn__old_query__multi_call_site_summary_to_html_7_0_i17);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__old_query__call_site_summary_group_to_html_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(old_html_format, one_id);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_sv(9) = (MR_Word) MR_CTOR_ADDR(top_procs, line_group, 2);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,9,13);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__old_query__multi_call_site_summary_to_html_7_0_i20);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(old_html_format, one_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(top_procs__sum_line_group_measurements_3_0,
		fn__old_query__multi_call_site_summary_to_html_7_0_i21);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__multi_call_site_summary_to_html_7_0_i22);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__multi_call_site_summary_to_html_7_0_i23);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 4);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__old_query__multi_call_site_summary_to_html_7_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,17,0);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__old_query__multi_call_site_summary_to_html_7_0_i28);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tfield(0, MR_r1, 2) = MR_sv(7);
	MR_tfield(0, MR_r1, 3) = MR_sv(2);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_tfield(0, MR_r1, 5) = MR_sv(1);
	MR_tfield(0, MR_r1, 6) = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(fn__old_query__multi_call_site_summary_to_html_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_TAG_COMMON(0,16,0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_call_site_calls_3_0);
MR_decl_entry(fn__old_html_format__add_context_2_0);

MR_BEGIN_MODULE(old_query_module47)
	MR_init_entry1(fn__old_query__call_site_summary_to_html_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__call_site_summary_to_html_3_0);
	MR_init_label10(fn__old_query__call_site_summary_to_html_3_0,2,4,5,6,7,10,12,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_summary_to_html'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__call_site_summary_to_html_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_calls_3_0,
		fn__old_query__call_site_summary_to_html_3_0_i2);
MR_def_label(fn__old_query__call_site_summary_to_html_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__old_query__call_site_summary_to_html_3_0_i4);
MR_def_label(fn__old_query__call_site_summary_to_html_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__old_query__call_site_summary_to_html_3_0_i5);
MR_def_label(fn__old_query__call_site_summary_to_html_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(old_html_format__call_site_context_4_0,
		fn__old_query__call_site_summary_to_html_3_0_i6);
MR_def_label(fn__old_query__call_site_summary_to_html_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__old_query__call_site_summary_to_html_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tfield(1, MR_sv(3), 0);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__old_query__normal_call_site_summary_to_html_7_0,
		fn__old_query__call_site_summary_to_html_3_0_i10);
MR_def_label(fn__old_query__call_site_summary_to_html_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__old_query__multi_call_site_summary_to_html_7_0,
		fn__old_query__call_site_summary_to_html_3_0_i10);
MR_def_label(fn__old_query__call_site_summary_to_html_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__call_site_summary_to_html_3_0_i12);
MR_def_label(fn__old_query__call_site_summary_to_html_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__call_site_summary_to_html_3_0_i13);
MR_def_label(fn__old_query__call_site_summary_to_html_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_site_summary_to_html_3_0_i14);
MR_def_label(fn__old_query__call_site_summary_to_html_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__call_site_summary_to_html_3_0_i15);
MR_def_label(fn__old_query__call_site_summary_to_html_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__old_html_format__add_context_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_csd_own_3_0);
MR_decl_entry(fn__measurements__add_own_to_own_2_0);
MR_decl_entry(fn__measurements__add_inherit_to_inherit_2_0);
MR_decl_entry(profile__deep_lookup_csd_comp_table_3_0);
MR_decl_entry(fn__measurements__subtract_inherit_from_inherit_2_0);

MR_BEGIN_MODULE(old_query_module48)
	MR_init_entry1(old_query__accumulate_csd_prof_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__accumulate_csd_prof_info_7_0);
	MR_init_label8(old_query__accumulate_csd_prof_info_7_0,2,3,4,5,6,8,10,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_csd_prof_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__accumulate_csd_prof_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_own_3_0,
		old_query__accumulate_csd_prof_info_7_0_i2);
MR_def_label(old_query__accumulate_csd_prof_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		old_query__accumulate_csd_prof_info_7_0_i3);
MR_def_label(old_query__accumulate_csd_prof_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		old_query__accumulate_csd_prof_info_7_0_i4);
MR_def_label(old_query__accumulate_csd_prof_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		old_query__accumulate_csd_prof_info_7_0_i5);
MR_def_label(old_query__accumulate_csd_prof_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_comp_table_3_0,
		old_query__accumulate_csd_prof_info_7_0_i6);
MR_def_label(old_query__accumulate_csd_prof_info_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		old_query__accumulate_csd_prof_info_7_0_i8);
MR_def_label(old_query__accumulate_csd_prof_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(old_query__accumulate_csd_prof_info_7_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__subtract_inherit_from_inherit_2_0,
		old_query__accumulate_csd_prof_info_7_0_i10);
MR_def_label(old_query__accumulate_csd_prof_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(old_query__accumulate_csd_prof_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(apply_exclusion__compute_parent_csd_prof_info_5_0);

MR_BEGIN_MODULE(old_query_module49)
	MR_init_entry1(fn__old_query__proc_callers_call_site_to_html_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__proc_callers_call_site_to_html_4_0);
	MR_init_label10(fn__old_query__proc_callers_call_site_to_html_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label4(fn__old_query__proc_callers_call_site_to_html_4_0,12,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_callers_call_site_to_html'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__proc_callers_call_site_to_html_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(old_html_format__call_site_context_4_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i2);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i3);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i4);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(apply_exclusion__compute_parent_csd_prof_info_5_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i5);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i6);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i7);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i8);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i9);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i10);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i11);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__old_html_format__proc_static_to_html_ref_3_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i12);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i13);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i14);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_call_site_to_html_4_0_i15);
MR_def_label(fn__old_query__proc_callers_call_site_to_html_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(6);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(old_html_format__proc_static_context_4_0);

MR_BEGIN_MODULE(old_query_module50)
	MR_init_entry1(fn__old_query__proc_callers_proc_to_html_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__proc_callers_proc_to_html_4_0);
	MR_init_label10(fn__old_query__proc_callers_proc_to_html_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label3(fn__old_query__proc_callers_proc_to_html_4_0,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_callers_proc_to_html'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__proc_callers_proc_to_html_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(old_html_format__proc_static_context_4_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i2);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i3);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(apply_exclusion__compute_parent_csd_prof_info_5_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i4);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i5);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i6);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i7);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i8);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i9);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i10);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__old_html_format__proc_static_to_html_ref_3_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i11);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i12);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i13);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_proc_to_html_4_0_i14);
MR_def_label(fn__old_query__proc_callers_proc_to_html_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__old_html_format__module_name_to_html_ref_3_0);

MR_BEGIN_MODULE(old_query_module51)
	MR_init_entry1(fn__old_query__proc_callers_module_to_html_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__proc_callers_module_to_html_4_0);
	MR_init_label4(fn__old_query__proc_callers_module_to_html_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_callers_module_to_html'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__proc_callers_module_to_html_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(apply_exclusion__compute_parent_csd_prof_info_5_0,
		fn__old_query__proc_callers_module_to_html_4_0_i2);
MR_def_label(fn__old_query__proc_callers_module_to_html_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__old_html_format__module_name_to_html_ref_3_0,
		fn__old_query__proc_callers_module_to_html_4_0_i3);
MR_def_label(fn__old_query__proc_callers_module_to_html_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_module_to_html_4_0_i4);
MR_def_label(fn__old_query__proc_callers_module_to_html_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_module_to_html_4_0_i5);
MR_def_label(fn__old_query__proc_callers_module_to_html_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(old_html_format__proc_dynamic_context_4_0);
MR_decl_entry(fn__old_html_format__clique_ptr_to_html_ref_4_0);

MR_BEGIN_MODULE(old_query_module52)
	MR_init_entry1(fn__old_query__proc_callers_clique_to_html_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__proc_callers_clique_to_html_4_0);
	MR_init_label8(fn__old_query__proc_callers_clique_to_html_4_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_callers_clique_to_html'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__proc_callers_clique_to_html_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(apply_exclusion__compute_parent_csd_prof_info_5_0,
		fn__old_query__proc_callers_clique_to_html_4_0_i2);
MR_def_label(fn__old_query__proc_callers_clique_to_html_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		fn__old_query__proc_callers_clique_to_html_4_0_i3);
MR_def_label(fn__old_query__proc_callers_clique_to_html_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__old_query__proc_callers_clique_to_html_4_0_i4);
MR_def_label(fn__old_query__proc_callers_clique_to_html_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(old_html_format__proc_dynamic_context_4_0,
		fn__old_query__proc_callers_clique_to_html_4_0_i5);
MR_def_label(fn__old_query__proc_callers_clique_to_html_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__proc_dynamic_name_2_0,
		fn__old_query__proc_callers_clique_to_html_4_0_i6);
MR_def_label(fn__old_query__proc_callers_clique_to_html_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__old_html_format__clique_ptr_to_html_ref_4_0,
		fn__old_query__proc_callers_clique_to_html_4_0_i7);
MR_def_label(fn__old_query__proc_callers_clique_to_html_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</TD>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_clique_to_html_4_0_i8);
MR_def_label(fn__old_query__proc_callers_clique_to_html_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__proc_callers_clique_to_html_4_0_i9);
MR_def_label(fn__old_query__proc_callers_clique_to_html_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module53)
	MR_init_entry1(fn__old_query__wrap_clique_links_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__wrap_clique_links_5_0);
	MR_init_label5(fn__old_query__wrap_clique_links_5_0,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_clique_links'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__wrap_clique_links_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_r5;
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_r2, 9);
	MR_sv(1) = MR_r4;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__wrap_clique_links_5_0_i4);
MR_def_label(fn__old_query__wrap_clique_links_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__wrap_clique_links_5_0_i5);
MR_def_label(fn__old_query__wrap_clique_links_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</A>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_clique_links_5_0_i6);
MR_def_label(fn__old_query__wrap_clique_links_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_clique_links_5_0_i7);
MR_def_label(fn__old_query__wrap_clique_links_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_clique_links_5_0_i8);
MR_def_label(fn__old_query__wrap_clique_links_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=", 8);
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


MR_BEGIN_MODULE(old_query_module54)
	MR_init_entry1(fn__old_query__wrap_proc_links_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__wrap_proc_links_5_0);
	MR_init_label5(fn__old_query__wrap_proc_links_5_0,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_proc_links'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__wrap_proc_links_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_r5;
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_r2, 9);
	MR_sv(1) = MR_r4;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__wrap_proc_links_5_0_i4);
MR_def_label(fn__old_query__wrap_proc_links_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__wrap_proc_links_5_0_i5);
MR_def_label(fn__old_query__wrap_proc_links_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</A>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_proc_links_5_0_i6);
MR_def_label(fn__old_query__wrap_proc_links_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_proc_links_5_0_i7);
MR_def_label(fn__old_query__wrap_proc_links_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_proc_links_5_0_i8);
MR_def_label(fn__old_query__wrap_proc_links_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=", 8);
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


MR_BEGIN_MODULE(old_query_module55)
	MR_init_entry1(fn__old_query__wrap_proc_callers_links_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__wrap_proc_callers_links_7_0);
	MR_init_label5(fn__old_query__wrap_proc_callers_links_7_0,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_proc_callers_links'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__wrap_proc_callers_links_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 100;
	MR_tempr2 = MR_r4;
	MR_tfield(3, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_r7;
	MR_tfield(0, MR_r1, 6) = MR_tfield(3, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(1) = MR_r6;
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__wrap_proc_callers_links_7_0_i4);
MR_def_label(fn__old_query__wrap_proc_callers_links_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__wrap_proc_callers_links_7_0_i5);
MR_def_label(fn__old_query__wrap_proc_callers_links_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</A>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_proc_callers_links_7_0_i6);
MR_def_label(fn__old_query__wrap_proc_callers_links_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_proc_callers_links_7_0_i7);
MR_def_label(fn__old_query__wrap_proc_callers_links_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_proc_callers_links_7_0_i8);
MR_def_label(fn__old_query__wrap_proc_callers_links_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=", 8);
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


MR_BEGIN_MODULE(old_query_module56)
	MR_init_entry1(fn__old_query__wrap_module_links_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__wrap_module_links_5_0);
	MR_init_label5(fn__old_query__wrap_module_links_5_0,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_module_links'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__wrap_module_links_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_r5;
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_r2, 9);
	MR_sv(1) = MR_r4;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__wrap_module_links_5_0_i4);
MR_def_label(fn__old_query__wrap_module_links_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__wrap_module_links_5_0_i5);
MR_def_label(fn__old_query__wrap_module_links_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</A>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_module_links_5_0_i6);
MR_def_label(fn__old_query__wrap_module_links_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_module_links_5_0_i7);
MR_def_label(fn__old_query__wrap_module_links_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_module_links_5_0_i8);
MR_def_label(fn__old_query__wrap_module_links_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=", 8);
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


MR_BEGIN_MODULE(old_query_module57)
	MR_init_entry1(fn__old_query__wrap_modules_links_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__wrap_modules_links_4_0);
	MR_init_label5(fn__old_query__wrap_modules_links_4_0,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_modules_links'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__wrap_modules_links_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r1, 9);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 3);
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__wrap_modules_links_4_0_i3);
MR_def_label(fn__old_query__wrap_modules_links_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__wrap_modules_links_4_0_i4);
MR_def_label(fn__old_query__wrap_modules_links_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</A>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_modules_links_4_0_i5);
MR_def_label(fn__old_query__wrap_modules_links_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_modules_links_4_0_i6);
MR_def_label(fn__old_query__wrap_modules_links_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_modules_links_4_0_i7);
MR_def_label(fn__old_query__wrap_modules_links_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=", 8);
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


MR_BEGIN_MODULE(old_query_module58)
	MR_init_entry1(fn__old_query__wrap_top_procs_links_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__wrap_top_procs_links_5_0);
	MR_init_label7(fn__old_query__wrap_top_procs_links_5_0,3,24,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_top_procs_links'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__wrap_top_procs_links_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__old_query__wrap_top_procs_links_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(fn__old_query__wrap_top_procs_links_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(fn__old_query__wrap_top_procs_links_5_0_i24);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(fn__old_query__wrap_top_procs_links_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r5;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(3, MR_tempr1, 4) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__old_html_format__deep_cmd_pref_to_url_3_0,
		fn__old_query__wrap_top_procs_links_5_0_i6);
MR_def_label(fn__old_query__wrap_top_procs_links_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__old_query__wrap_top_procs_links_5_0_i7);
MR_def_label(fn__old_query__wrap_top_procs_links_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</A>", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_top_procs_links_5_0_i8);
MR_def_label(fn__old_query__wrap_top_procs_links_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_top_procs_links_5_0_i9);
MR_def_label(fn__old_query__wrap_top_procs_links_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__old_query__wrap_top_procs_links_5_0_i10);
MR_def_label(fn__old_query__wrap_top_procs_links_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=", 8);
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


MR_BEGIN_MODULE(old_query_module59)
	MR_init_entry1(__Unify___old_query__assume_cross_clique_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___old_query__assume_cross_clique_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___old_query__assume_cross_clique_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(old_query_module60)
	MR_init_entry1(__Compare___old_query__assume_cross_clique_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___old_query__assume_cross_clique_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___old_query__assume_cross_clique_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module61)
	MR_init_entry1(__Unify___old_query__call_site_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___old_query__call_site_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___old_query__call_site_context_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module62)
	MR_init_entry1(__Compare___old_query__call_site_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___old_query__call_site_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___old_query__call_site_context_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module63)
	MR_init_entry1(__Unify___old_query__call_site_display_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___old_query__call_site_display_0_0);
	MR_init_label2(__Unify___old_query__call_site_display_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___old_query__call_site_display_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___old_query__call_site_display_0_0_i6);
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
		MR_GOTO_LAB(__Unify___old_query__call_site_display_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___old_query__call_site_display_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___old_query__call_site_display_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___old_query__wrap_with_url_0_0);
	}
MR_def_label(__Unify___old_query__call_site_display_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___old_query__call_site_display_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module64)
	MR_init_entry1(__Compare___old_query__call_site_display_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___old_query__call_site_display_0_0);
	MR_init_label6(__Compare___old_query__call_site_display_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___old_query__call_site_display_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___old_query__call_site_display_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___old_query__call_site_display_0_0_i2);
MR_def_label(__Compare___old_query__call_site_display_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___old_query__call_site_display_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___old_query__call_site_display_0_0_i5);
MR_def_label(__Compare___old_query__call_site_display_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___old_query__call_site_display_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___old_query__call_site_display_0_0_i9);
MR_def_label(__Compare___old_query__call_site_display_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___old_query__call_site_display_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___old_query__call_site_display_0_0_i13);
MR_def_label(__Compare___old_query__call_site_display_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___old_query__call_site_display_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___old_query__wrap_with_url_0_0);
MR_def_label(__Compare___old_query__call_site_display_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module65)
	MR_init_entry1(__Unify___old_query__call_site_proc_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___old_query__call_site_proc_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___old_query__call_site_proc_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module66)
	MR_init_entry1(__Compare___old_query__call_site_proc_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___old_query__call_site_proc_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___old_query__call_site_proc_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module67)
	MR_init_entry1(__Unify___old_query__url_with_proc_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___old_query__url_with_proc_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___old_query__url_with_proc_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module68)
	MR_init_entry1(__Compare___old_query__url_with_proc_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___old_query__url_with_proc_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___old_query__url_with_proc_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module69)
	MR_init_entry1(__Unify___old_query__wrap_with_url_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___old_query__wrap_with_url_0_0);
	MR_init_label4(__Unify___old_query__wrap_with_url_0_0,5,13,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___old_query__wrap_with_url_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___old_query__wrap_with_url_0_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___old_query__wrap_with_url_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___old_query__wrap_with_url_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___old_query__wrap_with_url_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___old_query__wrap_with_url_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___old_query__wrap_with_url_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___old_query__wrap_with_url_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___old_query__wrap_with_url_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module70)
	MR_init_entry1(__Compare___old_query__wrap_with_url_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___old_query__wrap_with_url_0_0);
	MR_init_label9(__Compare___old_query__wrap_with_url_0_0,7,5,11,33,9,25,14,26,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___old_query__wrap_with_url_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___old_query__wrap_with_url_0_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___old_query__wrap_with_url_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___old_query__wrap_with_url_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___old_query__wrap_with_url_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___old_query__wrap_with_url_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___old_query__wrap_with_url_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___old_query__wrap_with_url_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___old_query__wrap_with_url_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___old_query__wrap_with_url_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___old_query__wrap_with_url_0_0_i25);
	}
MR_def_label(__Compare___old_query__wrap_with_url_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___old_query__wrap_with_url_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___old_query__wrap_with_url_0_0_i14);
	}
MR_def_label(__Compare___old_query__wrap_with_url_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___old_query__wrap_with_url_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___old_query__wrap_with_url_0_0_i15);
	}
MR_def_label(__Compare___old_query__wrap_with_url_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___old_query__wrap_with_url_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__old_html_format__add_self_context_1_0);

MR_BEGIN_MODULE(old_query_module71)
	MR_init_entry1(fn__old_query__IntroducedFrom__func__module_to_html__724__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__IntroducedFrom__func__module_to_html__724__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__module_to_html__724__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__IntroducedFrom__func__module_to_html__724__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__old_html_format__add_self_context_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module72)
	MR_init_entry1(old_query__IntroducedFrom__pred__normal_call_site_summary_to_html__1156__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__old_query__IntroducedFrom__pred__normal_call_site_summary_to_html__1156__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__normal_call_site_summary_to_html__1156__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(old_query__IntroducedFrom__pred__normal_call_site_summary_to_html__1156__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module73)
	MR_init_entry1(fn__old_query__IntroducedFrom__func__multi_call_site_summary_to_html__1191__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__old_query__IntroducedFrom__func__multi_call_site_summary_to_html__1191__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__multi_call_site_summary_to_html__1191__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__old_query__IntroducedFrom__func__multi_call_site_summary_to_html__1191__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__old_html_format__add_context_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(old_query_module74)
	MR_init_entry1(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0);
	MR_init_label2(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__multi_call_site_add_suffix__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(" (no&nbsp;calls&nbsp;made)", 26);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(fn__f_111_108_100_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(" (summary)", 10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__old_query_maybe_bunch_0(void)
{
	old_query_module0();
	old_query_module1();
	old_query_module2();
	old_query_module3();
	old_query_module4();
	old_query_module5();
	old_query_module6();
	old_query_module7();
	old_query_module8();
	old_query_module9();
	old_query_module10();
	old_query_module11();
	old_query_module12();
	old_query_module13();
	old_query_module14();
	old_query_module15();
	old_query_module16();
	old_query_module17();
	old_query_module18();
	old_query_module19();
	old_query_module20();
	old_query_module21();
	old_query_module22();
	old_query_module23();
	old_query_module24();
	old_query_module25();
	old_query_module26();
	old_query_module27();
	old_query_module28();
	old_query_module29();
	old_query_module30();
	old_query_module31();
	old_query_module32();
	old_query_module33();
	old_query_module34();
	old_query_module35();
	old_query_module36();
	old_query_module37();
	old_query_module38();
	old_query_module39();
}

static void mercury__old_query_maybe_bunch_1(void)
{
	old_query_module40();
	old_query_module41();
	old_query_module42();
	old_query_module43();
	old_query_module44();
	old_query_module45();
	old_query_module46();
	old_query_module47();
	old_query_module48();
	old_query_module49();
	old_query_module50();
	old_query_module51();
	old_query_module52();
	old_query_module53();
	old_query_module54();
	old_query_module55();
	old_query_module56();
	old_query_module57();
	old_query_module58();
	old_query_module59();
	old_query_module60();
	old_query_module61();
	old_query_module62();
	old_query_module63();
	old_query_module64();
	old_query_module65();
	old_query_module66();
	old_query_module67();
	old_query_module68();
	old_query_module69();
	old_query_module70();
	old_query_module71();
	old_query_module72();
	old_query_module73();
	old_query_module74();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__old_query__init(void);
void mercury__old_query__init_type_tables(void);
void mercury__old_query__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__old_query__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__old_query__init_complexity_procs(void);
#endif

void mercury__old_query__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__old_query_maybe_bunch_0();
	mercury__old_query_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_old_query__type_ctor_info_assume_cross_clique_0,
		old_query__assume_cross_clique_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_old_query__type_ctor_info_call_site_context_0,
		old_query__call_site_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_old_query__type_ctor_info_call_site_display_0,
		old_query__call_site_display_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_old_query__type_ctor_info_call_site_proc_name_0,
		old_query__call_site_proc_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_old_query__type_ctor_info_url_with_proc_name_0,
		old_query__url_with_proc_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_old_query__type_ctor_info_wrap_with_url_0,
		old_query__wrap_with_url_0_0);
	mercury__old_query__init_debugger();
}

void mercury__old_query__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_old_query__type_ctor_info_assume_cross_clique_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_old_query__type_ctor_info_call_site_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_old_query__type_ctor_info_call_site_display_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_old_query__type_ctor_info_call_site_proc_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_old_query__type_ctor_info_url_with_proc_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_old_query__type_ctor_info_wrap_with_url_0);
	}
}


void mercury__old_query__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__old_query__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__old_query);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__old_query__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
