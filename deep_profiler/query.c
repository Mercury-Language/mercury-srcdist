/*
** Automatically generated from `query.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "query.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "query.c"
#line 268 "profile.int"
#include "profile.mh"

#line 35 "query.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "query.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "query.c"
#line 31 "../library/array.int2"
#include "array.mh"

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

struct mercury_type_3 {
	MR_Integer f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1[4];
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_1 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_0[];

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_1[];

struct mercury_type_2 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_0[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_1[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_query__type_ctor_info_alloc_fields_0,
	mercury_data_query__type_ctor_info_box_tables_0,
	mercury_data_query__type_ctor_info_caller_groups_0,
	mercury_data_query__type_ctor_info_callseqs_fields_0,
	mercury_data_query__type_ctor_info_cmd_0,
	mercury_data_query__type_ctor_info_colour_column_groups_0,
	mercury_data_query__type_ctor_info_contour_exclusion_0,
	mercury_data_query__type_ctor_info_cost_kind_0,
	mercury_data_query__type_ctor_info_deep_query_0,
	mercury_data_query__type_ctor_info_descendants_meaningful_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_query__type_ctor_info_display_limit_0,
	mercury_data_query__type_ctor_info_fields_0,
	mercury_data_query__type_ctor_info_inactive_items_0,
	mercury_data_query__type_ctor_info_inactive_status_0,
	mercury_data_query__type_ctor_info_include_descendants_0,
	mercury_data_query__type_ctor_info_measurement_scope_0,
	mercury_data_query__type_ctor_info_memory_fields_0,
	mercury_data_query__type_ctor_info_module_qual_0,
	mercury_data_query__type_ctor_info_order_criteria_0,
	mercury_data_query__type_ctor_info_port_fields_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_query__type_ctor_info_preferences_0,
	mercury_data_query__type_ctor_info_preferences_indication_0,
	mercury_data_query__type_ctor_info_resp_0,
	mercury_data_query__type_ctor_info_summarize_ho_call_sites_0,
	mercury_data_query__type_ctor_info_time_fields_0,
	mercury_data_query__type_ctor_info_time_format_0;
MR_decl_label10(query__exec_6_0, 2,4,5,20,7,31,9,23,16,17)
MR_decl_label1(query__exec_6_0, 18)
MR_decl_label4(query__string_to_caller_groups_2_0, 3,4,5,1)
MR_decl_label2(query__string_to_contour_exclusion_2_0, 3,1)
MR_decl_label6(query__string_to_cost_kind_2_0, 3,4,5,6,7,1)
MR_decl_label10(query__string_to_inactive_items_2_0, 3,23,5,6,8,10,12,14,16,18)
MR_decl_label1(query__string_to_inactive_items_2_0, 20)
MR_decl_label2(query__string_to_incl_desc_2_0, 3,1)
MR_decl_label10(query__string_to_limit_2_0, 3,7,9,2,13,15,12,18,20,1)
MR_decl_label2(query__string_to_scope_2_0, 3,1)
MR_decl_label10(query__try_exec_6_0, 3,8,6,11,10,15,17,14,21,5)
MR_decl_label1(fn__query__box_to_string_1_0, 3)
MR_decl_label10(fn__query__cmd_to_string_1_0, 156,193,128,194,116,117,118,115,121,195)
MR_decl_label10(fn__query__cmd_to_string_1_0, 3,4,10,11,17,18,24,25,31,32)
MR_decl_label10(fn__query__cmd_to_string_1_0, 38,39,45,46,198,54,55,56,60,61)
MR_decl_label10(fn__query__cmd_to_string_1_0, 62,66,67,68,69,70,71,73,74,75)
MR_decl_label10(fn__query__cmd_to_string_1_0, 76,77,78,79,80,81,82,83,84,85)
MR_decl_label10(fn__query__cmd_to_string_1_0, 86,87,88,89,90,91,92,93,94,95)
MR_decl_label10(fn__query__cmd_to_string_1_0, 100,101,102,103,104,105,196,197,134,135)
MR_decl_label10(fn__query__cmd_to_string_1_0, 136,137,138,139,140,141,142,143,144,145)
MR_decl_label9(fn__query__cmd_to_string_1_0, 146,147,148,149,150,151,152,153,154)
MR_decl_label1(fn__query__colour_scheme_to_string_1_0, 3)
MR_decl_label1(fn__query__contour_exclusion_to_string_1_0, 3)
MR_decl_label1(fn__query__default_fields_1_0, 2)
MR_decl_label1(fn__query__default_preferences_1_0, 2)
MR_decl_label10(fn__query__fields_to_string_1_0, 3,4,6,8,9,10,12,13,14,16)
MR_decl_label10(fn__query__fields_to_string_1_0, 18,19,21,25,26,27,28,29,30,31)
MR_decl_label7(fn__query__inactive_items_to_string_1_0, 7,5,9,3,13,11,15)
MR_decl_label1(fn__query__incl_desc_to_string_1_0, 3)
MR_decl_label6(fn__query__limit_to_string_1_0, 32,4,5,6,7,9)
MR_decl_label2(fn__query__module_qual_to_string_1_0, 3,4)
MR_decl_label10(fn__query__order_criteria_to_string_1_0, 19,43,5,7,9,10,12,13,14,15)
MR_decl_label2(fn__query__order_criteria_to_string_1_0, 16,17)
MR_decl_label10(fn__query__preferences_to_string_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(fn__query__preferences_to_string_1_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(fn__query__preferences_to_string_1_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(fn__query__preferences_to_string_1_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label6(fn__query__preferences_to_string_1_0, 43,44,45,46,47,48)
MR_decl_label8(fn__query__query_to_string_1_0, 3,4,5,6,7,8,9,10)
MR_decl_label1(fn__query__scope_to_string_1_0, 3)
MR_decl_label1(fn__query__should_display_times_1_0, 2)
MR_decl_label3(fn__query__solidify_preference_2_0, 24,4,8)
MR_decl_label10(fn__query__string_to_maybe_cmd_1_0, 2,3,7,10,12,15,4,5,21,24)
MR_decl_label10(fn__query__string_to_maybe_cmd_1_0, 18,19,31,34,28,29,41,48,50,52)
MR_decl_label10(fn__query__string_to_maybe_cmd_1_0, 54,56,38,39,63,60,61,69,66,67)
MR_decl_label10(fn__query__string_to_maybe_cmd_1_0, 77,74,75,85,91,93,95,97,82,83)
MR_decl_label10(fn__query__string_to_maybe_cmd_1_0, 104,107,101,102,114,111,112,120,123,117)
MR_decl_label10(fn__query__string_to_maybe_cmd_1_0, 118,130,133,127,128,140,143,137,138,150)
MR_decl_label10(fn__query__string_to_maybe_cmd_1_0, 153,147,148,160,163,157,158,170,173,167)
MR_decl_label10(fn__query__string_to_maybe_cmd_1_0, 168,180,183,177,178,190,187,188,195,193)
MR_decl_label10(fn__query__string_to_maybe_pref_1_0, 2,15,23,22,26,27,28,29,30,25)
MR_decl_label10(fn__query__string_to_maybe_pref_1_0, 33,34,32,37,38,36,41,44,47,49)
MR_decl_label10(fn__query__string_to_maybe_pref_1_0, 40,56,55,59,58,63,61,67,69,68)
MR_decl_label10(fn__query__string_to_maybe_pref_1_0, 71,73,75,83,84,85,86,87,82,90)
MR_decl_label10(fn__query__string_to_maybe_pref_1_0, 89,93,98,100,99,103,104,102,107,108)
MR_decl_label2(fn__query__string_to_maybe_pref_1_0, 110,3)
MR_decl_label10(fn__query__string_to_maybe_query_1_0, 3,4,7,19,21,22,20,27,30,2)
MR_decl_label1(fn__query__summarize_to_string_1_0, 3)
MR_decl_label2(fn__query__time_format_to_string_1_0, 3,4)
MR_decl_label10(__Unify___query__cmd_0_0, 43,37,33,46,5,7,9,11,13,15)
MR_decl_label10(__Unify___query__cmd_0_0, 17,20,22,24,26,28,39,41,47,1)
MR_decl_label3(__Unify___query__deep_query_0_0, 4,8,1)
MR_decl_label4(__Unify___query__display_limit_0_0, 5,7,13,1)
MR_decl_label2(__Unify___query__fields_0_0, 6,1)
MR_decl_label2(__Unify___query__inactive_items_0_0, 4,1)
MR_decl_label4(__Unify___query__memory_fields_0_0, 5,7,12,1)
MR_decl_label3(__Unify___query__order_criteria_0_0, 6,11,1)
MR_decl_label5(__Unify___query__preferences_0_0, 4,6,8,12,1)
MR_decl_label3(__Unify___query__preferences_indication_0_0, 7,13,1)
MR_decl_label1(__Unify___query__resp_0_0, 4)
MR_decl_label10(__Index___query__cmd_0_0, 22,20,19,25,3,4,5,6,7,8)
MR_decl_label10(__Index___query__cmd_0_0, 9,10,11,12,13,14,15,17,18,21)
MR_decl_label10(__Compare___query__cmd_0_0, 3,2,4,5,6,7,94,73,70,97)
MR_decl_label10(__Compare___query__cmd_0_0, 10,13,16,19,22,25,28,32,35,38)
MR_decl_label10(__Compare___query__cmd_0_0, 41,44,48,52,56,64,76,79,83,87)
MR_decl_label2(__Compare___query__cmd_0_0, 227,228)
MR_decl_label5(__Compare___query__deep_query_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___query__display_limit_0_0, 3,2,41,29,5,7,9,18,55,20)
MR_decl_label1(__Compare___query__display_limit_0_0, 88)
MR_decl_label7(__Compare___query__fields_0_0, 3,2,5,9,13,17,45)
MR_decl_label5(__Compare___query__inactive_items_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___query__memory_fields_0_0, 44,5,9,13,16)
MR_decl_label8(__Compare___query__order_criteria_0_0, 44,30,33,12,15,17,21,39)
MR_decl_label10(__Compare___query__preferences_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label2(__Compare___query__preferences_0_0, 37,85)
MR_decl_label6(__Compare___query__preferences_indication_0_0, 34,5,44,19,38,23)
MR_decl_label2(__Compare___query__resp_0_0, 3,2)
MR_def_extern_entry(query__try_exec_6_0)
MR_decl_static(fn__query__cmd_separator_char_0_0)
MR_decl_static(query__string_to_caller_groups_2_0)
MR_decl_static(fn__query__caller_groups_to_string_1_0)
MR_decl_static(query__string_to_cost_kind_2_0)
MR_decl_static(fn__query__cost_kind_to_string_1_0)
MR_decl_static(query__string_to_incl_desc_2_0)
MR_decl_static(fn__query__incl_desc_to_string_1_0)
MR_decl_static(fn__query__limit_to_string_1_0)
MR_decl_static(query__string_to_scope_2_0)
MR_decl_static(fn__query__scope_to_string_1_0)
MR_decl_static(query__string_to_contour_exclusion_2_0)
MR_decl_static(fn__query__contour_exclusion_to_string_1_0)
MR_decl_static(fn__query__cmd_str_quit_0_0)
MR_decl_static(fn__query__cmd_str_restart_0_0)
MR_decl_static(fn__query__cmd_str_timeout_0_0)
MR_decl_static(fn__query__cmd_str_menu_0_0)
MR_decl_static(fn__query__cmd_str_root_0_0)
MR_decl_static(fn__query__cmd_str_clique_0_0)
MR_decl_static(fn__query__cmd_str_proc_0_0)
MR_decl_static(fn__query__cmd_str_proc_callers_0_0)
MR_decl_static(fn__query__cmd_str_program_modules_0_0)
MR_decl_static(fn__query__cmd_str_module_0_0)
MR_decl_static(fn__query__cmd_str_module_getter_setters_0_0)
MR_decl_static(fn__query__cmd_str_top_procs_0_0)
MR_decl_static(fn__query__cmd_str_procrep_coverage_0_0)
MR_decl_static(fn__query__cmd_str_dump_proc_static_0_0)
MR_decl_static(fn__query__cmd_str_dump_proc_dynamic_0_0)
MR_decl_static(fn__query__cmd_str_dump_call_site_static_0_0)
MR_decl_static(fn__query__cmd_str_dump_call_site_dynamic_0_0)
MR_decl_static(fn__query__cmd_str_dump_raw_clique_0_0)
MR_decl_static(fn__query__cmd_str_dump_proc_var_use_0_0)
MR_decl_static(fn__query__cmd_to_string_1_0)
MR_decl_static(fn__query__pref_separator_char_0_0)
MR_decl_static(fn__query__fields_to_string_1_0)
MR_decl_static(fn__query__summarize_to_string_1_0)
MR_decl_static(fn__query__module_qual_to_string_1_0)
MR_decl_static(fn__query__order_criteria_to_string_1_0)
MR_decl_static(fn__query__time_format_to_string_1_0)
MR_decl_static(query__string_to_inactive_items_2_0)
MR_decl_static(fn__query__inactive_items_to_string_1_0)
MR_decl_static(fn__query__colour_scheme_to_string_1_0)
MR_decl_static(fn__query__box_to_string_1_0)
MR_decl_static(fn__query__preferences_to_string_1_0)
MR_def_extern_entry(fn__query__query_to_string_1_0)
MR_def_extern_entry(fn__query__string_to_maybe_pref_1_0)
MR_decl_static(query__string_to_limit_2_0)
MR_def_extern_entry(fn__query__string_to_maybe_cmd_1_0)
MR_def_extern_entry(fn__query__string_to_maybe_query_1_0)
MR_def_extern_entry(fn__query__should_display_times_1_0)
MR_def_extern_entry(fn__query__default_command_0_0)
MR_def_extern_entry(fn__query__default_fields_1_0)
MR_def_extern_entry(fn__query__default_box_tables_0_0)
MR_def_extern_entry(fn__query__default_colour_column_groups_0_0)
MR_def_extern_entry(fn__query__default_ancestor_limit_0_0)
MR_def_extern_entry(fn__query__default_summarize_ho_call_sites_0_0)
MR_def_extern_entry(fn__query__default_order_criteria_0_0)
MR_def_extern_entry(fn__query__default_contour_exclusion_0_0)
MR_def_extern_entry(fn__query__default_time_format_0_0)
MR_def_extern_entry(fn__query__default_module_qual_0_0)
MR_def_extern_entry(fn__query__default_inactive_items_0_0)
MR_def_extern_entry(fn__query__default_preferences_1_0)
MR_def_extern_entry(fn__query__all_fields_0_0)
MR_def_extern_entry(fn__query__solidify_preference_2_0)
MR_def_extern_entry(fn__query__default_cost_kind_0_0)
MR_def_extern_entry(fn__query__default_incl_desc_0_0)
MR_def_extern_entry(fn__query__default_scope_0_0)
MR_decl_static(query__exec_6_0)
MR_def_extern_entry(__Unify___query__alloc_fields_0_0)
MR_def_extern_entry(__Compare___query__alloc_fields_0_0)
MR_def_extern_entry(__Unify___query__box_tables_0_0)
MR_def_extern_entry(__Compare___query__box_tables_0_0)
MR_def_extern_entry(__Unify___query__caller_groups_0_0)
MR_def_extern_entry(__Compare___query__caller_groups_0_0)
MR_def_extern_entry(__Unify___query__callseqs_fields_0_0)
MR_def_extern_entry(__Compare___query__callseqs_fields_0_0)
MR_def_extern_entry(__Unify___query__cmd_0_0)
MR_def_extern_entry(__Index___query__cmd_0_0)
MR_def_extern_entry(__Compare___query__cmd_0_0)
MR_def_extern_entry(__Unify___query__colour_column_groups_0_0)
MR_def_extern_entry(__Compare___query__colour_column_groups_0_0)
MR_def_extern_entry(__Unify___query__contour_exclusion_0_0)
MR_def_extern_entry(__Compare___query__contour_exclusion_0_0)
MR_def_extern_entry(__Unify___query__cost_kind_0_0)
MR_def_extern_entry(__Compare___query__cost_kind_0_0)
MR_def_extern_entry(__Unify___query__deep_query_0_0)
MR_def_extern_entry(__Compare___query__deep_query_0_0)
MR_def_extern_entry(__Unify___query__descendants_meaningful_0_0)
MR_def_extern_entry(__Compare___query__descendants_meaningful_0_0)
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
MR_def_extern_entry(__Unify___query__module_qual_0_0)
MR_def_extern_entry(__Compare___query__module_qual_0_0)
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
MR_def_extern_entry(__Unify___query__summarize_ho_call_sites_0_0)
MR_def_extern_entry(__Compare___query__summarize_ho_call_sites_0_0)
MR_def_extern_entry(__Unify___query__time_fields_0_0)
MR_def_extern_entry(__Compare___query__time_fields_0_0)
MR_def_extern_entry(__Unify___query__time_format_0_0)
MR_def_extern_entry(__Compare___query__time_format_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__query__try_exec_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
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
};

static const struct mercury_type_3 mercury_common_3[8] =
{
{
{
1,
1,
1
}
},
{
{
1,
1,
0
}
},
{
{
1,
0,
1
}
},
{
{
1,
0,
0
}
},
{
{
0,
1,
1
}
},
{
{
0,
1,
0
}
},
{
{
0,
0,
1
}
},
{
{
0,
0,
0
}
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
1
},
{
0
},
{
5
},
};

static const struct mercury_type_5 mercury_common_5[4] =
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

static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
1,
1,
1,
0
},
MR_TAG_COMMON(1,4,1)
},
{
{
1,
0,
1,
0
},
MR_TAG_COMMON(1,4,1)
},
{
{
1,
5,
2,
1
},
MR_TAG_COMMON(1,4,1)
},
};

static const struct mercury_type_1 mercury_vector_common_1_0[4] =
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

static const struct mercury_type_1 mercury_vector_common_1_1[6] =
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

static const struct mercury_type_2 mercury_vector_common_2_0[6] =
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

static const struct mercury_type_2 mercury_vector_common_2_1[6] =
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

static const struct mercury_type_2 mercury_vector_common_2_2[16] =
{
{
MR_string_const("sss", 3),
1
},
{
MR_string_const("shh", 3),
2
},
{
MR_string_const("hsh", 3),
3
},
{
MR_string_const("hhs", 3),
-1
},
{
MR_string_const("shs", 3),
5
},
{
MR_string_const("hss", 3),
6
},
{
MR_string_const("hhh", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("ssh", 3),
4
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
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

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_box_tables_0_0 = {
	"box_tables",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_box_tables_0_1 = {
	"do_not_box_tables",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_box_tables_0[] = {
	&mercury_data_query__enum_functor_desc_box_tables_0_0,
	&mercury_data_query__enum_functor_desc_box_tables_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_box_tables_0[] = {
	&mercury_data_query__enum_functor_desc_box_tables_0_0,
	&mercury_data_query__enum_functor_desc_box_tables_0_1
};

const MR_Integer mercury_data_query__functor_number_map_box_tables_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_box_tables_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__box_tables_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__box_tables_0_0)),
	"query",
	"box_tables",
	{ (void *)mercury_data_query__enum_name_ordered_box_tables_0 },
	{ (void *)mercury_data_query__enum_value_ordered_box_tables_0 },
	2,
	4,
	mercury_data_query__functor_number_map_box_tables_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_2[] = {
	"cmd_timeout_minutes"
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
	mercury_data_query__field_names_cmd_0_2,
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
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_4[] = {
	"cmd_root_maybe_action"
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
	mercury_data_query__field_names_cmd_0_4,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_5[] = {
	"cmd_clique_clique_id"
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
	mercury_data_query__field_names_cmd_0_5,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_6[] = {
	"cmd_proc_proc_id"
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
	mercury_data_query__field_names_cmd_0_6,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_caller_groups_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_contour_exclusion_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_caller_groups_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_contour_exclusion_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_7[] = {
	"cmd_pc_proc_id",
	"cmd_pc_called_groups",
	"cmd_pc_bunch_number",
	"cmd_pc_callers_per_bunch",
	"cmd_pc_contour_exclusion"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_7 = {
	"deep_cmd_proc_callers",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	7,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_7,
	mercury_data_query__field_names_cmd_0_7,
	NULL
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_8 = {
	"deep_cmd_program_modules",
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_9[] = {
	"cmd_module_module_name"
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
	mercury_data_query__field_names_cmd_0_9,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_display_limit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cost_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_include_descendants_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_measurement_scope_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_display_limit_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_cost_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_include_descendants_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_measurement_scope_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_10[] = {
	"cmd_tp_display_limit",
	"cmd_tp_sort_cost_kind",
	"cmd_tp_incl_desc",
	"cmd_tp_scope"
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
	mercury_data_query__field_names_cmd_0_10,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_11[] = {
	"cmd_procrep_coverage_proc_id"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_11 = {
	"deep_cmd_procrep_coverage",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	11,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_11,
	mercury_data_query__field_names_cmd_0_11,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_12[] = {
	"cmd_mgs_module_name"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_12 = {
	"deep_cmd_module_getter_setters",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	12,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_12,
	mercury_data_query__field_names_cmd_0_12,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_13[] = {
	"cmd_dps_id"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_13 = {
	"deep_cmd_dump_proc_static",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	13,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_13,
	mercury_data_query__field_names_cmd_0_13,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_14[] = {
	"cmd_dpd_id"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_14 = {
	"deep_cmd_dump_proc_dynamic",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	14,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_14,
	mercury_data_query__field_names_cmd_0_14,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_static_ptr_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_15[] = {
	"cmd_dcss_id"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_15 = {
	"deep_cmd_dump_call_site_static",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	15,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_15,
	mercury_data_query__field_names_cmd_0_15,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_16[] = {
	"cmd_dcsd_id"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_16 = {
	"deep_cmd_dump_call_site_dynamic",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	16,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_16,
	mercury_data_query__field_names_cmd_0_16,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_17[] = {
	"cmd_dcl_id"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_17 = {
	"deep_cmd_dump_clique",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	17,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_17,
	mercury_data_query__field_names_cmd_0_17,
	NULL
};

const MR_PseudoTypeInfo mercury_data_query__field_types_cmd_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0
};

const MR_ConstString mercury_data_query__field_names_cmd_0_18[] = {
	"cmd_dpvu_id"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_cmd_0_18 = {
	"deep_cmd_dump_proc_var_use",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	18,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_cmd_0_18,
	mercury_data_query__field_names_cmd_0_18,
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
	&mercury_data_query__du_functor_desc_cmd_0_15,
	&mercury_data_query__du_functor_desc_cmd_0_16,
	&mercury_data_query__du_functor_desc_cmd_0_17,
	&mercury_data_query__du_functor_desc_cmd_0_18

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_cmd_0[] = {
	{ 4, MR_SECTAG_LOCAL,
	mercury_data_query__du_stag_ordered_cmd_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_cmd_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_cmd_0_2 },
	{ 13, MR_SECTAG_REMOTE,
	mercury_data_query__du_stag_ordered_cmd_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_cmd_0[] = {
	&mercury_data_query__du_functor_desc_cmd_0_5,
	&mercury_data_query__du_functor_desc_cmd_0_16,
	&mercury_data_query__du_functor_desc_cmd_0_15,
	&mercury_data_query__du_functor_desc_cmd_0_17,
	&mercury_data_query__du_functor_desc_cmd_0_14,
	&mercury_data_query__du_functor_desc_cmd_0_13,
	&mercury_data_query__du_functor_desc_cmd_0_18,
	&mercury_data_query__du_functor_desc_cmd_0_3,
	&mercury_data_query__du_functor_desc_cmd_0_9,
	&mercury_data_query__du_functor_desc_cmd_0_12,
	&mercury_data_query__du_functor_desc_cmd_0_6,
	&mercury_data_query__du_functor_desc_cmd_0_7,
	&mercury_data_query__du_functor_desc_cmd_0_11,
	&mercury_data_query__du_functor_desc_cmd_0_8,
	&mercury_data_query__du_functor_desc_cmd_0_0,
	&mercury_data_query__du_functor_desc_cmd_0_1,
	&mercury_data_query__du_functor_desc_cmd_0_4,
	&mercury_data_query__du_functor_desc_cmd_0_2,
	&mercury_data_query__du_functor_desc_cmd_0_10
};

const MR_Integer mercury_data_query__functor_number_map_cmd_0[] = {
	14,
	15,
	17,
	7,
	16,
	0,
	10,
	11,
	13,
	8,
	18,
	12,
	9,
	5,
	4,
	2,
	1,
	3,
	6 };
	
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
	19,
	4,
	mercury_data_query__functor_number_map_cmd_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_colour_column_groups_0_0 = {
	"colour_column_groups",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_colour_column_groups_0_1 = {
	"do_not_colour_column_groups",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_colour_column_groups_0[] = {
	&mercury_data_query__enum_functor_desc_colour_column_groups_0_0,
	&mercury_data_query__enum_functor_desc_colour_column_groups_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_colour_column_groups_0[] = {
	&mercury_data_query__enum_functor_desc_colour_column_groups_0_0,
	&mercury_data_query__enum_functor_desc_colour_column_groups_0_1
};

const MR_Integer mercury_data_query__functor_number_map_colour_column_groups_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_colour_column_groups_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__colour_column_groups_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__colour_column_groups_0_0)),
	"query",
	"colour_column_groups",
	{ (void *)mercury_data_query__enum_name_ordered_colour_column_groups_0 },
	{ (void *)mercury_data_query__enum_value_ordered_colour_column_groups_0 },
	2,
	4,
	mercury_data_query__functor_number_map_colour_column_groups_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_contour_exclusion_0_0 = {
	"apply_contour_exclusion",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_contour_exclusion_0_1 = {
	"do_not_apply_contour_exclusion",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_contour_exclusion_0[] = {
	&mercury_data_query__enum_functor_desc_contour_exclusion_0_0,
	&mercury_data_query__enum_functor_desc_contour_exclusion_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_contour_exclusion_0[] = {
	&mercury_data_query__enum_functor_desc_contour_exclusion_0_0,
	&mercury_data_query__enum_functor_desc_contour_exclusion_0_1
};

const MR_Integer mercury_data_query__functor_number_map_contour_exclusion_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_contour_exclusion_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__contour_exclusion_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__contour_exclusion_0_0)),
	"query",
	"contour_exclusion",
	{ (void *)mercury_data_query__enum_name_ordered_contour_exclusion_0 },
	{ (void *)mercury_data_query__enum_value_ordered_contour_exclusion_0 },
	2,
	4,
	mercury_data_query__functor_number_map_contour_exclusion_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1query__type_ctor_info_cmd_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_query__type_ctor_info_cmd_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_query__type_ctor_info_preferences_0
}};

const MR_PseudoTypeInfo mercury_data_query__field_types_deep_query_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1query__type_ctor_info_cmd_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1query__type_ctor_info_preferences_0
};

const MR_ConstString mercury_data_query__field_names_deep_query_0_0[] = {
	"maybe_cmd",
	"deep_file_name",
	"maybe_prefs"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_deep_query_0_0 = {
	"deep_query",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_query__field_types_deep_query_0_0,
	mercury_data_query__field_names_deep_query_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_query__du_stag_ordered_deep_query_0_0[] = {
	&mercury_data_query__du_functor_desc_deep_query_0_0

};

const MR_DuPtagLayout mercury_data_query__du_ptag_ordered_deep_query_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_query__du_stag_ordered_deep_query_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_query__du_name_ordered_deep_query_0[] = {
	&mercury_data_query__du_functor_desc_deep_query_0_0
};

const MR_Integer mercury_data_query__functor_number_map_deep_query_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_deep_query_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__deep_query_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__deep_query_0_0)),
	"query",
	"deep_query",
	{ (void *)mercury_data_query__du_name_ordered_deep_query_0 },
	{ (void *)mercury_data_query__du_ptag_ordered_deep_query_0 },
	1,
	4,
	mercury_data_query__functor_number_map_deep_query_0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_descendants_meaningful_0_0 = {
	"descendants_meaningful",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_descendants_meaningful_0_1 = {
	"descendants_not_meaningful",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_descendants_meaningful_0[] = {
	&mercury_data_query__enum_functor_desc_descendants_meaningful_0_0,
	&mercury_data_query__enum_functor_desc_descendants_meaningful_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_descendants_meaningful_0[] = {
	&mercury_data_query__enum_functor_desc_descendants_meaningful_0_0,
	&mercury_data_query__enum_functor_desc_descendants_meaningful_0_1
};

const MR_Integer mercury_data_query__functor_number_map_descendants_meaningful_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_descendants_meaningful_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__descendants_meaningful_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__descendants_meaningful_0_0)),
	"query",
	"descendants_meaningful",
	{ (void *)mercury_data_query__enum_name_ordered_descendants_meaningful_0 },
	{ (void *)mercury_data_query__enum_value_ordered_descendants_meaningful_0 },
	2,
	4,
	mercury_data_query__functor_number_map_descendants_meaningful_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_inactive_status_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_inactive_items_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_inactive_status_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_inactive_status_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_inactive_status_0
};

const MR_ConstString mercury_data_query__field_names_inactive_items_0_0[] = {
	"inactive_call_sites",
	"inactive_procs",
	"inactive_modules"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_inactive_items_0_0 = {
	"inactive_items",
	3,
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

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_module_qual_0_0 = {
	"module_qual_always",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_module_qual_0_1 = {
	"module_qual_when_diff",
	1
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_module_qual_0_2 = {
	"module_qual_never",
	2
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_module_qual_0[] = {
	&mercury_data_query__enum_functor_desc_module_qual_0_0,
	&mercury_data_query__enum_functor_desc_module_qual_0_1,
	&mercury_data_query__enum_functor_desc_module_qual_0_2
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_module_qual_0[] = {
	&mercury_data_query__enum_functor_desc_module_qual_0_0,
	&mercury_data_query__enum_functor_desc_module_qual_0_2,
	&mercury_data_query__enum_functor_desc_module_qual_0_1
};

const MR_Integer mercury_data_query__functor_number_map_module_qual_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_module_qual_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__module_qual_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__module_qual_0_0)),
	"query",
	"module_qual",
	{ (void *)mercury_data_query__enum_name_ordered_module_qual_0 },
	{ (void *)mercury_data_query__enum_value_ordered_module_qual_0 },
	3,
	4,
	mercury_data_query__functor_number_map_module_qual_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_box_tables_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_colour_column_groups_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_summarize_ho_call_sites_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_order_criteria_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_time_format_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_module_qual_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_inactive_items_0;

const MR_PseudoTypeInfo mercury_data_query__field_types_preferences_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_box_tables_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_colour_column_groups_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_summarize_ho_call_sites_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_order_criteria_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_contour_exclusion_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_time_format_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_module_qual_0,
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
	"pref_module_qual",
	"pref_inactive"
};

static const MR_DuFunctorDesc mercury_data_query__du_functor_desc_preferences_0_0 = {
	"preferences",
	10,
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

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_summarize_ho_call_sites_0_0 = {
	"summarize_ho_call_sites",
	0
};

static const MR_EnumFunctorDesc mercury_data_query__enum_functor_desc_summarize_ho_call_sites_0_1 = {
	"do_not_summarize_ho_call_sites",
	1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_value_ordered_summarize_ho_call_sites_0[] = {
	&mercury_data_query__enum_functor_desc_summarize_ho_call_sites_0_0,
	&mercury_data_query__enum_functor_desc_summarize_ho_call_sites_0_1
};

const MR_EnumFunctorDescPtr mercury_data_query__enum_name_ordered_summarize_ho_call_sites_0[] = {
	&mercury_data_query__enum_functor_desc_summarize_ho_call_sites_0_1,
	&mercury_data_query__enum_functor_desc_summarize_ho_call_sites_0_0
};

const MR_Integer mercury_data_query__functor_number_map_summarize_ho_call_sites_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_summarize_ho_call_sites_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___query__summarize_ho_call_sites_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___query__summarize_ho_call_sites_0_0)),
	"query",
	"summarize_ho_call_sites",
	{ (void *)mercury_data_query__enum_name_ordered_summarize_ho_call_sites_0 },
	{ (void *)mercury_data_query__enum_value_ordered_summarize_ho_call_sites_0 },
	2,
	4,
	mercury_data_query__functor_number_map_summarize_ho_call_sites_0
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
359,
"c1;"
};


extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(exception__try_io_4_0);
MR_decl_entry(univ__univ_to_type_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_math__type_ctor_info_domain_error_0;

MR_BEGIN_MODULE(query_module0)
	MR_init_entry1(query__try_exec_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__query__try_exec_6_0);
	MR_init_label10(query__try_exec_6_0,3,8,6,11,10,15,17,14,21,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_exec'/6 mode 0 */
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
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(1);
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
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		query__try_exec_6_0_i8);
MR_def_label(query__try_exec_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__try_exec_6_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("</H3>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__try_exec_6_0_i21);
MR_def_label(query__try_exec_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		query__try_exec_6_0_i11);
MR_def_label(query__try_exec_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__try_exec_6_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("internal software error: ", 25);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__try_exec_6_0_i17);
MR_def_label(query__try_exec_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		query__try_exec_6_0_i15);
MR_def_label(query__try_exec_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(query__try_exec_6_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("domain error: ", 14);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__try_exec_6_0_i17);
MR_def_label(query__try_exec_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("</H3>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__try_exec_6_0_i21);
MR_def_label(query__try_exec_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unknown exception", 17);
	MR_r2 = (MR_Word) MR_string_const("</H3>\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		query__try_exec_6_0_i21);
MR_def_label(query__try_exec_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<H3>AN EXCEPTION HAS OCCURRED: ", 31);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(query__try_exec_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module1)
	MR_init_entry1(fn__query__cmd_separator_char_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_separator_char_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_separator_char'/1 mode 0 */
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


MR_BEGIN_MODULE(query_module2)
	MR_init_entry1(query__string_to_caller_groups_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__query__string_to_caller_groups_2_0);
	MR_init_label4(query__string_to_caller_groups_2_0,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_caller_groups'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module3)
	MR_init_entry1(fn__query__caller_groups_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__caller_groups_to_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'caller_groups_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__caller_groups_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module4)
	MR_init_entry1(query__string_to_cost_kind_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__query__string_to_cost_kind_2_0);
	MR_init_label6(query__string_to_cost_kind_2_0,3,4,5,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_cost_kind'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module5)
	MR_init_entry1(fn__query__cost_kind_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cost_kind_to_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_kind_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cost_kind_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_1, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module6)
	MR_init_entry1(query__string_to_incl_desc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__query__string_to_incl_desc_2_0);
	MR_init_label2(query__string_to_incl_desc_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_incl_desc'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module7)
	MR_init_entry1(fn__query__incl_desc_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__incl_desc_to_string_1_0);
	MR_init_label1(fn__query__incl_desc_to_string_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'incl_desc_to_string'/2 mode 0 */
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

MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__string__char_to_string_1_0);

MR_BEGIN_MODULE(query_module8)
	MR_init_entry1(fn__query__limit_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__limit_to_string_1_0);
	MR_init_label6(fn__query__limit_to_string_1_0,32,4,5,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'limit_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__limit_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr4);
	MR_r2 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__query__limit_to_string_1_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__query__limit_to_string_1_0_i32);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(2, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("v%g", 3);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__query__limit_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__limit_to_string_1_0_i4);
MR_def_label(fn__query__limit_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__limit_to_string_1_0_i5);
MR_def_label(fn__query__limit_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__limit_to_string_1_0_i6);
MR_def_label(fn__query__limit_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__limit_to_string_1_0_i7);
MR_def_label(fn__query__limit_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__query__limit_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
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


MR_BEGIN_MODULE(query_module9)
	MR_init_entry1(query__string_to_scope_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__query__string_to_scope_2_0);
	MR_init_label2(query__string_to_scope_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_scope'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module10)
	MR_init_entry1(fn__query__scope_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__scope_to_string_1_0);
	MR_init_label1(fn__query__scope_to_string_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'scope_to_string'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module11)
	MR_init_entry1(query__string_to_contour_exclusion_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__query__string_to_contour_exclusion_2_0);
	MR_init_label2(query__string_to_contour_exclusion_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_contour_exclusion'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__string_to_contour_exclusion_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ac", 2)) != 0)) {
		MR_GOTO_LAB(query__string_to_contour_exclusion_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_contour_exclusion_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("nc", 2)) != 0)) {
		MR_GOTO_LAB(query__string_to_contour_exclusion_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_contour_exclusion_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module12)
	MR_init_entry1(fn__query__contour_exclusion_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__contour_exclusion_to_string_1_0);
	MR_init_label1(fn__query__contour_exclusion_to_string_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contour_exclusion_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__contour_exclusion_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__query__contour_exclusion_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("ac", 2);
	MR_proceed();
MR_def_label(fn__query__contour_exclusion_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("nc", 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module13)
	MR_init_entry1(fn__query__cmd_str_quit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_quit_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_quit'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_quit_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("quit", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module14)
	MR_init_entry1(fn__query__cmd_str_restart_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_restart_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_restart'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_restart_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("restart", 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module15)
	MR_init_entry1(fn__query__cmd_str_timeout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_timeout_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_timeout'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_timeout_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("timeout", 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module16)
	MR_init_entry1(fn__query__cmd_str_menu_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_menu_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_menu'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_menu_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("menu", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module17)
	MR_init_entry1(fn__query__cmd_str_root_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_root_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_root'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_root_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("root", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module18)
	MR_init_entry1(fn__query__cmd_str_clique_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_clique_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_clique'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_clique_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("clique", 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module19)
	MR_init_entry1(fn__query__cmd_str_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_proc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_proc'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_proc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("proc", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module20)
	MR_init_entry1(fn__query__cmd_str_proc_callers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_proc_callers_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_proc_callers'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_proc_callers_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("proc_callers", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module21)
	MR_init_entry1(fn__query__cmd_str_program_modules_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_program_modules_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_program_modules'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_program_modules_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("program_modules", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module22)
	MR_init_entry1(fn__query__cmd_str_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_module_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("module", 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module23)
	MR_init_entry1(fn__query__cmd_str_module_getter_setters_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_module_getter_setters_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_module_getter_setters'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_module_getter_setters_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("module_getter_setters", 21);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module24)
	MR_init_entry1(fn__query__cmd_str_top_procs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_top_procs_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_top_procs'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_top_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("top_procs", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module25)
	MR_init_entry1(fn__query__cmd_str_procrep_coverage_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_procrep_coverage_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_procrep_coverage'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_procrep_coverage_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("procrep_coverage", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module26)
	MR_init_entry1(fn__query__cmd_str_dump_proc_static_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_dump_proc_static_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_dump_proc_static'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_dump_proc_static_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dump_proc_static", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module27)
	MR_init_entry1(fn__query__cmd_str_dump_proc_dynamic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_dump_proc_dynamic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_dump_proc_dynamic'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_dump_proc_dynamic_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dump_proc_dynamic", 17);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module28)
	MR_init_entry1(fn__query__cmd_str_dump_call_site_static_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_dump_call_site_static_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_dump_call_site_static'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_dump_call_site_static_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dump_call_site_static", 21);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module29)
	MR_init_entry1(fn__query__cmd_str_dump_call_site_dynamic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_dump_call_site_dynamic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_dump_call_site_dynamic'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_dump_call_site_dynamic_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dump_call_site_dynamic", 22);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module30)
	MR_init_entry1(fn__query__cmd_str_dump_raw_clique_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_dump_raw_clique_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_dump_raw_clique'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_dump_raw_clique_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dump_raw_clique", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module31)
	MR_init_entry1(fn__query__cmd_str_dump_proc_var_use_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_str_dump_proc_var_use_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_str_dump_proc_var_use'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_str_dump_proc_var_use_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dump_proc_var_use", 17);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module32)
	MR_init_entry1(fn__query__cmd_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__cmd_to_string_1_0);
	MR_init_label10(fn__query__cmd_to_string_1_0,156,193,128,194,116,117,118,115,121,195)
	MR_init_label10(fn__query__cmd_to_string_1_0,3,4,10,11,17,18,24,25,31,32)
	MR_init_label10(fn__query__cmd_to_string_1_0,38,39,45,46,198,54,55,56,60,61)
	MR_init_label10(fn__query__cmd_to_string_1_0,62,66,67,68,69,70,71,73,74,75)
	MR_init_label10(fn__query__cmd_to_string_1_0,76,77,78,79,80,81,82,83,84,85)
	MR_init_label10(fn__query__cmd_to_string_1_0,86,87,88,89,90,91,92,93,94,95)
	MR_init_label10(fn__query__cmd_to_string_1_0,100,101,102,103,104,105,196,197,134,135)
	MR_init_label10(fn__query__cmd_to_string_1_0,136,137,138,139,140,141,142,143,144,145)
	MR_init_label9(fn__query__cmd_to_string_1_0,146,147,148,149,150,151,152,153,154)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmd_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__cmd_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i156) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i193) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i194) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i195));
MR_def_label(fn__query__cmd_to_string_1_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__cmd_to_string_1_0_i196);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__query__cmd_to_string_1_0_i197);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__query__cmd_to_string_1_0_i198);
	}
	MR_np_tailcall_ent(fn__query__cmd_str_program_modules_0_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__query__cmd_str_timeout_0_0,
		fn__query__cmd_to_string_1_0_i128);
MR_def_label(fn__query__cmd_to_string_1_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i68);
MR_def_label(fn__query__cmd_to_string_1_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(2, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__query__cmd_to_string_1_0_i115);
	}
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i116);
MR_def_label(fn__query__cmd_to_string_1_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_str_root_0_0,
		fn__query__cmd_to_string_1_0_i117);
MR_def_label(fn__query__cmd_to_string_1_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i118);
MR_def_label(fn__query__cmd_to_string_1_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("no", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i105);
MR_def_label(fn__query__cmd_to_string_1_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__query__cmd_str_root_0_0,
		fn__query__cmd_to_string_1_0_i121);
MR_def_label(fn__query__cmd_to_string_1_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i68);
MR_def_label(fn__query__cmd_to_string_1_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i3) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i66) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i73) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i54) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i134) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i100) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i60) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i38) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i31) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i17) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i10) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i24) MR_AND
		MR_LABEL_AP(fn__query__cmd_to_string_1_0_i45));
MR_def_label(fn__query__cmd_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_clique_0_0,
		fn__query__cmd_to_string_1_0_i4);
MR_def_label(fn__query__cmd_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i68);
MR_def_label(fn__query__cmd_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_dump_call_site_dynamic_0_0,
		fn__query__cmd_to_string_1_0_i11);
MR_def_label(fn__query__cmd_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i68);
MR_def_label(fn__query__cmd_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_dump_call_site_static_0_0,
		fn__query__cmd_to_string_1_0_i18);
MR_def_label(fn__query__cmd_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i68);
MR_def_label(fn__query__cmd_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_dump_raw_clique_0_0,
		fn__query__cmd_to_string_1_0_i25);
MR_def_label(fn__query__cmd_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i102);
MR_def_label(fn__query__cmd_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_dump_proc_dynamic_0_0,
		fn__query__cmd_to_string_1_0_i32);
MR_def_label(fn__query__cmd_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i68);
MR_def_label(fn__query__cmd_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_dump_proc_static_0_0,
		fn__query__cmd_to_string_1_0_i39);
MR_def_label(fn__query__cmd_to_string_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i102);
MR_def_label(fn__query__cmd_to_string_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_dump_proc_var_use_0_0,
		fn__query__cmd_to_string_1_0_i46);
MR_def_label(fn__query__cmd_to_string_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i102);
MR_def_label(fn__query__cmd_to_string_1_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__query__cmd_str_menu_0_0);
MR_def_label(fn__query__cmd_to_string_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_module_0_0,
		fn__query__cmd_to_string_1_0_i55);
MR_def_label(fn__query__cmd_to_string_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i56);
MR_def_label(fn__query__cmd_to_string_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i70);
MR_def_label(fn__query__cmd_to_string_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_module_getter_setters_0_0,
		fn__query__cmd_to_string_1_0_i61);
MR_def_label(fn__query__cmd_to_string_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i62);
MR_def_label(fn__query__cmd_to_string_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i104);
MR_def_label(fn__query__cmd_to_string_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_proc_0_0,
		fn__query__cmd_to_string_1_0_i67);
MR_def_label(fn__query__cmd_to_string_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i68);
MR_def_label(fn__query__cmd_to_string_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__cmd_to_string_1_0_i69);
MR_def_label(fn__query__cmd_to_string_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i70);
MR_def_label(fn__query__cmd_to_string_1_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i71);
MR_def_label(fn__query__cmd_to_string_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__query__cmd_to_string_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__query__caller_groups_to_string_1_0,
		fn__query__cmd_to_string_1_0_i74);
MR_def_label(fn__query__cmd_to_string_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__contour_exclusion_to_string_1_0,
		fn__query__cmd_to_string_1_0_i75);
MR_def_label(fn__query__cmd_to_string_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_str_proc_callers_0_0,
		fn__query__cmd_to_string_1_0_i76);
MR_def_label(fn__query__cmd_to_string_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i77);
MR_def_label(fn__query__cmd_to_string_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i78);
MR_def_label(fn__query__cmd_to_string_1_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i79);
MR_def_label(fn__query__cmd_to_string_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i80);
MR_def_label(fn__query__cmd_to_string_1_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i81);
MR_def_label(fn__query__cmd_to_string_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i82);
MR_def_label(fn__query__cmd_to_string_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i83);
MR_def_label(fn__query__cmd_to_string_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__cmd_to_string_1_0_i84);
MR_def_label(fn__query__cmd_to_string_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i85);
MR_def_label(fn__query__cmd_to_string_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i86);
MR_def_label(fn__query__cmd_to_string_1_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i87);
MR_def_label(fn__query__cmd_to_string_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__cmd_to_string_1_0_i88);
MR_def_label(fn__query__cmd_to_string_1_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i89);
MR_def_label(fn__query__cmd_to_string_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i90);
MR_def_label(fn__query__cmd_to_string_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i91);
MR_def_label(fn__query__cmd_to_string_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i92);
MR_def_label(fn__query__cmd_to_string_1_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i93);
MR_def_label(fn__query__cmd_to_string_1_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i94);
MR_def_label(fn__query__cmd_to_string_1_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__cmd_to_string_1_0_i95);
MR_def_label(fn__query__cmd_to_string_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i152);
MR_def_label(fn__query__cmd_to_string_1_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__query__cmd_str_procrep_coverage_0_0,
		fn__query__cmd_to_string_1_0_i101);
MR_def_label(fn__query__cmd_to_string_1_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i102);
MR_def_label(fn__query__cmd_to_string_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__cmd_to_string_1_0_i103);
MR_def_label(fn__query__cmd_to_string_1_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i104);
MR_def_label(fn__query__cmd_to_string_1_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i105);
MR_def_label(fn__query__cmd_to_string_1_0,105)
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
MR_def_label(fn__query__cmd_to_string_1_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__query__cmd_str_quit_0_0);
MR_def_label(fn__query__cmd_to_string_1_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__query__cmd_str_restart_0_0);
MR_def_label(fn__query__cmd_to_string_1_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__query__limit_to_string_1_0,
		fn__query__cmd_to_string_1_0_i135);
MR_def_label(fn__query__cmd_to_string_1_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__cost_kind_to_string_1_0,
		fn__query__cmd_to_string_1_0_i136);
MR_def_label(fn__query__cmd_to_string_1_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__incl_desc_to_string_1_0,
		fn__query__cmd_to_string_1_0_i137);
MR_def_label(fn__query__cmd_to_string_1_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__scope_to_string_1_0,
		fn__query__cmd_to_string_1_0_i138);
MR_def_label(fn__query__cmd_to_string_1_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_str_top_procs_0_0,
		fn__query__cmd_to_string_1_0_i139);
MR_def_label(fn__query__cmd_to_string_1_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i140);
MR_def_label(fn__query__cmd_to_string_1_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i141);
MR_def_label(fn__query__cmd_to_string_1_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i142);
MR_def_label(fn__query__cmd_to_string_1_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__query__cmd_separator_char_0_0,
		fn__query__cmd_to_string_1_0_i143);
MR_def_label(fn__query__cmd_to_string_1_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i144);
MR_def_label(fn__query__cmd_to_string_1_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i145);
MR_def_label(fn__query__cmd_to_string_1_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i146);
MR_def_label(fn__query__cmd_to_string_1_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i147);
MR_def_label(fn__query__cmd_to_string_1_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i148);
MR_def_label(fn__query__cmd_to_string_1_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i149);
MR_def_label(fn__query__cmd_to_string_1_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i150);
MR_def_label(fn__query__cmd_to_string_1_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i151);
MR_def_label(fn__query__cmd_to_string_1_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i152);
MR_def_label(fn__query__cmd_to_string_1_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__cmd_to_string_1_0_i153);
MR_def_label(fn__query__cmd_to_string_1_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__cmd_to_string_1_0_i154);
MR_def_label(fn__query__cmd_to_string_1_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
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


MR_BEGIN_MODULE(query_module33)
	MR_init_entry1(fn__query__pref_separator_char_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__pref_separator_char_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pref_separator_char'/1 mode 0 */
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


MR_BEGIN_MODULE(query_module34)
	MR_init_entry1(fn__query__fields_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__fields_to_string_1_0);
	MR_init_label10(fn__query__fields_to_string_1_0,3,4,6,8,9,10,12,13,14,16)
	MR_init_label10(fn__query__fields_to_string_1_0,18,19,21,25,26,27,28,29,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fields_to_string'/2 mode 0 */
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
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 4);
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
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
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
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_0, ((MR_Integer) MR_tempr3 * (MR_Integer) 2));
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
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
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i19);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__query__fields_to_string_1_0_i16);
	}
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__fields_to_string_1_0_i25);
MR_def_label(fn__query__fields_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(4), 0);
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
MR_def_label(fn__query__fields_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(4), 0);
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


MR_BEGIN_MODULE(query_module35)
	MR_init_entry1(fn__query__summarize_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__summarize_to_string_1_0);
	MR_init_label1(fn__query__summarize_to_string_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'summarize_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__summarize_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__query__summarize_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("nosum", 5);
	MR_proceed();
MR_def_label(fn__query__summarize_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("sum", 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module36)
	MR_init_entry1(fn__query__module_qual_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__module_qual_to_string_1_0);
	MR_init_label2(fn__query__module_qual_to_string_1_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_qual_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__module_qual_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__query__module_qual_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("mqa", 3);
	MR_proceed();
MR_def_label(fn__query__module_qual_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__query__module_qual_to_string_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("mqn", 3);
	MR_proceed();
MR_def_label(fn__query__module_qual_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mqwd", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module37)
	MR_init_entry1(fn__query__order_criteria_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__order_criteria_to_string_1_0);
	MR_init_label10(fn__query__order_criteria_to_string_1_0,19,43,5,7,9,10,12,13,14,15)
	MR_init_label2(fn__query__order_criteria_to_string_1_0,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'order_criteria_to_string'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Integer) 45;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__order_criteria_to_string_1_0_i5);
MR_def_label(fn__query__order_criteria_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_1, ((MR_Integer) MR_tempr3 * (MR_Integer) 2));
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
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


MR_BEGIN_MODULE(query_module38)
	MR_init_entry1(fn__query__time_format_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__time_format_to_string_1_0);
	MR_init_label2(fn__query__time_format_to_string_1_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'time_format_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__time_format_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__query__time_format_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("no", 2);
	MR_proceed();
MR_def_label(fn__query__time_format_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__query__time_format_to_string_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("mi", 2);
	MR_proceed();
MR_def_label(fn__query__time_format_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("th", 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module39)
	MR_init_entry1(query__string_to_inactive_items_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__query__string_to_inactive_items_2_0);
	MR_init_label10(query__string_to_inactive_items_2_0,3,23,5,6,8,10,12,14,16,18)
	MR_init_label1(query__string_to_inactive_items_2_0,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_inactive_items'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__string_to_inactive_items_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 15);
MR_def_label(query__string_to_inactive_items_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r3 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_2_2)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(query__string_to_inactive_items_2_0_i5);
	}
	MR_r3 = ((MR_Word *) &mercury_vector_common_2_2)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(query__string_to_inactive_items_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(query__string_to_inactive_items_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i6) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i12) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i16) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i18) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i10) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i14) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i20) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i23) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i23) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i23) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i23) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i8) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i23) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i23) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i23) MR_AND
		MR_LABEL_AP(query__string_to_inactive_items_2_0_i23));
MR_def_label(query__string_to_inactive_items_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_inactive_items_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_inactive_items_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_inactive_items_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_inactive_items_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_inactive_items_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_inactive_items_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(query__string_to_inactive_items_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module40)
	MR_init_entry1(fn__query__inactive_items_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__inactive_items_to_string_1_0);
	MR_init_label7(fn__query__inactive_items_to_string_1_0,7,5,9,3,13,11,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inactive_items_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__inactive_items_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__inactive_items_to_string_1_0_i3);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__inactive_items_to_string_1_0_i5);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__inactive_items_to_string_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("hhh", 3);
	MR_proceed();
	}
MR_def_label(fn__query__inactive_items_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("shh", 3);
	MR_proceed();
MR_def_label(fn__query__inactive_items_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__inactive_items_to_string_1_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("hsh", 3);
	MR_proceed();
	}
MR_def_label(fn__query__inactive_items_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssh", 3);
	MR_proceed();
MR_def_label(fn__query__inactive_items_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__inactive_items_to_string_1_0_i11);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__inactive_items_to_string_1_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("hhs", 3);
	MR_proceed();
	}
MR_def_label(fn__query__inactive_items_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("shs", 3);
	MR_proceed();
MR_def_label(fn__query__inactive_items_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__query__inactive_items_to_string_1_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("hss", 3);
	MR_proceed();
	}
MR_def_label(fn__query__inactive_items_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("sss", 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module41)
	MR_init_entry1(fn__query__colour_scheme_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__colour_scheme_to_string_1_0);
	MR_init_label1(fn__query__colour_scheme_to_string_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'colour_scheme_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__colour_scheme_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__query__colour_scheme_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("cols", 4);
	MR_proceed();
MR_def_label(fn__query__colour_scheme_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("none", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module42)
	MR_init_entry1(fn__query__box_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__box_to_string_1_0);
	MR_init_label1(fn__query__box_to_string_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__box_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__query__box_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("box", 3);
	MR_proceed();
MR_def_label(fn__query__box_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("nobox", 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module43)
	MR_init_entry1(fn__query__preferences_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__preferences_to_string_1_0);
	MR_init_label10(fn__query__preferences_to_string_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(fn__query__preferences_to_string_1_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(fn__query__preferences_to_string_1_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(fn__query__preferences_to_string_1_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label6(fn__query__preferences_to_string_1_0,43,44,45,46,47,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'preferences_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__query__preferences_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__query__preferences_to_string_1_0_i3);
	}
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(1) = (MR_Word) MR_string_const("no", 2);
	}
	MR_np_call_localret_ent(fn__query__fields_to_string_1_0,
		fn__query__preferences_to_string_1_0_i5);
MR_def_label(fn__query__preferences_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__query__preferences_to_string_1_0_i4);
MR_def_label(fn__query__preferences_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__fields_to_string_1_0,
		fn__query__preferences_to_string_1_0_i5);
MR_def_label(fn__query__preferences_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__query__pref_separator_char_0_0,
		fn__query__preferences_to_string_1_0_i6);
MR_def_label(fn__query__preferences_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__box_to_string_1_0,
		fn__query__preferences_to_string_1_0_i7);
MR_def_label(fn__query__preferences_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__query__pref_separator_char_0_0,
		fn__query__preferences_to_string_1_0_i8);
MR_def_label(fn__query__preferences_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__colour_scheme_to_string_1_0,
		fn__query__preferences_to_string_1_0_i9);
MR_def_label(fn__query__preferences_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__query__pref_separator_char_0_0,
		fn__query__preferences_to_string_1_0_i10);
MR_def_label(fn__query__preferences_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__query__pref_separator_char_0_0,
		fn__query__preferences_to_string_1_0_i11);
MR_def_label(fn__query__preferences_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__summarize_to_string_1_0,
		fn__query__preferences_to_string_1_0_i12);
MR_def_label(fn__query__preferences_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(fn__query__pref_separator_char_0_0,
		fn__query__preferences_to_string_1_0_i13);
MR_def_label(fn__query__preferences_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__order_criteria_to_string_1_0,
		fn__query__preferences_to_string_1_0_i14);
MR_def_label(fn__query__preferences_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(fn__query__pref_separator_char_0_0,
		fn__query__preferences_to_string_1_0_i15);
MR_def_label(fn__query__preferences_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__contour_exclusion_to_string_1_0,
		fn__query__preferences_to_string_1_0_i16);
MR_def_label(fn__query__preferences_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(fn__query__pref_separator_char_0_0,
		fn__query__preferences_to_string_1_0_i17);
MR_def_label(fn__query__preferences_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__time_format_to_string_1_0,
		fn__query__preferences_to_string_1_0_i18);
MR_def_label(fn__query__preferences_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(fn__query__pref_separator_char_0_0,
		fn__query__preferences_to_string_1_0_i19);
MR_def_label(fn__query__preferences_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__module_qual_to_string_1_0,
		fn__query__preferences_to_string_1_0_i20);
MR_def_label(fn__query__preferences_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(fn__query__pref_separator_char_0_0,
		fn__query__preferences_to_string_1_0_i21);
MR_def_label(fn__query__preferences_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__inactive_items_to_string_1_0,
		fn__query__preferences_to_string_1_0_i22);
MR_def_label(fn__query__preferences_to_string_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__preferences_to_string_1_0_i23);
MR_def_label(fn__query__preferences_to_string_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i24);
MR_def_label(fn__query__preferences_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i25);
MR_def_label(fn__query__preferences_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__preferences_to_string_1_0_i26);
MR_def_label(fn__query__preferences_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i27);
MR_def_label(fn__query__preferences_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i28);
MR_def_label(fn__query__preferences_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__preferences_to_string_1_0_i29);
MR_def_label(fn__query__preferences_to_string_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i30);
MR_def_label(fn__query__preferences_to_string_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i31);
MR_def_label(fn__query__preferences_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__preferences_to_string_1_0_i32);
MR_def_label(fn__query__preferences_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i33);
MR_def_label(fn__query__preferences_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i34);
MR_def_label(fn__query__preferences_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__preferences_to_string_1_0_i35);
MR_def_label(fn__query__preferences_to_string_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i36);
MR_def_label(fn__query__preferences_to_string_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i37);
MR_def_label(fn__query__preferences_to_string_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__preferences_to_string_1_0_i38);
MR_def_label(fn__query__preferences_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i39);
MR_def_label(fn__query__preferences_to_string_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i40);
MR_def_label(fn__query__preferences_to_string_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__preferences_to_string_1_0_i41);
MR_def_label(fn__query__preferences_to_string_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i42);
MR_def_label(fn__query__preferences_to_string_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i43);
MR_def_label(fn__query__preferences_to_string_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__preferences_to_string_1_0_i44);
MR_def_label(fn__query__preferences_to_string_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i45);
MR_def_label(fn__query__preferences_to_string_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i46);
MR_def_label(fn__query__preferences_to_string_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__preferences_to_string_1_0_i47);
MR_def_label(fn__query__preferences_to_string_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__preferences_to_string_1_0_i48);
MR_def_label(fn__query__preferences_to_string_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module44)
	MR_init_entry1(fn__query__query_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__query_to_string_1_0);
	MR_init_label8(fn__query__query_to_string_1_0,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'query_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__query_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__query__query_to_string_1_0_i3);
	}
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_tfield(1, MR_tfield(0, MR_r1, 0), 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(fn__query__cmd_to_string_1_0,
		fn__query__query_to_string_1_0_i5);
MR_def_label(fn__query__query_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tfield(0, MR_tempr1, 0), 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__query__preferences_to_string_1_0,
		fn__query__query_to_string_1_0_i4);
MR_def_label(fn__query__query_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__cmd_to_string_1_0,
		fn__query__query_to_string_1_0_i5);
MR_def_label(fn__query__query_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 38;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__query_to_string_1_0_i6);
MR_def_label(fn__query__query_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 38;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__query__query_to_string_1_0_i7);
MR_def_label(fn__query__query_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__query_to_string_1_0_i8);
MR_def_label(fn__query__query_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__query_to_string_1_0_i9);
MR_def_label(fn__query__query_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__query__query_to_string_1_0_i10);
MR_def_label(fn__query__query_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(util__split_3_0);
MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(query_module45)
	MR_init_entry1(fn__query__string_to_maybe_pref_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__string_to_maybe_pref_1_0);
	MR_init_label10(fn__query__string_to_maybe_pref_1_0,2,15,23,22,26,27,28,29,30,25)
	MR_init_label10(fn__query__string_to_maybe_pref_1_0,33,34,32,37,38,36,41,44,47,49)
	MR_init_label10(fn__query__string_to_maybe_pref_1_0,40,56,55,59,58,63,61,67,69,68)
	MR_init_label10(fn__query__string_to_maybe_pref_1_0,71,73,75,83,84,85,86,87,82,90)
	MR_init_label10(fn__query__string_to_maybe_pref_1_0,89,93,98,100,99,103,104,102,107,108)
	MR_init_label2(fn__query__string_to_maybe_pref_1_0,110,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_maybe_pref'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__string_to_maybe_pref_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 47;
	MR_np_call_localret_ent(util__split_3_0,
		fn__query__string_to_maybe_pref_1_0_i2);
MR_def_label(fn__query__string_to_maybe_pref_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr6 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr6,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr7 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr7,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr8 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr8,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr9 = MR_tfield(1, MR_tempr8, 1);
	if (MR_LTAGS_TEST(MR_tempr9,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr10 = MR_tfield(1, MR_tempr9, 1);
	if (MR_LTAGS_TESTR(MR_tempr10,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr6, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr7, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr8, 0);
	MR_sv(9) = MR_tfield(1, MR_tempr9, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 45;
	}
	MR_np_call_localret_ent(util__split_3_0,
		fn__query__string_to_maybe_pref_1_0_i15);
MR_def_label(fn__query__string_to_maybe_pref_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	MR_r5 = MR_tempr4;
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r6 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r6 = MR_tfield(1, MR_tempr5, 0);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i23);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i22);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("p", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_r6 = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i26);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i25);
MR_def_label(fn__query__string_to_maybe_pref_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("q", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i27);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i25);
MR_def_label(fn__query__string_to_maybe_pref_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("t", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i28);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i25);
MR_def_label(fn__query__string_to_maybe_pref_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("qt", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i29);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 3;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i25);
MR_def_label(fn__query__string_to_maybe_pref_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("tp", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i30);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 4;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i25);
MR_def_label(fn__query__string_to_maybe_pref_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("qtp", 3)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 5;
MR_def_label(fn__query__string_to_maybe_pref_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("S", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i33);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i32);
MR_def_label(fn__query__string_to_maybe_pref_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i34);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i32);
MR_def_label(fn__query__string_to_maybe_pref_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("s", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("A", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i37);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i36);
MR_def_label(fn__query__string_to_maybe_pref_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i38);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i36);
MR_def_label(fn__query__string_to_maybe_pref_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("a", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("B", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(2,4,0);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i40);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("W", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(2,4,1);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i40);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i47);
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
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i40);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("b", 1)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i40);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,49)
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
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(1,4,1);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("box", 3)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i56);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i55);
MR_def_label(fn__query__string_to_maybe_pref_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("nobox", 5)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("cols", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i59);
	}
	MR_sv(2) = MR_r2;
	MR_sv(10) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i58);
MR_def_label(fn__query__string_to_maybe_pref_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("none", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(10) = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_pref_1_0_i63);
MR_def_label(fn__query__string_to_maybe_pref_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i61);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i67);
MR_def_label(fn__query__string_to_maybe_pref_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r1 = MR_sv(9);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__query__string_to_maybe_pref_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("sum", 3)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i69);
	}
	MR_sv(4) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i68);
MR_def_label(fn__query__string_to_maybe_pref_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("nosum", 5)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(4) = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(5), MR_string_const("context", 7)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i71);
	}
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i98);
MR_def_label(fn__query__string_to_maybe_pref_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(5), MR_string_const("name", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i73);
	}
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i98);
MR_def_label(fn__query__string_to_maybe_pref_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 45;
	MR_np_call_localret_ent(util__split_3_0,
		fn__query__string_to_maybe_pref_1_0_i75);
MR_def_label(fn__query__string_to_maybe_pref_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("cost", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r5 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("time", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i83);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i82);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("calls", 5)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i84);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r4, 0);
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i82);
MR_def_label(fn__query__string_to_maybe_pref_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("redos", 5)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i85);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r4, 0);
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i82);
MR_def_label(fn__query__string_to_maybe_pref_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("words", 5)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i86);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r4, 0);
	MR_r4 = (MR_Integer) 5;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i82);
MR_def_label(fn__query__string_to_maybe_pref_1_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("allocs", 6)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i87);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r4, 0);
	MR_r4 = (MR_Integer) 4;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i82);
MR_def_label(fn__query__string_to_maybe_pref_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("callseqs", 8)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r4, 0);
	MR_r4 = (MR_Integer) 3;
MR_def_label(fn__query__string_to_maybe_pref_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("both", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i90);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i89);
MR_def_label(fn__query__string_to_maybe_pref_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("self", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Integer) 0;
MR_def_label(fn__query__string_to_maybe_pref_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("oa", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i93);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i98);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("pc", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("ac", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i100);
	}
	MR_sv(6) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i99);
MR_def_label(fn__query__string_to_maybe_pref_1_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("nc", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(6) = (MR_Integer) 1;
MR_def_label(fn__query__string_to_maybe_pref_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("mi", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i103);
	}
	MR_sv(7) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i102);
MR_def_label(fn__query__string_to_maybe_pref_1_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i104);
	}
	MR_sv(7) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i102);
MR_def_label(fn__query__string_to_maybe_pref_1_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("th", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(7) = (MR_Integer) 2;
MR_def_label(fn__query__string_to_maybe_pref_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("mqa", 3)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i107);
	}
	MR_sv(8) = (MR_Integer) 0;
	MR_np_call_localret_ent(query__string_to_inactive_items_2_0,
		fn__query__string_to_maybe_pref_1_0_i110);
MR_def_label(fn__query__string_to_maybe_pref_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("mqn", 3)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i108);
	}
	MR_sv(8) = (MR_Integer) 2;
	MR_np_call_localret_ent(query__string_to_inactive_items_2_0,
		fn__query__string_to_maybe_pref_1_0_i110);
MR_def_label(fn__query__string_to_maybe_pref_1_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("mqwd", 4)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	MR_sv(8) = (MR_Integer) 1;
	MR_np_call_localret_ent(query__string_to_inactive_items_2_0,
		fn__query__string_to_maybe_pref_1_0_i110);
MR_def_label(fn__query__string_to_maybe_pref_1_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 9) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(fn__query__string_to_maybe_pref_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_1);
MR_decl_entry(string__to_float_2_0);

MR_BEGIN_MODULE(query_module46)
	MR_init_entry1(query__string_to_limit_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__query__string_to_limit_2_0);
	MR_init_label10(query__string_to_limit_2_0,3,7,9,2,13,15,12,18,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_limit'/2 mode 0 */
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
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(query__string_to_limit_2_0_i2);
	}
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
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


MR_BEGIN_MODULE(query_module47)
	MR_init_entry1(fn__query__string_to_maybe_cmd_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__string_to_maybe_cmd_1_0);
	MR_init_label10(fn__query__string_to_maybe_cmd_1_0,2,3,7,10,12,15,4,5,21,24)
	MR_init_label10(fn__query__string_to_maybe_cmd_1_0,18,19,31,34,28,29,41,48,50,52)
	MR_init_label10(fn__query__string_to_maybe_cmd_1_0,54,56,38,39,63,60,61,69,66,67)
	MR_init_label10(fn__query__string_to_maybe_cmd_1_0,77,74,75,85,91,93,95,97,82,83)
	MR_init_label10(fn__query__string_to_maybe_cmd_1_0,104,107,101,102,114,111,112,120,123,117)
	MR_init_label10(fn__query__string_to_maybe_cmd_1_0,118,130,133,127,128,140,143,137,138,150)
	MR_init_label10(fn__query__string_to_maybe_cmd_1_0,153,147,148,160,163,157,158,170,173,167)
	MR_init_label10(fn__query__string_to_maybe_cmd_1_0,168,180,183,177,178,190,187,188,195,193)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_maybe_cmd'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__string_to_maybe_cmd_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_root_0_0,
		fn__query__string_to_maybe_cmd_1_0_i7);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i4);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i4);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i15);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
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
	MR_decr_sp_and_return(7);
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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_clique_0_0,
		fn__query__string_to_maybe_cmd_1_0_i21);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i18);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i18);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
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
	MR_decr_sp_and_return(7);
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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_proc_0_0,
		fn__query__string_to_maybe_cmd_1_0_i31);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i28);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i28);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
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
	MR_decr_sp_and_return(7);
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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_proc_callers_0_0,
		fn__query__string_to_maybe_cmd_1_0_i41);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr1 = MR_tempr6;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr4, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i48);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(query__string_to_caller_groups_2_0,
		fn__query__string_to_maybe_cmd_1_0_i50);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i52);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i54);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(query__string_to_contour_exclusion_2_0,
		fn__query__string_to_maybe_cmd_1_0_i56);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i61);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_program_modules_0_0,
		fn__query__string_to_maybe_cmd_1_0_i63);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i60);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i60);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_decr_sp_and_return(7);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i67);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_module_0_0,
		fn__query__string_to_maybe_cmd_1_0_i69);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i66);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i66);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i66);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i75);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_module_getter_setters_0_0,
		fn__query__string_to_maybe_cmd_1_0_i77);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i74);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i74);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i74);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i83);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_top_procs_0_0,
		fn__query__string_to_maybe_cmd_1_0_i85);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i82);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i82);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i82);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i82);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i82);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i82);
	}
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr1 = MR_tempr5;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(query__string_to_limit_2_0,
		fn__query__string_to_maybe_cmd_1_0_i91);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i82);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(query__string_to_cost_kind_2_0,
		fn__query__string_to_maybe_cmd_1_0_i93);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i82);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(query__string_to_incl_desc_2_0,
		fn__query__string_to_maybe_cmd_1_0_i95);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i82);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(query__string_to_scope_2_0,
		fn__query__string_to_maybe_cmd_1_0_i97);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i82);
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
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i102);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_procrep_coverage_0_0,
		fn__query__string_to_maybe_cmd_1_0_i104);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i101);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i101);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i101);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i107);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i101);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i112);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_menu_0_0,
		fn__query__string_to_maybe_cmd_1_0_i114);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i111);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i111);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_decr_sp_and_return(7);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i118);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_dump_proc_static_0_0,
		fn__query__string_to_maybe_cmd_1_0_i120);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i117);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i117);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i117);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i123);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i117);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i128);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_dump_proc_dynamic_0_0,
		fn__query__string_to_maybe_cmd_1_0_i130);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i127);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i127);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i127);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i133);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i127);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i138);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_dump_call_site_static_0_0,
		fn__query__string_to_maybe_cmd_1_0_i140);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i137);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i137);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i137);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i143);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i137);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i148);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_dump_call_site_dynamic_0_0,
		fn__query__string_to_maybe_cmd_1_0_i150);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i147);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i147);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i147);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i153);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i147);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i158);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_dump_raw_clique_0_0,
		fn__query__string_to_maybe_cmd_1_0_i160);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i157);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i157);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i157);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i163);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i157);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i168);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_dump_proc_var_use_0_0,
		fn__query__string_to_maybe_cmd_1_0_i170);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i167);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i167);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i167);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i173);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i167);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i178);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_timeout_0_0,
		fn__query__string_to_maybe_cmd_1_0_i180);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i177);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i177);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i177);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__query__string_to_maybe_cmd_1_0_i183);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i177);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__query__string_to_maybe_cmd_1_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i188);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_restart_0_0,
		fn__query__string_to_maybe_cmd_1_0_i190);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i187);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i187);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_decr_sp_and_return(7);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i193);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__query__cmd_str_quit_0_0,
		fn__query__string_to_maybe_cmd_1_0_i195);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i193);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_cmd_1_0_i193);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,3);
	MR_decr_sp_and_return(7);
MR_def_label(fn__query__string_to_maybe_cmd_1_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module48)
	MR_init_entry1(fn__query__string_to_maybe_query_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__string_to_maybe_query_1_0);
	MR_init_label10(fn__query__string_to_maybe_query_1_0,3,4,7,19,21,22,20,27,30,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_maybe_query'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__string_to_maybe_query_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 38;
	MR_np_call_localret_ent(util__split_3_0,
		fn__query__string_to_maybe_query_1_0_i3);
MR_def_label(fn__query__string_to_maybe_query_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i4);
	}
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i19);
	}
MR_def_label(fn__query__string_to_maybe_query_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i7);
	}
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_r1 = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i19);
	}
MR_def_label(fn__query__string_to_maybe_query_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tempr3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	}
MR_def_label(fn__query__string_to_maybe_query_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i20);
MR_def_label(fn__query__string_to_maybe_query_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__query__string_to_maybe_cmd_1_0,
		fn__query__string_to_maybe_query_1_0_i22);
MR_def_label(fn__query__string_to_maybe_query_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i20);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,1);
MR_def_label(fn__query__string_to_maybe_query_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__query__string_to_maybe_query_1_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__query__string_to_maybe_query_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__query__string_to_maybe_pref_1_0,
		fn__query__string_to_maybe_query_1_0_i30);
MR_def_label(fn__query__string_to_maybe_query_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__query__string_to_maybe_query_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module49)
	MR_init_entry1(fn__query__should_display_times_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__should_display_times_1_0);
	MR_init_label1(fn__query__should_display_times_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'should_display_times'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__should_display_times_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 7);
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


MR_BEGIN_MODULE(query_module50)
	MR_init_entry1(fn__query__default_command_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_command_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_command'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_command_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module51)
	MR_init_entry1(fn__query__default_fields_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_fields_1_0);
	MR_init_label1(fn__query__default_fields_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_fields'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_fields_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 7);
	if (MR_INT_LE(MR_tempr1,10)) {
		MR_GOTO_LAB(fn__query__default_fields_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_proceed();
	}
MR_def_label(fn__query__default_fields_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module52)
	MR_init_entry1(fn__query__default_box_tables_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_box_tables_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_box_tables'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_box_tables_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module53)
	MR_init_entry1(fn__query__default_colour_column_groups_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_colour_column_groups_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_colour_column_groups'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_colour_column_groups_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module54)
	MR_init_entry1(fn__query__default_ancestor_limit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_ancestor_limit_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_ancestor_limit'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_ancestor_limit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module55)
	MR_init_entry1(fn__query__default_summarize_ho_call_sites_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_summarize_ho_call_sites_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_summarize_ho_call_sites'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_summarize_ho_call_sites_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module56)
	MR_init_entry1(fn__query__default_order_criteria_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_order_criteria_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_order_criteria'/1 mode 0 */
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


MR_BEGIN_MODULE(query_module57)
	MR_init_entry1(fn__query__default_contour_exclusion_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_contour_exclusion_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_contour_exclusion'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_contour_exclusion_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module58)
	MR_init_entry1(fn__query__default_time_format_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_time_format_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_time_format'/1 mode 0 */
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


MR_BEGIN_MODULE(query_module59)
	MR_init_entry1(fn__query__default_module_qual_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_module_qual_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_module_qual'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_module_qual_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module60)
	MR_init_entry1(fn__query__default_inactive_items_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_inactive_items_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_inactive_items'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__default_inactive_items_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module61)
	MR_init_entry1(fn__query__default_preferences_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_preferences_1_0);
	MR_init_label1(fn__query__default_preferences_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_preferences'/2 mode 0 */
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
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 9) = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module62)
	MR_init_entry1(fn__query__all_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__all_fields_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_fields'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__query__all_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module63)
	MR_init_entry1(fn__query__solidify_preference_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__solidify_preference_2_0);
	MR_init_label3(fn__query__solidify_preference_2_0,24,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solidify_preference'/3 mode 0 */
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
		MR_GOTO_LAB(fn__query__solidify_preference_2_0_i8);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(fn__query__solidify_preference_2_0_i24);
	}
	MR_np_tailcall_ent(fn__query__default_preferences_1_0);
	}
MR_def_label(fn__query__solidify_preference_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__query__default_preferences_1_0,
		fn__query__solidify_preference_2_0_i4);
MR_def_label(fn__query__solidify_preference_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__query__solidify_preference_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module64)
	MR_init_entry1(fn__query__default_cost_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_cost_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_cost_kind'/1 mode 0 */
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


MR_BEGIN_MODULE(query_module65)
	MR_init_entry1(fn__query__default_incl_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_incl_desc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_incl_desc'/1 mode 0 */
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


MR_BEGIN_MODULE(query_module66)
	MR_init_entry1(fn__query__default_scope_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__query__default_scope_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_scope'/1 mode 0 */
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

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(create_report__create_report_3_0);
MR_decl_entry(old_query__old_exec_6_0);
MR_decl_entry(fn__display_report__report_to_display_3_0);
MR_decl_entry(fn__html_format__htmlize_display_3_0);
MR_decl_entry(fn__html_format__html_to_string_1_0);

MR_BEGIN_MODULE(query_module67)
	MR_init_entry1(query__exec_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__query__exec_6_0);
	MR_init_label10(query__exec_6_0,2,4,5,20,7,31,9,23,16,17)
	MR_init_label1(query__exec_6_0,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exec'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(query__exec_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("/tmp/old_deep_profiler", 22);
	MR_np_call_localret_ent(io__open_input_4_0,
		query__exec_6_0_i2);
MR_def_label(query__exec_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(query__exec_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(query__exec_6_0_i20) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i23));
MR_def_label(query__exec_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(io__close_input_3_0,
		query__exec_6_0_i5);
MR_def_label(query__exec_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(query__exec_6_0_i20) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i23));
MR_def_label(query__exec_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	}
MR_def_label(query__exec_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(query__exec_6_0_i9);
	}
MR_def_label(query__exec_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(create_report__create_report_3_0,
		query__exec_6_0_i16);
MR_def_label(query__exec_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(old_query__old_exec_6_0);
	}
MR_def_label(query__exec_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i31) MR_AND
		MR_LABEL_AP(query__exec_6_0_i31) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i7) MR_AND
		MR_LABEL_AP(query__exec_6_0_i31));
MR_def_label(query__exec_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__display_report__report_to_display_3_0,
		query__exec_6_0_i17);
MR_def_label(query__exec_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__html_format__htmlize_display_3_0,
		query__exec_6_0_i18);
MR_def_label(query__exec_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__html_format__html_to_string_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module68)
	MR_init_entry1(__Unify___query__alloc_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__alloc_fields_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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

MR_BEGIN_MODULE(query_module69)
	MR_init_entry1(__Compare___query__alloc_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__alloc_fields_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(query_module70)
	MR_init_entry1(__Unify___query__box_tables_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__box_tables_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__box_tables_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module71)
	MR_init_entry1(__Compare___query__box_tables_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__box_tables_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__box_tables_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module72)
	MR_init_entry1(__Unify___query__caller_groups_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__caller_groups_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module73)
	MR_init_entry1(__Compare___query__caller_groups_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__caller_groups_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(query_module74)
	MR_init_entry1(__Unify___query__callseqs_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__callseqs_fields_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module75)
	MR_init_entry1(__Compare___query__callseqs_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__callseqs_fields_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_BEGIN_MODULE(query_module76)
	MR_init_entry1(__Unify___query__cmd_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__cmd_0_0);
	MR_init_label10(__Unify___query__cmd_0_0,43,37,33,46,5,7,9,11,13,15)
	MR_init_label10(__Unify___query__cmd_0_0,17,20,22,24,26,28,39,41,47,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i47);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___query__cmd_0_0_i43) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i37) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i33) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i46));
MR_def_label(__Unify___query__cmd_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_unmkbody(MR_tempr2);
	MR_r1 = (MR_sv(2) == MR_tempr2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___query__cmd_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___query__cmd_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i24) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i26) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i20) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i39) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i28) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i22) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___query__cmd_0_0_i17));
MR_def_label(__Unify___query__cmd_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 4);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 5);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 5);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___query__cmd_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___query__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___query__display_limit_0_0,
		__Unify___query__cmd_0_0_i41);
MR_def_label(__Unify___query__cmd_0_0,41)
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
MR_def_label(__Unify___query__cmd_0_0,47)
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


MR_BEGIN_MODULE(query_module77)
	MR_init_entry1(__Index___query__cmd_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___query__cmd_0_0);
	MR_init_label10(__Index___query__cmd_0_0,22,20,19,25,3,4,5,6,7,8)
	MR_init_label10(__Index___query__cmd_0_0,9,10,11,12,13,14,15,17,18,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___query__cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___query__cmd_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i25));
MR_def_label(__Index___query__cmd_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Index___query__cmd_0_0_i17);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Index___query__cmd_0_0_i18);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Index___query__cmd_0_0_i10);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
	}
MR_def_label(__Index___query__cmd_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___query__cmd_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___query__cmd_0_0_i9));
MR_def_label(__Index___query__cmd_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___query__cmd_0_0,21)
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

MR_BEGIN_MODULE(query_module78)
	MR_init_entry1(__Compare___query__cmd_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__cmd_0_0);
	MR_init_label10(__Compare___query__cmd_0_0,3,2,4,5,6,7,94,73,70,97)
	MR_init_label10(__Compare___query__cmd_0_0,10,13,16,19,22,25,28,32,35,38)
	MR_init_label10(__Compare___query__cmd_0_0,41,44,48,52,56,64,76,79,83,87)
	MR_init_label2(__Compare___query__cmd_0_0,227,228)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___query__cmd_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___query__cmd_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___query__cmd_0_0_i94) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i73) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i70) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i97));
MR_def_label(__Compare___query__cmd_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_sv(1));
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Compare___query__cmd_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___query__cmd_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___query__cmd_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i32) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i76) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i64) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i25) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i13) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___query__cmd_0_0_i28));
MR_def_label(__Compare___query__cmd_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___query__cmd_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___query__cmd_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__cmd_0_0_i44);
MR_def_label(__Compare___query__cmd_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i228);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__cmd_0_0_i48);
MR_def_label(__Compare___query__cmd_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i228);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__cmd_0_0_i52);
MR_def_label(__Compare___query__cmd_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i228);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__cmd_0_0_i56);
MR_def_label(__Compare___query__cmd_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i228);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i227);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___query__display_limit_0_0,
		__Compare___query__cmd_0_0_i79);
MR_def_label(__Compare___query__cmd_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i228);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__cmd_0_0_i83);
MR_def_label(__Compare___query__cmd_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i228);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__cmd_0_0_i87);
MR_def_label(__Compare___query__cmd_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__cmd_0_0_i228);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__cmd_0_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___query__cmd_0_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module79)
	MR_init_entry1(__Unify___query__colour_column_groups_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__colour_column_groups_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__colour_column_groups_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module80)
	MR_init_entry1(__Compare___query__colour_column_groups_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__colour_column_groups_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__colour_column_groups_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module81)
	MR_init_entry1(__Unify___query__contour_exclusion_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__contour_exclusion_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__contour_exclusion_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module82)
	MR_init_entry1(__Compare___query__contour_exclusion_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__contour_exclusion_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__contour_exclusion_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module83)
	MR_init_entry1(__Unify___query__cost_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__cost_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module84)
	MR_init_entry1(__Compare___query__cost_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__cost_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(query_module85)
	MR_init_entry1(__Unify___query__deep_query_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__deep_query_0_0);
	MR_init_label3(__Unify___query__deep_query_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__deep_query_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__deep_query_0_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, cmd);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___query__deep_query_0_0_i4);
MR_def_label(__Unify___query__deep_query_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___query__deep_query_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(3)) != 0)) {
		MR_GOTO_LAB(__Unify___query__deep_query_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, preferences);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___query__deep_query_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__deep_query_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module86)
	MR_init_entry1(__Compare___query__deep_query_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__deep_query_0_0);
	MR_init_label5(__Compare___query__deep_query_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__deep_query_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__deep_query_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___query__deep_query_0_0_i2);
MR_def_label(__Compare___query__deep_query_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___query__deep_query_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, cmd);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___query__deep_query_0_0_i5);
MR_def_label(__Compare___query__deep_query_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__deep_query_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___query__deep_query_0_0_i9);
MR_def_label(__Compare___query__deep_query_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__deep_query_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, preferences);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___query__deep_query_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module87)
	MR_init_entry1(__Unify___query__descendants_meaningful_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__descendants_meaningful_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__descendants_meaningful_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module88)
	MR_init_entry1(__Compare___query__descendants_meaningful_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__descendants_meaningful_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__descendants_meaningful_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module89)
	MR_init_entry1(__Unify___query__display_limit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__display_limit_0_0);
	MR_init_label4(__Unify___query__display_limit_0_0,5,7,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	if ((MR_tempr3 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_tempr4));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__display_limit_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__display_limit_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___query__display_limit_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
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

MR_BEGIN_MODULE(query_module90)
	MR_init_entry1(__Compare___query__display_limit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__display_limit_0_0);
	MR_init_label10(__Compare___query__display_limit_0_0,3,2,41,29,5,7,9,18,55,20)
	MR_init_label1(__Compare___query__display_limit_0_0,88)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(1));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i18);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i5);
	}
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i29);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i20);
	}
	}
MR_def_label(__Compare___query__display_limit_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___query__display_limit_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__display_limit_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i55);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___query__display_limit_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__display_limit_0_0_i9);
MR_def_label(__Compare___query__display_limit_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i88);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__display_limit_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i41);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___query__display_limit_0_0_i20);
	}
	}
MR_def_label(__Compare___query__display_limit_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__display_limit_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___query__display_limit_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module91)
	MR_init_entry1(__Unify___query__fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__fields_0_0);
	MR_init_label2(__Unify___query__fields_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___query__fields_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___query__fields_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___query__fields_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___query__fields_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
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


MR_BEGIN_MODULE(query_module92)
	MR_init_entry1(__Compare___query__fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__fields_0_0);
	MR_init_label7(__Compare___query__fields_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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


MR_BEGIN_MODULE(query_module93)
	MR_init_entry1(__Unify___query__inactive_items_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__inactive_items_0_0);
	MR_init_label2(__Unify___query__inactive_items_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___query__inactive_items_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___query__inactive_items_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 2);
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


MR_BEGIN_MODULE(query_module94)
	MR_init_entry1(__Compare___query__inactive_items_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__inactive_items_0_0);
	MR_init_label5(__Compare___query__inactive_items_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__inactive_items_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__inactive_items_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__inactive_items_0_0_i5);
MR_def_label(__Compare___query__inactive_items_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__inactive_items_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__inactive_items_0_0_i9);
MR_def_label(__Compare___query__inactive_items_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__inactive_items_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___query__inactive_items_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module95)
	MR_init_entry1(__Unify___query__inactive_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__inactive_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module96)
	MR_init_entry1(__Compare___query__inactive_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__inactive_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(query_module97)
	MR_init_entry1(__Unify___query__include_descendants_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__include_descendants_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module98)
	MR_init_entry1(__Compare___query__include_descendants_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__include_descendants_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(query_module99)
	MR_init_entry1(__Unify___query__measurement_scope_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__measurement_scope_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module100)
	MR_init_entry1(__Compare___query__measurement_scope_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__measurement_scope_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(query_module101)
	MR_init_entry1(__Unify___query__memory_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__memory_fields_0_0);
	MR_init_label4(__Unify___query__memory_fields_0_0,5,7,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___query__memory_fields_0_0_i7);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___query__memory_fields_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__memory_fields_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___query__memory_fields_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___query__memory_fields_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___query__memory_fields_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(2), 0);
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


MR_BEGIN_MODULE(query_module102)
	MR_init_entry1(__Compare___query__memory_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__memory_fields_0_0);
	MR_init_label5(__Compare___query__memory_fields_0_0,44,5,9,13,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i13);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i5);
	}
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i9);
	}
	}
MR_def_label(__Compare___query__memory_fields_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__memory_fields_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___query__memory_fields_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___query__memory_fields_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___query__memory_fields_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___query__memory_fields_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module103)
	MR_init_entry1(__Unify___query__module_qual_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__module_qual_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__module_qual_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module104)
	MR_init_entry1(__Compare___query__module_qual_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__module_qual_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__module_qual_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module105)
	MR_init_entry1(__Unify___query__order_criteria_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__order_criteria_0_0);
	MR_init_label3(__Unify___query__order_criteria_0_0,6,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__order_criteria_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___query__order_criteria_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 2);
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


MR_BEGIN_MODULE(query_module106)
	MR_init_entry1(__Compare___query__order_criteria_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__order_criteria_0_0);
	MR_init_label8(__Compare___query__order_criteria_0_0,44,30,33,12,15,17,21,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
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


MR_BEGIN_MODULE(query_module107)
	MR_init_entry1(__Unify___query__port_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__port_fields_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module108)
	MR_init_entry1(__Compare___query__port_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__port_fields_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(query_module109)
	MR_init_entry1(__Unify___query__preferences_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__preferences_0_0);
	MR_init_label5(__Unify___query__preferences_0_0,4,6,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__preferences_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i12);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 9);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___query__fields_0_0,
		__Unify___query__preferences_0_0_i4);
MR_def_label(__Unify___query__preferences_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(10))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___query__preferences_0_0_i6);
MR_def_label(__Unify___query__preferences_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___query__order_criteria_0_0,
		__Unify___query__preferences_0_0_i8);
MR_def_label(__Unify___query__preferences_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(16))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___query__preferences_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(__Unify___query__inactive_items_0_0);
MR_def_label(__Unify___query__preferences_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___query__preferences_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module110)
	MR_init_entry1(__Compare___query__preferences_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__preferences_0_0);
	MR_init_label10(__Compare___query__preferences_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label2(__Compare___query__preferences_0_0,37,85)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__preferences_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i3);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
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
	MR_sv(18) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(__Compare___query__fields_0_0,
		__Compare___query__preferences_0_0_i5);
MR_def_label(__Compare___query__preferences_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i85);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i9);
MR_def_label(__Compare___query__preferences_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i85);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i13);
MR_def_label(__Compare___query__preferences_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i85);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___query__preferences_0_0_i17);
MR_def_label(__Compare___query__preferences_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i85);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i21);
MR_def_label(__Compare___query__preferences_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i85);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___query__order_criteria_0_0,
		__Compare___query__preferences_0_0_i25);
MR_def_label(__Compare___query__preferences_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i85);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i29);
MR_def_label(__Compare___query__preferences_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i85);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i33);
MR_def_label(__Compare___query__preferences_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i85);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___query__preferences_0_0_i37);
MR_def_label(__Compare___query__preferences_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___query__preferences_0_0_i85);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(__Compare___query__inactive_items_0_0);
MR_def_label(__Compare___query__preferences_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module111)
	MR_init_entry1(__Unify___query__preferences_indication_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__preferences_indication_0_0);
	MR_init_label3(__Unify___query__preferences_indication_0_0,7,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
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


MR_BEGIN_MODULE(query_module112)
	MR_init_entry1(__Compare___query__preferences_indication_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__preferences_indication_0_0);
	MR_init_label6(__Compare___query__preferences_indication_0_0,34,5,44,19,38,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___query__preferences_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module113)
	MR_init_entry1(__Unify___query__resp_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__resp_0_0);
	MR_init_label1(__Unify___query__resp_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module114)
	MR_init_entry1(__Compare___query__resp_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__resp_0_0);
	MR_init_label2(__Compare___query__resp_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(query_module115)
	MR_init_entry1(__Unify___query__summarize_ho_call_sites_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__summarize_ho_call_sites_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___query__summarize_ho_call_sites_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module116)
	MR_init_entry1(__Compare___query__summarize_ho_call_sites_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__summarize_ho_call_sites_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___query__summarize_ho_call_sites_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(query_module117)
	MR_init_entry1(__Unify___query__time_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__time_fields_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module118)
	MR_init_entry1(__Compare___query__time_fields_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__time_fields_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(query_module119)
	MR_init_entry1(__Unify___query__time_format_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___query__time_format_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(query_module120)
	MR_init_entry1(__Compare___query__time_format_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___query__time_format_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_alloc_fields_0,
		query__alloc_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_box_tables_0,
		query__box_tables_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_caller_groups_0,
		query__caller_groups_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_callseqs_fields_0,
		query__callseqs_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_cmd_0,
		query__cmd_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_colour_column_groups_0,
		query__colour_column_groups_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_contour_exclusion_0,
		query__contour_exclusion_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_cost_kind_0,
		query__cost_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_deep_query_0,
		query__deep_query_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_descendants_meaningful_0,
		query__descendants_meaningful_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_display_limit_0,
		query__display_limit_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_fields_0,
		query__fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_inactive_items_0,
		query__inactive_items_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_inactive_status_0,
		query__inactive_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_include_descendants_0,
		query__include_descendants_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_measurement_scope_0,
		query__measurement_scope_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_memory_fields_0,
		query__memory_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_module_qual_0,
		query__module_qual_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_order_criteria_0,
		query__order_criteria_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_port_fields_0,
		query__port_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_preferences_0,
		query__preferences_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_preferences_indication_0,
		query__preferences_indication_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_resp_0,
		query__resp_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_summarize_ho_call_sites_0,
		query__summarize_ho_call_sites_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_time_fields_0,
		query__time_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_query__type_ctor_info_time_format_0,
		query__time_format_0_0);
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
		&mercury_data_query__type_ctor_info_alloc_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_box_tables_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_caller_groups_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_callseqs_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_cmd_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_colour_column_groups_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_contour_exclusion_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_cost_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_deep_query_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_descendants_meaningful_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_display_limit_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_inactive_items_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_inactive_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_include_descendants_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_measurement_scope_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_memory_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_module_qual_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_order_criteria_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_port_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_preferences_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_preferences_indication_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_resp_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_summarize_ho_call_sites_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_time_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_query__type_ctor_info_time_format_0);
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
