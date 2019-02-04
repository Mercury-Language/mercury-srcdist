/*
** Automatically generated from `query.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__query__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 256 "profile.int"
#include "profile.mh"

#line 27 "query.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 31 "query.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 35 "query.c"
#line 132 "../library/array.int"
#include "array.mh"

#line 39 "query.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "query.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "query.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "query.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 55 "query.c"
#line 56 "query.c"
#include "query.mh"

#line 59 "query.c"
#line 60 "query.c"
#ifndef QUERY_DECL_GUARD
#define QUERY_DECL_GUARD

#line 64 "query.c"
#line 65 "query.c"

#endif
#line 68 "query.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1[4];
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_7 {
	MR_Word * f1;
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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1[3];
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];

struct mercury_type_19 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_String f4;
};
MR_STATIC_LINKAGE const struct mercury_type_19 mercury_common_19[];

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_0[];

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_1[];

struct mercury_type_6 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_vector_common_6_0[];

MR_STATIC_LINKAGE const struct mercury_type_6 mercury_vector_common_6_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_query__type_ctor_info_wrap_with_url_0,
	mercury_data_query__type_ctor_info_url_with_proc_name_0,
	mercury_data_query__type_ctor_info_time_format_0,
	mercury_data_query__type_ctor_info_time_fields_0,
	mercury_data_query__type_ctor_info_summarize_0,
	mercury_data_query__type_ctor_info_resp_0,
	mercury_data_query__type_ctor_info_preferences_indication_0,
	mercury_data_query__type_ctor_info_preferences_0,
	mercury_data_query__type_ctor_info_port_fields_0,
	mercury_data_query__type_ctor_info_order_criteria_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_query__type_ctor_info_memory_fields_0,
	mercury_data_query__type_ctor_info_measurement_scope_0,
	mercury_data_query__type_ctor_info_include_descendants_0,
	mercury_data_query__type_ctor_info_inactive_status_0,
	mercury_data_query__type_ctor_info_inactive_items_0,
	mercury_data_query__type_ctor_info_fields_0,
	mercury_data_query__type_ctor_info_display_limit_0,
	mercury_data_query__type_ctor_info_cost_kind_0,
	mercury_data_query__type_ctor_info_contour_0,
	mercury_data_query__type_ctor_info_colour_scheme_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_query__type_ctor_info_cmd_pref_0,
	mercury_data_query__type_ctor_info_cmd_0,
	mercury_data_query__type_ctor_info_callseqs_fields_0,
	mercury_data_query__type_ctor_info_caller_groups_0,
	mercury_data_query__type_ctor_info_call_site_proc_name_0,
	mercury_data_query__type_ctor_info_call_site_display_0,
	mercury_data_query__type_ctor_info_call_site_context_0,
	mercury_data_query__type_ctor_info_box_0,
	mercury_data_query__type_ctor_info_assume_cross_clique_0,
	mercury_data_query__type_ctor_info_alloc_fields_0;
MR_decl_label8(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0, 4,5,10,7,12,15,16,17)
MR_decl_label1(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0, 18)
MR_decl_label8(query__accumulate_csd_prof_info_7_0, 2,3,4,5,6,8,10,7)
MR_decl_label8(query__accumulate_parent_csd_prof_info_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(query__accumulate_parent_csd_prof_info_7_0, 11)
MR_decl_label2(query__append_csdi_to_string_3_0, 2,3)
MR_decl_label8(query__append_slot_to_string_3_0, 4,6,7,10,11,3,13,14)
MR_decl_label1(query__append_slot_to_string_3_0, 15)
MR_decl_label8(query__call_site_clique_to_html_7_0, 2,6,5,9,14,15,17,8)
MR_decl_label5(query__call_site_clique_to_html_7_0, 3,21,20,19,23)
MR_decl_label4(query__child_call_sites_4_0, 2,3,4,5)
MR_decl_label8(query__clique_ancestors_to_html_7_0, 2,4,6,21,7,8,10,13)
MR_decl_label3(query__clique_ancestors_to_html_7_0, 14,15,16)
MR_decl_label8(query__clique_to_html_6_0, 3,2,4,5,8,10,11,12)
MR_decl_label8(query__clique_to_html_6_0, 15,17,20,21,14,28,29,30)
MR_decl_label8(query__clique_to_html_6_0, 32,35,31,36,37,38,39,40)
MR_decl_label6(query__clique_to_html_6_0, 41,42,43,44,45,46)
MR_decl_label3(query__compensate_using_comp_table_5_0, 2,4,3)
MR_decl_label8(query__exec_6_0, 84,153,71,73,87,3,5,155)
MR_decl_label8(query__exec_6_0, 10,8,13,14,158,24,23,27)
MR_decl_label8(query__exec_6_0, 28,156,37,35,40,41,157,48)
MR_decl_label8(query__exec_6_0, 46,51,52,53,56,58,64,152)
MR_decl_label2(query__exec_6_0, 81,82)
MR_decl_label8(query__generate_clique_page_7_0, 2,3,6,7,9,10,11,12)
MR_decl_label5(query__generate_clique_page_7_0, 13,14,15,16,17)
MR_decl_label8(query__generate_proc_callers_page_9_0, 2,4,8,9,11,13,14,15)
MR_decl_label7(query__generate_proc_callers_page_9_0, 16,17,18,20,21,22,23)
MR_decl_label4(query__group_proc_dynamics_by_proc_static_4_0, 3,4,7,5)
MR_decl_label8(query__multi_call_site_clique_to_html_10_0, 6,4,5,7,2,9,11,14)
MR_decl_label8(query__multi_call_site_clique_to_html_10_0, 17,18,19,20,25,28,29,31)
MR_decl_label8(query__proc_callers_to_html_8_0, 2,5,6,9,13,8,4,19)
MR_decl_label8(query__proc_callers_to_html_8_0, 3,20,26,31,32,33,37,38)
MR_decl_label8(query__proc_callers_to_html_8_0, 39,44,45,50,51,56,57,58)
MR_decl_label8(query__proc_callers_to_html_8_0, 60,65,66,67,71,72,73,74)
MR_decl_label8(query__proc_callers_to_html_8_0, 79,80,85,86,91,92,93,95)
MR_decl_label8(query__proc_callers_to_html_8_0, 100,101,102,106,107,108,109,114)
MR_decl_label8(query__proc_callers_to_html_8_0, 115,120,121,126,127,128,130,135)
MR_decl_label8(query__proc_callers_to_html_8_0, 136,137,141,142,143,148,149,154)
MR_decl_label8(query__proc_callers_to_html_8_0, 155,160,161,162,25,164,165,166)
MR_decl_label8(query__proc_callers_to_html_8_0, 168,169,172,177,170,178,181,186)
MR_decl_label8(query__proc_callers_to_html_8_0, 179,187,190,195,188,197,198,199)
MR_decl_label1(query__proc_callers_to_html_8_0, 201)
MR_decl_label8(query__proc_in_clique_to_html_7_0, 3,5,6,7,8,9,10,11)
MR_decl_label8(query__proc_in_clique_to_html_7_0, 12,14,21,22,23,24,26,27)
MR_decl_label4(query__proc_in_clique_to_html_7_0, 28,29,30,2)
MR_decl_label8(query__procs_in_clique_to_html_7_0, 3,39,8,10,11,12,13,16)
MR_decl_label8(query__procs_in_clique_to_html_7_0, 17,18,19,20,21,22,23,24)
MR_decl_label5(query__select_line_bunch_6_0, 3,2,6,8,7)
MR_decl_label4(query__string_to_caller_groups_2_0, 3,4,5,1)
MR_decl_label6(query__string_to_cost_kind_2_0, 3,4,5,6,7,1)
MR_decl_label2(query__string_to_incl_desc_2_0, 3,1)
MR_decl_label8(query__string_to_limit_2_0, 3,7,9,2,13,15,12,18)
MR_decl_label2(query__string_to_limit_2_0, 20,1)
MR_decl_label2(query__string_to_scope_2_0, 3,1)
MR_decl_label6(query__try_exec_6_0, 3,7,6,12,11,5)
MR_decl_label2(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0, 3,6)
MR_decl_label3(fn__query__accumulate_csds_by_call_site_3_0, 2,5,3)
MR_decl_label4(fn__query__accumulate_csds_by_clique_3_0, 2,3,6,4)
MR_decl_label5(fn__query__accumulate_csds_by_module_3_0, 2,3,4,7,5)
MR_decl_label4(fn__query__accumulate_csds_by_procedure_3_0, 2,3,6,4)
MR_decl_label2(fn__query__append_pdi_to_string_2_0, 2,3)
MR_decl_label8(fn__query__call_site_dynamic_to_html_5_0, 3,4,5,6,7,8,9,10)
MR_decl_label4(fn__query__call_site_dynamic_to_html_5_0, 15,16,17,18)
MR_decl_label5(fn__query__call_site_summary_group_to_html_7_0, 3,4,5,6,9)
MR_decl_label8(fn__query__call_site_summary_to_html_3_0, 2,4,5,6,9,12,13,14)
MR_decl_label8(fn__query__call_site_summary_to_html_3_0, 17,11,23,24,25,21,7,27)
MR_decl_label3(fn__query__call_site_summary_to_html_3_0, 28,29,34)
MR_decl_label8(fn__query__call_to_html_8_0, 4,3,2,6,5,8,10,12)
MR_decl_label8(fn__query__call_to_html_8_0, 11,15,17,21,35,24,28,26)
MR_decl_label8(fn__query__call_to_html_8_0, 31,33,22,41,40,45,49,52)
MR_decl_label8(fn__query__chase_the_action_5_0, 32,2,3,6,7,9,10,11)
MR_decl_label7(fn__query__chase_the_action_5_0, 12,13,14,15,16,17,34)
MR_decl_label8(fn__query__cmd_to_string_1_0, 129,168,97,169,84,83,90,170)
MR_decl_label8(fn__query__cmd_to_string_1_0, 3,4,10,11,17,18,24,25)
MR_decl_label8(fn__query__cmd_to_string_1_0, 26,33,34,40,41,42,45,48)
MR_decl_label8(fn__query__cmd_to_string_1_0, 58,59,65,66,72,73,74,80)
MR_decl_label8(fn__query__cmd_to_string_1_0, 103,104,105,106,107,108,111,114)
MR_decl_label1(fn__query__cmd_to_string_1_0, 117)
MR_decl_label1(fn__query__default_fields_1_0, 2)
MR_decl_label1(fn__query__default_preferences_1_0, 2)
MR_decl_label8(fn__query__fields_to_string_1_0, 3,4,6,8,9,10,12,13)
MR_decl_label8(fn__query__fields_to_string_1_0, 14,19,21,16,18,25,26,27)
MR_decl_label4(fn__query__fields_to_string_1_0, 28,29,30,31)
MR_decl_label8(fn__query__generate_call_site_dynamic_debug_page_2_0, 3,5,6,7,8,9,10,11)
MR_decl_label3(fn__query__generate_call_site_dynamic_debug_page_2_0, 12,13,2)
MR_decl_label8(fn__query__generate_call_site_static_debug_page_2_0, 3,5,6,7,8,13,14,15)
MR_decl_label8(fn__query__generate_call_site_static_debug_page_2_0, 16,17,11,12,18,20,21,22)
MR_decl_label7(fn__query__generate_call_site_static_debug_page_2_0, 23,24,25,26,27,28,2)
MR_decl_label8(fn__query__generate_clique_debug_page_2_0, 3,5,8,9,11,12,13,2)
MR_decl_label8(fn__query__generate_module_page_5_0, 2,3,6,7,9,10,11,12)
MR_decl_label4(fn__query__generate_module_page_5_0, 13,14,15,16)
MR_decl_label8(fn__query__generate_modules_page_3_0, 2,3,5,6,7,8,9,10)
MR_decl_label3(fn__query__generate_modules_page_3_0, 11,12,13)
MR_decl_label8(fn__query__generate_proc_dynamic_debug_page_2_0, 3,5,8,9,11,12,13,2)
MR_decl_label8(fn__query__generate_proc_page_4_0, 2,3,4,7,8,10,11,12)
MR_decl_label8(fn__query__generate_proc_page_4_0, 17,22,23,28,29,34,35,40)
MR_decl_label8(fn__query__generate_proc_page_4_0, 41,42,43,44,45,46,47,48)
MR_decl_label3(fn__query__generate_proc_page_4_0, 49,50,51)
MR_decl_label8(fn__query__generate_proc_static_debug_page_2_0, 3,5,6,7,8,9,10,11)
MR_decl_label4(fn__query__generate_proc_static_debug_page_2_0, 12,13,14,2)
MR_decl_label1(fn__query__incl_desc_to_string_1_0, 3)
MR_decl_label2(fn__query__limit_to_string_1_0, 15,11)
MR_decl_label8(fn__query__lookup_proc_total_to_html_5_0, 2,6,4,8,9,11,31,1)
MR_decl_label5(fn__query__lookup_proc_total_to_two_id_line_5_0, 2,3,4,6,26)
MR_decl_label8(fn__query__maybe_extract_action_clique_4_0, 30,3,4,17,5,6,7,8)
MR_decl_label2(fn__query__maybe_extract_action_clique_4_0, 9,10)
MR_decl_label5(fn__query__module_summary_to_html_3_0, 5,3,8,13,1)
MR_decl_label8(fn__query__modules_to_html_2_0, 2,5,8,9,10,13,14,15)
MR_decl_label8(fn__query__multi_call_site_summary_to_html_7_0, 12,6,9,15,2,19,22,23)
MR_decl_label3(fn__query__multi_call_site_summary_to_html_7_0, 26,31,28)
MR_decl_label8(fn__query__order_criteria_to_string_1_0, 19,43,5,7,9,10,12,13)
MR_decl_label4(fn__query__order_criteria_to_string_1_0, 14,15,16,17)
MR_decl_label1(fn__query__pair_contour_3_0, 2)
MR_decl_label8(fn__query__preferences_to_string_1_0, 3,6,7,11,10,15,14,21)
MR_decl_label8(fn__query__preferences_to_string_1_0, 24,27,26,31,33,30,39,37)
MR_decl_label1(fn__query__preferences_to_string_1_0, 77)
MR_decl_label8(fn__query__proc_callers_banner_8_0, 3,5,9,10,17,24,32,43)
MR_decl_label8(fn__query__proc_callers_call_site_to_html_4_0, 2,3,4,6,7,8,9,14)
MR_decl_label3(fn__query__proc_callers_call_site_to_html_4_0, 15,18,19)
MR_decl_label8(fn__query__proc_callers_clique_to_html_4_0, 3,4,5,6,7,8,9,10)
MR_decl_label1(fn__query__proc_callers_clique_to_html_4_0, 13)
MR_decl_label5(fn__query__proc_callers_module_to_html_4_0, 3,4,5,6,9)
MR_decl_label8(fn__query__proc_callers_proc_to_html_4_0, 2,3,5,6,7,8,13,14)
MR_decl_label2(fn__query__proc_callers_proc_to_html_4_0, 17,18)
MR_decl_label8(fn__query__proc_summary_to_html_3_0, 2,3,4,5,9,10,12,13)
MR_decl_label5(fn__query__proc_summary_to_html_3_0, 21,15,16,18,19)
MR_decl_label3(fn__query__proc_total_to_two_id_line_7_0, 2,4,24)
MR_decl_label1(fn__query__scope_to_string_1_0, 3)
MR_decl_label1(fn__query__should_display_times_1_0, 2)
MR_decl_label3(fn__query__solidify_preference_2_0, 26,4,10)
MR_decl_label2(fn__query__string_to_cmd_2_0, 2,4)
MR_decl_label8(fn__query__string_to_maybe_cmd_1_0, 2,3,10,12,15,4,5,24)
MR_decl_label8(fn__query__string_to_maybe_cmd_1_0, 18,19,34,28,29,46,48,50)
MR_decl_label8(fn__query__string_to_maybe_cmd_1_0, 38,39,54,59,75,77,79,81)
MR_decl_label8(fn__query__string_to_maybe_cmd_1_0, 66,67,85,96,90,91,106,100)
MR_decl_label8(fn__query__string_to_maybe_cmd_1_0, 101,116,110,111,126,120,121,136)
MR_decl_label7(fn__query__string_to_maybe_cmd_1_0, 130,131,146,140,141,150,155)
MR_decl_label8(fn__query__string_to_maybe_pref_1_0, 2,14,22,21,25,26,27,28)
MR_decl_label8(fn__query__string_to_maybe_pref_1_0, 29,24,32,33,31,36,37,35)
MR_decl_label8(fn__query__string_to_maybe_pref_1_0, 40,43,46,48,39,55,54,58)
MR_decl_label8(fn__query__string_to_maybe_pref_1_0, 57,62,60,66,68,67,70,72)
MR_decl_label8(fn__query__string_to_maybe_pref_1_0, 74,82,83,84,85,86,81,89)
MR_decl_label8(fn__query__string_to_maybe_pref_1_0, 88,92,97,99,98,102,103,101)
MR_decl_label5(fn__query__string_to_maybe_pref_1_0, 106,108,110,105,3)
MR_decl_label2(fn__query__wrap_clique_links_5_0, 4,6)
MR_decl_label2(fn__query__wrap_module_links_5_0, 4,6)
MR_decl_label2(fn__query__wrap_modules_links_4_0, 3,5)
MR_decl_label2(fn__query__wrap_proc_callers_links_7_0, 4,6)
MR_decl_label2(fn__query__wrap_proc_links_5_0, 4,6)
MR_decl_label2(__Unify___query__call_site_display_0_0, 6,1)
MR_decl_label8(__Unify___query__cmd_0_0, 37,31,27,40,5,7,9,12)
MR_decl_label8(__Unify___query__cmd_0_0, 15,17,19,21,24,33,35,41)
MR_decl_label1(__Unify___query__cmd_0_0, 1)
MR_decl_label3(__Unify___query__cmd_pref_0_0, 4,8,1)
MR_decl_label4(__Unify___query__display_limit_0_0, 9,7,13,1)
MR_decl_label2(__Unify___query__fields_0_0, 6,1)
MR_decl_label2(__Unify___query__inactive_items_0_0, 4,1)
MR_decl_label4(__Unify___query__memory_fields_0_0, 7,5,12,1)
MR_decl_label3(__Unify___query__order_criteria_0_0, 6,11,1)
MR_decl_label5(__Unify___query__preferences_0_0, 4,6,8,12,1)
MR_decl_label3(__Unify___query__preferences_indication_0_0, 7,13,1)
MR_decl_label1(__Unify___query__resp_0_0, 4)
MR_decl_label3(__Unify___query__wrap_with_url_0_0, 6,11,1)
MR_decl_label8(__Index___query__cmd_0_0, 19,17,16,22,3,4,5,6)
MR_decl_label8(__Index___query__cmd_0_0, 7,9,10,11,12,13,14,15)
MR_decl_label1(__Index___query__cmd_0_0, 18)
MR_decl_label6(__Compare___query__call_site_display_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___query__cmd_0_0, 3,2,4,5,6,7,75,54)
MR_decl_label8(__Compare___query__cmd_0_0, 51,78,10,13,16,20,24,27)
MR_decl_label8(__Compare___query__cmd_0_0, 30,34,40,43,47,57,60,64)
MR_decl_label3(__Compare___query__cmd_0_0, 68,185,186)
MR_decl_label4(__Compare___query__cmd_pref_0_0, 3,2,5,21)
MR_decl_label8(__Compare___query__display_limit_0_0, 3,2,9,26,18,56,23,21)
MR_decl_label1(__Compare___query__display_limit_0_0, 92)
MR_decl_label7(__Compare___query__fields_0_0, 3,2,5,9,13,17,45)
MR_decl_label4(__Compare___query__inactive_items_0_0, 3,2,5,21)
MR_decl_label6(__Compare___query__memory_fields_0_0, 44,13,5,48,9,7)
MR_decl_label8(__Compare___query__order_criteria_0_0, 44,30,33,12,15,17,21,39)
MR_decl_label8(__Compare___query__preferences_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label3(__Compare___query__preferences_0_0, 29,33,77)
MR_decl_label6(__Compare___query__preferences_indication_0_0, 34,5,44,19,38,23)
MR_decl_label2(__Compare___query__resp_0_0, 3,2)
MR_decl_label6(__Compare___query__wrap_with_url_0_0, 34,20,12,46,17,15)
MR_def_extern_entry(query__try_exec_6_0)
MR_def_extern_entry(fn__query__should_display_times_1_0)
MR_def_extern_entry(fn__query__default_fields_1_0)
MR_def_extern_entry(fn__query__default_box_0_0)
MR_def_extern_entry(fn__query__default_colour_scheme_0_0)
MR_def_extern_entry(fn__query__default_ancestor_limit_0_0)
MR_def_extern_entry(fn__query__default_summarize_0_0)
MR_def_extern_entry(fn__query__default_order_criteria_0_0)
MR_def_extern_entry(fn__query__default_contour_0_0)
MR_def_extern_entry(fn__query__default_time_format_0_0)
MR_def_extern_entry(fn__query__default_inactive_items_0_0)
MR_def_extern_entry(fn__query__default_preferences_1_0)
MR_def_extern_entry(fn__query__all_fields_0_0)
MR_def_extern_entry(fn__query__solidify_preference_2_0)
MR_def_extern_entry(fn__query__default_cost_kind_0_0)
MR_def_extern_entry(fn__query__default_incl_desc_0_0)
MR_def_extern_entry(fn__query__default_scope_0_0)
MR_def_extern_entry(fn__query__query_separator_char_0_0)
MR_decl_static(fn__query__pref_separator_char_0_0)
MR_decl_static(fn__query__fields_to_string_1_0)
MR_decl_static(query__string_to_cost_kind_2_0)
MR_decl_static(fn__query__cost_kind_to_string_1_0)
MR_decl_static(query__string_to_incl_desc_2_0)
MR_decl_static(fn__query__incl_desc_to_string_1_0)
MR_decl_static(query__string_to_scope_2_0)
MR_decl_static(fn__query__scope_to_string_1_0)
MR_decl_static(fn__query__order_criteria_to_string_1_0)
MR_def_extern_entry(fn__query__preferences_to_string_1_0)
MR_decl_static(fn__query__cmd_separator_char_0_0)
MR_decl_static(query__string_to_caller_groups_2_0)
MR_decl_static(fn__query__caller_groups_to_string_1_0)
MR_decl_static(fn__query__limit_to_string_1_0)
MR_def_extern_entry(fn__query__cmd_to_string_1_0)
MR_decl_static(query__string_to_limit_2_0)
MR_def_extern_entry(fn__query__string_to_maybe_cmd_1_0)
MR_def_extern_entry(fn__query__string_to_cmd_2_0)
MR_def_extern_entry(fn__query__string_to_maybe_pref_1_0)
MR_decl_static(fn__query__generate_proc_static_debug_page_2_0)
MR_decl_static(fn__query__generate_proc_dynamic_debug_page_2_0)
MR_decl_static(fn__query__generate_call_site_static_debug_page_2_0)
MR_decl_static(fn__query__generate_call_site_dynamic_debug_page_2_0)
MR_decl_static(fn__query__generate_clique_debug_page_2_0)
MR_decl_static(fn__query__call_to_html_8_0)
MR_decl_static(fn__query__call_site_dynamic_to_html_5_0)
MR_decl_static(query__clique_ancestors_to_html_7_0)
MR_decl_static(query__clique_to_html_6_0)
MR_decl_static(query__generate_clique_page_7_0)
MR_decl_static(fn__query__chase_the_action_5_0)
MR_decl_static(fn__query__proc_total_to_two_id_line_7_0)
MR_decl_static(fn__query__lookup_proc_total_to_two_id_line_5_0)
MR_decl_static(fn__query__proc_summary_to_html_3_0)
MR_decl_static(fn__query__generate_proc_page_4_0)
MR_decl_static(query__select_line_bunch_6_0)
MR_decl_static(fn__query__proc_callers_banner_8_0)
MR_decl_static(fn__query__contour_file_name_1_0)
MR_decl_static(query__proc_callers_to_html_8_0)
MR_decl_static(query__generate_proc_callers_page_9_0)
MR_decl_static(fn__query__modules_to_html_2_0)
MR_decl_static(fn__query__generate_modules_page_3_0)
MR_decl_static(fn__query__generate_module_page_5_0)
MR_decl_static(query__exec_6_0)
MR_decl_static(query__append_slot_to_string_3_0)
MR_decl_static(query__append_csdi_to_string_3_0)
MR_decl_static(fn__query__append_pdi_to_string_2_0)
MR_decl_static(query__not_mercury_runtime_1_0)
MR_decl_static(fn__query__module_summary_to_html_3_0)
MR_decl_static(query__proc_group_contains_2_0)
MR_decl_static(query__group_proc_dynamics_by_proc_static_4_0)
MR_decl_static(query__child_call_sites_4_0)
MR_decl_static(query__proc_in_clique_to_html_7_0)
MR_decl_static(query__procs_in_clique_to_html_7_0)
MR_decl_static(fn__query__lookup_proc_total_to_html_5_0)
MR_decl_static(fn__query__maybe_extract_action_clique_4_0)
MR_decl_static(fn__query__downward_summary_display_0_0)
MR_decl_static(query__multi_call_site_clique_to_html_10_0)
MR_decl_static(query__call_site_clique_to_html_7_0)
MR_decl_static(fn__query__call_site_summary_group_to_html_7_0)
MR_decl_static(fn__query__multi_call_site_summary_to_html_7_0)
MR_decl_static(fn__query__call_site_summary_to_html_3_0)
MR_decl_static(query__accumulate_csd_prof_info_7_0)
MR_decl_static(fn__query__proc_callers_call_site_to_html_4_0)
MR_decl_static(fn__query__proc_callers_proc_to_html_4_0)
MR_decl_static(fn__query__proc_callers_module_to_html_4_0)
MR_decl_static(fn__query__proc_callers_clique_to_html_4_0)
MR_decl_static(fn__query__accumulate_csds_by_call_site_3_0)
MR_decl_static(fn__query__accumulate_csds_by_procedure_3_0)
MR_decl_static(fn__query__accumulate_csds_by_module_3_0)
MR_decl_static(fn__query__accumulate_csds_by_clique_3_0)
MR_decl_static(query__accumulate_parent_csd_prof_info_7_0)
MR_decl_static(query__compensate_using_comp_table_5_0)
MR_decl_static(fn__query__pair_self_1_0)
MR_decl_static(fn__query__pair_contour_3_0)
MR_decl_static(fn__query__wrap_clique_links_5_0)
MR_decl_static(fn__query__wrap_proc_links_5_0)
MR_decl_static(fn__query__wrap_proc_callers_links_7_0)
MR_decl_static(fn__query__wrap_module_links_5_0)
MR_decl_static(fn__query__wrap_modules_links_4_0)
MR_def_extern_entry(__Unify___query__alloc_fields_0_0)
MR_def_extern_entry(__Compare___query__alloc_fields_0_0)
MR_decl_static(__Unify___query__assume_cross_clique_0_0)
MR_decl_static(__Compare___query__assume_cross_clique_0_0)
MR_def_extern_entry(__Unify___query__box_0_0)
MR_def_extern_entry(__Compare___query__box_0_0)
MR_decl_static(__Unify___query__call_site_context_0_0)
MR_decl_static(__Compare___query__call_site_context_0_0)
MR_decl_static(__Unify___query__call_site_display_0_0)
MR_decl_static(__Compare___query__call_site_display_0_0)
MR_decl_static(__Unify___query__call_site_proc_name_0_0)
MR_decl_static(__Compare___query__call_site_proc_name_0_0)
MR_def_extern_entry(__Unify___query__caller_groups_0_0)
MR_def_extern_entry(__Compare___query__caller_groups_0_0)
MR_def_extern_entry(__Unify___query__callseqs_fields_0_0)
MR_def_extern_entry(__Compare___query__callseqs_fields_0_0)
MR_def_extern_entry(__Unify___query__cmd_0_0)
MR_def_extern_entry(__Index___query__cmd_0_0)
MR_def_extern_entry(__Compare___query__cmd_0_0)
MR_def_extern_entry(__Unify___query__cmd_pref_0_0)
MR_def_extern_entry(__Compare___query__cmd_pref_0_0)
MR_def_extern_entry(__Unify___query__colour_scheme_0_0)
MR_def_extern_entry(__Compare___query__colour_scheme_0_0)
MR_def_extern_entry(__Unify___query__contour_0_0)
MR_def_extern_entry(__Compare___query__contour_0_0)
MR_def_extern_entry(__Unify___query__cost_kind_0_0)
MR_def_extern_entry(__Compare___query__cost_kind_0_0)
MR_def_extern_entry(__Unify___query__display_limit_0_0)
MR_def_extern_entry(__Compare___query__display_limit_0_0)
MR_def_extern_entry(__Unify___query__fields_0_0)
MR_def_extern_entry(__Compare___query__fields_0_0)
MR_def_extern_entry(__Unify___query__inactive_items_0_0)
MR_def_extern_entry(__Compare___query__inactive_items_0_0)
MR_def_extern_entry(__Unify___query__inactive_status_0_0)
MR_def_extern_entry(__Compare___query__inactive_status_0_0)
MR_def_extern_entry(__Unify___query__include_descendants_0_0)
MR_def_extern_entry(__Compare___query__include_descendants_0_0)
MR_def_extern_entry(__Unify___query__measurement_scope_0_0)
MR_def_extern_entry(__Compare___query__measurement_scope_0_0)
MR_def_extern_entry(__Unify___query__memory_fields_0_0)
MR_def_extern_entry(__Compare___query__memory_fields_0_0)
MR_def_extern_entry(__Unify___query__order_criteria_0_0)
MR_def_extern_entry(__Compare___query__order_criteria_0_0)
MR_def_extern_entry(__Unify___query__port_fields_0_0)
MR_def_extern_entry(__Compare___query__port_fields_0_0)
MR_def_extern_entry(__Unify___query__preferences_0_0)
MR_def_extern_entry(__Compare___query__preferences_0_0)
MR_def_extern_entry(__Unify___query__preferences_indication_0_0)
MR_def_extern_entry(__Compare___query__preferences_indication_0_0)
MR_def_extern_entry(__Unify___query__resp_0_0)
MR_def_extern_entry(__Compare___query__resp_0_0)
MR_def_extern_entry(__Unify___query__summarize_0_0)
MR_def_extern_entry(__Compare___query__summarize_0_0)
MR_def_extern_entry(__Unify___query__time_fields_0_0)
MR_def_extern_entry(__Compare___query__time_fields_0_0)
MR_def_extern_entry(__Unify___query__time_format_0_0)
MR_def_extern_entry(__Compare___query__time_format_0_0)
MR_decl_static(__Unify___query__url_with_proc_name_0_0)
MR_decl_static(__Compare___query__url_with_proc_name_0_0)
MR_decl_static(__Unify___query__wrap_with_url_0_0)
MR_decl_static(__Compare___query__wrap_with_url_0_0)
MR_decl_static(fn__query__IntroducedFrom__func__module_to_html__972__1_1_0)
MR_decl_static(query__IntroducedFrom__pred__normal_call_site_summary_to_html__1404__1_2_0)
MR_decl_static(fn__query__IntroducedFrom__func__multi_call_site_summary_to_html__1439__1_2_0)
MR_decl_static(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0)
MR_decl_static(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__query__try_exec_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__query__generate_clique_page_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_order_criteria_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__chase_the_action_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__generate_proc_page_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__generate_module_page_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__query__multi_call_site_clique_to_html_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_call_site_display_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_0 mercury_common_0[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__query__try_exec_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(query, cmd),
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__generate_clique_page_7_0_1,
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
(MR_Word *) &mercury_data__closure_layout__fn__query__chase_the_action_5_0_1,
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
(MR_Word *) &mercury_data__closure_layout__fn__query__generate_proc_page_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__fn__query__generate_module_page_5_0_1,
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
(MR_Word *) &mercury_data__closure_layout__query__multi_call_site_clique_to_html_10_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(query, call_site_display),
MR_COMMON(2,30),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(12,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_BOOL_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(12,19)
}
},
};

static const struct mercury_type_1 mercury_common_1[30] =
{
{
MR_string_const("unknown exception", 17)
},
{
MR_string_const("box", 3)
},
{
MR_string_const("nobox", 5)
},
{
MR_string_const("cols", 4)
},
{
MR_string_const("none", 4)
},
{
MR_string_const("nosum", 5)
},
{
MR_string_const("sum", 3)
},
{
MR_string_const("ac", 2)
},
{
MR_string_const("nc", 2)
},
{
MR_string_const("no", 2)
},
{
MR_string_const("mi", 2)
},
{
MR_string_const("th", 2)
},
{
MR_string_const("hh", 2)
},
{
MR_string_const("sh", 2)
},
{
MR_string_const("hs", 2)
},
{
MR_string_const("ss", 2)
},
{
MR_string_const("", 0)
},
{
MR_string_const("<B>", 3)
},
{
MR_string_const("</B>", 4)
},
{
MR_string_const("[Parent call sites]", 19)
},
{
MR_string_const("[Parent procedures]", 19)
},
{
MR_string_const("[Parent modules]", 16)
},
{
MR_string_const("[Parent cliques]", 16)
},
{
MR_string_const("[Group callers by procedure]", 28)
},
{
MR_string_const("[Group callers by module]", 25)
},
{
MR_string_const("[Group callers by clique]", 25)
},
{
MR_string_const("[Group callers by call site]", 28)
},
{
MR_string_const("First group", 11)
},
{
MR_string_const("Previous group", 14)
},
{
MR_string_const("Next group", 10)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_sub_lines_1;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_two_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_sub_lines_1;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_two_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_exclude__type_ctor_info_exclude_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
static const struct mercury_type_2 mercury_common_2[31] =
{
{
{
MR_TAG_COMMON(2,1,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,14),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,9),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(2,1,16),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,18),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(html_format, sub_lines),
MR_CTOR0_ADDR(html_format, two_id)
}
},
{
{
MR_CTOR1_ADDR(html_format, sub_lines),
MR_CTOR0_ADDR(html_format, two_id)
}
},
{
{
MR_TAG_COMMON(2,1,19),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,20),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,21),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,22),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(2,1,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,27),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,28),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,1,29),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(12,31)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,12,4)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
};

static const struct mercury_type_3 mercury_common_3[6] =
{
{
0
},
{
5
},
{
47
},
{
45
},
{
1
},
{
2
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
1,
1,
1,
0
},
MR_TAG_COMMON(1,3,0)
},
{
{
1,
0,
1,
0
},
MR_TAG_COMMON(1,3,0)
},
{
{
1,
5,
2,
1
},
MR_TAG_COMMON(1,3,0)
},
};

static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
0,
0
}
},
{
{
0,
1
}
},
{
{
1,
0
}
},
{
{
1,
1
}
},
};

static const struct mercury_type_7 mercury_common_7[4] =
{
{
MR_tbmkword(0, 3)
},
{
MR_tbmkword(0, 2)
},
{
MR_tbmkword(0, 1)
},
{
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__generate_proc_dynamic_debug_page_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__generate_clique_debug_page_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__query__append_slot_to_string_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__query__procs_in_clique_to_html_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__query__procs_in_clique_to_html_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__multi_call_site_summary_to_html_7_0_2;
static const struct mercury_type_8 mercury_common_8[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__generate_proc_dynamic_debug_page_2_0_1,
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
(MR_Word *) &mercury_data__closure_layout__fn__query__generate_clique_debug_page_2_0_1,
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
(MR_Word *) &mercury_data__closure_layout__query__append_slot_to_string_3_0_1,
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
(MR_Word *) &mercury_data__closure_layout__query__procs_in_clique_to_html_7_0_1,
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
(MR_Word *) &mercury_data__closure_layout__query__procs_in_clique_to_html_7_0_2,
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
(MR_Word *) &mercury_data__closure_layout__fn__query__multi_call_site_summary_to_html_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(12,19),
MR_COMMON(12,13)
}
},
};

static const struct mercury_type_9 mercury_common_9[7] =
{
{
MR_COMMON(8,0),
MR_ENTRY_AP(query__append_slot_to_string_3_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(fn__query__append_pdi_to_string_2_0),
0
},
{
MR_COMMON(10,2),
MR_ENTRY_AP(fn__query__pair_self_1_0),
0
},
{
MR_COMMON(10,3),
MR_ENTRY_AP(fn__query__pair_self_1_0),
0
},
{
MR_COMMON(17,0),
MR_ENTRY_AP(query__not_mercury_runtime_1_0),
0
},
{
MR_COMMON(8,2),
MR_ENTRY_AP(query__append_csdi_to_string_3_0),
0
},
{
MR_COMMON(10,6),
MR_ENTRY_AP(fn__query__IntroducedFrom__func__module_to_html__972__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__call_site_dynamic_to_html_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__query__clique_to_html_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__query__group_proc_dynamics_by_proc_static_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__call_site_summary_to_html_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_2;
static const struct mercury_type_10 mercury_common_10[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__call_site_dynamic_to_html_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__query__clique_to_html_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(12,2)
},
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(12,7)
},
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(12,7)
},
{
(MR_Word *) &mercury_data__closure_layout__query__group_proc_dynamics_by_proc_static_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__query__call_site_summary_to_html_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(profile, proc_static_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(12,19),
MR_COMMON(12,13)
},
};

static const struct mercury_type_11 mercury_common_11[3] =
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
MR_TAG_COMMON(1,3,4)
},
{
{
0,
1,
1
},
MR_TAG_COMMON(1,3,4)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_top_procs__type_ctor_info_line_group_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_one_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_one_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_top_procs__type_ctor_info_line_group_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
static const struct mercury_type_12 mercury_common_12[33] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(2,6)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,2,7)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(2,6)
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
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(html_format, two_id),
MR_TAG_COMMON(0,2,12)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(html_format, two_id),
MR_COMMON(2,13)
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
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_TAG_COMMON(0,2,19)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_COMMON(2,20)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_TAG_COMMON(0,2,19)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(html_format, two_id),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_COMMON(2,20)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(html_format, two_id),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_TAG_COMMON(0,2,19)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(2,20)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_TAG_COMMON(0,2,19)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(html_format, one_id),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(2,20)
}
},
{
{
MR_CTOR_ADDR(top_procs, line_group, 2),
MR_CTOR0_ADDR(html_format, one_id),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,2,19)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(2,20)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,2,19)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(2,20)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,2,19)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(2,20)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,2,19)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(2,20)
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
MR_CTOR0_ADDR(html_format, two_id),
MR_COMMON(2,13)
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
mercury_data__closure_layout__query__clique_to_html_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_summary_to_html_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__modules_to_html_2_0_2;
static const struct mercury_type_13 mercury_common_13[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__query__clique_to_html_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(12,0),
MR_COMMON(12,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__proc_summary_to_html_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_COMMON(12,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(2,18),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(12,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(12,7),
MR_COMMON(12,9),
MR_COMMON(12,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(12,7),
MR_COMMON(12,15),
MR_COMMON(12,15)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_8,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(12,7),
MR_COMMON(12,21),
MR_COMMON(12,21)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_10,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(12,7),
MR_COMMON(12,25),
MR_COMMON(12,25)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__modules_to_html_2_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(12,29),
MR_COMMON(12,19)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__query__clique_to_html_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__query__clique_to_html_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_in_clique_to_html_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__query__procs_in_clique_to_html_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__call_site_summary_group_to_html_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_callers_call_site_to_html_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_callers_proc_to_html_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_callers_module_to_html_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_callers_clique_to_html_4_0_1;
static const struct mercury_type_14 mercury_common_14[9] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__query__clique_to_html_6_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_INT_CTOR_ADDR,
MR_COMMON(12,2),
MR_STRING_CTOR_ADDR,
MR_COMMON(2,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__clique_to_html_6_0_4,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_INT_CTOR_ADDR,
MR_COMMON(12,2),
MR_STRING_CTOR_ADDR,
MR_COMMON(2,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_in_clique_to_html_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_INT_CTOR_ADDR,
MR_COMMON(12,30),
MR_COMMON(2,28),
MR_COMMON(2,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__procs_in_clique_to_html_7_0_3,
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
MR_COMMON(2,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__call_site_summary_group_to_html_7_0_1,
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
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__proc_callers_call_site_to_html_4_0_1,
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
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__proc_callers_proc_to_html_4_0_1,
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
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__proc_callers_module_to_html_4_0_1,
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
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__proc_callers_clique_to_html_4_0_1,
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
mercury_data__closure_layout__fn__query__proc_summary_to_html_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_html_format__type_ctor_info_totals_disposition_0;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_12;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__modules_to_html_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__generate_modules_page_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__query__proc_in_clique_to_html_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__query__multi_call_site_clique_to_html_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__query__accumulate_parent_csd_prof_info_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_4;
static const struct mercury_type_15 mercury_common_15[13] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__proc_summary_to_html_3_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(html_format, totals_disposition),
MR_COMMON(12,5),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_5,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(12,12),
MR_COMMON(12,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_7,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(12,18),
MR_COMMON(12,19)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_9,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(12,23),
MR_COMMON(12,19)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_11,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(12,27),
MR_COMMON(12,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__proc_callers_to_html_8_0_12,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(html_format, totals_disposition),
MR_COMMON(12,13),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__modules_to_html_2_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(html_format, totals_disposition),
MR_COMMON(12,13),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__generate_modules_page_3_0_1,
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
(MR_Word *) &mercury_data__closure_layout__query__proc_in_clique_to_html_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(html_format, totals_disposition),
MR_COMMON(12,5),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__multi_call_site_clique_to_html_10_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_COMMON(2,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__query__accumulate_parent_csd_prof_info_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(html_format, totals_disposition),
MR_COMMON(12,13),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(html_format, totals_disposition),
MR_COMMON(12,13),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__query__generate_proc_callers_page_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_caller_groups_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__query__multi_call_site_summary_to_html_7_0_1;
static const struct mercury_type_16 mercury_common_16[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__query__generate_proc_callers_page_9_0_1,
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
(MR_Word *) &mercury_data__closure_layout__fn__query__multi_call_site_summary_to_html_7_0_1,
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
MR_COMMON(12,27),
MR_COMMON(12,19)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__modules_to_html_2_0_1;
static const struct mercury_type_17 mercury_common_17[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__query__modules_to_html_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(12,29)
},
};

static const struct mercury_type_18 mercury_common_18[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_19 mercury_common_19[1] =
{
{
MR_COMMON(8,5),
MR_ENTRY_AP(fn__query__IntroducedFrom__func__multi_call_site_summary_to_html__1439__1_2_0),
1,
MR_string_const("", 0)
},
};

static const struct mercury_type_1 mercury_vector_common_1_0[6] =
{
{
MR_string_const("calls", 5)
},
{
MR_string_const("redos", 5)
},
{
MR_string_const("time", 4)
},
{
MR_string_const("callseqs", 8)
},
{
MR_string_const("allocs", 6)
},
{
MR_string_const("words", 5)
},
};

static const struct mercury_type_1 mercury_vector_common_1_1[4] =
{
{
MR_string_const("cs", 2)
},
{
MR_string_const("pr", 2)
},
{
MR_string_const("mo", 2)
},
{
MR_string_const("cl", 2)
},
};

static const struct mercury_type_6 mercury_vector_common_6_0[6] =
{
{
MR_string_const("_", 1),
45
},
{
MR_string_const("q", 1),
45
},
{
MR_string_const("t", 1),
45
},
{
MR_string_const("qt", 2),
45
},
{
MR_string_const("tp", 2),
45
},
{
MR_string_const("qtp", 3),
45
},
};

static const struct mercury_type_6 mercury_vector_common_6_1[6] =
{
{
MR_string_const("calls", 5),
45
},
{
MR_string_const("redos", 5),
45
},
{
MR_string_const("time", 4),
45
},
{
MR_string_const("callseqs", 8),
45
},
{
MR_string_const("allocs", 6),
45
},
{
MR_string_const("words", 5),
45
},
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_wrap_with_url_0_0 = {
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
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_assume_cross_clique_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_wrap_with_url_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_assume_cross_clique_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_wrap_with_url_0_1 = {
	"wrap_url_if_cross_clique",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_wrap_with_url_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_wrap_with_url_0_2 = {
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

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_wrap_with_url_0_0[] = {
	&mercury_data_query__du_functor_desc_wrap_with_url_0_0,
	&mercury_data_query__du_functor_desc_wrap_with_url_0_2

};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_wrap_with_url_0_1[] = {
	&mercury_data_query__du_functor_desc_wrap_with_url_0_1

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_wrap_with_url_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_query__du_stag_ordered_wrap_with_url_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_wrap_with_url_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_wrap_with_url_0[] = {
	&mercury_data_query__du_functor_desc_wrap_with_url_0_0,
	&mercury_data_query__du_functor_desc_wrap_with_url_0_1,
	&mercury_data_query__du_functor_desc_wrap_with_url_0_2
};

const MR_Integer mercury_data_query__functor_number_map_wrap_with_url_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_wrap_with_url_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__wrap_with_url_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__wrap_with_url_0_0)),
	"query",
	"wrap_with_url",
	{ (void *)mercury_data_query__du_name_ordered_wrap_with_url_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_wrap_with_url_0 },
	3,
	4,
	mercury_data_query__functor_number_map_wrap_with_url_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_url_with_proc_name_0_0 = {
	"caller_clique",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_url_with_proc_name_0_1 = {
	"callee_clique",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_url_with_proc_name_0[] = {
	&mercury_data_query__enum_functor_desc_url_with_proc_name_0_0,
	&mercury_data_query__enum_functor_desc_url_with_proc_name_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_url_with_proc_name_0[] = {
	&mercury_data_query__enum_functor_desc_url_with_proc_name_0_1,
	&mercury_data_query__enum_functor_desc_url_with_proc_name_0_0
};

const MR_Integer mercury_data_query__functor_number_map_url_with_proc_name_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_url_with_proc_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__url_with_proc_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__url_with_proc_name_0_0)),
	"query",
	"url_with_proc_name",
	{ (void *)mercury_data_query__enum_name_ordered_url_with_proc_name_0 },
	{ (void *)mercury_data_query__enum_value_ordered_url_with_proc_name_0 },
	2,
	4,
	mercury_data_query__functor_number_map_url_with_proc_name_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_time_format_0_0 = {
	"no_scale",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_time_format_0_1 = {
	"scale_by_millions",
	1
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_time_format_0_2 = {
	"scale_by_thousands",
	2
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_time_format_0[] = {
	&mercury_data_query__enum_functor_desc_time_format_0_0,
	&mercury_data_query__enum_functor_desc_time_format_0_1,
	&mercury_data_query__enum_functor_desc_time_format_0_2
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_time_format_0[] = {
	&mercury_data_query__enum_functor_desc_time_format_0_0,
	&mercury_data_query__enum_functor_desc_time_format_0_1,
	&mercury_data_query__enum_functor_desc_time_format_0_2
};

const MR_Integer mercury_data_query__functor_number_map_time_format_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_time_format_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__time_format_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__time_format_0_0)),
	"query",
	"time_format",
	{ (void *)mercury_data_query__enum_name_ordered_time_format_0 },
	{ (void *)mercury_data_query__enum_value_ordered_time_format_0 },
	3,
	4,
	mercury_data_query__functor_number_map_time_format_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_time_fields_0_0 = {
	"no_time",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_time_fields_0_1 = {
	"ticks",
	1
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_time_fields_0_2 = {
	"time",
	2
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_time_fields_0_3 = {
	"ticks_and_time",
	3
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_time_fields_0_4 = {
	"time_and_percall",
	4
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_time_fields_0_5 = {
	"ticks_and_time_and_percall",
	5
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_time_fields_0[] = {
	&mercury_data_query__enum_functor_desc_time_fields_0_0,
	&mercury_data_query__enum_functor_desc_time_fields_0_1,
	&mercury_data_query__enum_functor_desc_time_fields_0_2,
	&mercury_data_query__enum_functor_desc_time_fields_0_3,
	&mercury_data_query__enum_functor_desc_time_fields_0_4,
	&mercury_data_query__enum_functor_desc_time_fields_0_5
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_time_fields_0[] = {
	&mercury_data_query__enum_functor_desc_time_fields_0_0,
	&mercury_data_query__enum_functor_desc_time_fields_0_1,
	&mercury_data_query__enum_functor_desc_time_fields_0_3,
	&mercury_data_query__enum_functor_desc_time_fields_0_5,
	&mercury_data_query__enum_functor_desc_time_fields_0_2,
	&mercury_data_query__enum_functor_desc_time_fields_0_4
};

const MR_Integer mercury_data_query__functor_number_map_time_fields_0[] = {
	0,
	1,
	4,
	2,
	5,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_time_fields_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__time_fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__time_fields_0_0)),
	"query",
	"time_fields",
	{ (void *)mercury_data_query__enum_name_ordered_time_fields_0 },
	{ (void *)mercury_data_query__enum_value_ordered_time_fields_0 },
	6,
	4,
	mercury_data_query__functor_number_map_time_fields_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_summarize_0_0 = {
	"summarize",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_summarize_0_1 = {
	"dont_summarize",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_summarize_0[] = {
	&mercury_data_query__enum_functor_desc_summarize_0_0,
	&mercury_data_query__enum_functor_desc_summarize_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_summarize_0[] = {
	&mercury_data_query__enum_functor_desc_summarize_0_1,
	&mercury_data_query__enum_functor_desc_summarize_0_0
};

const MR_Integer mercury_data_query__functor_number_map_summarize_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_summarize_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__summarize_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__summarize_0_0)),
	"query",
	"summarize",
	{ (void *)mercury_data_query__enum_name_ordered_summarize_0 },
	{ (void *)mercury_data_query__enum_value_ordered_summarize_0 },
	2,
	4,
	mercury_data_query__functor_number_map_summarize_0
};

static const MR_NotagFunctorDesc mercury_data_query__notag_functor_desc_resp_0 = {
	"html",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_query__functor_number_map_resp_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_resp_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__resp_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__resp_0_0)),
	"query",
	"resp",
	{ (void *)&mercury_data_query__notag_functor_desc_resp_0 },
	{ (void *)&mercury_data_query__notag_functor_desc_resp_0 },
	1,
	4,
	mercury_data_query__functor_number_map_resp_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_preferences_indication_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_preferences_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_preferences_indication_0_0 = {
	"given_pref",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_preferences_indication_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_preferences_indication_0_1 = {
	"default_pref",
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

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_preferences_indication_0_2 = {
	"all_pref",
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

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_preferences_indication_0_0[] = {
	&mercury_data_query__du_functor_desc_preferences_indication_0_1,
	&mercury_data_query__du_functor_desc_preferences_indication_0_2

};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_preferences_indication_0_1[] = {
	&mercury_data_query__du_functor_desc_preferences_indication_0_0

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_preferences_indication_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_query__du_stag_ordered_preferences_indication_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_preferences_indication_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_preferences_indication_0[] = {
	&mercury_data_query__du_functor_desc_preferences_indication_0_2,
	&mercury_data_query__du_functor_desc_preferences_indication_0_1,
	&mercury_data_query__du_functor_desc_preferences_indication_0_0
};

const MR_Integer mercury_data_query__functor_number_map_preferences_indication_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_indication_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__preferences_indication_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__preferences_indication_0_0)),
	"query",
	"preferences_indication",
	{ (void *)mercury_data_query__du_name_ordered_preferences_indication_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_preferences_indication_0 },
	3,
	4,
	mercury_data_query__functor_number_map_preferences_indication_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_box_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_colour_scheme_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_summarize_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_order_criteria_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_contour_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_time_format_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_inactive_items_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_preferences_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_box_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_colour_scheme_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_summarize_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_order_criteria_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_contour_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_time_format_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_inactive_items_0
};

const MR_ConstString mercury_data_query__field_names_preferences_0_0[] = {
	"pref_fields",
	"pref_box",
	"pref_colour",
	"pref_anc",
	"pref_summarize",
	"pref_criteria",
	"pref_contour",
	"pref_time",
	"pref_inactive"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_preferences_0_0 = {
	"preferences",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_preferences_0_0,
	mercury_data_query__field_names_preferences_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_preferences_0_0[] = {
	&mercury_data_query__du_functor_desc_preferences_0_0

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_preferences_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_preferences_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_preferences_0[] = {
	&mercury_data_query__du_functor_desc_preferences_0_0
};

const MR_Integer mercury_data_query__functor_number_map_preferences_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__preferences_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__preferences_0_0)),
	"query",
	"preferences",
	{ (void *)mercury_data_query__du_name_ordered_preferences_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_preferences_0 },
	1,
	4,
	mercury_data_query__functor_number_map_preferences_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_port_fields_0_0 = {
	"no_port",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_port_fields_0_1 = {
	"port",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_port_fields_0[] = {
	&mercury_data_query__enum_functor_desc_port_fields_0_0,
	&mercury_data_query__enum_functor_desc_port_fields_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_port_fields_0[] = {
	&mercury_data_query__enum_functor_desc_port_fields_0_0,
	&mercury_data_query__enum_functor_desc_port_fields_0_1
};

const MR_Integer mercury_data_query__functor_number_map_port_fields_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_port_fields_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__port_fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__port_fields_0_0)),
	"query",
	"port_fields",
	{ (void *)mercury_data_query__enum_name_ordered_port_fields_0 },
	{ (void *)mercury_data_query__enum_value_ordered_port_fields_0 },
	2,
	4,
	mercury_data_query__functor_number_map_port_fields_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_order_criteria_0_0 = {
	"by_context",
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

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_order_criteria_0_1 = {
	"by_name",
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
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cost_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_include_descendants_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_measurement_scope_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_order_criteria_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_cost_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_include_descendants_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_measurement_scope_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_order_criteria_0_2 = {
	"by_cost",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_order_criteria_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_order_criteria_0_0[] = {
	&mercury_data_query__du_functor_desc_order_criteria_0_0,
	&mercury_data_query__du_functor_desc_order_criteria_0_1

};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_order_criteria_0_1[] = {
	&mercury_data_query__du_functor_desc_order_criteria_0_2

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_order_criteria_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_query__du_stag_ordered_order_criteria_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_order_criteria_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_order_criteria_0[] = {
	&mercury_data_query__du_functor_desc_order_criteria_0_0,
	&mercury_data_query__du_functor_desc_order_criteria_0_2,
	&mercury_data_query__du_functor_desc_order_criteria_0_1
};

const MR_Integer mercury_data_query__functor_number_map_order_criteria_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_order_criteria_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__order_criteria_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__order_criteria_0_0)),
	"query",
	"order_criteria",
	{ (void *)mercury_data_query__du_name_ordered_order_criteria_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_order_criteria_0 },
	3,
	4,
	mercury_data_query__functor_number_map_order_criteria_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_memory_fields_0_0 = {
	"no_memory",
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
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_units_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_units_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_memory_fields_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_memory_units_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_memory_fields_0_1 = {
	"memory",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_memory_fields_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_memory_fields_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_memory_units_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_memory_fields_0_2 = {
	"memory_and_percall",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_memory_fields_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_memory_fields_0_0[] = {
	&mercury_data_query__du_functor_desc_memory_fields_0_0

};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_memory_fields_0_1[] = {
	&mercury_data_query__du_functor_desc_memory_fields_0_1

};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_memory_fields_0_2[] = {
	&mercury_data_query__du_functor_desc_memory_fields_0_2

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_memory_fields_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_query__du_stag_ordered_memory_fields_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_memory_fields_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_memory_fields_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_memory_fields_0[] = {
	&mercury_data_query__du_functor_desc_memory_fields_0_1,
	&mercury_data_query__du_functor_desc_memory_fields_0_2,
	&mercury_data_query__du_functor_desc_memory_fields_0_0
};

const MR_Integer mercury_data_query__functor_number_map_memory_fields_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_memory_fields_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__memory_fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__memory_fields_0_0)),
	"query",
	"memory_fields",
	{ (void *)mercury_data_query__du_name_ordered_memory_fields_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_memory_fields_0 },
	3,
	4,
	mercury_data_query__functor_number_map_memory_fields_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_measurement_scope_0_0 = {
	"per_call",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_measurement_scope_0_1 = {
	"overall",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_measurement_scope_0[] = {
	&mercury_data_query__enum_functor_desc_measurement_scope_0_0,
	&mercury_data_query__enum_functor_desc_measurement_scope_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_measurement_scope_0[] = {
	&mercury_data_query__enum_functor_desc_measurement_scope_0_1,
	&mercury_data_query__enum_functor_desc_measurement_scope_0_0
};

const MR_Integer mercury_data_query__functor_number_map_measurement_scope_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_measurement_scope_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__measurement_scope_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__measurement_scope_0_0)),
	"query",
	"measurement_scope",
	{ (void *)mercury_data_query__enum_name_ordered_measurement_scope_0 },
	{ (void *)mercury_data_query__enum_value_ordered_measurement_scope_0 },
	2,
	4,
	mercury_data_query__functor_number_map_measurement_scope_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_include_descendants_0_0 = {
	"self",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_include_descendants_0_1 = {
	"self_and_desc",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_include_descendants_0[] = {
	&mercury_data_query__enum_functor_desc_include_descendants_0_0,
	&mercury_data_query__enum_functor_desc_include_descendants_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_include_descendants_0[] = {
	&mercury_data_query__enum_functor_desc_include_descendants_0_0,
	&mercury_data_query__enum_functor_desc_include_descendants_0_1
};

const MR_Integer mercury_data_query__functor_number_map_include_descendants_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_include_descendants_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__include_descendants_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__include_descendants_0_0)),
	"query",
	"include_descendants",
	{ (void *)mercury_data_query__enum_name_ordered_include_descendants_0 },
	{ (void *)mercury_data_query__enum_value_ordered_include_descendants_0 },
	2,
	4,
	mercury_data_query__functor_number_map_include_descendants_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_inactive_status_0_0 = {
	"inactive_hide",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_inactive_status_0_1 = {
	"inactive_show",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_inactive_status_0[] = {
	&mercury_data_query__enum_functor_desc_inactive_status_0_0,
	&mercury_data_query__enum_functor_desc_inactive_status_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_inactive_status_0[] = {
	&mercury_data_query__enum_functor_desc_inactive_status_0_0,
	&mercury_data_query__enum_functor_desc_inactive_status_0_1
};

const MR_Integer mercury_data_query__functor_number_map_inactive_status_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_inactive_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__inactive_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__inactive_status_0_0)),
	"query",
	"inactive_status",
	{ (void *)mercury_data_query__enum_name_ordered_inactive_status_0 },
	{ (void *)mercury_data_query__enum_value_ordered_inactive_status_0 },
	2,
	4,
	mercury_data_query__functor_number_map_inactive_status_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_inactive_status_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_inactive_items_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_inactive_status_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_inactive_status_0
};

const MR_ConstString mercury_data_query__field_names_inactive_items_0_0[] = {
	"inactive_procs",
	"inactive_modules"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_inactive_items_0_0 = {
	"inactive_items",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_inactive_items_0_0,
	mercury_data_query__field_names_inactive_items_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_inactive_items_0_0[] = {
	&mercury_data_query__du_functor_desc_inactive_items_0_0

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_inactive_items_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_inactive_items_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_inactive_items_0[] = {
	&mercury_data_query__du_functor_desc_inactive_items_0_0
};

const MR_Integer mercury_data_query__functor_number_map_inactive_items_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_inactive_items_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__inactive_items_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__inactive_items_0_0)),
	"query",
	"inactive_items",
	{ (void *)mercury_data_query__du_name_ordered_inactive_items_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_inactive_items_0 },
	1,
	4,
	mercury_data_query__functor_number_map_inactive_items_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_port_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_time_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_callseqs_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_alloc_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_memory_fields_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_fields_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_port_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_time_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_callseqs_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_alloc_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_memory_fields_0
};

const MR_ConstString mercury_data_query__field_names_fields_0_0[] = {
	"port_fields",
	"time_fields",
	"callseqs_fields",
	"alloc_fields",
	"memory_fields"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_fields_0_0 = {
	"fields",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_fields_0_0,
	mercury_data_query__field_names_fields_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_fields_0_0[] = {
	&mercury_data_query__du_functor_desc_fields_0_0

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_fields_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_fields_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_fields_0[] = {
	&mercury_data_query__du_functor_desc_fields_0_0
};

const MR_Integer mercury_data_query__functor_number_map_fields_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_fields_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__fields_0_0)),
	"query",
	"fields",
	{ (void *)mercury_data_query__du_name_ordered_fields_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_fields_0 },
	1,
	4,
	mercury_data_query__functor_number_map_fields_0
};

const MR_PseudoTypeInfo mercury_data_query__field_types_display_limit_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_display_limit_0_0 = {
	"rank_range",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_display_limit_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_display_limit_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_display_limit_0_1 = {
	"threshold_percent",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_display_limit_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_display_limit_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_display_limit_0_2 = {
	"threshold_value",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_display_limit_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_display_limit_0_0[] = {
	&mercury_data_query__du_functor_desc_display_limit_0_0

};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_display_limit_0_1[] = {
	&mercury_data_query__du_functor_desc_display_limit_0_1

};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_display_limit_0_2[] = {
	&mercury_data_query__du_functor_desc_display_limit_0_2

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_display_limit_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_display_limit_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_display_limit_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_display_limit_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_display_limit_0[] = {
	&mercury_data_query__du_functor_desc_display_limit_0_0,
	&mercury_data_query__du_functor_desc_display_limit_0_1,
	&mercury_data_query__du_functor_desc_display_limit_0_2
};

const MR_Integer mercury_data_query__functor_number_map_display_limit_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_display_limit_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__display_limit_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__display_limit_0_0)),
	"query",
	"display_limit",
	{ (void *)mercury_data_query__du_name_ordered_display_limit_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_display_limit_0 },
	3,
	4,
	mercury_data_query__functor_number_map_display_limit_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_cost_kind_0_0 = {
	"cost_calls",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_cost_kind_0_1 = {
	"cost_redos",
	1
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_cost_kind_0_2 = {
	"cost_time",
	2
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_cost_kind_0_3 = {
	"cost_callseqs",
	3
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_cost_kind_0_4 = {
	"cost_allocs",
	4
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_cost_kind_0_5 = {
	"cost_words",
	5
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_cost_kind_0[] = {
	&mercury_data_query__enum_functor_desc_cost_kind_0_0,
	&mercury_data_query__enum_functor_desc_cost_kind_0_1,
	&mercury_data_query__enum_functor_desc_cost_kind_0_2,
	&mercury_data_query__enum_functor_desc_cost_kind_0_3,
	&mercury_data_query__enum_functor_desc_cost_kind_0_4,
	&mercury_data_query__enum_functor_desc_cost_kind_0_5
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_cost_kind_0[] = {
	&mercury_data_query__enum_functor_desc_cost_kind_0_4,
	&mercury_data_query__enum_functor_desc_cost_kind_0_0,
	&mercury_data_query__enum_functor_desc_cost_kind_0_3,
	&mercury_data_query__enum_functor_desc_cost_kind_0_1,
	&mercury_data_query__enum_functor_desc_cost_kind_0_2,
	&mercury_data_query__enum_functor_desc_cost_kind_0_5
};

const MR_Integer mercury_data_query__functor_number_map_cost_kind_0[] = {
	1,
	3,
	4,
	2,
	0,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cost_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__cost_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__cost_kind_0_0)),
	"query",
	"cost_kind",
	{ (void *)mercury_data_query__enum_name_ordered_cost_kind_0 },
	{ (void *)mercury_data_query__enum_value_ordered_cost_kind_0 },
	6,
	4,
	mercury_data_query__functor_number_map_cost_kind_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_contour_0_0 = {
	"apply_contour",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_contour_0_1 = {
	"no_contour",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_contour_0[] = {
	&mercury_data_query__enum_functor_desc_contour_0_0,
	&mercury_data_query__enum_functor_desc_contour_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_contour_0[] = {
	&mercury_data_query__enum_functor_desc_contour_0_0,
	&mercury_data_query__enum_functor_desc_contour_0_1
};

const MR_Integer mercury_data_query__functor_number_map_contour_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_contour_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__contour_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__contour_0_0)),
	"query",
	"contour",
	{ (void *)mercury_data_query__enum_name_ordered_contour_0 },
	{ (void *)mercury_data_query__enum_value_ordered_contour_0 },
	2,
	4,
	mercury_data_query__functor_number_map_contour_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_colour_scheme_0_0 = {
	"colour_column_groups",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_colour_scheme_0_1 = {
	"colour_none",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_colour_scheme_0[] = {
	&mercury_data_query__enum_functor_desc_colour_scheme_0_0,
	&mercury_data_query__enum_functor_desc_colour_scheme_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_colour_scheme_0[] = {
	&mercury_data_query__enum_functor_desc_colour_scheme_0_0,
	&mercury_data_query__enum_functor_desc_colour_scheme_0_1
};

const MR_Integer mercury_data_query__functor_number_map_colour_scheme_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_colour_scheme_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__colour_scheme_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__colour_scheme_0_0)),
	"query",
	"colour_scheme",
	{ (void *)mercury_data_query__enum_name_ordered_colour_scheme_0 },
	{ (void *)mercury_data_query__enum_value_ordered_colour_scheme_0 },
	2,
	4,
	mercury_data_query__functor_number_map_colour_scheme_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_indication_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_pref_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_cmd_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_preferences_indication_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_pref_0_0 = {
	"cmd_pref",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_pref_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_cmd_pref_0_0[] = {
	&mercury_data_query__du_functor_desc_cmd_pref_0_0

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_cmd_pref_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_cmd_pref_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_cmd_pref_0[] = {
	&mercury_data_query__du_functor_desc_cmd_pref_0_0
};

const MR_Integer mercury_data_query__functor_number_map_cmd_pref_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_pref_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__cmd_pref_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__cmd_pref_0_0)),
	"query",
	"cmd_pref",
	{ (void *)mercury_data_query__du_name_ordered_cmd_pref_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_cmd_pref_0 },
	1,
	4,
	mercury_data_query__functor_number_map_cmd_pref_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_0 = {
	"deep_cmd_quit",
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

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_1 = {
	"deep_cmd_restart",
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

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_2 = {
	"deep_cmd_timeout",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_3 = {
	"deep_cmd_menu",
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

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_4 = {
	"deep_cmd_root",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_5 = {
	"deep_cmd_clique",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	5,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_6 = {
	"deep_cmd_proc",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_6,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_caller_groups_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_caller_groups_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_7 = {
	"deep_cmd_proc_callers",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	7,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_7,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_8 = {
	"deep_cmd_modules",
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

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_9 = {
	"deep_cmd_module",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	9,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_9,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_display_limit_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_display_limit_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_cost_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_include_descendants_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_measurement_scope_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_10 = {
	"deep_cmd_top_procs",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	10,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_10,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_11 = {
	"deep_cmd_proc_static",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	11,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_12 = {
	"deep_cmd_proc_dynamic",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	12,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_12,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_13 = {
	"deep_cmd_call_site_static",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	13,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_13,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_14 = {
	"deep_cmd_call_site_dynamic",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	14,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_14,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_15 = {
	"deep_cmd_raw_clique",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	15,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_15,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_cmd_0_0[] = {
	&mercury_data_query__du_functor_desc_cmd_0_0,
	&mercury_data_query__du_functor_desc_cmd_0_1,
	&mercury_data_query__du_functor_desc_cmd_0_3,
	&mercury_data_query__du_functor_desc_cmd_0_8

};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_cmd_0_1[] = {
	&mercury_data_query__du_functor_desc_cmd_0_2

};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_cmd_0_2[] = {
	&mercury_data_query__du_functor_desc_cmd_0_4

};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_cmd_0_3[] = {
	&mercury_data_query__du_functor_desc_cmd_0_5,
	&mercury_data_query__du_functor_desc_cmd_0_6,
	&mercury_data_query__du_functor_desc_cmd_0_7,
	&mercury_data_query__du_functor_desc_cmd_0_9,
	&mercury_data_query__du_functor_desc_cmd_0_10,
	&mercury_data_query__du_functor_desc_cmd_0_11,
	&mercury_data_query__du_functor_desc_cmd_0_12,
	&mercury_data_query__du_functor_desc_cmd_0_13,
	&mercury_data_query__du_functor_desc_cmd_0_14,
	&mercury_data_query__du_functor_desc_cmd_0_15

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_cmd_0[] = {
	{ 4, MR_SECTAG_LOCAL,
	mercury_data_query__du_stag_ordered_cmd_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_cmd_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_cmd_0_2 },
	{ 10, MR_SECTAG_REMOTE,
	mercury_data_query__du_stag_ordered_cmd_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_cmd_0[] = {
	&mercury_data_query__du_functor_desc_cmd_0_14,
	&mercury_data_query__du_functor_desc_cmd_0_13,
	&mercury_data_query__du_functor_desc_cmd_0_5,
	&mercury_data_query__du_functor_desc_cmd_0_3,
	&mercury_data_query__du_functor_desc_cmd_0_9,
	&mercury_data_query__du_functor_desc_cmd_0_8,
	&mercury_data_query__du_functor_desc_cmd_0_6,
	&mercury_data_query__du_functor_desc_cmd_0_7,
	&mercury_data_query__du_functor_desc_cmd_0_12,
	&mercury_data_query__du_functor_desc_cmd_0_11,
	&mercury_data_query__du_functor_desc_cmd_0_0,
	&mercury_data_query__du_functor_desc_cmd_0_15,
	&mercury_data_query__du_functor_desc_cmd_0_1,
	&mercury_data_query__du_functor_desc_cmd_0_4,
	&mercury_data_query__du_functor_desc_cmd_0_2,
	&mercury_data_query__du_functor_desc_cmd_0_10
};

const MR_Integer mercury_data_query__functor_number_map_cmd_0[] = {
	10,
	12,
	14,
	3,
	13,
	2,
	6,
	7,
	5,
	4,
	15,
	9,
	8,
	1,
	0,
	11 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__cmd_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__cmd_0_0)),
	"query",
	"cmd",
	{ (void *)mercury_data_query__du_name_ordered_cmd_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_cmd_0 },
	16,
	4,
	mercury_data_query__functor_number_map_cmd_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_callseqs_fields_0_0 = {
	"no_callseqs",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_callseqs_fields_0_1 = {
	"callseqs",
	1
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_callseqs_fields_0_2 = {
	"callseqs_and_percall",
	2
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_callseqs_fields_0[] = {
	&mercury_data_query__enum_functor_desc_callseqs_fields_0_0,
	&mercury_data_query__enum_functor_desc_callseqs_fields_0_1,
	&mercury_data_query__enum_functor_desc_callseqs_fields_0_2
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_callseqs_fields_0[] = {
	&mercury_data_query__enum_functor_desc_callseqs_fields_0_1,
	&mercury_data_query__enum_functor_desc_callseqs_fields_0_2,
	&mercury_data_query__enum_functor_desc_callseqs_fields_0_0
};

const MR_Integer mercury_data_query__functor_number_map_callseqs_fields_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_callseqs_fields_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__callseqs_fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__callseqs_fields_0_0)),
	"query",
	"callseqs_fields",
	{ (void *)mercury_data_query__enum_name_ordered_callseqs_fields_0 },
	{ (void *)mercury_data_query__enum_value_ordered_callseqs_fields_0 },
	3,
	4,
	mercury_data_query__functor_number_map_callseqs_fields_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_caller_groups_0_0 = {
	"group_by_call_site",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_caller_groups_0_1 = {
	"group_by_proc",
	1
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_caller_groups_0_2 = {
	"group_by_module",
	2
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_caller_groups_0_3 = {
	"group_by_clique",
	3
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_caller_groups_0[] = {
	&mercury_data_query__enum_functor_desc_caller_groups_0_0,
	&mercury_data_query__enum_functor_desc_caller_groups_0_1,
	&mercury_data_query__enum_functor_desc_caller_groups_0_2,
	&mercury_data_query__enum_functor_desc_caller_groups_0_3
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_caller_groups_0[] = {
	&mercury_data_query__enum_functor_desc_caller_groups_0_0,
	&mercury_data_query__enum_functor_desc_caller_groups_0_3,
	&mercury_data_query__enum_functor_desc_caller_groups_0_2,
	&mercury_data_query__enum_functor_desc_caller_groups_0_1
};

const MR_Integer mercury_data_query__functor_number_map_caller_groups_0[] = {
	0,
	3,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_caller_groups_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__caller_groups_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__caller_groups_0_0)),
	"query",
	"caller_groups",
	{ (void *)mercury_data_query__enum_name_ordered_caller_groups_0 },
	{ (void *)mercury_data_query__enum_value_ordered_caller_groups_0 },
	4,
	4,
	mercury_data_query__functor_number_map_caller_groups_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_call_site_proc_name_0_0 = {
	"caller_proc_name",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_call_site_proc_name_0_1 = {
	"callee_proc_name",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_call_site_proc_name_0[] = {
	&mercury_data_query__enum_functor_desc_call_site_proc_name_0_0,
	&mercury_data_query__enum_functor_desc_call_site_proc_name_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_call_site_proc_name_0[] = {
	&mercury_data_query__enum_functor_desc_call_site_proc_name_0_1,
	&mercury_data_query__enum_functor_desc_call_site_proc_name_0_0
};

const MR_Integer mercury_data_query__functor_number_map_call_site_proc_name_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_call_site_proc_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__call_site_proc_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__call_site_proc_name_0_0)),
	"query",
	"call_site_proc_name",
	{ (void *)mercury_data_query__enum_name_ordered_call_site_proc_name_0 },
	{ (void *)mercury_data_query__enum_value_ordered_call_site_proc_name_0 },
	2,
	4,
	mercury_data_query__functor_number_map_call_site_proc_name_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_call_site_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_call_site_proc_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_url_with_proc_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_wrap_with_url_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_call_site_display_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_call_site_context_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_call_site_proc_name_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_url_with_proc_name_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_wrap_with_url_0
};

const MR_ConstString mercury_data_query__field_names_call_site_display_0_0[] = {
	"display_context",
	"display_proc_name",
	"display_url",
	"display_wrap"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_call_site_display_0_0 = {
	"call_site_display",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_call_site_display_0_0,
	mercury_data_query__field_names_call_site_display_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_call_site_display_0_0[] = {
	&mercury_data_query__du_functor_desc_call_site_display_0_0

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_call_site_display_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_call_site_display_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_call_site_display_0[] = {
	&mercury_data_query__du_functor_desc_call_site_display_0_0
};

const MR_Integer mercury_data_query__functor_number_map_call_site_display_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_call_site_display_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__call_site_display_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__call_site_display_0_0)),
	"query",
	"call_site_display",
	{ (void *)mercury_data_query__du_name_ordered_call_site_display_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_call_site_display_0 },
	1,
	4,
	mercury_data_query__functor_number_map_call_site_display_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_call_site_context_0_0 = {
	"call_context",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_call_site_context_0_1 = {
	"empty_context",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_call_site_context_0[] = {
	&mercury_data_query__enum_functor_desc_call_site_context_0_0,
	&mercury_data_query__enum_functor_desc_call_site_context_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_call_site_context_0[] = {
	&mercury_data_query__enum_functor_desc_call_site_context_0_0,
	&mercury_data_query__enum_functor_desc_call_site_context_0_1
};

const MR_Integer mercury_data_query__functor_number_map_call_site_context_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_call_site_context_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__call_site_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__call_site_context_0_0)),
	"query",
	"call_site_context",
	{ (void *)mercury_data_query__enum_name_ordered_call_site_context_0 },
	{ (void *)mercury_data_query__enum_value_ordered_call_site_context_0 },
	2,
	4,
	mercury_data_query__functor_number_map_call_site_context_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_box_0_0 = {
	"box",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_box_0_1 = {
	"nobox",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_box_0[] = {
	&mercury_data_query__enum_functor_desc_box_0_0,
	&mercury_data_query__enum_functor_desc_box_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_box_0[] = {
	&mercury_data_query__enum_functor_desc_box_0_0,
	&mercury_data_query__enum_functor_desc_box_0_1
};

const MR_Integer mercury_data_query__functor_number_map_box_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_box_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__box_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__box_0_0)),
	"query",
	"box",
	{ (void *)mercury_data_query__enum_name_ordered_box_0 },
	{ (void *)mercury_data_query__enum_value_ordered_box_0 },
	2,
	4,
	mercury_data_query__functor_number_map_box_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_assume_cross_clique_0_0 = {
	"assume_cross_clique",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_assume_cross_clique_0_1 = {
	"assume_within_clique",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_assume_cross_clique_0[] = {
	&mercury_data_query__enum_functor_desc_assume_cross_clique_0_0,
	&mercury_data_query__enum_functor_desc_assume_cross_clique_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_assume_cross_clique_0[] = {
	&mercury_data_query__enum_functor_desc_assume_cross_clique_0_0,
	&mercury_data_query__enum_functor_desc_assume_cross_clique_0_1
};

const MR_Integer mercury_data_query__functor_number_map_assume_cross_clique_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_assume_cross_clique_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__assume_cross_clique_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__assume_cross_clique_0_0)),
	"query",
	"assume_cross_clique",
	{ (void *)mercury_data_query__enum_name_ordered_assume_cross_clique_0 },
	{ (void *)mercury_data_query__enum_value_ordered_assume_cross_clique_0 },
	2,
	4,
	mercury_data_query__functor_number_map_assume_cross_clique_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_alloc_fields_0_0 = {
	"no_alloc",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_alloc_fields_0_1 = {
	"alloc",
	1
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_alloc_fields_0_2 = {
	"alloc_and_percall",
	2
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_alloc_fields_0[] = {
	&mercury_data_query__enum_functor_desc_alloc_fields_0_0,
	&mercury_data_query__enum_functor_desc_alloc_fields_0_1,
	&mercury_data_query__enum_functor_desc_alloc_fields_0_2
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_alloc_fields_0[] = {
	&mercury_data_query__enum_functor_desc_alloc_fields_0_1,
	&mercury_data_query__enum_functor_desc_alloc_fields_0_2,
	&mercury_data_query__enum_functor_desc_alloc_fields_0_0
};

const MR_Integer mercury_data_query__functor_number_map_alloc_fields_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_alloc_fields_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__alloc_fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__alloc_fields_0_0)),
	"query",
	"alloc_fields",
	{ (void *)mercury_data_query__enum_name_ordered_alloc_fields_0 },
	{ (void *)mercury_data_query__enum_value_ordered_alloc_fields_0 },
	3,
	4,
	mercury_data_query__functor_number_map_alloc_fields_0
};

static const MR_UserClosureId
mercury_data__closure_layout__query__try_exec_6_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"exec",
6,
0
},
"query",
"query.m",
285,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__generate_proc_dynamic_debug_page_2_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"append_slot_to_string",
3,
0
},
"query",
"query.m",
510,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__generate_clique_debug_page_2_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"append_pdi_to_string",
3,
0
},
"query",
"query.m",
495,
"d1;c5;t;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__call_site_dynamic_to_html_5_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"valid_call_site_dynamic_ptr",
2,
0
},
"query",
"query.m",
1545,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__clique_to_html_6_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"group_proc_dynamics_by_proc_static",
4,
0
},
"query",
"query.m",
997,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__clique_to_html_6_0_2 = {
{
MR_PREDICATE,
"query",
"query",
"proc_group_contains",
2,
0
},
"query",
"query.m",
1005,
"d1;c15;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__clique_to_html_6_0_3 = {
{
MR_PREDICATE,
"query",
"query",
"procs_in_clique_to_html",
7,
0
},
"query",
"query.m",
1012,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__clique_to_html_6_0_4 = {
{
MR_PREDICATE,
"query",
"query",
"procs_in_clique_to_html",
7,
0
},
"query",
"query.m",
1012,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__generate_clique_page_7_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"wrap_clique_links",
6,
0
},
"query",
"query.m",
760,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__chase_the_action_5_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"wrap_clique_links",
6,
0
},
"query",
"query.m",
760,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_summary_to_html_3_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"call_site_summary_to_html",
4,
0
},
"query",
"query.m",
2124,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_summary_to_html_3_0_2 = {
{
MR_FUNCTION,
"html_format",
"html_format",
"two_id_line_group_to_html",
5,
0
},
"query",
"query.m",
2127,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__generate_proc_page_4_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"wrap_proc_links",
6,
0
},
"query",
"query.m",
774,
"d1;c21;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"pair_self",
2,
0
},
"query",
"query.m",
1731,
"d1;c10;d2;c6;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_2 = {
{
MR_FUNCTION,
"query",
"query",
"pair_contour",
4,
0
},
"query",
"query.m",
1725,
"d1;c10;d2;c6;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_3 = {
{
MR_FUNCTION,
"query",
"query",
"pair_self",
2,
0
},
"query",
"query.m",
1717,
"d1;c10;d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_4 = {
{
MR_FUNCTION,
"query",
"query",
"accumulate_csds_by_call_site",
4,
0
},
"query",
"query.m",
1749,
"d1;c30;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_5 = {
{
MR_FUNCTION,
"query",
"query",
"proc_callers_call_site_to_html",
5,
0
},
"query",
"query.m",
1752,
"d1;c30;d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_6 = {
{
MR_FUNCTION,
"query",
"query",
"accumulate_csds_by_clique",
4,
0
},
"query",
"query.m",
1810,
"d1;c30;d4;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_7 = {
{
MR_FUNCTION,
"query",
"query",
"proc_callers_clique_to_html",
5,
0
},
"query",
"query.m",
1813,
"d1;c30;d4;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_8 = {
{
MR_FUNCTION,
"query",
"query",
"accumulate_csds_by_module",
4,
0
},
"query",
"query.m",
1789,
"d1;c30;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_9 = {
{
MR_FUNCTION,
"query",
"query",
"proc_callers_module_to_html",
5,
0
},
"query",
"query.m",
1792,
"d1;c30;d3;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_10 = {
{
MR_FUNCTION,
"query",
"query",
"accumulate_csds_by_procedure",
4,
0
},
"query",
"query.m",
1769,
"d1;c30;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_11 = {
{
MR_FUNCTION,
"query",
"query",
"proc_callers_proc_to_html",
5,
0
},
"query",
"query.m",
1772,
"d1;c30;d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_callers_to_html_8_0_12 = {
{
MR_FUNCTION,
"html_format",
"html_format",
"two_id_line_to_html",
5,
0
},
"query",
"query.m",
1839,
"d1;c35;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__generate_proc_callers_page_9_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"wrap_proc_callers_links",
8,
0
},
"query",
"query.m",
799,
"d1;c11;d1;c7;e;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__modules_to_html_2_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"not_mercury_runtime",
1,
0
},
"query",
"query.m",
920,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__modules_to_html_2_0_2 = {
{
MR_FUNCTION,
"query",
"query",
"module_summary_to_html",
4,
0
},
"query",
"query.m",
921,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__modules_to_html_2_0_3 = {
{
MR_FUNCTION,
"html_format",
"html_format",
"two_id_line_to_html",
5,
0
},
"query",
"query.m",
926,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__generate_modules_page_3_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"wrap_modules_links",
5,
0
},
"query",
"query.m",
820,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__generate_module_page_5_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"wrap_module_links",
6,
0
},
"query",
"query.m",
837,
"d1;c21;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__append_slot_to_string_3_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"append_csdi_to_string",
3,
0
},
"query",
"query.m",
525,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__group_proc_dynamics_by_proc_static_4_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"valid_proc_dynamic_ptr",
2,
0
},
"query",
"query.m",
1077,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_in_clique_to_html_7_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"call_site_clique_to_html",
7,
0
},
"query",
"query.m",
1144,
"d1;c8;t;c17;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__proc_in_clique_to_html_7_0_2 = {
{
MR_FUNCTION,
"html_format",
"html_format",
"two_id_line_group_to_html",
5,
0
},
"query",
"query.m",
1150,
"d1;c8;t;c17;d2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__procs_in_clique_to_html_7_0_1 = {
{
MR_PREDICATE,
"profile",
"profile",
"deep_lookup_pd_own",
3,
0
},
"query",
"query.m",
1104,
"d1;c8;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__procs_in_clique_to_html_7_0_2 = {
{
MR_PREDICATE,
"profile",
"profile",
"deep_lookup_pd_desc",
3,
0
},
"query",
"query.m",
1105,
"d1;c8;d3;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__procs_in_clique_to_html_7_0_3 = {
{
MR_PREDICATE,
"query",
"query",
"proc_in_clique_to_html",
7,
0
},
"query",
"query.m",
1110,
"d1;c8;d3;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__multi_call_site_clique_to_html_10_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"call_site_dynamic_to_html",
6,
0
},
"query",
"query.m",
1333,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__multi_call_site_clique_to_html_10_0_2 = {
{
MR_FUNCTION,
"query",
"query",
"maybe_extract_action_clique",
5,
0
},
"query",
"query.m",
1336,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__call_site_summary_group_to_html_7_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"accumulate_csd_prof_info",
7,
0
},
"query",
"query.m",
1450,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__multi_call_site_summary_to_html_7_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"call_site_summary_group_to_html",
8,
0
},
"query",
"query.m",
1424,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__multi_call_site_summary_to_html_7_0_2 = {
{
MR_FUNCTION,
"query",
"query",
"lambda_query_m_1439",
3,
0
},
"query",
"query.m",
1439,
"d1;c19;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__call_site_summary_to_html_3_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"lambda_query_m_1404",
2,
0
},
"query",
"query.m",
1404,
"d1;c11;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_callers_call_site_to_html_4_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"accumulate_parent_csd_prof_info",
7,
0
},
"query",
"query.m",
1948,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_callers_proc_to_html_4_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"accumulate_parent_csd_prof_info",
7,
0
},
"query",
"query.m",
1966,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_callers_module_to_html_4_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"accumulate_parent_csd_prof_info",
7,
0
},
"query",
"query.m",
1981,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__query__proc_callers_clique_to_html_4_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"accumulate_parent_csd_prof_info",
7,
0
},
"query",
"query.m",
1995,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__query__accumulate_parent_csd_prof_info_7_0_1 = {
{
MR_PREDICATE,
"query",
"query",
"compensate_using_comp_table",
5,
0
},
"query",
"query.m",
2083,
"d1;c9;e;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_1 = {
{
MR_FUNCTION,
"query",
"query",
"lookup_proc_total_to_html",
6,
0
},
"query",
"query.m",
959,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_2 = {
{
MR_FUNCTION,
"query",
"query",
"lambda_query_m_972",
2,
0
},
"query",
"query.m",
972,
"d1;c14;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_3 = {
{
MR_FUNCTION,
"html_format",
"html_format",
"two_id_line_to_html",
5,
0
},
"query",
"query.m",
974,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_4 = {
{
MR_FUNCTION,
"html_format",
"html_format",
"two_id_line_to_html",
5,
0
},
"query",
"query.m",
974,
"d1;c16;"
};

MR_decl_entry(exception__try_io_4_0);
MR_decl_entry(univ__univ_to_type_2_0);
MR_decl_entry(fn__string__format_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;

MR_BEGIN_MODULE(query_module0)
	MR_init_entry1(query__try_exec_6_0);
	MR_init_label6(query__try_exec_6_0,3,7,6,12,11,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__query__try_exec_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__exec_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(exception__try_io_4_0,
		query__try_exec_6_0_i3);
MR_def_label(query__try_exec_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(query__try_exec_6_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		query__try_exec_6_0_i7);
MR_def_label(query__try_exec_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__try_exec_6_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("<H3>AN EXCEPTION HAS OCCURRED: %s</H3>\n", 39);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(query__try_exec_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		query__try_exec_6_0_i12);
MR_def_label(query__try_exec_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__try_exec_6_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("<H3>AN EXCEPTION HAS OCCURRED: %s</H3>\n", 39);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(query__try_exec_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_string_const("<H3>AN EXCEPTION HAS OCCURRED: %s</H3>\n", 39);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__format_2_0);
MR_def_label(query__try_exec_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module1)
	MR_init_entry1(fn__query__should_display_times_1_0);
	MR_init_label1(fn__query__should_display_times_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__should_display_times_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 6);
	if (MR_INT_LE(MR_tempr1,10)) {
		MR_GOTO_LAB(fn__query__should_display_times_1_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(fn__query__should_display_times_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module2)
	MR_init_entry1(fn__query__default_fields_1_0);
	MR_init_label1(fn__query__default_fields_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_fields_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 6);
	if (MR_INT_LE(MR_tempr1,10)) {
		MR_GOTO_LAB(fn__query__default_fields_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_proceed();
	}
MR_def_label(fn__query__default_fields_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module3)
	MR_init_entry1(fn__query__default_box_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_box_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module4)
	MR_init_entry1(fn__query__default_colour_scheme_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_colour_scheme_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module5)
	MR_init_entry1(fn__query__default_ancestor_limit_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_ancestor_limit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module6)
	MR_init_entry1(fn__query__default_summarize_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_summarize_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module7)
	MR_init_entry1(fn__query__default_order_criteria_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_order_criteria_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module8)
	MR_init_entry1(fn__query__default_contour_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_contour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module9)
	MR_init_entry1(fn__query__default_time_format_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_time_format_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module10)
	MR_init_entry1(fn__query__default_inactive_items_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_inactive_items_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module11)
	MR_init_entry1(fn__query__default_preferences_1_0);
	MR_init_label1(fn__query__default_preferences_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_preferences_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__query__default_fields_1_0,
		fn__query__default_preferences_1_0_i2);
MR_def_label(fn__query__default_preferences_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 8) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module12)
	MR_init_entry1(fn__query__all_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__all_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module13)
	MR_init_entry1(fn__query__solidify_preference_2_0);
	MR_init_label3(fn__query__solidify_preference_2_0,26,4,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__solidify_preference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__query__solidify_preference_2_0_i10);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(fn__query__solidify_preference_2_0_i26);
	}
	MR_np_tailcall_ent(fn__query__default_preferences_1_0);
	}
MR_def_label(fn__query__solidify_preference_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__query__default_preferences_1_0,
		fn__query__solidify_preference_2_0_i4);
MR_def_label(fn__query__solidify_preference_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__query__solidify_preference_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module14)
	MR_init_entry1(fn__query__default_cost_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_cost_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module15)
	MR_init_entry1(fn__query__default_incl_desc_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_incl_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module16)
	MR_init_entry1(fn__query__default_scope_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_scope_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module17)
	MR_init_entry1(fn__query__query_separator_char_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__query_separator_char_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 38;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module18)
	MR_init_entry1(fn__query__pref_separator_char_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__pref_separator_char_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__char_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(query_module19)
	MR_init_entry1(fn__query__fields_to_string_1_0);
	MR_init_label8(fn__query__fields_to_string_1_0,3,4,6,8,9,10,12,13)
	MR_init_label8(fn__query__fields_to_string_1_0,14,19,21,16,18,25,26,27)
	MR_init_label4(fn__query__fields_to_string_1_0,28,29,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__fields_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(5) = (MR_Word) MR_string_const("_", 1);
	MR_r1 = (MR_Integer) 45;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__fields_to_string_1_0_i4);
MR_def_label(fn__query__fields_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = (MR_Word) MR_string_const("p", 1);
	MR_r1 = (MR_Integer) 45;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__fields_to_string_1_0_i4);
MR_def_label(fn__query__fields_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_6_0, ((MR_Integer) MR_tempr3 * (MR_Integer) 2));
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__fields_to_string_1_0_i6);
MR_def_label(fn__query__fields_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i8);
	}
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_string_const("s", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__fields_to_string_1_0_i10);
MR_def_label(fn__query__fields_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i9);
	}
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_string_const("S", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__fields_to_string_1_0_i10);
MR_def_label(fn__query__fields_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_string_const("_", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__fields_to_string_1_0_i10);
MR_def_label(fn__query__fields_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i12);
	}
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_string_const("a", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__fields_to_string_1_0_i14);
MR_def_label(fn__query__fields_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i13);
	}
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_string_const("A", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__fields_to_string_1_0_i14);
MR_def_label(fn__query__fields_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_string_const("_", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__fields_to_string_1_0_i14);
MR_def_label(fn__query__fields_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(4));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i16);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i19);
	}
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i25);
MR_def_label(fn__query__fields_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(4), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i21);
	}
	MR_r2 = (MR_Word) MR_string_const("B", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i25);
MR_def_label(fn__query__fields_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("W", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i25);
MR_def_label(fn__query__fields_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(4), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i18);
	}
	MR_r2 = (MR_Word) MR_string_const("b", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i25);
MR_def_label(fn__query__fields_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("w", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i25);
MR_def_label(fn__query__fields_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i26);
MR_def_label(fn__query__fields_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i27);
MR_def_label(fn__query__fields_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i28);
MR_def_label(fn__query__fields_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i29);
MR_def_label(fn__query__fields_to_string_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i30);
MR_def_label(fn__query__fields_to_string_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i31);
MR_def_label(fn__query__fields_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
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


MR_BEGIN_MODULE(query_module20)
	MR_init_entry1(query__string_to_cost_kind_2_0);
	MR_init_label6(query__string_to_cost_kind_2_0,3,4,5,6,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__string_to_cost_kind_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("time", 4)) != 0)) {
		MR_GOTO_LAB(query__string_to_cost_kind_2_0_i3);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_cost_kind_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("calls", 5)) != 0)) {
		MR_GOTO_LAB(query__string_to_cost_kind_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_cost_kind_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("redos", 5)) != 0)) {
		MR_GOTO_LAB(query__string_to_cost_kind_2_0_i5);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_cost_kind_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("words", 5)) != 0)) {
		MR_GOTO_LAB(query__string_to_cost_kind_2_0_i6);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_cost_kind_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("allocs", 6)) != 0)) {
		MR_GOTO_LAB(query__string_to_cost_kind_2_0_i7);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_cost_kind_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("callseqs", 8)) != 0)) {
		MR_GOTO_LAB(query__string_to_cost_kind_2_0_i1);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_cost_kind_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module21)
	MR_init_entry1(fn__query__cost_kind_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cost_kind_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module22)
	MR_init_entry1(query__string_to_incl_desc_2_0);
	MR_init_label2(query__string_to_incl_desc_2_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__string_to_incl_desc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("both", 4)) != 0)) {
		MR_GOTO_LAB(query__string_to_incl_desc_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_incl_desc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("self", 4)) != 0)) {
		MR_GOTO_LAB(query__string_to_incl_desc_2_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_incl_desc_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module23)
	MR_init_entry1(fn__query__incl_desc_to_string_1_0);
	MR_init_label1(fn__query__incl_desc_to_string_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__incl_desc_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__query__incl_desc_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("self", 4);
	MR_proceed();
MR_def_label(fn__query__incl_desc_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("both", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module24)
	MR_init_entry1(query__string_to_scope_2_0);
	MR_init_label2(query__string_to_scope_2_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__string_to_scope_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("oa", 2)) != 0)) {
		MR_GOTO_LAB(query__string_to_scope_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_scope_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pc", 2)) != 0)) {
		MR_GOTO_LAB(query__string_to_scope_2_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_scope_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module25)
	MR_init_entry1(fn__query__scope_to_string_1_0);
	MR_init_label1(fn__query__scope_to_string_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__scope_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__query__scope_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("oa", 2);
	MR_proceed();
MR_def_label(fn__query__scope_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pc", 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module26)
	MR_init_entry1(fn__query__order_criteria_to_string_1_0);
	MR_init_label8(fn__query__order_criteria_to_string_1_0,19,43,5,7,9,10,12,13)
	MR_init_label4(fn__query__order_criteria_to_string_1_0,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__order_criteria_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__query__order_criteria_to_string_1_0_i43);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(fn__query__order_criteria_to_string_1_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("context", 7);
	MR_proceed();
	}
MR_def_label(fn__query__order_criteria_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("name", 4);
	MR_proceed();
MR_def_label(fn__query__order_criteria_to_string_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Integer) 45;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__order_criteria_to_string_1_0_i5);
MR_def_label(fn__query__order_criteria_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_6_1, ((MR_Integer) MR_tempr3 * (MR_Integer) 2));
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__order_criteria_to_string_1_0_i7);
MR_def_label(fn__query__order_criteria_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__query__order_criteria_to_string_1_0_i9);
	}
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_string_const("self", 4);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__order_criteria_to_string_1_0_i10);
MR_def_label(fn__query__order_criteria_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_string_const("both", 4);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__order_criteria_to_string_1_0_i10);
MR_def_label(fn__query__order_criteria_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__query__order_criteria_to_string_1_0_i12);
	}
	MR_r2 = (MR_Word) MR_string_const("oa", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__order_criteria_to_string_1_0_i13);
MR_def_label(fn__query__order_criteria_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("pc", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__order_criteria_to_string_1_0_i13);
MR_def_label(fn__query__order_criteria_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__order_criteria_to_string_1_0_i14);
MR_def_label(fn__query__order_criteria_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__order_criteria_to_string_1_0_i15);
MR_def_label(fn__query__order_criteria_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__order_criteria_to_string_1_0_i16);
MR_def_label(fn__query__order_criteria_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__order_criteria_to_string_1_0_i17);
MR_def_label(fn__query__order_criteria_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cost", 4);
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


MR_BEGIN_MODULE(query_module27)
	MR_init_entry1(fn__query__preferences_to_string_1_0);
	MR_init_label8(fn__query__preferences_to_string_1_0,3,6,7,11,10,15,14,21)
	MR_init_label8(fn__query__preferences_to_string_1_0,24,27,26,31,33,30,39,37)
	MR_init_label1(fn__query__preferences_to_string_1_0,77)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__preferences_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i3);
	}
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(1) = (MR_Word) MR_string_const("no", 2);
	}
	MR_np_call_localret_ent(fn__query__fields_to_string_1_0,
		fn__query__preferences_to_string_1_0_i7);
MR_def_label(fn__query__preferences_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 8);
	MR_r1 = (MR_Word) MR_string_const("%d", 2);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__preferences_to_string_1_0_i6);
MR_def_label(fn__query__preferences_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__fields_to_string_1_0,
		fn__query__preferences_to_string_1_0_i7);
MR_def_label(fn__query__preferences_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i11);
	}
	MR_r1 = MR_sv(5);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,3,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,1,1);
	MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i10);
MR_def_label(fn__query__preferences_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,3,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,1,2);
MR_def_label(fn__query__preferences_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i15);
	}
	MR_tag_alloc_heap(MR_sv(5), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(5), 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,1,3);
	MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i14);
MR_def_label(fn__query__preferences_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(5), 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,1,4);
MR_def_label(fn__query__preferences_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i21);
	}
	MR_sv(4) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(2,1,5);
	MR_np_call_localret_ent(fn__query__order_criteria_to_string_1_0,
		fn__query__preferences_to_string_1_0_i24);
MR_def_label(fn__query__preferences_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(2,1,6);
	MR_np_call_localret_ent(fn__query__order_criteria_to_string_1_0,
		fn__query__preferences_to_string_1_0_i24);
MR_def_label(fn__query__preferences_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i27);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,1,7);
	MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i26);
	}
MR_def_label(fn__query__preferences_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,1,8);
MR_def_label(fn__query__preferences_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i31);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,1,9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i30);
	}
MR_def_label(fn__query__preferences_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i33);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,1,10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i30);
	}
MR_def_label(fn__query__preferences_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,1,11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	}
MR_def_label(fn__query__preferences_to_string_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i37);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr11 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_r1 = (MR_Word) MR_string_const("%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s", 34);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__preferences_to_string_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr11 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_r1 = (MR_Word) MR_string_const("%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s", 34);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__preferences_to_string_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i77);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr11 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_r1 = (MR_Word) MR_string_const("%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s", 34);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__preferences_to_string_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr11 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_r1 = (MR_Word) MR_string_const("%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s", 34);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module28)
	MR_init_entry1(fn__query__cmd_separator_char_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_separator_char_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module29)
	MR_init_entry1(query__string_to_caller_groups_2_0);
	MR_init_label4(query__string_to_caller_groups_2_0,3,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__string_to_caller_groups_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cl", 2)) != 0)) {
		MR_GOTO_LAB(query__string_to_caller_groups_2_0_i3);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_caller_groups_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cs", 2)) != 0)) {
		MR_GOTO_LAB(query__string_to_caller_groups_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_caller_groups_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mo", 2)) != 0)) {
		MR_GOTO_LAB(query__string_to_caller_groups_2_0_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_caller_groups_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pr", 2)) != 0)) {
		MR_GOTO_LAB(query__string_to_caller_groups_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_caller_groups_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module30)
	MR_init_entry1(fn__query__caller_groups_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__caller_groups_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_1, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module31)
	MR_init_entry1(fn__query__limit_to_string_1_0);
	MR_init_label2(fn__query__limit_to_string_1_0,15,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__limit_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr5);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__query__limit_to_string_1_0_i11);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__query__limit_to_string_1_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("%d%c%d", 6);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__limit_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("v%g", 3);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__limit_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("p%g", 3);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module32)
	MR_init_entry1(fn__query__cmd_to_string_1_0);
	MR_init_label8(fn__query__cmd_to_string_1_0,129,168,97,169,84,83,90,170)
	MR_init_label8(fn__query__cmd_to_string_1_0,3,4,10,11,17,18,24,25)
	MR_init_label8(fn__query__cmd_to_string_1_0,26,33,34,40,41,42,45,48)
	MR_init_label8(fn__query__cmd_to_string_1_0,58,59,65,66,72,73,74,80)
	MR_init_label8(fn__query__cmd_to_string_1_0,103,104,105,106,107,108,111,114)
	MR_init_label1(fn__query__cmd_to_string_1_0,117)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__cmd_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i129) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i168) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i169) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i170));
MR_def_label(fn__query__cmd_to_string_1_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__cmd_to_string_1_0_i72);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__query__cmd_to_string_1_0_i80);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__query__cmd_to_string_1_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("modules", 7);
	MR_proceed();
	}
MR_def_label(fn__query__cmd_to_string_1_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i97);
MR_def_label(fn__query__cmd_to_string_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("timeout%c%d", 11);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(2, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__query__cmd_to_string_1_0_i83);
	}
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i84);
MR_def_label(fn__query__cmd_to_string_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_r1 = (MR_Word) MR_string_const("root%c%s", 8);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i90);
MR_def_label(fn__query__cmd_to_string_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("root%c%d", 8);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i17) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i33) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i40) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i25) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i103) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i65) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i58) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i10) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i3) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i73));
MR_def_label(fn__query__cmd_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i4);
MR_def_label(fn__query__cmd_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("call_site_dynamic%c%d", 21);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i11);
MR_def_label(fn__query__cmd_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("call_site_static%c%d", 20);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i18);
MR_def_label(fn__query__cmd_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("clique%c%d", 10);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("menu", 4);
	MR_proceed();
MR_def_label(fn__query__cmd_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i26);
MR_def_label(fn__query__cmd_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("module%c%s", 10);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i34);
MR_def_label(fn__query__cmd_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("proc%c%d", 8);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__query__caller_groups_to_string_1_0,
		fn__query__cmd_to_string_1_0_i41);
MR_def_label(fn__query__cmd_to_string_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i42);
MR_def_label(fn__query__cmd_to_string_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i45);
MR_def_label(fn__query__cmd_to_string_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(5), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(5), 0) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i48);
MR_def_label(fn__query__cmd_to_string_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("proc_callers%c%d%c%s%c%d", 24);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i59);
MR_def_label(fn__query__cmd_to_string_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("proc_dynamic%c%d", 16);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i66);
MR_def_label(fn__query__cmd_to_string_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("proc_static%c%d", 15);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("quit", 4);
	MR_proceed();
MR_def_label(fn__query__cmd_to_string_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i74);
MR_def_label(fn__query__cmd_to_string_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("raw_clique%c%d", 14);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("restart", 7);
	MR_proceed();
MR_def_label(fn__query__cmd_to_string_1_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__query__limit_to_string_1_0,
		fn__query__cmd_to_string_1_0_i104);
MR_def_label(fn__query__cmd_to_string_1_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__cost_kind_to_string_1_0,
		fn__query__cmd_to_string_1_0_i105);
MR_def_label(fn__query__cmd_to_string_1_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__incl_desc_to_string_1_0,
		fn__query__cmd_to_string_1_0_i106);
MR_def_label(fn__query__cmd_to_string_1_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__scope_to_string_1_0,
		fn__query__cmd_to_string_1_0_i107);
MR_def_label(fn__query__cmd_to_string_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i108);
MR_def_label(fn__query__cmd_to_string_1_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(5), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(5), 0) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i111);
MR_def_label(fn__query__cmd_to_string_1_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(6), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(6), 0) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i114);
MR_def_label(fn__query__cmd_to_string_1_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(7), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(7), 0) = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i117);
MR_def_label(fn__query__cmd_to_string_1_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("top_procs%c%s%c%s%c%s%c%s", 25);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(util__split_3_0);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(string__append_3_1);
MR_decl_entry(string__to_float_2_0);

MR_BEGIN_MODULE(query_module33)
	MR_init_entry1(query__string_to_limit_2_0);
	MR_init_label8(query__string_to_limit_2_0,3,7,9,2,13,15,12,18)
	MR_init_label2(query__string_to_limit_2_0,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__string_to_limit_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 45;
	MR_np_call_localret_ent(util__split_3_0,
		query__string_to_limit_2_0_i3);
MR_def_label(query__string_to_limit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i2);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		query__string_to_limit_2_0_i7);
MR_def_label(query__string_to_limit_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		query__string_to_limit_2_0_i9);
MR_def_label(query__string_to_limit_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(query__string_to_limit_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("p", 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		query__string_to_limit_2_0_i13);
MR_def_label(query__string_to_limit_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i12);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_float_2_0,
		query__string_to_limit_2_0_i15);
MR_def_label(query__string_to_limit_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(query__string_to_limit_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("v", 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		query__string_to_limit_2_0_i18);
MR_def_label(query__string_to_limit_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_float_2_0,
		query__string_to_limit_2_0_i20);
MR_def_label(query__string_to_limit_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(query__string_to_limit_2_0,1)
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


MR_BEGIN_MODULE(query_module34)
	MR_init_entry1(fn__query__string_to_maybe_cmd_1_0);
	MR_init_label8(fn__query__string_to_maybe_cmd_1_0,2,3,10,12,15,4,5,24)
	MR_init_label8(fn__query__string_to_maybe_cmd_1_0,18,19,34,28,29,46,48,50)
	MR_init_label8(fn__query__string_to_maybe_cmd_1_0,38,39,54,59,75,77,79,81)
	MR_init_label8(fn__query__string_to_maybe_cmd_1_0,66,67,85,96,90,91,106,100)
	MR_init_label8(fn__query__string_to_maybe_cmd_1_0,101,116,110,111,126,120,121,136)
	MR_init_label7(fn__query__string_to_maybe_cmd_1_0,130,131,146,140,141,150,155)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__string_to_maybe_cmd_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__query__pref_separator_char_0_0,
		fn__query__string_to_maybe_cmd_1_0_i2);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(util__split_3_0,
		fn__query__string_to_maybe_cmd_1_0_i3);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("root", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i5);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i5);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i5);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i10);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i15);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i12);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("clique", 6)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i19);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i19);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i19);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i24);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("proc", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i29);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i29);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i29);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i34);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("proc_callers", 12)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i39);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i39);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i39);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i39);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i39);
	}
	MR_sv(1) = MR_tempr5;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i46);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i48);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(query__string_to_caller_groups_2_0,
		fn__query__string_to_maybe_cmd_1_0_i50);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("modules", 7)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i54);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i54);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("module", 6)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i59);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i59);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i59);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_ctfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i67);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("top_procs", 9)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i67);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i67);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i67);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i67);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i67);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i67);
	}
	MR_sv(1) = MR_tempr6;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr4, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(query__string_to_limit_2_0,
		fn__query__string_to_maybe_cmd_1_0_i75);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i66);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(query__string_to_cost_kind_2_0,
		fn__query__string_to_maybe_cmd_1_0_i77);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i66);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(query__string_to_incl_desc_2_0,
		fn__query__string_to_maybe_cmd_1_0_i79);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i66);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(query__string_to_scope_2_0,
		fn__query__string_to_maybe_cmd_1_0_i81);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i66);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i85);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("menu", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i85);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i85);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i91);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("proc_static", 11)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i91);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i91);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i91);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i96);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i90);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i101);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("proc_dynamic", 12)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i101);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i101);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i101);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i106);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i100);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i111);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("call_site_static", 16)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i111);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i111);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i111);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i116);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i110);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i121);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("call_site_dynamic", 17)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i121);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i121);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i121);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i126);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i120);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i131);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("raw_clique", 10)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i131);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i131);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i131);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i136);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i130);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i141);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("timeout", 7)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i141);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i141);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i141);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i146);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i140);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i150);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("restart", 7)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i150);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i150);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i155);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("quit", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i155);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i155);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,3);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module35)
	MR_init_entry1(fn__query__string_to_cmd_2_0);
	MR_init_label2(fn__query__string_to_cmd_2_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__string_to_cmd_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__query__string_to_maybe_cmd_1_0,
		fn__query__string_to_cmd_2_0_i2);
MR_def_label(fn__query__string_to_cmd_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_cmd_2_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(fn__query__string_to_cmd_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module36)
	MR_init_entry1(fn__query__string_to_maybe_pref_1_0);
	MR_init_label8(fn__query__string_to_maybe_pref_1_0,2,14,22,21,25,26,27,28)
	MR_init_label8(fn__query__string_to_maybe_pref_1_0,29,24,32,33,31,36,37,35)
	MR_init_label8(fn__query__string_to_maybe_pref_1_0,40,43,46,48,39,55,54,58)
	MR_init_label8(fn__query__string_to_maybe_pref_1_0,57,62,60,66,68,67,70,72)
	MR_init_label8(fn__query__string_to_maybe_pref_1_0,74,82,83,84,85,86,81,89)
	MR_init_label8(fn__query__string_to_maybe_pref_1_0,88,92,97,99,98,102,103,101)
	MR_init_label5(fn__query__string_to_maybe_pref_1_0,106,108,110,105,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__string_to_maybe_pref_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 47;
	MR_np_call_localret_ent(util__split_3_0,
		fn__query__string_to_maybe_pref_1_0_i2);
MR_def_label(fn__query__string_to_maybe_pref_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr6,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr7 = MR_ctfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr7,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr8 = MR_ctfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr8,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr9 = MR_ctfield(1, MR_tempr8, 1);
	if (MR_LTAGS_TESTR(MR_tempr9,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr5, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr6, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr7, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr8, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 45;
	}
	MR_np_call_localret_ent(util__split_3_0,
		fn__query__string_to_maybe_pref_1_0_i14);
MR_def_label(fn__query__string_to_maybe_pref_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	MR_r5 = MR_tempr4;
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r6 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r6 = MR_ctfield(1, MR_tempr5, 0);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_r5 = MR_ctfield(1, MR_r5, 0);
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i21);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("p", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_r5 = MR_ctfield(1, MR_r5, 0);
	MR_r6 = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i25);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i24);
MR_def_label(fn__query__string_to_maybe_pref_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("q", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i26);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i24);
MR_def_label(fn__query__string_to_maybe_pref_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("t", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i27);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i24);
MR_def_label(fn__query__string_to_maybe_pref_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("qt", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i28);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 3;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i24);
MR_def_label(fn__query__string_to_maybe_pref_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("tp", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i29);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 4;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i24);
MR_def_label(fn__query__string_to_maybe_pref_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("qtp", 3)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 5;
MR_def_label(fn__query__string_to_maybe_pref_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("S", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i32);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i31);
MR_def_label(fn__query__string_to_maybe_pref_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i33);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i31);
MR_def_label(fn__query__string_to_maybe_pref_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("s", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("A", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i36);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i35);
MR_def_label(fn__query__string_to_maybe_pref_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i37);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i35);
MR_def_label(fn__query__string_to_maybe_pref_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("a", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("B", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(2,3,4);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i39);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("W", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(2,3,0);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i39);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i39);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("b", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i39);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("w", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(1,3,0);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("box", 3)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i55);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i54);
MR_def_label(fn__query__string_to_maybe_pref_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("nobox", 5)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("cols", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i58);
	}
	MR_sv(2) = MR_r2;
	MR_sv(9) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i57);
MR_def_label(fn__query__string_to_maybe_pref_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("none", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(9) = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_pref_1_0_i62);
MR_def_label(fn__query__string_to_maybe_pref_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i60);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i66);
MR_def_label(fn__query__string_to_maybe_pref_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("sum", 3)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i68);
	}
	MR_sv(4) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i67);
MR_def_label(fn__query__string_to_maybe_pref_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("nosum", 5)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(4) = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(5), MR_string_const("context", 7)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i70);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i97);
MR_def_label(fn__query__string_to_maybe_pref_1_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(5), MR_string_const("name", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i72);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i97);
MR_def_label(fn__query__string_to_maybe_pref_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 45;
	MR_np_call_localret_ent(util__split_3_0,
		fn__query__string_to_maybe_pref_1_0_i74);
MR_def_label(fn__query__string_to_maybe_pref_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("cost", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r5 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("time", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i82);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i81);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("calls", 5)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i83);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i81);
MR_def_label(fn__query__string_to_maybe_pref_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("redos", 5)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i84);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i81);
MR_def_label(fn__query__string_to_maybe_pref_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("words", 5)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i85);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = (MR_Integer) 5;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i81);
MR_def_label(fn__query__string_to_maybe_pref_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("allocs", 6)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i86);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = (MR_Integer) 4;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i81);
MR_def_label(fn__query__string_to_maybe_pref_1_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("callseqs", 8)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = (MR_Integer) 3;
MR_def_label(fn__query__string_to_maybe_pref_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("both", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i89);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i88);
MR_def_label(fn__query__string_to_maybe_pref_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("self", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
MR_def_label(fn__query__string_to_maybe_pref_1_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("oa", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i92);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i97);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pc", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("ac", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i99);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i98);
MR_def_label(fn__query__string_to_maybe_pref_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("nc", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("mi", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i102);
	}
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i101);
MR_def_label(fn__query__string_to_maybe_pref_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i103);
	}
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i101);
MR_def_label(fn__query__string_to_maybe_pref_1_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("th", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r3 = (MR_Integer) 2;
MR_def_label(fn__query__string_to_maybe_pref_1_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("hh", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i106);
	}
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i105);
MR_def_label(fn__query__string_to_maybe_pref_1_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("hs", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i108);
	}
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i105);
MR_def_label(fn__query__string_to_maybe_pref_1_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("sh", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i110);
	}
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i105);
MR_def_label(fn__query__string_to_maybe_pref_1_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("ss", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,3);
MR_def_label(fn__query__string_to_maybe_pref_1_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_r2;
	MR_tfield(0, MR_tempr1, 7) = MR_r3;
	MR_tfield(0, MR_tempr1, 8) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_proc_static_ptr_2_0);
MR_decl_entry(profile__deep_lookup_proc_statics_3_0);
MR_decl_entry(fn__array__max_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(query_module37)
	MR_init_entry1(fn__query__generate_proc_static_debug_page_2_0);
	MR_init_label8(fn__query__generate_proc_static_debug_page_2_0,3,5,6,7,8,9,10,11)
	MR_init_label4(fn__query__generate_proc_static_debug_page_2_0,12,13,14,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__generate_proc_static_debug_page_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		fn__query__generate_proc_static_debug_page_2_0_i3);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__generate_proc_static_debug_page_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__query__generate_proc_static_debug_page_2_0_i5);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 4);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(fn__array__max_1_0,
		fn__query__generate_proc_static_debug_page_2_0_i6);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__generate_proc_static_debug_page_2_0_i7);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_static_debug_page_2_0_i8);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_static_debug_page_2_0_i9);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_static_debug_page_2_0_i10);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_static_debug_page_2_0_i11);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_static_debug_page_2_0_i12);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_static_debug_page_2_0_i13);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_static_debug_page_2_0_i14);
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,14)
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
MR_def_label(fn__query__generate_proc_static_debug_page_2_0,2)
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
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(query_module38)
	MR_init_entry1(fn__query__generate_proc_dynamic_debug_page_2_0);
	MR_init_label8(fn__query__generate_proc_dynamic_debug_page_2_0,3,5,8,9,11,12,13,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__generate_proc_dynamic_debug_page_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__valid_proc_dynamic_ptr_2_0,
		fn__query__generate_proc_dynamic_debug_page_2_0_i3);
MR_def_label(fn__query__generate_proc_dynamic_debug_page_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__generate_proc_dynamic_debug_page_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		fn__query__generate_proc_dynamic_debug_page_2_0_i5);
MR_def_label(fn__query__generate_proc_dynamic_debug_page_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("proc_static %d, ", 16);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__generate_proc_dynamic_debug_page_2_0_i8);
MR_def_label(fn__query__generate_proc_dynamic_debug_page_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		fn__query__generate_proc_dynamic_debug_page_2_0_i9);
MR_def_label(fn__query__generate_proc_dynamic_debug_page_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_string_const("multi", 5);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		fn__query__generate_proc_dynamic_debug_page_2_0_i11);
MR_def_label(fn__query__generate_proc_dynamic_debug_page_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_dynamic_debug_page_2_0_i12);
MR_def_label(fn__query__generate_proc_dynamic_debug_page_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_dynamic_debug_page_2_0_i13);
MR_def_label(fn__query__generate_proc_dynamic_debug_page_2_0,13)
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
MR_def_label(fn__query__generate_proc_dynamic_debug_page_2_0,2)
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

MR_BEGIN_MODULE(query_module39)
	MR_init_entry1(fn__query__generate_call_site_static_debug_page_2_0);
	MR_init_label8(fn__query__generate_call_site_static_debug_page_2_0,3,5,6,7,8,13,14,15)
	MR_init_label8(fn__query__generate_call_site_static_debug_page_2_0,16,17,11,12,18,20,21,22)
	MR_init_label7(fn__query__generate_call_site_static_debug_page_2_0,23,24,25,26,27,28,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__generate_call_site_static_debug_page_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__valid_call_site_static_ptr_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i3);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__generate_call_site_static_debug_page_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__query__generate_call_site_static_debug_page_2_0_i5);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__generate_call_site_static_debug_page_2_0_i6);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__generate_call_site_static_debug_page_2_0_i7);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__generate_call_site_static_debug_page_2_0_i8);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__query__generate_call_site_static_debug_page_2_0_i13);
	}
	MR_tempr3 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr3,0)) {
		MR_GOTO_LAB(fn__query__generate_call_site_static_debug_page_2_0_i18);
	}
	if (MR_INT_EQ(MR_tempr3,1)) {
		MR_GOTO_LAB(fn__query__generate_call_site_static_debug_page_2_0_i11);
	}
	if (MR_INT_EQ(MR_tempr3,2)) {
		MR_GOTO_LAB(fn__query__generate_call_site_static_debug_page_2_0_i12);
	}
	MR_tempr4 = MR_tempr5;
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("callback", 8);
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_r1 = MR_ctfield(0, MR_tempr4, 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i20);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__generate_call_site_static_debug_page_2_0_i14);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i15);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i16);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("normal ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i17);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i20);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("higher_order_call", 17);
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i20);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("method_call", 11);
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i20);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("special_call", 12);
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i20);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i21);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i22);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i23);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i24);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i25);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i26);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i27);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_static_debug_page_2_0_i28);
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,28)
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
MR_def_label(fn__query__generate_call_site_static_debug_page_2_0,2)
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

MR_BEGIN_MODULE(query_module40)
	MR_init_entry1(fn__query__generate_call_site_dynamic_debug_page_2_0);
	MR_init_label8(fn__query__generate_call_site_dynamic_debug_page_2_0,3,5,6,7,8,9,10,11)
	MR_init_label3(fn__query__generate_call_site_dynamic_debug_page_2_0,12,13,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__generate_call_site_dynamic_debug_page_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		fn__query__generate_call_site_dynamic_debug_page_2_0_i3);
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__generate_call_site_dynamic_debug_page_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__query__generate_call_site_dynamic_debug_page_2_0_i5);
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__generate_call_site_dynamic_debug_page_2_0_i6);
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__generate_call_site_dynamic_debug_page_2_0_i7);
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__measurements__own_to_string_1_0,
		fn__query__generate_call_site_dynamic_debug_page_2_0_i8);
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_dynamic_debug_page_2_0_i9);
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_dynamic_debug_page_2_0_i10);
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_dynamic_debug_page_2_0_i11);
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_dynamic_debug_page_2_0_i12);
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_call_site_dynamic_debug_page_2_0_i13);
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,13)
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
MR_def_label(fn__query__generate_call_site_dynamic_debug_page_2_0,2)
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

MR_BEGIN_MODULE(query_module41)
	MR_init_entry1(fn__query__generate_clique_debug_page_2_0);
	MR_init_label8(fn__query__generate_clique_debug_page_2_0,3,5,8,9,11,12,13,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__generate_clique_debug_page_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__valid_clique_ptr_2_0,
		fn__query__generate_clique_debug_page_2_0_i3);
MR_def_label(fn__query__generate_clique_debug_page_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__generate_clique_debug_page_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		fn__query__generate_clique_debug_page_2_0_i5);
MR_def_label(fn__query__generate_clique_debug_page_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%d ->", 5);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__generate_clique_debug_page_2_0_i8);
MR_def_label(fn__query__generate_clique_debug_page_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_members_3_0,
		fn__query__generate_clique_debug_page_2_0_i9);
MR_def_label(fn__query__generate_clique_debug_page_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__query__generate_clique_debug_page_2_0_i11);
MR_def_label(fn__query__generate_clique_debug_page_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</HTML>\n", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_clique_debug_page_2_0_i12);
MR_def_label(fn__query__generate_clique_debug_page_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_clique_debug_page_2_0_i13);
MR_def_label(fn__query__generate_clique_debug_page_2_0,13)
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
MR_def_label(fn__query__generate_clique_debug_page_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<HTML>\nInvalid call_site_dynamic_ptr</HTML>\n", 44);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__profile__dummy_clique_ptr_0_0);
MR_decl_entry(fn__html_format__proc_dynamic_name_2_0);
MR_decl_entry(fn__html_format__deep_cmd_pref_to_url_3_0);
MR_decl_entry(fn__html_format__escape_break_html_string_1_0);

MR_BEGIN_MODULE(query_module42)
	MR_init_entry1(fn__query__call_to_html_8_0);
	MR_init_label8(fn__query__call_to_html_8_0,4,3,2,6,5,8,10,12)
	MR_init_label8(fn__query__call_to_html_8_0,11,15,17,21,35,24,28,26)
	MR_init_label8(fn__query__call_to_html_8_0,31,33,22,41,40,45,49,52)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__call_to_html_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i3);
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
		fn__query__call_to_html_8_0_i4);
MR_def_label(fn__query__call_to_html_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(fn__query__call_to_html_8_0_i2);
	}
MR_def_label(fn__query__call_to_html_8_0,3)
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
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	}
MR_def_label(fn__query__call_to_html_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i6);
	}
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r3 = MR_r5;
	MR_GOTO_LAB(fn__query__call_to_html_8_0_i5);
MR_def_label(fn__query__call_to_html_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("", 0);
MR_def_label(fn__query__call_to_html_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i8);
	}
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__proc_dynamic_name_2_0,
		fn__query__call_to_html_8_0_i10);
MR_def_label(fn__query__call_to_html_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__proc_dynamic_name_2_0,
		fn__query__call_to_html_8_0_i10);
MR_def_label(fn__query__call_to_html_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_r3;
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(8);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(6) = MR_tempr2;
	MR_GOTO_LAB(fn__query__call_to_html_8_0_i11);
	}
MR_def_label(fn__query__call_to_html_8_0,12)
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
MR_def_label(fn__query__call_to_html_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__call_to_html_8_0_i15);
MR_def_label(fn__query__call_to_html_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(9), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(9), 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__call_to_html_8_0_i17);
MR_def_label(fn__query__call_to_html_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=\"%s\">%s</A>", 19);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__call_to_html_8_0_i21);
MR_def_label(fn__query__call_to_html_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tag(MR_tempr1);
	if ((MR_r4 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i24);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i35);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_sv(3);
	MR_GOTO_LAB(fn__query__call_to_html_8_0_i22);
	}
MR_def_label(fn__query__call_to_html_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__call_to_html_8_0_i33);
MR_def_label(fn__query__call_to_html_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i26);
	}
	MR_r4 = MR_ctfield(1, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i28);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_sv(3);
	MR_GOTO_LAB(fn__query__call_to_html_8_0_i22);
MR_def_label(fn__query__call_to_html_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__call_to_html_8_0_i33);
MR_def_label(fn__query__call_to_html_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) == MR_sv(8))) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i31);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_sv(3);
	MR_GOTO_LAB(fn__query__call_to_html_8_0_i22);
MR_def_label(fn__query__call_to_html_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__call_to_html_8_0_i33);
MR_def_label(fn__query__call_to_html_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_tempr1;
	}
MR_def_label(fn__query__call_to_html_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(3)) != 0)) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i40);
	}
	MR_np_call_localret_ent(profile__valid_clique_ptr_2_0,
		fn__query__call_to_html_8_0_i41);
MR_def_label(fn__query__call_to_html_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__call_to_html_8_0_i40);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__call_to_html_8_0_i49);
MR_def_label(fn__query__call_to_html_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__call_to_html_8_0_i45);
MR_def_label(fn__query__call_to_html_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__call_to_html_8_0_i49);
MR_def_label(fn__query__call_to_html_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__call_to_html_8_0_i52);
MR_def_label(fn__query__call_to_html_8_0,52)
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

MR_BEGIN_MODULE(query_module43)
	MR_init_entry1(fn__query__call_site_dynamic_to_html_5_0);
	MR_init_label8(fn__query__call_site_dynamic_to_html_5_0,3,4,5,6,7,8,9,10)
	MR_init_label4(fn__query__call_site_dynamic_to_html_5_0,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__call_site_dynamic_to_html_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__valid_call_site_dynamic_ptr_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("call_site_dynamic_to_html: invalid call_site_dynamic_ptr", 56);
	}
	MR_np_call_localret_ent(require__require_2_0,
		fn__query__call_site_dynamic_to_html_5_0_i3);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__query__call_site_dynamic_to_html_5_0_i4);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		fn__query__call_site_dynamic_to_html_5_0_i5);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		fn__query__call_site_dynamic_to_html_5_0_i6);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_static_map_3_0,
		fn__query__call_site_dynamic_to_html_5_0_i7);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__query__call_site_dynamic_to_html_5_0_i8);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__query__call_site_dynamic_to_html_5_0_i9);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_ctfield(0, MR_r1, 4);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__call_site_dynamic_to_html_5_0_i10);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s:%d", 5);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__call_site_dynamic_to_html_5_0_i15);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,15)
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
	MR_np_call_localret_ent(fn__query__call_to_html_8_0,
		fn__query__call_site_dynamic_to_html_5_0_i16);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__html_format__proc_dynamic_name_2_0,
		fn__query__call_site_dynamic_to_html_5_0_i17);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__call_site_dynamic_to_html_5_0_i18);
MR_def_label(fn__query__call_site_dynamic_to_html_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__html_format__two_id_line_to_html_4_0);

MR_BEGIN_MODULE(query_module44)
	MR_init_entry1(query__clique_ancestors_to_html_7_0);
	MR_init_label8(query__clique_ancestors_to_html_7_0,2,4,6,21,7,8,10,13)
	MR_init_label3(query__clique_ancestors_to_html_7_0,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__clique_ancestors_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		query__clique_ancestors_to_html_7_0_i2);
MR_def_label(query__clique_ancestors_to_html_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		query__clique_ancestors_to_html_7_0_i4);
MR_def_label(query__clique_ancestors_to_html_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__clique_ancestors_to_html_7_0_i21);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		query__clique_ancestors_to_html_7_0_i6);
MR_def_label(query__clique_ancestors_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 4);
	if ((MR_r3 != MR_tempr1)) {
		MR_GOTO_LAB(query__clique_ancestors_to_html_7_0_i7);
	}
	}
MR_def_label(query__clique_ancestors_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(query__clique_ancestors_to_html_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(query__clique_ancestors_to_html_7_0_i8);
	}
	if (MR_INT_GT(MR_sv(3),0)) {
		MR_GOTO_LAB(query__clique_ancestors_to_html_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(query__clique_ancestors_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		query__clique_ancestors_to_html_7_0_i10);
MR_def_label(query__clique_ancestors_to_html_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tfield(1, MR_r4, 0) = MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__call_site_dynamic_to_html_5_0,
		query__clique_ancestors_to_html_7_0_i13);
MR_def_label(query__clique_ancestors_to_html_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__two_id_line_to_html_4_0,
		query__clique_ancestors_to_html_7_0_i14);
MR_def_label(query__clique_ancestors_to_html_7_0,14)
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
	MR_np_localcall_lab(query__clique_ancestors_to_html_7_0,
		query__clique_ancestors_to_html_7_0_i15);
MR_def_label(query__clique_ancestors_to_html_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__clique_ancestors_to_html_7_0_i16);
MR_def_label(query__clique_ancestors_to_html_7_0,16)
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
MR_decl_entry(fn__html_format__header_row_4_0);
MR_decl_entry(fn__html_format__separator_row_3_0);

MR_BEGIN_MODULE(query_module45)
	MR_init_entry1(query__clique_to_html_6_0);
	MR_init_label8(query__clique_to_html_6_0,3,2,4,5,8,10,11,12)
	MR_init_label8(query__clique_to_html_6_0,15,17,20,21,14,28,29,30)
	MR_init_label8(query__clique_to_html_6_0,32,35,31,36,37,38,39,40)
	MR_init_label6(query__clique_to_html_6_0,41,42,43,44,45,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__clique_to_html_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_r6 = MR_ctfield(0, MR_r1, 3);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(query__clique_to_html_6_0_i3);
	}
	MR_r5 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(query__clique_to_html_6_0_i2);
MR_def_label(query__clique_to_html_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r3 = MR_ctfield(1, MR_r6, 0);
	MR_r4 = (MR_Integer) 1;
MR_def_label(query__clique_to_html_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(query__clique_ancestors_to_html_7_0,
		query__clique_to_html_6_0_i4);
MR_def_label(query__clique_to_html_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_clique_members_3_0,
		query__clique_to_html_6_0_i5);
MR_def_label(query__clique_to_html_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__group_proc_dynamics_by_proc_static_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(8) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		query__clique_to_html_6_0_i8);
MR_def_label(query__clique_to_html_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,12,1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		query__clique_to_html_6_0_i10);
MR_def_label(query__clique_to_html_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		query__clique_to_html_6_0_i11);
MR_def_label(query__clique_to_html_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		query__clique_to_html_6_0_i12);
MR_def_label(query__clique_to_html_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		query__clique_to_html_6_0_i15);
MR_def_label(query__clique_to_html_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__clique_to_html_6_0_i14);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		query__clique_to_html_6_0_i17);
MR_def_label(query__clique_to_html_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__proc_group_contains_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,12,3);
	MR_r1 = MR_sv(8);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		query__clique_to_html_6_0_i20);
MR_def_label(query__clique_to_html_6_0,20)
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
		query__clique_to_html_6_0_i21);
MR_def_label(query__clique_to_html_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__procs_in_clique_to_html_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		query__clique_to_html_6_0_i28);
MR_def_label(query__clique_to_html_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__procs_in_clique_to_html_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(10);
	MR_r5 = MR_sv(8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		query__clique_to_html_6_0_i28);
MR_def_label(query__clique_to_html_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_np_call_localret_ent(list__condense_2_0,
		query__clique_to_html_6_0_i29);
MR_def_label(query__clique_to_html_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		query__clique_to_html_6_0_i30);
MR_def_label(query__clique_to_html_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(query__clique_to_html_6_0_i32);
	}
	MR_r2 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Ancestors:", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(query__clique_to_html_6_0_i31);
MR_def_label(query__clique_to_html_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("The %d closest ancestors:", 25);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__clique_to_html_6_0_i35);
MR_def_label(query__clique_to_html_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
MR_def_label(query__clique_to_html_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__html_format__header_row_4_0,
		query__clique_to_html_6_0_i36);
MR_def_label(query__clique_to_html_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		query__clique_to_html_6_0_i37);
MR_def_label(query__clique_to_html_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		query__clique_to_html_6_0_i38);
MR_def_label(query__clique_to_html_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Procedures of the clique:", 25);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__html_format__header_row_4_0,
		query__clique_to_html_6_0_i39);
MR_def_label(query__clique_to_html_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		query__clique_to_html_6_0_i40);
MR_def_label(query__clique_to_html_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__clique_to_html_6_0_i41);
MR_def_label(query__clique_to_html_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__clique_to_html_6_0_i42);
MR_def_label(query__clique_to_html_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__clique_to_html_6_0_i43);
MR_def_label(query__clique_to_html_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__clique_to_html_6_0_i44);
MR_def_label(query__clique_to_html_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__clique_to_html_6_0_i45);
MR_def_label(query__clique_to_html_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__clique_to_html_6_0_i46);
MR_def_label(query__clique_to_html_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__html_format__page_banner_2_0);
MR_decl_entry(fn__html_format__table_start_1_0);
MR_decl_entry(fn__html_format__fields_header_4_0);
MR_decl_entry(fn__html_format__table_end_1_0);
MR_decl_entry(fn__html_format__page_footer_3_0);

MR_BEGIN_MODULE(query_module46)
	MR_init_entry1(query__generate_clique_page_7_0);
	MR_init_label8(query__generate_clique_page_7_0,2,3,6,7,9,10,11,12)
	MR_init_label5(query__generate_clique_page_7_0,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__generate_clique_page_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(query__clique_to_html_6_0,
		query__generate_clique_page_7_0_i2);
MR_def_label(query__generate_clique_page_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__page_banner_2_0,
		query__generate_clique_page_7_0_i3);
MR_def_label(query__generate_clique_page_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>Clique %d:</H3>\n", 20);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__generate_clique_page_7_0_i6);
MR_def_label(query__generate_clique_page_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__table_start_1_0,
		query__generate_clique_page_7_0_i7);
MR_def_label(query__generate_clique_page_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__wrap_clique_links_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__html_format__fields_header_4_0,
		query__generate_clique_page_7_0_i9);
MR_def_label(query__generate_clique_page_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__table_end_1_0,
		query__generate_clique_page_7_0_i10);
MR_def_label(query__generate_clique_page_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		query__generate_clique_page_7_0_i11);
MR_def_label(query__generate_clique_page_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_clique_page_7_0_i12);
MR_def_label(query__generate_clique_page_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_clique_page_7_0_i13);
MR_def_label(query__generate_clique_page_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_clique_page_7_0_i14);
MR_def_label(query__generate_clique_page_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_clique_page_7_0_i15);
MR_def_label(query__generate_clique_page_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_clique_page_7_0_i16);
MR_def_label(query__generate_clique_page_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_clique_page_7_0_i17);
MR_def_label(query__generate_clique_page_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module47)
	MR_init_entry1(fn__query__chase_the_action_5_0);
	MR_init_label8(fn__query__chase_the_action_5_0,32,2,3,6,7,9,10,11)
	MR_init_label7(fn__query__chase_the_action_5_0,12,13,14,15,16,17,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__chase_the_action_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(fn__query__chase_the_action_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_sv(5) = MR_tempr4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(query__clique_to_html_6_0,
		fn__query__chase_the_action_5_0_i2);
MR_def_label(fn__query__chase_the_action_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__page_banner_2_0,
		fn__query__chase_the_action_5_0_i3);
MR_def_label(fn__query__chase_the_action_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>Clique %d:</H3>\n", 20);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__chase_the_action_5_0_i6);
MR_def_label(fn__query__chase_the_action_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__table_start_1_0,
		fn__query__chase_the_action_5_0_i7);
MR_def_label(fn__query__chase_the_action_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__wrap_clique_links_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__html_format__fields_header_4_0,
		fn__query__chase_the_action_5_0_i9);
MR_def_label(fn__query__chase_the_action_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__table_end_1_0,
		fn__query__chase_the_action_5_0_i10);
MR_def_label(fn__query__chase_the_action_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		fn__query__chase_the_action_5_0_i11);
MR_def_label(fn__query__chase_the_action_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__chase_the_action_5_0_i12);
MR_def_label(fn__query__chase_the_action_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__chase_the_action_5_0_i13);
MR_def_label(fn__query__chase_the_action_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__chase_the_action_5_0_i14);
MR_def_label(fn__query__chase_the_action_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__chase_the_action_5_0_i15);
MR_def_label(fn__query__chase_the_action_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__chase_the_action_5_0_i16);
MR_def_label(fn__query__chase_the_action_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__chase_the_action_5_0_i17);
MR_def_label(fn__query__chase_the_action_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(fn__query__chase_the_action_5_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__chase_the_action_5_0_i34);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(fn__query__chase_the_action_5_0_i32);
	}
MR_def_label(fn__query__chase_the_action_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(html_format__proc_static_to_line_group_info_7_0);

MR_BEGIN_MODULE(query_module48)
	MR_init_entry1(fn__query__proc_total_to_two_id_line_7_0);
	MR_init_label3(fn__query__proc_total_to_two_id_line_7_0,2,4,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__proc_total_to_two_id_line_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(html_format__proc_static_to_line_group_info_7_0,
		fn__query__proc_total_to_two_id_line_7_0_i2);
MR_def_label(fn__query__proc_total_to_two_id_line_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__query__proc_total_to_two_id_line_7_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,1,16);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,3,5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id COLSPAN=%d>%s%s%s%s</TD>\n", 38);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__proc_total_to_two_id_line_7_0_i24);
MR_def_label(fn__query__proc_total_to_two_id_line_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,1,17);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,3,5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id COLSPAN=%d>%s%s%s%s</TD>\n", 38);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__proc_total_to_two_id_line_7_0_i24);
MR_def_label(fn__query__proc_total_to_two_id_line_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_ps_own_3_0);
MR_decl_entry(profile__deep_lookup_ps_desc_3_0);

MR_BEGIN_MODULE(query_module49)
	MR_init_entry1(fn__query__lookup_proc_total_to_two_id_line_5_0);
	MR_init_label5(fn__query__lookup_proc_total_to_two_id_line_5_0,2,3,4,6,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__lookup_proc_total_to_two_id_line_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		fn__query__lookup_proc_total_to_two_id_line_5_0_i2);
MR_def_label(fn__query__lookup_proc_total_to_two_id_line_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_ps_desc_3_0,
		fn__query__lookup_proc_total_to_two_id_line_5_0_i3);
MR_def_label(fn__query__lookup_proc_total_to_two_id_line_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(html_format__proc_static_to_line_group_info_7_0,
		fn__query__lookup_proc_total_to_two_id_line_5_0_i4);
MR_def_label(fn__query__lookup_proc_total_to_two_id_line_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__query__lookup_proc_total_to_two_id_line_5_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,1,16);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,3,5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id COLSPAN=%d>%s%s%s%s</TD>\n", 38);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__lookup_proc_total_to_two_id_line_5_0_i26);
MR_def_label(fn__query__lookup_proc_total_to_two_id_line_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,1,17);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,3,5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id COLSPAN=%d>%s%s%s%s</TD>\n", 38);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__lookup_proc_total_to_two_id_line_5_0_i26);
MR_def_label(fn__query__lookup_proc_total_to_two_id_line_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__top_procs__sort_line_groups_2_0);
MR_decl_entry(fn__html_format__two_id_line_group_to_html_4_0);

MR_BEGIN_MODULE(query_module50)
	MR_init_entry1(fn__query__proc_summary_to_html_3_0);
	MR_init_label8(fn__query__proc_summary_to_html_3_0,2,3,4,5,9,10,12,13)
	MR_init_label5(fn__query__proc_summary_to_html_3_0,21,15,16,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__proc_summary_to_html_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(fn__query__lookup_proc_total_to_two_id_line_5_0,
		fn__query__proc_summary_to_html_3_0_i2);
MR_def_label(fn__query__proc_summary_to_html_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__two_id_line_to_html_4_0,
		fn__query__proc_summary_to_html_3_0_i3);
MR_def_label(fn__query__proc_summary_to_html_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__query__proc_summary_to_html_3_0_i4);
MR_def_label(fn__query__proc_summary_to_html_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		fn__query__proc_summary_to_html_3_0_i5);
MR_def_label(fn__query__proc_summary_to_html_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__call_site_summary_to_html_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,12,4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__query__proc_summary_to_html_3_0_i9);
MR_def_label(fn__query__proc_summary_to_html_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, two_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		fn__query__proc_summary_to_html_3_0_i10);
MR_def_label(fn__query__proc_summary_to_html_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__html_format__two_id_line_group_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__query__proc_summary_to_html_3_0_i12);
MR_def_label(fn__query__proc_summary_to_html_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__query__proc_summary_to_html_3_0_i13);
MR_def_label(fn__query__proc_summary_to_html_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__query__proc_summary_to_html_3_0_i15);
	}
MR_def_label(fn__query__proc_summary_to_html_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		fn__query__proc_summary_to_html_3_0_i18);
MR_def_label(fn__query__proc_summary_to_html_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		fn__query__proc_summary_to_html_3_0_i16);
MR_def_label(fn__query__proc_summary_to_html_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__proc_summary_to_html_3_0_i21);
MR_def_label(fn__query__proc_summary_to_html_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__proc_summary_to_html_3_0_i19);
MR_def_label(fn__query__proc_summary_to_html_3_0,19)
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

MR_decl_entry(fn__html_format__proc_static_name_2_0);
MR_decl_entry(fn__html_format__escape_html_string_1_0);

MR_BEGIN_MODULE(query_module51)
	MR_init_entry1(fn__query__generate_proc_page_4_0);
	MR_init_label8(fn__query__generate_proc_page_4_0,2,3,4,7,8,10,11,12)
	MR_init_label8(fn__query__generate_proc_page_4_0,17,22,23,28,29,34,35,40)
	MR_init_label8(fn__query__generate_proc_page_4_0,41,42,43,44,45,46,47,48)
	MR_init_label3(fn__query__generate_proc_page_4_0,49,50,51)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__generate_proc_page_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__page_banner_2_0,
		fn__query__generate_proc_page_4_0_i2);
MR_def_label(fn__query__generate_proc_page_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__html_format__proc_static_name_2_0,
		fn__query__generate_proc_page_4_0_i3);
MR_def_label(fn__query__generate_proc_page_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__html_format__escape_html_string_1_0,
		fn__query__generate_proc_page_4_0_i4);
MR_def_label(fn__query__generate_proc_page_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("<H3>Summary of procedure %s:</H3>\n", 34);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__generate_proc_page_4_0_i7);
MR_def_label(fn__query__generate_proc_page_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__table_start_1_0,
		fn__query__generate_proc_page_4_0_i8);
MR_def_label(fn__query__generate_proc_page_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__wrap_proc_links_5_0);
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
	MR_np_call_localret_ent(fn__html_format__fields_header_4_0,
		fn__query__generate_proc_page_4_0_i10);
MR_def_label(fn__query__generate_proc_page_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__query__proc_summary_to_html_3_0,
		fn__query__generate_proc_page_4_0_i11);
MR_def_label(fn__query__generate_proc_page_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__table_end_1_0,
		fn__query__generate_proc_page_4_0_i12);
MR_def_label(fn__query__generate_proc_page_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tempr5 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_sv(10) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_sv(11) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_sv(12) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr4, 2) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__generate_proc_page_4_0_i17);
MR_def_label(fn__query__generate_proc_page_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,14);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__generate_proc_page_4_0_i22);
MR_def_label(fn__query__generate_proc_page_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__generate_proc_page_4_0_i23);
MR_def_label(fn__query__generate_proc_page_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__generate_proc_page_4_0_i28);
MR_def_label(fn__query__generate_proc_page_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__generate_proc_page_4_0_i29);
MR_def_label(fn__query__generate_proc_page_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,16);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__generate_proc_page_4_0_i34);
MR_def_label(fn__query__generate_proc_page_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__generate_proc_page_4_0_i35);
MR_def_label(fn__query__generate_proc_page_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,17);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__generate_proc_page_4_0_i40);
MR_def_label(fn__query__generate_proc_page_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_page_4_0_i41);
MR_def_label(fn__query__generate_proc_page_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_page_4_0_i42);
MR_def_label(fn__query__generate_proc_page_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_page_4_0_i43);
MR_def_label(fn__query__generate_proc_page_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		fn__query__generate_proc_page_4_0_i44);
MR_def_label(fn__query__generate_proc_page_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_page_4_0_i45);
MR_def_label(fn__query__generate_proc_page_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_page_4_0_i46);
MR_def_label(fn__query__generate_proc_page_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_page_4_0_i47);
MR_def_label(fn__query__generate_proc_page_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_page_4_0_i48);
MR_def_label(fn__query__generate_proc_page_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_page_4_0_i49);
MR_def_label(fn__query__generate_proc_page_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_page_4_0_i50);
MR_def_label(fn__query__generate_proc_page_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_proc_page_4_0_i51);
MR_def_label(fn__query__generate_proc_page_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__drop_3_0);
MR_decl_entry(list__take_upto_3_0);

MR_BEGIN_MODULE(query_module52)
	MR_init_entry1(query__select_line_bunch_6_0);
	MR_init_label5(query__select_line_bunch_6_0,3,2,6,8,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__select_line_bunch_6_0)
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
		query__select_line_bunch_6_0_i3);
MR_def_label(query__select_line_bunch_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__select_line_bunch_6_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(query__select_line_bunch_6_0_i2);
	}
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_sv(2);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r6;
	MR_r4 = ((MR_Integer) MR_r5 - (MR_Integer) MR_sv(5));
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(query__select_line_bunch_6_0_i6);
MR_def_label(query__select_line_bunch_6_0,2)
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
MR_def_label(query__select_line_bunch_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(query__select_line_bunch_6_0_i7);
	}
	MR_np_call_localret_ent(list__take_upto_3_0,
		query__select_line_bunch_6_0_i8);
MR_def_label(query__select_line_bunch_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(query__select_line_bunch_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module53)
	MR_init_entry1(fn__query__proc_callers_banner_8_0);
	MR_init_label8(fn__query__proc_callers_banner_8_0,3,5,9,10,17,24,32,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__proc_callers_banner_8_0)
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
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__proc_callers_banner_8_0_i3);
MR_def_label(fn__query__proc_callers_banner_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__proc_callers_banner_8_0_i5);
MR_def_label(fn__query__proc_callers_banner_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=\"%s\">%s</A>", 19);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__proc_callers_banner_8_0_i9);
MR_def_label(fn__query__proc_callers_banner_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__query__proc_callers_banner_8_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("<H3>There are no %ss calling %s</H3>", 36);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__proc_callers_banner_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__query__proc_callers_banner_8_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("<H3>There is one %s calling %s:</H3>\n", 37);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__proc_callers_banner_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) > (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(fn__query__proc_callers_banner_8_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("<H3>The %d %ss calling %s:</H3>", 31);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__proc_callers_banner_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__query__proc_callers_banner_8_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("<H3>There are %d %ss calling %s, showing first %d:</H3>", 55);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__proc_callers_banner_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr8 = MR_sv(4);
	MR_tempr9 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_tempr8 * (MR_Integer) MR_tempr9);
	MR_r4 = ((((MR_Integer) MR_tempr8 - (MR_Integer) 1) * (MR_Integer) MR_tempr9) + (MR_Integer) 1);
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(fn__query__proc_callers_banner_8_0_i43);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("<H3>There are %d %ss calling %s, showing %d to %d:</H3>", 55);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__proc_callers_banner_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("<H3>There are %d %ss calling %s, showing %d to %d:</H3>", 55);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module54)
	MR_init_entry1(fn__query__contour_file_name_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__contour_file_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".contour", 8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_proc_callers_3_0);
MR_decl_entry(exclude__read_exclude_file_5_0);
MR_decl_entry(fn__html_format__add_ranks_1_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(query_module55)
	MR_init_entry1(query__proc_callers_to_html_8_0);
	MR_init_label8(query__proc_callers_to_html_8_0,2,5,6,9,13,8,4,19)
	MR_init_label8(query__proc_callers_to_html_8_0,3,20,26,31,32,33,37,38)
	MR_init_label8(query__proc_callers_to_html_8_0,39,44,45,50,51,56,57,58)
	MR_init_label8(query__proc_callers_to_html_8_0,60,65,66,67,71,72,73,74)
	MR_init_label8(query__proc_callers_to_html_8_0,79,80,85,86,91,92,93,95)
	MR_init_label8(query__proc_callers_to_html_8_0,100,101,102,106,107,108,109,114)
	MR_init_label8(query__proc_callers_to_html_8_0,115,120,121,126,127,128,130,135)
	MR_init_label8(query__proc_callers_to_html_8_0,136,137,141,142,143,148,149,154)
	MR_init_label8(query__proc_callers_to_html_8_0,155,160,161,162,25,164,165,166)
	MR_init_label8(query__proc_callers_to_html_8_0,168,169,172,177,170,178,181,186)
	MR_init_label8(query__proc_callers_to_html_8_0,179,187,190,195,188,197,198,199)
	MR_init_label1(query__proc_callers_to_html_8_0,201)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__proc_callers_to_html_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_callers_3_0,
		query__proc_callers_to_html_8_0_i2);
MR_def_label(query__proc_callers_to_html_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 6);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(query__proc_callers_to_html_8_0_i4);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	}
	MR_np_call_localret_ent(fn__query__contour_file_name_1_0,
		query__proc_callers_to_html_8_0_i5);
MR_def_label(query__proc_callers_to_html_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(exclude__read_exclude_file_5_0,
		query__proc_callers_to_html_8_0_i6);
MR_def_label(query__proc_callers_to_html_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(query__proc_callers_to_html_8_0_i8);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const("\n<br>", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i9);
MR_def_label(query__proc_callers_to_html_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,12,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__proc_callers_to_html_8_0_i13);
MR_def_label(query__proc_callers_to_html_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(query__proc_callers_to_html_8_0_i3);
MR_def_label(query__proc_callers_to_html_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__pair_contour_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,12,6);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__proc_callers_to_html_8_0_i19);
MR_def_label(query__proc_callers_to_html_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,12,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__proc_callers_to_html_8_0_i19);
MR_def_label(query__proc_callers_to_html_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(query__proc_callers_to_html_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__html_format__proc_static_name_2_0,
		query__proc_callers_to_html_8_0_i20);
MR_def_label(query__proc_callers_to_html_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tempr5 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_sv(11) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_sv(12) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_sv(13) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr4, 2) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(4),
		MR_LABEL_AP(query__proc_callers_to_html_8_0_i26) MR_AND
		MR_LABEL_AP(query__proc_callers_to_html_8_0_i130) MR_AND
		MR_LABEL_AP(query__proc_callers_to_html_8_0_i95) MR_AND
		MR_LABEL_AP(query__proc_callers_to_html_8_0_i60));
	}
MR_def_label(query__proc_callers_to_html_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__accumulate_csds_by_call_site_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_sv(3);
	MR_sv(10) = MR_tempr1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,12,6);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,12,8);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		query__proc_callers_to_html_8_0_i31);
MR_def_label(query__proc_callers_to_html_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		query__proc_callers_to_html_8_0_i32);
MR_def_label(query__proc_callers_to_html_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		query__proc_callers_to_html_8_0_i33);
MR_def_label(query__proc_callers_to_html_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__proc_callers_call_site_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,12,11);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__proc_callers_to_html_8_0_i37);
MR_def_label(query__proc_callers_to_html_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, two_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_ctfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		query__proc_callers_to_html_8_0_i38);
MR_def_label(query__proc_callers_to_html_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i39);
MR_def_label(query__proc_callers_to_html_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,21);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i44);
MR_def_label(query__proc_callers_to_html_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i45);
MR_def_label(query__proc_callers_to_html_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,22);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i50);
MR_def_label(query__proc_callers_to_html_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i51);
MR_def_label(query__proc_callers_to_html_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,23);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i56);
MR_def_label(query__proc_callers_to_html_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i57);
MR_def_label(query__proc_callers_to_html_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i58);
MR_def_label(query__proc_callers_to_html_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(10) = (MR_Word) MR_string_const("call site", 9);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,11);
	MR_GOTO_LAB(query__proc_callers_to_html_8_0_i25);
MR_def_label(query__proc_callers_to_html_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__accumulate_csds_by_clique_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_sv(3);
	MR_sv(13) = MR_tempr1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,12,6);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,12,14);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		query__proc_callers_to_html_8_0_i65);
MR_def_label(query__proc_callers_to_html_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		query__proc_callers_to_html_8_0_i66);
MR_def_label(query__proc_callers_to_html_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		query__proc_callers_to_html_8_0_i67);
MR_def_label(query__proc_callers_to_html_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__proc_callers_clique_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,16);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,12,17);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__proc_callers_to_html_8_0_i71);
MR_def_label(query__proc_callers_to_html_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, one_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_ctfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		query__proc_callers_to_html_8_0_i72);
MR_def_label(query__proc_callers_to_html_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__add_ranks_1_0,
		query__proc_callers_to_html_8_0_i73);
MR_def_label(query__proc_callers_to_html_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i74);
MR_def_label(query__proc_callers_to_html_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,24);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i79);
MR_def_label(query__proc_callers_to_html_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i80);
MR_def_label(query__proc_callers_to_html_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,21);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i85);
MR_def_label(query__proc_callers_to_html_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i86);
MR_def_label(query__proc_callers_to_html_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,22);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i91);
MR_def_label(query__proc_callers_to_html_8_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i92);
MR_def_label(query__proc_callers_to_html_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i93);
MR_def_label(query__proc_callers_to_html_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(10) = (MR_Word) MR_string_const("clique", 6);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,11);
	MR_GOTO_LAB(query__proc_callers_to_html_8_0_i25);
MR_def_label(query__proc_callers_to_html_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__accumulate_csds_by_module_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_sv(3);
	MR_sv(12) = MR_tempr1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,12,6);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,12,20);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		query__proc_callers_to_html_8_0_i100);
MR_def_label(query__proc_callers_to_html_8_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		query__proc_callers_to_html_8_0_i101);
MR_def_label(query__proc_callers_to_html_8_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		query__proc_callers_to_html_8_0_i102);
MR_def_label(query__proc_callers_to_html_8_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__proc_callers_module_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,22);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,12,17);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__proc_callers_to_html_8_0_i106);
MR_def_label(query__proc_callers_to_html_8_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, one_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_ctfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		query__proc_callers_to_html_8_0_i107);
MR_def_label(query__proc_callers_to_html_8_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__add_ranks_1_0,
		query__proc_callers_to_html_8_0_i108);
MR_def_label(query__proc_callers_to_html_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i109);
MR_def_label(query__proc_callers_to_html_8_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,24);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i114);
MR_def_label(query__proc_callers_to_html_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i115);
MR_def_label(query__proc_callers_to_html_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,21);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i120);
MR_def_label(query__proc_callers_to_html_8_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i121);
MR_def_label(query__proc_callers_to_html_8_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,23);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i126);
MR_def_label(query__proc_callers_to_html_8_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i127);
MR_def_label(query__proc_callers_to_html_8_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i128);
MR_def_label(query__proc_callers_to_html_8_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(6) = (MR_Integer) 1;
	MR_sv(10) = (MR_Word) MR_string_const("module", 6);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,11);
	MR_GOTO_LAB(query__proc_callers_to_html_8_0_i25);
MR_def_label(query__proc_callers_to_html_8_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__accumulate_csds_by_procedure_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_sv(3);
	MR_sv(11) = MR_tempr1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,12,6);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,12,24);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		query__proc_callers_to_html_8_0_i135);
MR_def_label(query__proc_callers_to_html_8_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		query__proc_callers_to_html_8_0_i136);
MR_def_label(query__proc_callers_to_html_8_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		query__proc_callers_to_html_8_0_i137);
MR_def_label(query__proc_callers_to_html_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__proc_callers_proc_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,26);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,12,11);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__proc_callers_to_html_8_0_i141);
MR_def_label(query__proc_callers_to_html_8_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, two_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_ctfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		query__proc_callers_to_html_8_0_i142);
MR_def_label(query__proc_callers_to_html_8_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i143);
MR_def_label(query__proc_callers_to_html_8_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,24);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i148);
MR_def_label(query__proc_callers_to_html_8_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i149);
MR_def_label(query__proc_callers_to_html_8_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,22);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i154);
MR_def_label(query__proc_callers_to_html_8_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i155);
MR_def_label(query__proc_callers_to_html_8_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,23);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i160);
MR_def_label(query__proc_callers_to_html_8_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i161);
MR_def_label(query__proc_callers_to_html_8_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i162);
MR_def_label(query__proc_callers_to_html_8_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(10) = (MR_Word) MR_string_const("procedure", 9);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,11);
MR_def_label(query__proc_callers_to_html_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(list__length_2_0,
		query__proc_callers_to_html_8_0_i164);
MR_def_label(query__proc_callers_to_html_8_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Integer) 100;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(query__select_line_bunch_6_0,
		query__proc_callers_to_html_8_0_i165);
MR_def_label(query__proc_callers_to_html_8_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Integer) 100;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__query__proc_callers_banner_8_0,
		query__proc_callers_to_html_8_0_i166);
MR_def_label(query__proc_callers_to_html_8_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__html_format__two_id_line_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__proc_callers_to_html_8_0_i168);
MR_def_label(query__proc_callers_to_html_8_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		query__proc_callers_to_html_8_0_i169);
MR_def_label(query__proc_callers_to_html_8_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(5),1)) {
		MR_GOTO_LAB(query__proc_callers_to_html_8_0_i170);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i172);
MR_def_label(query__proc_callers_to_html_8_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,25);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i177);
MR_def_label(query__proc_callers_to_html_8_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(query__proc_callers_to_html_8_0_i178);
MR_def_label(query__proc_callers_to_html_8_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(12) = (MR_Word) MR_string_const("", 0);
MR_def_label(query__proc_callers_to_html_8_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(5),2)) {
		MR_GOTO_LAB(query__proc_callers_to_html_8_0_i179);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i181);
MR_def_label(query__proc_callers_to_html_8_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,26);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i186);
MR_def_label(query__proc_callers_to_html_8_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(query__proc_callers_to_html_8_0_i187);
MR_def_label(query__proc_callers_to_html_8_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
MR_def_label(query__proc_callers_to_html_8_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(5);
	MR_tempr1 = ((MR_Integer) MR_tempr3 * (MR_Integer) 100);
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(query__proc_callers_to_html_8_0_i188);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr2, 3) = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		query__proc_callers_to_html_8_0_i190);
MR_def_label(query__proc_callers_to_html_8_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,27);
	MR_r1 = (MR_Word) MR_string_const("<A CLASS=\"button\" HREF=\"%s\">%s</A>\n", 35);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__proc_callers_to_html_8_0_i195);
MR_def_label(query__proc_callers_to_html_8_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i197);
MR_def_label(query__proc_callers_to_html_8_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i197);
MR_def_label(query__proc_callers_to_html_8_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i198);
MR_def_label(query__proc_callers_to_html_8_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_callers_to_html_8_0_i199);
MR_def_label(query__proc_callers_to_html_8_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(query__proc_callers_to_html_8_0_i201);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(query__proc_callers_to_html_8_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(1, MR_sv(7), 0);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module56)
	MR_init_entry1(query__generate_proc_callers_page_9_0);
	MR_init_label8(query__generate_proc_callers_page_9_0,2,4,8,9,11,13,14,15)
	MR_init_label7(query__generate_proc_callers_page_9_0,16,17,18,20,21,22,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__generate_proc_callers_page_9_0)
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
	MR_np_call_localret_ent(query__proc_callers_to_html_8_0,
		query__generate_proc_callers_page_9_0_i2);
MR_def_label(query__generate_proc_callers_page_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(query__generate_proc_callers_page_9_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("<H3>%s</H3>\n", 12);
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(query__generate_proc_callers_page_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__html_format__page_banner_2_0,
		query__generate_proc_callers_page_9_0_i8);
MR_def_label(query__generate_proc_callers_page_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(query__generate_proc_callers_page_9_0_i9);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		query__generate_proc_callers_page_9_0_i20);
MR_def_label(query__generate_proc_callers_page_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__html_format__table_start_1_0,
		query__generate_proc_callers_page_9_0_i11);
MR_def_label(query__generate_proc_callers_page_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__wrap_proc_callers_links_7_0);
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
	MR_np_call_localret_ent(fn__html_format__fields_header_4_0,
		query__generate_proc_callers_page_9_0_i13);
MR_def_label(query__generate_proc_callers_page_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__html_format__table_end_1_0,
		query__generate_proc_callers_page_9_0_i14);
MR_def_label(query__generate_proc_callers_page_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("<p>\n", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_proc_callers_page_9_0_i15);
MR_def_label(query__generate_proc_callers_page_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_proc_callers_page_9_0_i16);
MR_def_label(query__generate_proc_callers_page_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_proc_callers_page_9_0_i17);
MR_def_label(query__generate_proc_callers_page_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_proc_callers_page_9_0_i18);
MR_def_label(query__generate_proc_callers_page_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		query__generate_proc_callers_page_9_0_i20);
MR_def_label(query__generate_proc_callers_page_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_proc_callers_page_9_0_i21);
MR_def_label(query__generate_proc_callers_page_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_proc_callers_page_9_0_i22);
MR_def_label(query__generate_proc_callers_page_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__generate_proc_callers_page_9_0_i23);
MR_def_label(query__generate_proc_callers_page_9_0,23)
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

MR_BEGIN_MODULE(query_module57)
	MR_init_entry1(fn__query__modules_to_html_2_0);
	MR_init_label8(fn__query__modules_to_html_2_0,2,5,8,9,10,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__modules_to_html_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r3 = MR_ctfield(0, MR_sv(2), 25);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__query__modules_to_html_2_0_i2);
MR_def_label(fn__query__modules_to_html_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,12,28);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		fn__query__modules_to_html_2_0_i5);
MR_def_label(fn__query__modules_to_html_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__module_summary_to_html_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,12,17);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		fn__query__modules_to_html_2_0_i8);
MR_def_label(fn__query__modules_to_html_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, one_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_ctfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		fn__query__modules_to_html_2_0_i9);
MR_def_label(fn__query__modules_to_html_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__add_ranks_1_0,
		fn__query__modules_to_html_2_0_i10);
MR_def_label(fn__query__modules_to_html_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__html_format__two_id_line_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,11);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__query__modules_to_html_2_0_i13);
MR_def_label(fn__query__modules_to_html_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		fn__query__modules_to_html_2_0_i14);
MR_def_label(fn__query__modules_to_html_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__query__modules_to_html_2_0_i15);
MR_def_label(fn__query__modules_to_html_2_0,15)
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


MR_BEGIN_MODULE(query_module58)
	MR_init_entry1(fn__query__generate_modules_page_3_0);
	MR_init_label8(fn__query__generate_modules_page_3_0,2,3,5,6,7,8,9,10)
	MR_init_label3(fn__query__generate_modules_page_3_0,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__generate_modules_page_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__html_format__page_banner_2_0,
		fn__query__generate_modules_page_3_0_i2);
MR_def_label(fn__query__generate_modules_page_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__html_format__table_start_1_0,
		fn__query__generate_modules_page_3_0_i3);
MR_def_label(fn__query__generate_modules_page_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__wrap_modules_links_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__html_format__fields_header_4_0,
		fn__query__generate_modules_page_3_0_i5);
MR_def_label(fn__query__generate_modules_page_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__query__modules_to_html_2_0,
		fn__query__generate_modules_page_3_0_i6);
MR_def_label(fn__query__generate_modules_page_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__html_format__table_end_1_0,
		fn__query__generate_modules_page_3_0_i7);
MR_def_label(fn__query__generate_modules_page_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		fn__query__generate_modules_page_3_0_i8);
MR_def_label(fn__query__generate_modules_page_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_modules_page_3_0_i9);
MR_def_label(fn__query__generate_modules_page_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_modules_page_3_0_i10);
MR_def_label(fn__query__generate_modules_page_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_modules_page_3_0_i11);
MR_def_label(fn__query__generate_modules_page_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_modules_page_3_0_i12);
MR_def_label(fn__query__generate_modules_page_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>The modules of the program:</H3>\n", 37);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_modules_page_3_0_i13);
MR_def_label(fn__query__generate_modules_page_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module59)
	MR_init_entry1(fn__query__generate_module_page_5_0);
	MR_init_label8(fn__query__generate_module_page_5_0,2,3,6,7,9,10,11,12)
	MR_init_label4(fn__query__generate_module_page_5_0,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__generate_module_page_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,
		fn__query__generate_module_page_5_0_i2);
MR_def_label(fn__query__generate_module_page_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__page_banner_2_0,
		fn__query__generate_module_page_5_0_i3);
MR_def_label(fn__query__generate_module_page_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>The procedures of module %s:</H3>\n", 38);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__generate_module_page_5_0_i6);
MR_def_label(fn__query__generate_module_page_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__table_start_1_0,
		fn__query__generate_module_page_5_0_i7);
MR_def_label(fn__query__generate_module_page_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__wrap_module_links_5_0);
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
	MR_np_call_localret_ent(fn__html_format__fields_header_4_0,
		fn__query__generate_module_page_5_0_i9);
MR_def_label(fn__query__generate_module_page_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__table_end_1_0,
		fn__query__generate_module_page_5_0_i10);
MR_def_label(fn__query__generate_module_page_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		fn__query__generate_module_page_5_0_i11);
MR_def_label(fn__query__generate_module_page_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_module_page_5_0_i12);
MR_def_label(fn__query__generate_module_page_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_module_page_5_0_i13);
MR_def_label(fn__query__generate_module_page_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_module_page_5_0_i14);
MR_def_label(fn__query__generate_module_page_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_module_page_5_0_i15);
MR_def_label(fn__query__generate_module_page_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__generate_module_page_5_0_i16);
MR_def_label(fn__query__generate_module_page_5_0,16)
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

MR_decl_entry(map__search_3_0);
MR_decl_entry(create_report__create_report_3_0);
MR_decl_entry(display_report__display_report_4_0);
MR_decl_entry(html_format__htmlize_display_3_0);

MR_BEGIN_MODULE(query_module60)
	MR_init_entry1(query__exec_6_0);
	MR_init_label8(query__exec_6_0,84,153,71,73,87,3,5,155)
	MR_init_label8(query__exec_6_0,10,8,13,14,158,24,23,27)
	MR_init_label8(query__exec_6_0,28,156,37,35,40,41,157,48)
	MR_init_label8(query__exec_6_0,46,51,52,53,56,58,64,152)
	MR_init_label2(query__exec_6_0,81,82)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__exec_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(query__exec_6_0_i84) MR_AND
		MR_LABEL_AP(query__exec_6_0_i152) MR_AND
		MR_LABEL_AP(query__exec_6_0_i153) MR_AND
		MR_LABEL_AP(query__exec_6_0_i87));
MR_def_label(query__exec_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(query__exec_6_0_i152);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(query__exec_6_0_i152);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(query__exec_6_0_i152);
	}
	MR_np_tailcall_ent(fn__query__generate_modules_page_3_0);
	}
MR_def_label(query__exec_6_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_r1, 4);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		query__exec_6_0_i71);
MR_def_label(query__exec_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(query__exec_6_0_i73);
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
	MR_np_tailcall_ent(query__generate_clique_page_7_0);
	}
MR_def_label(query__exec_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_ctfield(1, MR_sv(4), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__query__chase_the_action_5_0);
	}
MR_def_label(query__exec_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(query__exec_6_0_i155) MR_AND
		MR_LABEL_AP(query__exec_6_0_i156) MR_AND
		MR_LABEL_AP(query__exec_6_0_i157) MR_AND
		MR_LABEL_AP(query__exec_6_0_i158) MR_AND
		MR_LABEL_AP(query__exec_6_0_i152) MR_AND
		MR_LABEL_AP(query__exec_6_0_i58) MR_AND
		MR_LABEL_AP(query__exec_6_0_i56) MR_AND
		MR_LABEL_AP(query__exec_6_0_i5) MR_AND
		MR_LABEL_AP(query__exec_6_0_i3) MR_AND
		MR_LABEL_AP(query__exec_6_0_i64));
MR_def_label(query__exec_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__query__generate_call_site_dynamic_debug_page_2_0);
MR_def_label(query__exec_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__query__generate_call_site_static_debug_page_2_0);
MR_def_label(query__exec_6_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(profile__valid_clique_ptr_2_0,
		query__exec_6_0_i10);
MR_def_label(query__exec_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__exec_6_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 100;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(query__generate_clique_page_7_0);
MR_def_label(query__exec_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__html_format__page_banner_2_0,
		query__exec_6_0_i13);
MR_def_label(query__exec_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		query__exec_6_0_i14);
MR_def_label(query__exec_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There is no clique with that number.\n", 37);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__exec_6_0_i53);
MR_def_label(query__exec_6_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r3 = MR_ctfield(0, MR_r3, 25);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__search_3_0,
		query__exec_6_0_i24);
MR_def_label(query__exec_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__exec_6_0_i23);
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
	MR_np_tailcall_ent(fn__query__generate_module_page_5_0);
	}
MR_def_label(query__exec_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__html_format__page_banner_2_0,
		query__exec_6_0_i27);
MR_def_label(query__exec_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		query__exec_6_0_i28);
MR_def_label(query__exec_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There is no procedure with that number.\n", 40);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__exec_6_0_i53);
MR_def_label(query__exec_6_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		query__exec_6_0_i37);
MR_def_label(query__exec_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__exec_6_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__query__generate_proc_page_4_0);
MR_def_label(query__exec_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__html_format__page_banner_2_0,
		query__exec_6_0_i40);
MR_def_label(query__exec_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		query__exec_6_0_i41);
MR_def_label(query__exec_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There is no procedure with that number.\n", 40);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__exec_6_0_i53);
MR_def_label(query__exec_6_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		query__exec_6_0_i48);
MR_def_label(query__exec_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__exec_6_0_i46);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(query__generate_proc_callers_page_9_0);
MR_def_label(query__exec_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__html_format__page_banner_2_0,
		query__exec_6_0_i51);
MR_def_label(query__exec_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__html_format__page_footer_3_0,
		query__exec_6_0_i52);
MR_def_label(query__exec_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There is no procedure with that number.\n", 40);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__exec_6_0_i53);
MR_def_label(query__exec_6_0,53)
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
MR_def_label(query__exec_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__query__generate_proc_dynamic_debug_page_2_0);
MR_def_label(query__exec_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__query__generate_proc_static_debug_page_2_0);
MR_def_label(query__exec_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__query__generate_clique_debug_page_2_0);
MR_def_label(query__exec_6_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(create_report__create_report_3_0,
		query__exec_6_0_i81);
MR_def_label(query__exec_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(display_report__display_report_4_0,
		query__exec_6_0_i82);
MR_def_label(query__exec_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(html_format__htmlize_display_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module61)
	MR_init_entry1(query__append_slot_to_string_3_0);
	MR_init_label8(query__append_slot_to_string_3_0,4,6,7,10,11,3,13,14)
	MR_init_label1(query__append_slot_to_string_3_0,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__append_slot_to_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(query__append_slot_to_string_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		query__append_slot_to_string_3_0_i4);
MR_def_label(query__append_slot_to_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,5);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(list__foldl_4_1,
		query__append_slot_to_string_3_0_i6);
MR_def_label(query__append_slot_to_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		query__append_slot_to_string_3_0_i7);
MR_def_label(query__append_slot_to_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("multi(%d): [", 12);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__append_slot_to_string_3_0_i10);
MR_def_label(query__append_slot_to_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("]", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__append_slot_to_string_3_0_i11);
MR_def_label(query__append_slot_to_string_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__append_slot_to_string_3_0_i14);
MR_def_label(query__append_slot_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		query__append_slot_to_string_3_0_i13);
MR_def_label(query__append_slot_to_string_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("normal ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__append_slot_to_string_3_0_i14);
MR_def_label(query__append_slot_to_string_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__append_slot_to_string_3_0_i15);
MR_def_label(query__append_slot_to_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module62)
	MR_init_entry1(query__append_csdi_to_string_3_0);
	MR_init_label2(query__append_csdi_to_string_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__append_csdi_to_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		query__append_csdi_to_string_3_0_i2);
MR_def_label(query__append_csdi_to_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__append_csdi_to_string_3_0_i3);
MR_def_label(query__append_csdi_to_string_3_0,3)
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


MR_BEGIN_MODULE(query_module63)
	MR_init_entry1(fn__query__append_pdi_to_string_2_0);
	MR_init_label2(fn__query__append_pdi_to_string_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__append_pdi_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__append_pdi_to_string_2_0_i2);
MR_def_label(fn__query__append_pdi_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__append_pdi_to_string_2_0_i3);
MR_def_label(fn__query__append_pdi_to_string_2_0,3)
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


MR_BEGIN_MODULE(query_module64)
	MR_init_entry1(query__not_mercury_runtime_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__not_mercury_runtime_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("Mercury runtime", 15)) != 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(measurements__is_inactive_1_0);

MR_BEGIN_MODULE(query_module65)
	MR_init_entry1(fn__query__module_summary_to_html_3_0);
	MR_init_label5(fn__query__module_summary_to_html_3_0,5,3,8,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__module_summary_to_html_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 0);
	MR_tempr5 = MR_r1;
	MR_tempr3 = MR_ctfield(0, MR_ctfield(0, MR_tempr5, 8), 1);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(fn__query__module_summary_to_html_3_0_i3);
	}
	MR_sv(1) = MR_tempr5;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(measurements__is_inactive_1_0,
		fn__query__module_summary_to_html_3_0_i5);
MR_def_label(fn__query__module_summary_to_html_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__query__module_summary_to_html_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
MR_def_label(fn__query__module_summary_to_html_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_sv(4) = MR_r5;
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__module_summary_to_html_3_0_i8);
MR_def_label(fn__query__module_summary_to_html_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("<TD><A HREF=\"%s\">%s</A></TD>\n", 29);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__module_summary_to_html_3_0_i13);
MR_def_label(fn__query__module_summary_to_html_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__query__module_summary_to_html_3_0,1)
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

MR_BEGIN_MODULE(query_module66)
	MR_init_entry1(query__proc_group_contains_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__proc_group_contains_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(list__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(query_module67)
	MR_init_entry1(query__group_proc_dynamics_by_proc_static_4_0);
	MR_init_label4(query__group_proc_dynamics_by_proc_static_4_0,3,4,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__group_proc_dynamics_by_proc_static_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__valid_proc_dynamic_ptr_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("group_proc_dynamics_by_proc_static: invalid PDPtr", 49);
	}
	MR_np_call_localret_ent(require__require_2_0,
		query__group_proc_dynamics_by_proc_static_4_0_i3);
MR_def_label(query__group_proc_dynamics_by_proc_static_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		query__group_proc_dynamics_by_proc_static_4_0_i4);
MR_def_label(query__group_proc_dynamics_by_proc_static_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		query__group_proc_dynamics_by_proc_static_4_0_i7);
MR_def_label(query__group_proc_dynamics_by_proc_static_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__group_proc_dynamics_by_proc_static_4_0_i5);
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
MR_def_label(query__group_proc_dynamics_by_proc_static_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,7);
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

MR_BEGIN_MODULE(query_module68)
	MR_init_entry1(query__child_call_sites_4_0);
	MR_init_label4(query__child_call_sites_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__child_call_sites_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(profile__lookup_proc_dynamics_3_0,
		query__child_call_sites_4_0_i2);
MR_def_label(query__child_call_sites_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		query__child_call_sites_4_0_i3);
MR_def_label(query__child_call_sites_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		query__child_call_sites_4_0_i4);
MR_def_label(query__child_call_sites_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		query__child_call_sites_4_0_i5);
MR_def_label(query__child_call_sites_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(assoc_list__from_corresponding_lists_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_pd_own_3_0);
MR_decl_entry(profile__deep_lookup_pd_desc_3_0);

MR_BEGIN_MODULE(query_module69)
	MR_init_entry1(query__proc_in_clique_to_html_7_0);
	MR_init_label8(query__proc_in_clique_to_html_7_0,3,5,6,7,8,9,10,11)
	MR_init_label8(query__proc_in_clique_to_html_7_0,12,14,21,22,23,24,26,27)
	MR_init_label4(query__proc_in_clique_to_html_7_0,28,29,30,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__proc_in_clique_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(profile__valid_proc_dynamic_ptr_2_0,
		query__proc_in_clique_to_html_7_0_i3);
MR_def_label(query__proc_in_clique_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__proc_in_clique_to_html_7_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_pd_own_3_0,
		query__proc_in_clique_to_html_7_0_i5);
MR_def_label(query__proc_in_clique_to_html_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_pd_desc_3_0,
		query__proc_in_clique_to_html_7_0_i6);
MR_def_label(query__proc_in_clique_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		query__proc_in_clique_to_html_7_0_i7);
MR_def_label(query__proc_in_clique_to_html_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__query__proc_total_to_two_id_line_7_0,
		query__proc_in_clique_to_html_7_0_i8);
MR_def_label(query__proc_in_clique_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_tempr2, 6);
	MR_r2 = MR_ctfield(0, MR_tempr2, 8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(query__child_call_sites_4_0,
		query__proc_in_clique_to_html_7_0_i9);
MR_def_label(query__proc_in_clique_to_html_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		query__proc_in_clique_to_html_7_0_i10);
MR_def_label(query__proc_in_clique_to_html_7_0,10)
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
	MR_np_call_localret_ent(fn__html_format__two_id_line_to_html_4_0,
		query__proc_in_clique_to_html_7_0_i11);
MR_def_label(query__proc_in_clique_to_html_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_in_clique_to_html_7_0_i12);
MR_def_label(query__proc_in_clique_to_html_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(query__proc_in_clique_to_html_7_0_i14);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(query__proc_in_clique_to_html_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__call_site_clique_to_html_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,12,4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,32);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,29);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		query__proc_in_clique_to_html_7_0_i21);
MR_def_label(query__proc_in_clique_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		query__proc_in_clique_to_html_7_0_i22);
MR_def_label(query__proc_in_clique_to_html_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		query__proc_in_clique_to_html_7_0_i23);
MR_def_label(query__proc_in_clique_to_html_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, two_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_ctfield(0, MR_sv(1), 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		query__proc_in_clique_to_html_7_0_i24);
MR_def_label(query__proc_in_clique_to_html_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__html_format__two_id_line_group_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__proc_in_clique_to_html_7_0_i26);
MR_def_label(query__proc_in_clique_to_html_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		query__proc_in_clique_to_html_7_0_i27);
MR_def_label(query__proc_in_clique_to_html_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		query__proc_in_clique_to_html_7_0_i28);
MR_def_label(query__proc_in_clique_to_html_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_in_clique_to_html_7_0_i29);
MR_def_label(query__proc_in_clique_to_html_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__proc_in_clique_to_html_7_0_i30);
MR_def_label(query__proc_in_clique_to_html_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(query__proc_in_clique_to_html_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
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

MR_BEGIN_MODULE(query_module70)
	MR_init_entry1(query__procs_in_clique_to_html_7_0);
	MR_init_label8(query__procs_in_clique_to_html_7_0,3,39,8,10,11,12,13,16)
	MR_init_label8(query__procs_in_clique_to_html_7_0,17,18,19,20,21,22,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__procs_in_clique_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r5, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(query__procs_in_clique_to_html_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(query__procs_in_clique_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(query__procs_in_clique_to_html_7_0_i39);
	}
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	MR_np_tailcall_ent(query__proc_in_clique_to_html_7_0);
	}
MR_def_label(query__procs_in_clique_to_html_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__deep_lookup_pd_own_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_r5, 0);
	MR_tempr3 = MR_r6;
	MR_sv(6) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_3_0,
		query__procs_in_clique_to_html_7_0_i8);
MR_def_label(query__procs_in_clique_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(profile__deep_lookup_pd_desc_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_3_0,
		query__procs_in_clique_to_html_7_0_i10);
MR_def_label(query__procs_in_clique_to_html_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__sum_own_infos_1_0,
		query__procs_in_clique_to_html_7_0_i11);
MR_def_label(query__procs_in_clique_to_html_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__sum_inherit_infos_1_0,
		query__procs_in_clique_to_html_7_0_i12);
MR_def_label(query__procs_in_clique_to_html_7_0,12)
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
	MR_np_call_localret_ent(fn__query__proc_total_to_two_id_line_7_0,
		query__procs_in_clique_to_html_7_0_i13);
MR_def_label(query__procs_in_clique_to_html_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__proc_in_clique_to_html_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map2_4_0,
		query__procs_in_clique_to_html_7_0_i16);
MR_def_label(query__procs_in_clique_to_html_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_np_call_localret_ent(list__condense_2_0,
		query__procs_in_clique_to_html_7_0_i17);
MR_def_label(query__procs_in_clique_to_html_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		query__procs_in_clique_to_html_7_0_i18);
MR_def_label(query__procs_in_clique_to_html_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		query__procs_in_clique_to_html_7_0_i19);
MR_def_label(query__procs_in_clique_to_html_7_0,19)
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
	MR_np_call_localret_ent(fn__html_format__two_id_line_to_html_4_0,
		query__procs_in_clique_to_html_7_0_i20);
MR_def_label(query__procs_in_clique_to_html_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		query__procs_in_clique_to_html_7_0_i21);
MR_def_label(query__procs_in_clique_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__procs_in_clique_to_html_7_0_i22);
MR_def_label(query__procs_in_clique_to_html_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__procs_in_clique_to_html_7_0_i23);
MR_def_label(query__procs_in_clique_to_html_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__procs_in_clique_to_html_7_0_i24);
MR_def_label(query__procs_in_clique_to_html_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module71)
	MR_init_entry1(fn__query__lookup_proc_total_to_html_5_0);
	MR_init_label8(fn__query__lookup_proc_total_to_html_5_0,2,6,4,8,9,11,31,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__lookup_proc_total_to_html_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		fn__query__lookup_proc_total_to_html_5_0_i2);
MR_def_label(fn__query__lookup_proc_total_to_html_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_sv(1), 8), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__lookup_proc_total_to_html_5_0_i4);
	}
	MR_sv(6) = MR_r1;
	}
	MR_np_call_localret_ent(measurements__is_inactive_1_0,
		fn__query__lookup_proc_total_to_html_5_0_i6);
MR_def_label(fn__query__lookup_proc_total_to_html_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__query__lookup_proc_total_to_html_5_0_i1);
	}
	MR_r1 = MR_sv(6);
MR_def_label(fn__query__lookup_proc_total_to_html_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_ps_desc_3_0,
		fn__query__lookup_proc_total_to_html_5_0_i8);
MR_def_label(fn__query__lookup_proc_total_to_html_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(html_format__proc_static_to_line_group_info_7_0,
		fn__query__lookup_proc_total_to_html_5_0_i9);
MR_def_label(fn__query__lookup_proc_total_to_html_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__query__lookup_proc_total_to_html_5_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,1,16);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id COLSPAN=%d>%s%s%s%s</TD>\n", 38);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__lookup_proc_total_to_html_5_0_i31);
MR_def_label(fn__query__lookup_proc_total_to_html_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,1,17);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id COLSPAN=%d>%s%s%s%s</TD>\n", 38);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__lookup_proc_total_to_html_5_0_i31);
MR_def_label(fn__query__lookup_proc_total_to_html_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__query__lookup_proc_total_to_html_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
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

MR_BEGIN_MODULE(query_module72)
	MR_init_entry1(fn__query__maybe_extract_action_clique_4_0);
	MR_init_label8(fn__query__maybe_extract_action_clique_4_0,30,3,4,17,5,6,7,8)
	MR_init_label2(fn__query__maybe_extract_action_clique_4_0,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__maybe_extract_action_clique_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,100)) {
		MR_GOTO_LAB(fn__query__maybe_extract_action_clique_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__query__maybe_extract_action_clique_4_0,30)
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
		fn__query__maybe_extract_action_clique_4_0_i3);
MR_def_label(fn__query__maybe_extract_action_clique_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		fn__query__maybe_extract_action_clique_4_0_i4);
MR_def_label(fn__query__maybe_extract_action_clique_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(fn__query__maybe_extract_action_clique_4_0_i5);
	}
MR_def_label(fn__query__maybe_extract_action_clique_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(fn__query__maybe_extract_action_clique_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		fn__query__maybe_extract_action_clique_4_0_i6);
MR_def_label(fn__query__maybe_extract_action_clique_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(5), 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_inherit_2_0,
		fn__query__maybe_extract_action_clique_4_0_i7);
MR_def_label(fn__query__maybe_extract_action_clique_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__profile__root_total_info_1_0,
		fn__query__maybe_extract_action_clique_4_0_i8);
MR_def_label(fn__query__maybe_extract_action_clique_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__query__maybe_extract_action_clique_4_0_i9);
MR_def_label(fn__query__maybe_extract_action_clique_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		fn__query__maybe_extract_action_clique_4_0_i10);
MR_def_label(fn__query__maybe_extract_action_clique_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = ((MR_Integer) MR_sv(1) * (MR_Integer) 100);
	MR_tempr2 = ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(3));
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(fn__query__maybe_extract_action_clique_4_0_i17);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module73)
	MR_init_entry1(fn__query__downward_summary_display_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__downward_summary_display_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,11,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(top_procs__sum_line_group_measurements_3_0);

MR_BEGIN_MODULE(query_module74)
	MR_init_entry1(query__multi_call_site_clique_to_html_10_0);
	MR_init_label8(query__multi_call_site_clique_to_html_10_0,6,4,5,7,2,9,11,14)
	MR_init_label8(query__multi_call_site_clique_to_html_10_0,17,18,19,20,25,28,29,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__multi_call_site_clique_to_html_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r9 = MR_tag(MR_tempr2);
	if ((MR_r9 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(query__multi_call_site_clique_to_html_10_0_i6);
	}
	MR_tempr1 = MR_unmkbody(MR_tempr2);
	MR_r10 = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(query__multi_call_site_clique_to_html_10_0_i7);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(query__multi_call_site_clique_to_html_10_0_i4);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(query__multi_call_site_clique_to_html_10_0_i5);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r2 = (MR_Word) MR_string_const("callback", 8);
	MR_GOTO_LAB(query__multi_call_site_clique_to_html_10_0_i2);
	}
MR_def_label(query__multi_call_site_clique_to_html_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r2 = (MR_Word) MR_string_const("normal_call", 11);
	MR_GOTO_LAB(query__multi_call_site_clique_to_html_10_0_i2);
MR_def_label(query__multi_call_site_clique_to_html_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r2 = (MR_Word) MR_string_const("higher_order_call", 17);
	MR_GOTO_LAB(query__multi_call_site_clique_to_html_10_0_i2);
MR_def_label(query__multi_call_site_clique_to_html_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r2 = (MR_Word) MR_string_const("method_call", 11);
	MR_GOTO_LAB(query__multi_call_site_clique_to_html_10_0_i2);
MR_def_label(query__multi_call_site_clique_to_html_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r2 = (MR_Word) MR_string_const("special_call", 12);
MR_def_label(query__multi_call_site_clique_to_html_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0,
		query__multi_call_site_clique_to_html_10_0_i9);
MR_def_label(query__multi_call_site_clique_to_html_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,12,11);
	MR_np_call_localret_ent(fn__query__downward_summary_display_0_0,
		query__multi_call_site_clique_to_html_10_0_i11);
MR_def_label(query__multi_call_site_clique_to_html_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__query__call_site_dynamic_to_html_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 5) = MR_r1;
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__multi_call_site_clique_to_html_10_0_i14);
MR_def_label(query__multi_call_site_clique_to_html_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__maybe_extract_action_clique_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		query__multi_call_site_clique_to_html_10_0_i17);
MR_def_label(query__multi_call_site_clique_to_html_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		query__multi_call_site_clique_to_html_10_0_i18);
MR_def_label(query__multi_call_site_clique_to_html_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, two_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(top_procs__sum_line_group_measurements_3_0,
		query__multi_call_site_clique_to_html_10_0_i19);
MR_def_label(query__multi_call_site_clique_to_html_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		query__multi_call_site_clique_to_html_10_0_i20);
MR_def_label(query__multi_call_site_clique_to_html_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s:%d</TD>\n", 24);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__multi_call_site_clique_to_html_10_0_i25);
MR_def_label(query__multi_call_site_clique_to_html_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		query__multi_call_site_clique_to_html_10_0_i28);
MR_def_label(query__multi_call_site_clique_to_html_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__multi_call_site_clique_to_html_10_0_i29);
MR_def_label(query__multi_call_site_clique_to_html_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 4);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(query__multi_call_site_clique_to_html_10_0_i31);
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
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(query__multi_call_site_clique_to_html_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_TAG_COMMON(0,18,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);
MR_decl_entry(fn__html_format__line_to_two_id_subline_group_1_0);
MR_decl_entry(html_format__call_site_context_4_0);

MR_BEGIN_MODULE(query_module75)
	MR_init_entry1(query__call_site_clique_to_html_7_0);
	MR_init_label8(query__call_site_clique_to_html_7_0,2,6,5,9,14,15,17,8)
	MR_init_label5(query__call_site_clique_to_html_7_0,3,21,20,19,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__call_site_clique_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		query__call_site_clique_to_html_7_0_i2);
MR_def_label(query__call_site_clique_to_html_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 2);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(query__call_site_clique_to_html_7_0_i3);
	}
	if (MR_PTAG_TESTR(MR_sv(6),0)) {
		MR_GOTO_LAB(query__call_site_clique_to_html_7_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_sv(6), 0);
	MR_GOTO_LAB(query__call_site_clique_to_html_7_0_i5);
MR_def_label(query__call_site_clique_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("call_site_clique_to_html: normal_call error", 43);
	MR_np_call_localret_ent(require__error_1_0,
		query__call_site_clique_to_html_7_0_i5);
MR_def_label(query__call_site_clique_to_html_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		query__call_site_clique_to_html_7_0_i9);
MR_def_label(query__call_site_clique_to_html_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__call_site_clique_to_html_7_0_i8);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,2);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(fn__query__call_site_dynamic_to_html_5_0,
		query__call_site_clique_to_html_7_0_i14);
MR_def_label(query__call_site_clique_to_html_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, two_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__line_to_two_id_subline_group_1_0,
		query__call_site_clique_to_html_7_0_i15);
MR_def_label(query__call_site_clique_to_html_7_0,15)
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
	MR_np_call_localret_ent(fn__query__maybe_extract_action_clique_4_0,
		query__call_site_clique_to_html_7_0_i17);
MR_def_label(query__call_site_clique_to_html_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(query__call_site_clique_to_html_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(query__call_site_clique_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(query__call_site_clique_to_html_7_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		query__call_site_clique_to_html_7_0_i21);
MR_def_label(query__call_site_clique_to_html_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(query__call_site_clique_to_html_7_0_i19);
MR_def_label(query__call_site_clique_to_html_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("call_site_clique_to_html: non-normal_call error", 47);
	MR_np_call_localret_ent(require__error_1_0,
		query__call_site_clique_to_html_7_0_i19);
MR_def_label(query__call_site_clique_to_html_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(html_format__call_site_context_4_0,
		query__call_site_clique_to_html_7_0_i23);
MR_def_label(query__call_site_clique_to_html_7_0,23)
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
	MR_np_tailcall_ent(query__multi_call_site_clique_to_html_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__zero_own_prof_info_0_0);
MR_decl_entry(fn__measurements__zero_inherit_prof_info_0_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(fn__html_format__proc_static_to_html_ref_3_0);

MR_BEGIN_MODULE(query_module76)
	MR_init_entry1(fn__query__call_site_summary_group_to_html_7_0);
	MR_init_label5(fn__query__call_site_summary_group_to_html_7_0,3,4,5,6,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__call_site_summary_group_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__accumulate_csd_prof_info_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_r6;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_tempr3 = MR_r7;
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__query__call_site_summary_group_to_html_7_0_i3);
MR_def_label(fn__query__call_site_summary_group_to_html_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__query__call_site_summary_group_to_html_7_0_i4);
MR_def_label(fn__query__call_site_summary_group_to_html_7_0,4)
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
		fn__query__call_site_summary_group_to_html_7_0_i5);
MR_def_label(fn__query__call_site_summary_group_to_html_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(8), 3);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__html_format__proc_static_to_html_ref_3_0,
		fn__query__call_site_summary_group_to_html_7_0_i6);
MR_def_label(fn__query__call_site_summary_group_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__call_site_summary_group_to_html_7_0_i9);
MR_def_label(fn__query__call_site_summary_group_to_html_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module77)
	MR_init_entry1(fn__query__multi_call_site_summary_to_html_7_0);
	MR_init_label8(fn__query__multi_call_site_summary_to_html_7_0,12,6,9,15,2,19,22,23)
	MR_init_label3(fn__query__multi_call_site_summary_to_html_7_0,26,31,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__multi_call_site_summary_to_html_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r8 = MR_tag(MR_tempr2);
	if ((MR_r8 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__query__multi_call_site_summary_to_html_7_0_i12);
	}
	MR_tempr1 = MR_unmkbody(MR_tempr2);
	MR_r9 = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__multi_call_site_summary_to_html_7_0_i15);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__query__multi_call_site_summary_to_html_7_0_i6);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__query__multi_call_site_summary_to_html_7_0_i9);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("callback", 8);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,12,26);
	MR_GOTO_LAB(fn__query__multi_call_site_summary_to_html_7_0_i2);
	}
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("normal_call", 11);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,12,26);
	MR_GOTO_LAB(fn__query__multi_call_site_summary_to_html_7_0_i2);
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("higher_order_call", 17);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,12,26);
	MR_GOTO_LAB(fn__query__multi_call_site_summary_to_html_7_0_i2);
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("method_call", 11);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,12,26);
	MR_GOTO_LAB(fn__query__multi_call_site_summary_to_html_7_0_i2);
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("special_call", 12);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,12,26);
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0,
		fn__query__multi_call_site_summary_to_html_7_0_i19);
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__call_site_summary_group_to_html_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,12,17);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__query__multi_call_site_summary_to_html_7_0_i22);
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, one_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(top_procs__sum_line_group_measurements_3_0,
		fn__query__multi_call_site_summary_to_html_7_0_i23);
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__multi_call_site_summary_to_html_7_0_i26);
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 4);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__query__multi_call_site_summary_to_html_7_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,12,11);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,19,0);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__query__multi_call_site_summary_to_html_7_0_i31);
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(fn__query__multi_call_site_summary_to_html_7_0,28)
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
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_TAG_COMMON(0,18,0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_call_site_calls_3_0);
MR_decl_entry(fn__html_format__add_context_2_0);

MR_BEGIN_MODULE(query_module78)
	MR_init_entry1(fn__query__call_site_summary_to_html_3_0);
	MR_init_label8(fn__query__call_site_summary_to_html_3_0,2,4,5,6,9,12,13,14)
	MR_init_label8(fn__query__call_site_summary_to_html_3_0,17,11,23,24,25,21,7,27)
	MR_init_label3(fn__query__call_site_summary_to_html_3_0,28,29,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__call_site_summary_to_html_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_calls_3_0,
		fn__query__call_site_summary_to_html_3_0_i2);
MR_def_label(fn__query__call_site_summary_to_html_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__query__call_site_summary_to_html_3_0_i4);
MR_def_label(fn__query__call_site_summary_to_html_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__query__call_site_summary_to_html_3_0_i5);
MR_def_label(fn__query__call_site_summary_to_html_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(html_format__call_site_context_4_0,
		fn__query__call_site_summary_to_html_3_0_i6);
MR_def_label(fn__query__call_site_summary_to_html_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__query__call_site_summary_to_html_3_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__query__call_site_summary_to_html_3_0_i9);
MR_def_label(fn__query__call_site_summary_to_html_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__query__call_site_summary_to_html_3_0_i11);
	}
	MR_sv(4) = MR_ctfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__query__call_site_summary_to_html_3_0_i12);
MR_def_label(fn__query__call_site_summary_to_html_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__query__call_site_summary_to_html_3_0_i13);
MR_def_label(fn__query__call_site_summary_to_html_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__html_format__proc_static_to_html_ref_3_0,
		fn__query__call_site_summary_to_html_3_0_i14);
MR_def_label(fn__query__call_site_summary_to_html_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__call_site_summary_to_html_3_0_i17);
MR_def_label(fn__query__call_site_summary_to_html_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_TAG_COMMON(0,18,0);
	MR_r1 = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__call_site_summary_to_html_3_0_i29);
MR_def_label(fn__query__call_site_summary_to_html_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__call_site_summary_to_html_3_0_i21);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__IntroducedFrom__pred__normal_call_site_summary_to_html__1404__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_ctfield(1, MR_tempr3, 0), 0);
	MR_tempr2 = MR_tempr3;
	MR_sv(4) = MR_ctfield(0, MR_r1, 2);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("call_site_summary_to_html: callee mismatch", 42);
	}
	MR_np_call_localret_ent(require__require_2_0,
		fn__query__call_site_summary_to_html_3_0_i23);
MR_def_label(fn__query__call_site_summary_to_html_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(fn__query__call_site_summary_group_to_html_7_0,
		fn__query__call_site_summary_to_html_3_0_i24);
MR_def_label(fn__query__call_site_summary_to_html_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, one_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__line_to_two_id_subline_group_1_0,
		fn__query__call_site_summary_to_html_3_0_i25);
MR_def_label(fn__query__call_site_summary_to_html_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__call_site_summary_to_html_3_0_i29);
MR_def_label(fn__query__call_site_summary_to_html_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("normal_call_site_summary_to_html: too many procedures", 53);
	MR_np_call_localret_ent(require__error_1_0,
		fn__query__call_site_summary_to_html_3_0_i28);
MR_def_label(fn__query__call_site_summary_to_html_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__query__multi_call_site_summary_to_html_7_0,
		fn__query__call_site_summary_to_html_3_0_i27);
MR_def_label(fn__query__call_site_summary_to_html_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
MR_def_label(fn__query__call_site_summary_to_html_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__call_site_summary_to_html_3_0_i29);
MR_def_label(fn__query__call_site_summary_to_html_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s:%d", 5);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__call_site_summary_to_html_3_0_i34);
MR_def_label(fn__query__call_site_summary_to_html_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__html_format__add_context_2_0);
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

MR_BEGIN_MODULE(query_module79)
	MR_init_entry1(query__accumulate_csd_prof_info_7_0);
	MR_init_label8(query__accumulate_csd_prof_info_7_0,2,3,4,5,6,8,10,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__accumulate_csd_prof_info_7_0)
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
		query__accumulate_csd_prof_info_7_0_i2);
MR_def_label(query__accumulate_csd_prof_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		query__accumulate_csd_prof_info_7_0_i3);
MR_def_label(query__accumulate_csd_prof_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		query__accumulate_csd_prof_info_7_0_i4);
MR_def_label(query__accumulate_csd_prof_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		query__accumulate_csd_prof_info_7_0_i5);
MR_def_label(query__accumulate_csd_prof_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_comp_table_3_0,
		query__accumulate_csd_prof_info_7_0_i6);
MR_def_label(query__accumulate_csd_prof_info_7_0,6)
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
		query__accumulate_csd_prof_info_7_0_i8);
MR_def_label(query__accumulate_csd_prof_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__accumulate_csd_prof_info_7_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__subtract_inherit_from_inherit_2_0,
		query__accumulate_csd_prof_info_7_0_i10);
MR_def_label(query__accumulate_csd_prof_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(query__accumulate_csd_prof_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module80)
	MR_init_entry1(fn__query__proc_callers_call_site_to_html_4_0);
	MR_init_label8(fn__query__proc_callers_call_site_to_html_4_0,2,3,4,6,7,8,9,14)
	MR_init_label3(fn__query__proc_callers_call_site_to_html_4_0,15,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__proc_callers_call_site_to_html_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(html_format__call_site_context_4_0,
		fn__query__proc_callers_call_site_to_html_4_0_i2);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,2)
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
		fn__query__proc_callers_call_site_to_html_4_0_i3);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__query__proc_callers_call_site_to_html_4_0_i4);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__accumulate_parent_csd_prof_info_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__query__proc_callers_call_site_to_html_4_0_i6);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__query__proc_callers_call_site_to_html_4_0_i7);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__query__proc_callers_call_site_to_html_4_0_i8);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__proc_callers_call_site_to_html_4_0_i9);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s:%d</TD>\n", 24);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__proc_callers_call_site_to_html_4_0_i14);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__html_format__proc_static_to_html_ref_3_0,
		fn__query__proc_callers_call_site_to_html_4_0_i15);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__proc_callers_call_site_to_html_4_0_i18);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__proc_callers_call_site_to_html_4_0_i19);
MR_def_label(fn__query__proc_callers_call_site_to_html_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(html_format__proc_static_context_4_0);

MR_BEGIN_MODULE(query_module81)
	MR_init_entry1(fn__query__proc_callers_proc_to_html_4_0);
	MR_init_label8(fn__query__proc_callers_proc_to_html_4_0,2,3,5,6,7,8,13,14)
	MR_init_label2(fn__query__proc_callers_proc_to_html_4_0,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__proc_callers_proc_to_html_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(html_format__proc_static_context_4_0,
		fn__query__proc_callers_proc_to_html_4_0_i2);
MR_def_label(fn__query__proc_callers_proc_to_html_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__query__proc_callers_proc_to_html_4_0_i3);
MR_def_label(fn__query__proc_callers_proc_to_html_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__accumulate_parent_csd_prof_info_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__query__proc_callers_proc_to_html_4_0_i5);
MR_def_label(fn__query__proc_callers_proc_to_html_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__query__proc_callers_proc_to_html_4_0_i6);
MR_def_label(fn__query__proc_callers_proc_to_html_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__query__proc_callers_proc_to_html_4_0_i7);
MR_def_label(fn__query__proc_callers_proc_to_html_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__proc_callers_proc_to_html_4_0_i8);
MR_def_label(fn__query__proc_callers_proc_to_html_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s:%d</TD>\n", 24);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__proc_callers_proc_to_html_4_0_i13);
MR_def_label(fn__query__proc_callers_proc_to_html_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__html_format__proc_static_to_html_ref_3_0,
		fn__query__proc_callers_proc_to_html_4_0_i14);
MR_def_label(fn__query__proc_callers_proc_to_html_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__proc_callers_proc_to_html_4_0_i17);
MR_def_label(fn__query__proc_callers_proc_to_html_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__proc_callers_proc_to_html_4_0_i18);
MR_def_label(fn__query__proc_callers_proc_to_html_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__html_format__module_name_to_html_ref_3_0);

MR_BEGIN_MODULE(query_module82)
	MR_init_entry1(fn__query__proc_callers_module_to_html_4_0);
	MR_init_label5(fn__query__proc_callers_module_to_html_4_0,3,4,5,6,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__proc_callers_module_to_html_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__accumulate_parent_csd_prof_info_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__query__proc_callers_module_to_html_4_0_i3);
MR_def_label(fn__query__proc_callers_module_to_html_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__query__proc_callers_module_to_html_4_0_i4);
MR_def_label(fn__query__proc_callers_module_to_html_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__query__proc_callers_module_to_html_4_0_i5);
MR_def_label(fn__query__proc_callers_module_to_html_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(5), 3);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__html_format__module_name_to_html_ref_3_0,
		fn__query__proc_callers_module_to_html_4_0_i6);
MR_def_label(fn__query__proc_callers_module_to_html_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__proc_callers_module_to_html_4_0_i9);
MR_def_label(fn__query__proc_callers_module_to_html_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(html_format__proc_dynamic_context_4_0);
MR_decl_entry(fn__html_format__clique_ptr_to_html_ref_4_0);

MR_BEGIN_MODULE(query_module83)
	MR_init_entry1(fn__query__proc_callers_clique_to_html_4_0);
	MR_init_label8(fn__query__proc_callers_clique_to_html_4_0,3,4,5,6,7,8,9,10)
	MR_init_label1(fn__query__proc_callers_clique_to_html_4_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__proc_callers_clique_to_html_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__accumulate_parent_csd_prof_info_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		fn__query__proc_callers_clique_to_html_4_0_i3);
MR_def_label(fn__query__proc_callers_clique_to_html_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		fn__query__proc_callers_clique_to_html_4_0_i4);
MR_def_label(fn__query__proc_callers_clique_to_html_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__query__proc_callers_clique_to_html_4_0_i5);
MR_def_label(fn__query__proc_callers_clique_to_html_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		fn__query__proc_callers_clique_to_html_4_0_i6);
MR_def_label(fn__query__proc_callers_clique_to_html_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__query__proc_callers_clique_to_html_4_0_i7);
MR_def_label(fn__query__proc_callers_clique_to_html_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(html_format__proc_dynamic_context_4_0,
		fn__query__proc_callers_clique_to_html_4_0_i8);
MR_def_label(fn__query__proc_callers_clique_to_html_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__proc_dynamic_name_2_0,
		fn__query__proc_callers_clique_to_html_4_0_i9);
MR_def_label(fn__query__proc_callers_clique_to_html_4_0,9)
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
	MR_np_call_localret_ent(fn__html_format__clique_ptr_to_html_ref_4_0,
		fn__query__proc_callers_clique_to_html_4_0_i10);
MR_def_label(fn__query__proc_callers_clique_to_html_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("<TD CLASS=id>%s</TD>\n", 21);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__query__proc_callers_clique_to_html_4_0_i13);
MR_def_label(fn__query__proc_callers_clique_to_html_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module84)
	MR_init_entry1(fn__query__accumulate_csds_by_call_site_3_0);
	MR_init_label3(fn__query__accumulate_csds_by_call_site_3_0,2,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__accumulate_csds_by_call_site_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r2, 1);
	MR_sv(2) = MR_r3;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_static_map_3_0,
		fn__query__accumulate_csds_by_call_site_3_0_i2);
MR_def_label(fn__query__accumulate_csds_by_call_site_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		fn__query__accumulate_csds_by_call_site_3_0_i5);
MR_def_label(fn__query__accumulate_csds_by_call_site_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__accumulate_csds_by_call_site_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(fn__query__accumulate_csds_by_call_site_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module85)
	MR_init_entry1(fn__query__accumulate_csds_by_procedure_3_0);
	MR_init_label4(fn__query__accumulate_csds_by_procedure_3_0,2,3,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__accumulate_csds_by_procedure_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_static_map_3_0,
		fn__query__accumulate_csds_by_procedure_3_0_i2);
MR_def_label(fn__query__accumulate_csds_by_procedure_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__query__accumulate_csds_by_procedure_3_0_i3);
MR_def_label(fn__query__accumulate_csds_by_procedure_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		fn__query__accumulate_csds_by_procedure_3_0_i6);
MR_def_label(fn__query__accumulate_csds_by_procedure_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__accumulate_csds_by_procedure_3_0_i4);
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
MR_def_label(fn__query__accumulate_csds_by_procedure_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,19);
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


MR_BEGIN_MODULE(query_module86)
	MR_init_entry1(fn__query__accumulate_csds_by_module_3_0);
	MR_init_label5(fn__query__accumulate_csds_by_module_3_0,2,3,4,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__accumulate_csds_by_module_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_static_map_3_0,
		fn__query__accumulate_csds_by_module_3_0_i2);
MR_def_label(fn__query__accumulate_csds_by_module_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__query__accumulate_csds_by_module_3_0_i3);
MR_def_label(fn__query__accumulate_csds_by_module_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__query__accumulate_csds_by_module_3_0_i4);
MR_def_label(fn__query__accumulate_csds_by_module_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		fn__query__accumulate_csds_by_module_3_0_i7);
MR_def_label(fn__query__accumulate_csds_by_module_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__accumulate_csds_by_module_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(fn__query__accumulate_csds_by_module_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,19);
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


MR_BEGIN_MODULE(query_module87)
	MR_init_entry1(fn__query__accumulate_csds_by_clique_3_0);
	MR_init_label4(fn__query__accumulate_csds_by_clique_3_0,2,3,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__accumulate_csds_by_clique_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__query__accumulate_csds_by_clique_3_0_i2);
MR_def_label(fn__query__accumulate_csds_by_clique_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		fn__query__accumulate_csds_by_clique_3_0_i3);
MR_def_label(fn__query__accumulate_csds_by_clique_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		fn__query__accumulate_csds_by_clique_3_0_i6);
MR_def_label(fn__query__accumulate_csds_by_clique_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__accumulate_csds_by_clique_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(fn__query__accumulate_csds_by_clique_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,19);
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


MR_BEGIN_MODULE(query_module88)
	MR_init_entry1(query__accumulate_parent_csd_prof_info_7_0);
	MR_init_label8(query__accumulate_parent_csd_prof_info_7_0,2,3,4,5,6,7,8,9)
	MR_init_label1(query__accumulate_parent_csd_prof_info_7_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__accumulate_parent_csd_prof_info_7_0)
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
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		query__accumulate_parent_csd_prof_info_7_0_i2);
MR_def_label(query__accumulate_parent_csd_prof_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(query__accumulate_parent_csd_prof_info_7_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(query__accumulate_parent_csd_prof_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_csd_own_3_0,
		query__accumulate_parent_csd_prof_info_7_0_i4);
MR_def_label(query__accumulate_parent_csd_prof_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		query__accumulate_parent_csd_prof_info_7_0_i5);
MR_def_label(query__accumulate_parent_csd_prof_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		query__accumulate_parent_csd_prof_info_7_0_i6);
MR_def_label(query__accumulate_parent_csd_prof_info_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		query__accumulate_parent_csd_prof_info_7_0_i7);
MR_def_label(query__accumulate_parent_csd_prof_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		query__accumulate_parent_csd_prof_info_7_0_i8);
MR_def_label(query__accumulate_parent_csd_prof_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_members_3_0,
		query__accumulate_parent_csd_prof_info_7_0_i9);
MR_def_label(query__accumulate_parent_csd_prof_info_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(query__compensate_using_comp_table_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		query__accumulate_parent_csd_prof_info_7_0_i11);
MR_def_label(query__accumulate_parent_csd_prof_info_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_pd_comp_table_3_0);

MR_BEGIN_MODULE(query_module89)
	MR_init_entry1(query__compensate_using_comp_table_5_0);
	MR_init_label3(query__compensate_using_comp_table_5_0,2,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__compensate_using_comp_table_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(profile__deep_lookup_pd_comp_table_3_0,
		query__compensate_using_comp_table_5_0_i2);
MR_def_label(query__compensate_using_comp_table_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		query__compensate_using_comp_table_5_0_i4);
MR_def_label(query__compensate_using_comp_table_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__compensate_using_comp_table_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__measurements__subtract_inherit_from_inherit_2_0);
MR_def_label(query__compensate_using_comp_table_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module90)
	MR_init_entry1(fn__query__pair_self_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__pair_self_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__exclude__apply_contour_exclusion_3_0);

MR_BEGIN_MODULE(query_module91)
	MR_init_entry1(fn__query__pair_contour_3_0);
	MR_init_label1(fn__query__pair_contour_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__pair_contour_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__exclude__apply_contour_exclusion_3_0,
		fn__query__pair_contour_3_0_i2);
MR_def_label(fn__query__pair_contour_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module92)
	MR_init_entry1(fn__query__wrap_clique_links_5_0);
	MR_init_label2(fn__query__wrap_clique_links_5_0,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__wrap_clique_links_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 9);
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_r5;
	MR_tfield(0, MR_tempr2, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(1) = MR_r4;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__wrap_clique_links_5_0_i4);
MR_def_label(fn__query__wrap_clique_links_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__wrap_clique_links_5_0_i6);
MR_def_label(fn__query__wrap_clique_links_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=%s>%s</A>", 17);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module93)
	MR_init_entry1(fn__query__wrap_proc_links_5_0);
	MR_init_label2(fn__query__wrap_proc_links_5_0,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__wrap_proc_links_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 9);
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_r5;
	MR_tfield(0, MR_tempr2, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(1) = MR_r4;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__wrap_proc_links_5_0_i4);
MR_def_label(fn__query__wrap_proc_links_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__wrap_proc_links_5_0_i6);
MR_def_label(fn__query__wrap_proc_links_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=%s>%s</A>", 17);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module94)
	MR_init_entry1(fn__query__wrap_proc_callers_links_7_0);
	MR_init_label2(fn__query__wrap_proc_callers_links_7_0,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__wrap_proc_callers_links_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 9);
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_r7;
	MR_tfield(0, MR_tempr2, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(1) = MR_r6;
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__wrap_proc_callers_links_7_0_i4);
MR_def_label(fn__query__wrap_proc_callers_links_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__wrap_proc_callers_links_7_0_i6);
MR_def_label(fn__query__wrap_proc_callers_links_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=%s>%s</A>", 17);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module95)
	MR_init_entry1(fn__query__wrap_module_links_5_0);
	MR_init_label2(fn__query__wrap_module_links_5_0,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__wrap_module_links_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 9);
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_r5;
	MR_tfield(0, MR_tempr2, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(1) = MR_r4;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__wrap_module_links_5_0_i4);
MR_def_label(fn__query__wrap_module_links_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__wrap_module_links_5_0_i6);
MR_def_label(fn__query__wrap_module_links_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=%s>%s</A>", 17);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module96)
	MR_init_entry1(fn__query__wrap_modules_links_4_0);
	MR_init_label2(fn__query__wrap_modules_links_4_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__wrap_modules_links_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 3);
	}
	MR_np_call_localret_ent(fn__html_format__deep_cmd_pref_to_url_3_0,
		fn__query__wrap_modules_links_4_0_i3);
MR_def_label(fn__query__wrap_modules_links_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__html_format__escape_break_html_string_1_0,
		fn__query__wrap_modules_links_4_0_i5);
MR_def_label(fn__query__wrap_modules_links_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("<A HREF=%s>%s</A>", 17);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module97)
	MR_init_entry1(__Unify___query__alloc_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__alloc_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(query_module98)
	MR_init_entry1(__Compare___query__alloc_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__alloc_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module99)
	MR_init_entry1(__Unify___query__assume_cross_clique_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___query__assume_cross_clique_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module100)
	MR_init_entry1(__Compare___query__assume_cross_clique_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___query__assume_cross_clique_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module101)
	MR_init_entry1(__Unify___query__box_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__box_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module102)
	MR_init_entry1(__Compare___query__box_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__box_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module103)
	MR_init_entry1(__Unify___query__call_site_context_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___query__call_site_context_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module104)
	MR_init_entry1(__Compare___query__call_site_context_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___query__call_site_context_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module105)
	MR_init_entry1(__Unify___query__call_site_display_0_0);
	MR_init_label2(__Unify___query__call_site_display_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___query__call_site_display_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__call_site_display_0_0_i6);
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
		MR_GOTO_LAB(__Unify___query__call_site_display_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___query__call_site_display_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___query__call_site_display_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_ctfield(0, MR_tempr2, 3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___query__wrap_with_url_0_0);
	}
MR_def_label(__Unify___query__call_site_display_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__call_site_display_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module106)
	MR_init_entry1(__Compare___query__call_site_display_0_0);
	MR_init_label6(__Compare___query__call_site_display_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___query__call_site_display_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__call_site_display_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___query__call_site_display_0_0_i2);
MR_def_label(__Compare___query__call_site_display_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___query__call_site_display_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__call_site_display_0_0_i5);
MR_def_label(__Compare___query__call_site_display_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__call_site_display_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__call_site_display_0_0_i9);
MR_def_label(__Compare___query__call_site_display_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__call_site_display_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__call_site_display_0_0_i13);
MR_def_label(__Compare___query__call_site_display_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__call_site_display_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___query__wrap_with_url_0_0);
MR_def_label(__Compare___query__call_site_display_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module107)
	MR_init_entry1(__Unify___query__call_site_proc_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___query__call_site_proc_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module108)
	MR_init_entry1(__Compare___query__call_site_proc_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___query__call_site_proc_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module109)
	MR_init_entry1(__Unify___query__caller_groups_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__caller_groups_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module110)
	MR_init_entry1(__Compare___query__caller_groups_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__caller_groups_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module111)
	MR_init_entry1(__Unify___query__callseqs_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__callseqs_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module112)
	MR_init_entry1(__Compare___query__callseqs_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__callseqs_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(query_module113)
	MR_init_entry1(__Unify___query__cmd_0_0);
	MR_init_label8(__Unify___query__cmd_0_0,37,31,27,40,5,7,9,12)
	MR_init_label8(__Unify___query__cmd_0_0,15,17,19,21,24,33,35,41)
	MR_init_label1(__Unify___query__cmd_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i41);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___query__cmd_0_0_i37) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i31) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i27) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i40));
MR_def_label(__Unify___query__cmd_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_unmkbody(MR_tempr2);
	MR_r1 = (MR_sv(2) == MR_tempr2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___query__cmd_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___query__cmd_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i33) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i21) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i24));
MR_def_label(__Unify___query__cmd_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 3);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___query__display_limit_0_0,
		__Unify___query__cmd_0_0_i35);
MR_def_label(__Unify___query__cmd_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___query__cmd_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__cmd_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module114)
	MR_init_entry1(__Index___query__cmd_0_0);
	MR_init_label8(__Index___query__cmd_0_0,19,17,16,22,3,4,5,6)
	MR_init_label8(__Index___query__cmd_0_0,7,9,10,11,12,13,14,15)
	MR_init_label1(__Index___query__cmd_0_0,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___query__cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___query__cmd_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i22));
MR_def_label(__Index___query__cmd_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Index___query__cmd_0_0_i13);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Index___query__cmd_0_0_i15);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Index___query__cmd_0_0_i6);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
	}
MR_def_label(__Index___query__cmd_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___query__cmd_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i14));
MR_def_label(__Index___query__cmd_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(query_module115)
	MR_init_entry1(__Compare___query__cmd_0_0);
	MR_init_label8(__Compare___query__cmd_0_0,3,2,4,5,6,7,75,54)
	MR_init_label8(__Compare___query__cmd_0_0,51,78,10,13,16,20,24,27)
	MR_init_label8(__Compare___query__cmd_0_0,30,34,40,43,47,57,60,64)
	MR_init_label3(__Compare___query__cmd_0_0,68,185,186)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___query__cmd_0_0_i2);
MR_def_label(__Compare___query__cmd_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___query__cmd_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Index___query__cmd_0_0,
		__Compare___query__cmd_0_0_i4);
MR_def_label(__Compare___query__cmd_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___query__cmd_0_0,
		__Compare___query__cmd_0_0_i5);
MR_def_label(__Compare___query__cmd_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___query__cmd_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___query__cmd_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___query__cmd_0_0_i75) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i54) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i51) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i78));
MR_def_label(__Compare___query__cmd_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_sv(1));
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Compare___query__cmd_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___query__cmd_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___query__cmd_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i24) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i57) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i43) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i40) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i13) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i47));
MR_def_label(__Compare___query__cmd_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___query__cmd_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__cmd_0_0_i30);
MR_def_label(__Compare___query__cmd_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i186);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__cmd_0_0_i34);
MR_def_label(__Compare___query__cmd_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i186);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i185);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___query__display_limit_0_0,
		__Compare___query__cmd_0_0_i60);
MR_def_label(__Compare___query__cmd_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i186);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__cmd_0_0_i64);
MR_def_label(__Compare___query__cmd_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i186);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__cmd_0_0_i68);
MR_def_label(__Compare___query__cmd_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i186);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___query__cmd_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module116)
	MR_init_entry1(__Unify___query__cmd_pref_0_0);
	MR_init_label3(__Unify___query__cmd_pref_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__cmd_pref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__cmd_pref_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___query__cmd_0_0,
		__Unify___query__cmd_pref_0_0_i4);
MR_def_label(__Unify___query__cmd_pref_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___query__cmd_pref_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___query__preferences_indication_0_0);
MR_def_label(__Unify___query__cmd_pref_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__cmd_pref_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module117)
	MR_init_entry1(__Compare___query__cmd_pref_0_0);
	MR_init_label4(__Compare___query__cmd_pref_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__cmd_pref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__cmd_pref_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___query__cmd_pref_0_0_i2);
MR_def_label(__Compare___query__cmd_pref_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___query__cmd_pref_0_0,2)
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
	MR_np_call_localret_ent(__Compare___query__cmd_0_0,
		__Compare___query__cmd_pref_0_0_i5);
MR_def_label(__Compare___query__cmd_pref_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_pref_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___query__preferences_indication_0_0);
MR_def_label(__Compare___query__cmd_pref_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module118)
	MR_init_entry1(__Unify___query__colour_scheme_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__colour_scheme_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module119)
	MR_init_entry1(__Compare___query__colour_scheme_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__colour_scheme_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module120)
	MR_init_entry1(__Unify___query__contour_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__contour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module121)
	MR_init_entry1(__Compare___query__contour_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__contour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module122)
	MR_init_entry1(__Unify___query__cost_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__cost_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module123)
	MR_init_entry1(__Compare___query__cost_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__cost_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module124)
	MR_init_entry1(__Unify___query__display_limit_0_0);
	MR_init_label4(__Unify___query__display_limit_0_0,9,7,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__display_limit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	MR_r1 = MR_tempr3;
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i7);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr4);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__display_limit_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_tempr1));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__display_limit_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_tempr1));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__display_limit_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__display_limit_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(query_module125)
	MR_init_entry1(__Compare___query__display_limit_0_0);
	MR_init_label8(__Compare___query__display_limit_0_0,3,2,9,26,18,56,23,21)
	MR_init_label1(__Compare___query__display_limit_0_0,92)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__display_limit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___query__display_limit_0_0_i2);
MR_def_label(__Compare___query__display_limit_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___query__display_limit_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tag(MR_tempr5);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i18);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i26);
	}
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr6);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i23);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i23);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__display_limit_0_0_i9);
MR_def_label(__Compare___query__display_limit_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i92);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__display_limit_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i56);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___query__display_limit_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i21);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i23);
	}
	}
MR_def_label(__Compare___query__display_limit_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__display_limit_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__display_limit_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_sv(1), 0);
	MR_r2 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___query__display_limit_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module126)
	MR_init_entry1(__Unify___query__fields_0_0);
	MR_init_label2(__Unify___query__fields_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__fields_0_0_i6);
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
		MR_GOTO_LAB(__Unify___query__fields_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___query__fields_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___query__fields_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 3);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___query__fields_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	MR_r2 = MR_ctfield(0, MR_tempr2, 4);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___query__memory_fields_0_0);
	}
MR_def_label(__Unify___query__fields_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__fields_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module127)
	MR_init_entry1(__Compare___query__fields_0_0);
	MR_init_label7(__Compare___query__fields_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__fields_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___query__fields_0_0_i2);
MR_def_label(__Compare___query__fields_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___query__fields_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__fields_0_0_i5);
MR_def_label(__Compare___query__fields_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__fields_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__fields_0_0_i9);
MR_def_label(__Compare___query__fields_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__fields_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__fields_0_0_i13);
MR_def_label(__Compare___query__fields_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__fields_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__fields_0_0_i17);
MR_def_label(__Compare___query__fields_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__fields_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___query__memory_fields_0_0);
MR_def_label(__Compare___query__fields_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module128)
	MR_init_entry1(__Unify___query__inactive_items_0_0);
	MR_init_label2(__Unify___query__inactive_items_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__inactive_items_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__inactive_items_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___query__inactive_items_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__inactive_items_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__inactive_items_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module129)
	MR_init_entry1(__Compare___query__inactive_items_0_0);
	MR_init_label4(__Compare___query__inactive_items_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__inactive_items_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__inactive_items_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___query__inactive_items_0_0_i2);
MR_def_label(__Compare___query__inactive_items_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___query__inactive_items_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__inactive_items_0_0_i5);
MR_def_label(__Compare___query__inactive_items_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__inactive_items_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__inactive_items_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module130)
	MR_init_entry1(__Unify___query__inactive_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__inactive_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module131)
	MR_init_entry1(__Compare___query__inactive_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__inactive_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module132)
	MR_init_entry1(__Unify___query__include_descendants_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__include_descendants_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module133)
	MR_init_entry1(__Compare___query__include_descendants_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__include_descendants_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module134)
	MR_init_entry1(__Unify___query__measurement_scope_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__measurement_scope_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module135)
	MR_init_entry1(__Compare___query__measurement_scope_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__measurement_scope_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module136)
	MR_init_entry1(__Unify___query__memory_fields_0_0);
	MR_init_label4(__Unify___query__memory_fields_0_0,7,5,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__memory_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__memory_fields_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r1 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___query__memory_fields_0_0_i5);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___query__memory_fields_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__memory_fields_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___query__memory_fields_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__memory_fields_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___query__memory_fields_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__memory_fields_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__memory_fields_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module137)
	MR_init_entry1(__Compare___query__memory_fields_0_0);
	MR_init_label6(__Compare___query__memory_fields_0_0,44,13,5,48,9,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__memory_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i44);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(1));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i5);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i13);
	}
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i9);
	}
	}
MR_def_label(__Compare___query__memory_fields_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__memory_fields_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i48);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___query__memory_fields_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i7);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i9);
	}
	}
MR_def_label(__Compare___query__memory_fields_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__memory_fields_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__memory_fields_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_sv(1), 0);
	MR_r2 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module138)
	MR_init_entry1(__Unify___query__order_criteria_0_0);
	MR_init_label3(__Unify___query__order_criteria_0_0,6,11,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__order_criteria_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__order_criteria_0_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___query__order_criteria_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__order_criteria_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___query__order_criteria_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__order_criteria_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__order_criteria_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 2);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__order_criteria_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__order_criteria_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module139)
	MR_init_entry1(__Compare___query__order_criteria_0_0);
	MR_init_label8(__Compare___query__order_criteria_0_0,44,30,33,12,15,17,21,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__order_criteria_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__order_criteria_0_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__order_criteria_0_0_i12);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___query__order_criteria_0_0_i30);
	}
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__order_criteria_0_0_i33);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___query__order_criteria_0_0_i33);
	}
	}
MR_def_label(__Compare___query__order_criteria_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___query__order_criteria_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__order_criteria_0_0_i33);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___query__order_criteria_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___query__order_criteria_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___query__order_criteria_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__order_criteria_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___query__order_criteria_0_0,15)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__order_criteria_0_0_i17);
MR_def_label(__Compare___query__order_criteria_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__order_criteria_0_0_i39);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__order_criteria_0_0_i21);
MR_def_label(__Compare___query__order_criteria_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__order_criteria_0_0_i39);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__order_criteria_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module140)
	MR_init_entry1(__Unify___query__port_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__port_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module141)
	MR_init_entry1(__Compare___query__port_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__port_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module142)
	MR_init_entry1(__Unify___query__preferences_0_0);
	MR_init_label5(__Unify___query__preferences_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__preferences_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i12);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 8);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___query__fields_0_0,
		__Unify___query__preferences_0_0_i4);
MR_def_label(__Unify___query__preferences_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(10))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___query__preferences_0_0_i6);
MR_def_label(__Unify___query__preferences_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___query__order_criteria_0_0,
		__Unify___query__preferences_0_0_i8);
MR_def_label(__Unify___query__preferences_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___query__inactive_items_0_0);
MR_def_label(__Unify___query__preferences_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__preferences_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module143)
	MR_init_entry1(__Compare___query__preferences_0_0);
	MR_init_label8(__Compare___query__preferences_0_0,3,2,5,9,13,17,21,25)
	MR_init_label3(__Compare___query__preferences_0_0,29,33,77)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__preferences_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___query__preferences_0_0_i2);
MR_def_label(__Compare___query__preferences_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___query__preferences_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___query__fields_0_0,
		__Compare___query__preferences_0_0_i5);
MR_def_label(__Compare___query__preferences_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i9);
MR_def_label(__Compare___query__preferences_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i13);
MR_def_label(__Compare___query__preferences_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___query__preferences_0_0_i17);
MR_def_label(__Compare___query__preferences_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i21);
MR_def_label(__Compare___query__preferences_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___query__order_criteria_0_0,
		__Compare___query__preferences_0_0_i25);
MR_def_label(__Compare___query__preferences_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i29);
MR_def_label(__Compare___query__preferences_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i33);
MR_def_label(__Compare___query__preferences_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___query__inactive_items_0_0);
MR_def_label(__Compare___query__preferences_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module144)
	MR_init_entry1(__Unify___query__preferences_indication_0_0);
	MR_init_label3(__Unify___query__preferences_indication_0_0,7,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__preferences_indication_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__preferences_indication_0_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___query__preferences_indication_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___query__preferences_indication_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___query__preferences_indication_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___query__preferences_0_0);
MR_def_label(__Unify___query__preferences_indication_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__preferences_indication_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module145)
	MR_init_entry1(__Compare___query__preferences_indication_0_0);
	MR_init_label6(__Compare___query__preferences_indication_0_0,34,5,44,19,38,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__preferences_indication_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__preferences_indication_0_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__preferences_indication_0_0_i19);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___query__preferences_indication_0_0_i5);
	}
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__preferences_indication_0_0_i44);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___query__preferences_indication_0_0_i38);
	}
	}
MR_def_label(__Compare___query__preferences_indication_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__preferences_indication_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__preferences_indication_0_0_i44);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___query__preferences_indication_0_0_i34);
	}
	}
MR_def_label(__Compare___query__preferences_indication_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__preferences_indication_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__preferences_indication_0_0_i23);
	}
	}
MR_def_label(__Compare___query__preferences_indication_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__preferences_indication_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___query__preferences_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module146)
	MR_init_entry1(__Unify___query__resp_0_0);
	MR_init_label1(__Unify___query__resp_0_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__resp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__resp_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___query__resp_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module147)
	MR_init_entry1(__Compare___query__resp_0_0);
	MR_init_label2(__Compare___query__resp_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__resp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__resp_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___query__resp_0_0_i2);
MR_def_label(__Compare___query__resp_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___query__resp_0_0,2)
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


MR_BEGIN_MODULE(query_module148)
	MR_init_entry1(__Unify___query__summarize_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__summarize_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module149)
	MR_init_entry1(__Compare___query__summarize_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__summarize_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module150)
	MR_init_entry1(__Unify___query__time_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__time_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module151)
	MR_init_entry1(__Compare___query__time_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__time_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module152)
	MR_init_entry1(__Unify___query__time_format_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__time_format_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module153)
	MR_init_entry1(__Compare___query__time_format_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__time_format_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module154)
	MR_init_entry1(__Unify___query__url_with_proc_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___query__url_with_proc_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module155)
	MR_init_entry1(__Compare___query__url_with_proc_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___query__url_with_proc_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module156)
	MR_init_entry1(__Unify___query__wrap_with_url_0_0);
	MR_init_label3(__Unify___query__wrap_with_url_0_0,6,11,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___query__wrap_with_url_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__wrap_with_url_0_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___query__wrap_with_url_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__wrap_with_url_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___query__wrap_with_url_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__wrap_with_url_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__wrap_with_url_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module157)
	MR_init_entry1(__Compare___query__wrap_with_url_0_0);
	MR_init_label6(__Compare___query__wrap_with_url_0_0,34,20,12,46,17,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___query__wrap_with_url_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__wrap_with_url_0_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__wrap_with_url_0_0_i12);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___query__wrap_with_url_0_0_i20);
	}
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__wrap_with_url_0_0_i17);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___query__wrap_with_url_0_0_i17);
	}
	}
MR_def_label(__Compare___query__wrap_with_url_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__wrap_with_url_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__wrap_with_url_0_0_i46);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___query__wrap_with_url_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___query__wrap_with_url_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__wrap_with_url_0_0_i15);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___query__wrap_with_url_0_0_i17);
	}
	}
MR_def_label(__Compare___query__wrap_with_url_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__wrap_with_url_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__wrap_with_url_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__html_format__add_self_context_1_0);

MR_BEGIN_MODULE(query_module158)
	MR_init_entry1(fn__query__IntroducedFrom__func__module_to_html__972__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__IntroducedFrom__func__module_to_html__972__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__html_format__add_self_context_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module159)
	MR_init_entry1(query__IntroducedFrom__pred__normal_call_site_summary_to_html__1404__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__IntroducedFrom__pred__normal_call_site_summary_to_html__1404__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module160)
	MR_init_entry1(fn__query__IntroducedFrom__func__multi_call_site_summary_to_html__1439__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__IntroducedFrom__func__multi_call_site_summary_to_html__1439__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__html_format__add_context_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module161)
	MR_init_entry1(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0);
	MR_init_label8(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,4,5,10,7,12,15,16,17)
	MR_init_label1(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__query__lookup_proc_total_to_html_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_string_const("", 0);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,12,17);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_i4);
MR_def_label(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_sv(1), 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(html_format, one_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__top_procs__sort_line_groups_2_0,
		f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_i5);
MR_def_label(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(3) == (MR_Integer) MR_tbmkword(0, 0)) || ((MR_Integer) MR_sv(3) == (MR_Integer) MR_tbmkword(0, 1))))) {
		MR_GOTO_LAB(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_i7);
	}
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,12,11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_i10);
MR_def_label(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__html_format__two_id_line_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_sv(2) = (MR_Integer) 0;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_i15);
MR_def_label(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__add_ranks_1_0,
		f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_i12);
MR_def_label(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__html_format__two_id_line_to_html_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_sv(2) = (MR_Integer) 2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,11);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_i15);
MR_def_label(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__html_format__separator_row_3_0,
		f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_i16);
MR_def_label(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_i17);
MR_def_label(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0_i18);
MR_def_label(f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_116_111_95_104_116_109_108_95_95_91_51_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module162)
	MR_init_entry1(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0);
	MR_init_label2(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(" (no&nbsp;calls&nbsp;made)", 26);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(fn__f_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_117_108_116_105_95_99_97_108_108_95_115_105_116_101_95_97_100_100_95_115_117_102_102_105_120_95_95_91_49_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(" (summary)", 10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__query_maybe_bunch_0(void)
{
	query_module0();
	query_module1();
	query_module2();
	query_module3();
	query_module4();
	query_module5();
	query_module6();
	query_module7();
	query_module8();
	query_module9();
	query_module10();
	query_module11();
	query_module12();
	query_module13();
	query_module14();
	query_module15();
	query_module16();
	query_module17();
	query_module18();
	query_module19();
	query_module20();
	query_module21();
	query_module22();
	query_module23();
	query_module24();
	query_module25();
	query_module26();
	query_module27();
	query_module28();
	query_module29();
	query_module30();
	query_module31();
	query_module32();
	query_module33();
	query_module34();
	query_module35();
	query_module36();
	query_module37();
	query_module38();
	query_module39();
}

static void mercury__query_maybe_bunch_1(void)
{
	query_module40();
	query_module41();
	query_module42();
	query_module43();
	query_module44();
	query_module45();
	query_module46();
	query_module47();
	query_module48();
	query_module49();
	query_module50();
	query_module51();
	query_module52();
	query_module53();
	query_module54();
	query_module55();
	query_module56();
	query_module57();
	query_module58();
	query_module59();
	query_module60();
	query_module61();
	query_module62();
	query_module63();
	query_module64();
	query_module65();
	query_module66();
	query_module67();
	query_module68();
	query_module69();
	query_module70();
	query_module71();
	query_module72();
	query_module73();
	query_module74();
	query_module75();
	query_module76();
	query_module77();
	query_module78();
	query_module79();
}

static void mercury__query_maybe_bunch_2(void)
{
	query_module80();
	query_module81();
	query_module82();
	query_module83();
	query_module84();
	query_module85();
	query_module86();
	query_module87();
	query_module88();
	query_module89();
	query_module90();
	query_module91();
	query_module92();
	query_module93();
	query_module94();
	query_module95();
	query_module96();
	query_module97();
	query_module98();
	query_module99();
	query_module100();
	query_module101();
	query_module102();
	query_module103();
	query_module104();
	query_module105();
	query_module106();
	query_module107();
	query_module108();
	query_module109();
	query_module110();
	query_module111();
	query_module112();
	query_module113();
	query_module114();
	query_module115();
	query_module116();
	query_module117();
	query_module118();
	query_module119();
}

static void mercury__query_maybe_bunch_3(void)
{
	query_module120();
	query_module121();
	query_module122();
	query_module123();
	query_module124();
	query_module125();
	query_module126();
	query_module127();
	query_module128();
	query_module129();
	query_module130();
	query_module131();
	query_module132();
	query_module133();
	query_module134();
	query_module135();
	query_module136();
	query_module137();
	query_module138();
	query_module139();
	query_module140();
	query_module141();
	query_module142();
	query_module143();
	query_module144();
	query_module145();
	query_module146();
	query_module147();
	query_module148();
	query_module149();
	query_module150();
	query_module151();
	query_module152();
	query_module153();
	query_module154();
	query_module155();
	query_module156();
	query_module157();
	query_module158();
	query_module159();
}

static void mercury__query_maybe_bunch_4(void)
{
	query_module160();
	query_module161();
	query_module162();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__query__init(void);
void mercury__query__init_type_tables(void);
void mercury__query__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__query__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__query__init_complexity_procs(void);
#endif

void mercury__query__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__query_maybe_bunch_0();
	mercury__query_maybe_bunch_1();
	mercury__query_maybe_bunch_2();
	mercury__query_maybe_bunch_3();
	mercury__query_maybe_bunch_4();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_wrap_with_url_0,
		query__wrap_with_url_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_url_with_proc_name_0,
		query__url_with_proc_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_time_format_0,
		query__time_format_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_time_fields_0,
		query__time_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_summarize_0,
		query__summarize_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_resp_0,
		query__resp_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_preferences_indication_0,
		query__preferences_indication_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_preferences_0,
		query__preferences_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_port_fields_0,
		query__port_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_order_criteria_0,
		query__order_criteria_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_memory_fields_0,
		query__memory_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_measurement_scope_0,
		query__measurement_scope_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_include_descendants_0,
		query__include_descendants_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_inactive_status_0,
		query__inactive_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_inactive_items_0,
		query__inactive_items_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_fields_0,
		query__fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_display_limit_0,
		query__display_limit_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_cost_kind_0,
		query__cost_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_contour_0,
		query__contour_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_colour_scheme_0,
		query__colour_scheme_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_cmd_pref_0,
		query__cmd_pref_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_cmd_0,
		query__cmd_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_callseqs_fields_0,
		query__callseqs_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_caller_groups_0,
		query__caller_groups_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_call_site_proc_name_0,
		query__call_site_proc_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_call_site_display_0,
		query__call_site_display_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_call_site_context_0,
		query__call_site_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_box_0,
		query__box_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_assume_cross_clique_0,
		query__assume_cross_clique_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_alloc_fields_0,
		query__alloc_fields_0_0);
	mercury__query__init_debugger();
}

void mercury__query__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_wrap_with_url_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_url_with_proc_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_time_format_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_time_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_summarize_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_resp_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_preferences_indication_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_preferences_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_port_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_order_criteria_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_memory_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_measurement_scope_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_include_descendants_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_inactive_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_inactive_items_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_display_limit_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_cost_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_contour_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_colour_scheme_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_cmd_pref_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_cmd_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_callseqs_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_caller_groups_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_call_site_proc_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_call_site_display_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_call_site_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_box_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_assume_cross_clique_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_alloc_fields_0);
	}
}


void mercury__query__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__query__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__query);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__query__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
