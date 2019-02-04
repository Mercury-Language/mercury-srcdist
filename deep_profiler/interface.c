/*
** Automatically generated from `interface.m'
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
INIT mercury__interface__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 254 "profile.int"
#include "profile.mh"

#line 27 "interface.c"
#line 532 "../library/io.int"
#include "io.mh"

#line 31 "interface.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 35 "interface.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 39 "interface.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "interface.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "interface.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "interface.c"
#line 52 "interface.c"
#include "interface.mh"

#line 55 "interface.c"
#line 56 "interface.c"
#ifndef INTERFACE_DECL_GUARD
#define INTERFACE_DECL_GUARD

#line 60 "interface.c"
#line 61 "interface.c"

#endif
#line 64 "interface.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1[4];
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_6 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_0[];

MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_1[];

struct mercury_type_5 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_0[];

MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_interface__type_ctor_info_time_format_0,
	mercury_data_interface__type_ctor_info_time_fields_0,
	mercury_data_interface__type_ctor_info_summarize_0,
	mercury_data_interface__type_ctor_info_resp_0,
	mercury_data_interface__type_ctor_info_preferences_indication_0,
	mercury_data_interface__type_ctor_info_preferences_0,
	mercury_data_interface__type_ctor_info_port_fields_0,
	mercury_data_interface__type_ctor_info_order_criteria_0,
	mercury_data_interface__type_ctor_info_memory_units_0,
	mercury_data_interface__type_ctor_info_memory_fields_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_interface__type_ctor_info_measurement_scope_0,
	mercury_data_interface__type_ctor_info_include_descendants_0,
	mercury_data_interface__type_ctor_info_inactive_status_0,
	mercury_data_interface__type_ctor_info_inactive_items_0,
	mercury_data_interface__type_ctor_info_fields_0,
	mercury_data_interface__type_ctor_info_display_limit_0,
	mercury_data_interface__type_ctor_info_cost_kind_0,
	mercury_data_interface__type_ctor_info_contour_0,
	mercury_data_interface__type_ctor_info_colour_scheme_0,
	mercury_data_interface__type_ctor_info_cmd_pref_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_interface__type_ctor_info_cmd_0,
	mercury_data_interface__type_ctor_info_callseqs_fields_0,
	mercury_data_interface__type_ctor_info_caller_groups_0,
	mercury_data_interface__type_ctor_info_box_0,
	mercury_data_interface__type_ctor_info_alloc_fields_0;
MR_decl_label8(interface__recv_string_5_0, 2,5,7,6,9,22,11,12)
MR_decl_label4(interface__recv_string_5_0, 15,16,14,4)
MR_decl_label8(interface__recv_term_5_0, 2,5,9,8,6,12,26,14)
MR_decl_label5(interface__recv_term_5_0, 15,18,19,17,4)
MR_decl_label8(interface__send_string_5_0, 2,5,4,3,10,13,12,8)
MR_decl_label8(interface__send_term_5_0, 2,5,6,4,3,11,14,15)
MR_decl_label2(interface__send_term_5_0, 13,9)
MR_decl_label4(interface__string_to_caller_groups_2_0, 3,4,5,1)
MR_decl_label6(interface__string_to_cost_kind_2_0, 3,4,5,6,7,1)
MR_decl_label2(interface__string_to_incl_desc_2_0, 3,1)
MR_decl_label8(interface__string_to_limit_2_0, 3,7,9,2,12,14,11,16)
MR_decl_label2(interface__string_to_limit_2_0, 18,1)
MR_decl_label2(interface__string_to_scope_2_0, 3,1)
MR_decl_label8(fn__interface__cmd_to_string_1_0, 4,7,6,5,94,9,95,14)
MR_decl_label8(fn__interface__cmd_to_string_1_0, 13,16,96,19,20,22,23,25)
MR_decl_label8(fn__interface__cmd_to_string_1_0, 26,27,28,29,31,32,34,35)
MR_decl_label8(fn__interface__cmd_to_string_1_0, 36,37,38,39,40,41,42,44)
MR_decl_label8(fn__interface__cmd_to_string_1_0, 45,47,48,50,51,53,54,56)
MR_decl_label1(fn__interface__cmd_to_string_1_0, 57)
MR_decl_label1(fn__interface__default_fields_1_0, 2)
MR_decl_label1(fn__interface__default_preferences_1_0, 2)
MR_decl_label8(fn__interface__fields_to_string_1_0, 3,4,6,8,9,10,12,13)
MR_decl_label8(fn__interface__fields_to_string_1_0, 14,20,22,17,19,23,24,25)
MR_decl_label4(fn__interface__fields_to_string_1_0, 26,27,28,29)
MR_decl_label6(fn__interface__filename_mangle_2_1_0, 10,11,4,6,9,2)
MR_decl_label5(fn__interface__from_server_pipe_name_1_0, 2,3,4,5,6)
MR_decl_label1(fn__interface__incl_desc_to_string_1_0, 3)
MR_decl_label2(fn__interface__limit_to_string_1_0, 6,4)
MR_decl_label8(fn__interface__machine_datafile_cmd_pref_to_url_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(fn__interface__machine_datafile_cmd_pref_to_url_5_0, 10,11,12)
MR_decl_label5(fn__interface__mutex_file_name_1_0, 2,3,4,5,6)
MR_decl_label8(fn__interface__order_criteria_to_string_1_0, 5,41,6,8,10,11,13,14)
MR_decl_label4(fn__interface__order_criteria_to_string_1_0, 15,16,17,18)
MR_decl_label8(fn__interface__preferences_to_string_1_0, 3,4,5,7,6,9,8,11)
MR_decl_label8(fn__interface__preferences_to_string_1_0, 12,14,13,16,17,15,21,19)
MR_decl_label1(fn__interface__preferences_to_string_1_0, 23)
MR_decl_label7(fn__interface__response_file_name_2_0, 2,3,4,5,6,7,8)
MR_decl_label1(fn__interface__scope_to_string_1_0, 3)
MR_decl_label5(fn__interface__server_startup_name_1_0, 2,3,4,5,6)
MR_decl_label1(fn__interface__should_display_times_1_0, 2)
MR_decl_label3(fn__interface__solidify_preference_2_0, 21,7,4)
MR_decl_label5(fn__interface__to_server_pipe_name_1_0, 2,3,4,5,6)
MR_decl_label2(fn__interface__url_component_to_cmd_2_0, 2,4)
MR_decl_label8(fn__interface__url_component_to_maybe_cmd_1_0, 2,3,10,12,14,4,5,21)
MR_decl_label8(fn__interface__url_component_to_maybe_cmd_1_0, 15,16,29,23,24,39,41,43)
MR_decl_label8(fn__interface__url_component_to_maybe_cmd_1_0, 31,32,45,49,63,65,67,69)
MR_decl_label8(fn__interface__url_component_to_maybe_cmd_1_0, 54,55,71,81,75,76,89,83)
MR_decl_label8(fn__interface__url_component_to_maybe_cmd_1_0, 84,97,91,92,105,99,100,113)
MR_decl_label7(fn__interface__url_component_to_maybe_cmd_1_0, 107,108,121,115,116,123,127)
MR_decl_label8(fn__interface__url_component_to_maybe_pref_1_0, 2,14,22,21,25,26,27,28)
MR_decl_label8(fn__interface__url_component_to_maybe_pref_1_0, 29,24,32,33,31,36,37,35)
MR_decl_label8(fn__interface__url_component_to_maybe_pref_1_0, 40,41,42,43,39,46,45,49)
MR_decl_label8(fn__interface__url_component_to_maybe_pref_1_0, 48,53,51,56,58,57,60,62)
MR_decl_label8(fn__interface__url_component_to_maybe_pref_1_0, 64,72,73,74,75,76,71,79)
MR_decl_label8(fn__interface__url_component_to_maybe_pref_1_0, 78,82,85,87,86,90,91,89)
MR_decl_label5(fn__interface__url_component_to_maybe_pref_1_0, 94,95,96,93,3)
MR_decl_label4(fn__interface__want_file_name_0_0, 2,3,4,5)
MR_decl_label8(__Unify___interface__cmd_0_0, 6,10,12,16,17,19,21,23)
MR_decl_label8(__Unify___interface__cmd_0_0, 25,27,29,31,33,35,37,76)
MR_decl_label1(__Unify___interface__cmd_0_0, 1)
MR_decl_label3(__Unify___interface__cmd_pref_0_0, 4,8,1)
MR_decl_label4(__Unify___interface__display_limit_0_0, 8,6,21,1)
MR_decl_label2(__Unify___interface__fields_0_0, 6,1)
MR_decl_label2(__Unify___interface__inactive_items_0_0, 4,1)
MR_decl_label4(__Unify___interface__memory_fields_0_0, 8,6,18,1)
MR_decl_label3(__Unify___interface__order_criteria_0_0, 6,18,1)
MR_decl_label5(__Unify___interface__preferences_0_0, 4,6,8,12,1)
MR_decl_label3(__Unify___interface__preferences_indication_0_0, 6,18,1)
MR_decl_label1(__Unify___interface__resp_0_0, 4)
MR_decl_label8(__Index___interface__cmd_0_0, 4,7,6,5,8,9,10,11)
MR_decl_label8(__Index___interface__cmd_0_0, 12,13,14,15,16,17,18,19)
MR_decl_label1(__Index___interface__cmd_0_0, 20)
MR_decl_label8(__Compare___interface__cmd_0_0, 3,2,4,5,6,7,11,15)
MR_decl_label8(__Compare___interface__cmd_0_0, 18,21,22,25,28,31,35,41)
MR_decl_label8(__Compare___interface__cmd_0_0, 44,47,51,55,62,65,68,71)
MR_decl_label3(__Compare___interface__cmd_0_0, 74,183,184)
MR_decl_label4(__Compare___interface__cmd_pref_0_0, 3,2,5,21)
MR_decl_label8(__Compare___interface__display_limit_0_0, 3,2,23,12,6,38,11,9)
MR_decl_label1(__Compare___interface__display_limit_0_0, 74)
MR_decl_label7(__Compare___interface__fields_0_0, 3,2,5,9,13,17,45)
MR_decl_label4(__Compare___interface__inactive_items_0_0, 3,2,5,21)
MR_decl_label6(__Compare___interface__memory_fields_0_0, 36,12,6,31,11,9)
MR_decl_label8(__Compare___interface__order_criteria_0_0, 36,7,14,6,18,21,25,31)
MR_decl_label8(__Compare___interface__preferences_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label3(__Compare___interface__preferences_0_0, 29,33,77)
MR_decl_label6(__Compare___interface__preferences_indication_0_0, 26,7,28,6,30,18)
MR_decl_label2(__Compare___interface__resp_0_0, 3,2)
MR_decl_static(fn__interface__filename_mangle_2_1_0)
MR_def_extern_entry(fn__interface__to_server_pipe_name_1_0)
MR_def_extern_entry(fn__interface__from_server_pipe_name_1_0)
MR_def_extern_entry(fn__interface__server_startup_name_1_0)
MR_def_extern_entry(fn__interface__mutex_file_name_1_0)
MR_def_extern_entry(fn__interface__want_dir_0_0)
MR_def_extern_entry(fn__interface__want_prefix_0_0)
MR_def_extern_entry(fn__interface__want_file_name_0_0)
MR_def_extern_entry(fn__interface__response_file_name_2_0)
MR_def_extern_entry(fn__interface__contour_file_name_1_0)
MR_def_extern_entry(interface__send_term_5_0)
MR_def_extern_entry(interface__send_string_5_0)
MR_def_extern_entry(interface__recv_term_5_0)
MR_def_extern_entry(interface__recv_string_5_0)
MR_def_extern_entry(fn__interface__should_display_times_1_0)
MR_def_extern_entry(fn__interface__default_fields_1_0)
MR_def_extern_entry(fn__interface__default_box_0_0)
MR_def_extern_entry(fn__interface__default_colour_scheme_0_0)
MR_def_extern_entry(fn__interface__default_ancestor_limit_0_0)
MR_def_extern_entry(fn__interface__default_summarize_0_0)
MR_def_extern_entry(fn__interface__default_order_criteria_0_0)
MR_def_extern_entry(fn__interface__default_contour_0_0)
MR_def_extern_entry(fn__interface__default_time_format_0_0)
MR_def_extern_entry(fn__interface__default_inactive_items_0_0)
MR_def_extern_entry(fn__interface__default_preferences_1_0)
MR_def_extern_entry(fn__interface__all_fields_0_0)
MR_def_extern_entry(fn__interface__solidify_preference_2_0)
MR_def_extern_entry(fn__interface__default_cost_kind_0_0)
MR_def_extern_entry(fn__interface__default_incl_desc_0_0)
MR_def_extern_entry(fn__interface__default_scope_0_0)
MR_def_extern_entry(fn__interface__query_separator_char_0_0)
MR_decl_static(fn__interface__cmd_separator_char_0_0)
MR_decl_static(interface__string_to_caller_groups_2_0)
MR_decl_static(fn__interface__caller_groups_to_string_1_0)
MR_decl_static(interface__string_to_cost_kind_2_0)
MR_decl_static(fn__interface__cost_kind_to_string_1_0)
MR_decl_static(interface__string_to_incl_desc_2_0)
MR_decl_static(fn__interface__incl_desc_to_string_1_0)
MR_decl_static(fn__interface__limit_to_string_1_0)
MR_decl_static(interface__string_to_scope_2_0)
MR_decl_static(fn__interface__scope_to_string_1_0)
MR_decl_static(fn__interface__cmd_to_string_1_0)
MR_decl_static(fn__interface__pref_separator_char_0_0)
MR_decl_static(fn__interface__fields_to_string_1_0)
MR_decl_static(fn__interface__order_criteria_to_string_1_0)
MR_decl_static(fn__interface__preferences_to_string_1_0)
MR_def_extern_entry(fn__interface__machine_datafile_cmd_pref_to_url_5_0)
MR_decl_static(interface__string_to_limit_2_0)
MR_def_extern_entry(fn__interface__url_component_to_maybe_cmd_1_0)
MR_def_extern_entry(fn__interface__url_component_to_cmd_2_0)
MR_def_extern_entry(fn__interface__url_component_to_maybe_pref_1_0)
MR_def_extern_entry(__Unify___interface__alloc_fields_0_0)
MR_def_extern_entry(__Compare___interface__alloc_fields_0_0)
MR_def_extern_entry(__Unify___interface__box_0_0)
MR_def_extern_entry(__Compare___interface__box_0_0)
MR_def_extern_entry(__Unify___interface__caller_groups_0_0)
MR_def_extern_entry(__Compare___interface__caller_groups_0_0)
MR_def_extern_entry(__Unify___interface__callseqs_fields_0_0)
MR_def_extern_entry(__Compare___interface__callseqs_fields_0_0)
MR_def_extern_entry(__Unify___interface__cmd_0_0)
MR_def_extern_entry(__Index___interface__cmd_0_0)
MR_def_extern_entry(__Compare___interface__cmd_0_0)
MR_def_extern_entry(__Unify___interface__cmd_pref_0_0)
MR_def_extern_entry(__Compare___interface__cmd_pref_0_0)
MR_def_extern_entry(__Unify___interface__colour_scheme_0_0)
MR_def_extern_entry(__Compare___interface__colour_scheme_0_0)
MR_def_extern_entry(__Unify___interface__contour_0_0)
MR_def_extern_entry(__Compare___interface__contour_0_0)
MR_def_extern_entry(__Unify___interface__cost_kind_0_0)
MR_def_extern_entry(__Compare___interface__cost_kind_0_0)
MR_def_extern_entry(__Unify___interface__display_limit_0_0)
MR_def_extern_entry(__Compare___interface__display_limit_0_0)
MR_def_extern_entry(__Unify___interface__fields_0_0)
MR_def_extern_entry(__Compare___interface__fields_0_0)
MR_def_extern_entry(__Unify___interface__inactive_items_0_0)
MR_def_extern_entry(__Compare___interface__inactive_items_0_0)
MR_def_extern_entry(__Unify___interface__inactive_status_0_0)
MR_def_extern_entry(__Compare___interface__inactive_status_0_0)
MR_def_extern_entry(__Unify___interface__include_descendants_0_0)
MR_def_extern_entry(__Compare___interface__include_descendants_0_0)
MR_def_extern_entry(__Unify___interface__measurement_scope_0_0)
MR_def_extern_entry(__Compare___interface__measurement_scope_0_0)
MR_def_extern_entry(__Unify___interface__memory_fields_0_0)
MR_def_extern_entry(__Compare___interface__memory_fields_0_0)
MR_def_extern_entry(__Unify___interface__memory_units_0_0)
MR_def_extern_entry(__Compare___interface__memory_units_0_0)
MR_def_extern_entry(__Unify___interface__order_criteria_0_0)
MR_def_extern_entry(__Compare___interface__order_criteria_0_0)
MR_def_extern_entry(__Unify___interface__port_fields_0_0)
MR_def_extern_entry(__Compare___interface__port_fields_0_0)
MR_def_extern_entry(__Unify___interface__preferences_0_0)
MR_def_extern_entry(__Compare___interface__preferences_0_0)
MR_def_extern_entry(__Unify___interface__preferences_indication_0_0)
MR_def_extern_entry(__Compare___interface__preferences_indication_0_0)
MR_def_extern_entry(__Unify___interface__resp_0_0)
MR_def_extern_entry(__Compare___interface__resp_0_0)
MR_def_extern_entry(__Unify___interface__summarize_0_0)
MR_def_extern_entry(__Compare___interface__summarize_0_0)
MR_def_extern_entry(__Unify___interface__time_fields_0_0)
MR_def_extern_entry(__Compare___interface__time_fields_0_0)
MR_def_extern_entry(__Unify___interface__time_format_0_0)
MR_def_extern_entry(__Compare___interface__time_format_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_maybe_partial_res_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_CTOR1_ADDR(io, maybe_partial_res),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_TAG_COMMON(2,4,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,4,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,4,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,4,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,4,14),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[5] =
{
{
0
},
{
5
},
{
45
},
{
47
},
{
1
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
1,
1,
1,
0
},
MR_TAG_COMMON(1,1,0)
},
{
{
1,
0,
1,
0
},
MR_TAG_COMMON(1,1,0)
},
{
{
1,
5,
2,
1
},
MR_TAG_COMMON(1,1,0)
},
};

static const struct mercury_type_3 mercury_common_3[4] =
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

static const struct mercury_type_4 mercury_common_4[15] =
{
{
MR_string_const("no", 2)
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
MR_string_const("sum", 3)
},
{
MR_string_const("nosum", 5)
},
{
MR_string_const("ac", 2)
},
{
MR_string_const("nc", 2)
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
};

static const struct mercury_type_6 mercury_common_6[4] =
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

static const struct mercury_type_4 mercury_vector_common_4_0[4] =
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

static const struct mercury_type_4 mercury_vector_common_4_1[6] =
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

static const struct mercury_type_5 mercury_vector_common_5_0[6] =
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

static const struct mercury_type_5 mercury_vector_common_5_1[6] =
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

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_time_format_0_0 = {
	"no_scale",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_time_format_0_1 = {
	"scale_by_millions",
	1
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_time_format_0_2 = {
	"scale_by_thousands",
	2
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_time_format_0[] = {
	&mercury_data_interface__enum_functor_desc_time_format_0_0,
	&mercury_data_interface__enum_functor_desc_time_format_0_1,
	&mercury_data_interface__enum_functor_desc_time_format_0_2
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_time_format_0[] = {
	&mercury_data_interface__enum_functor_desc_time_format_0_0,
	&mercury_data_interface__enum_functor_desc_time_format_0_1,
	&mercury_data_interface__enum_functor_desc_time_format_0_2
};

const MR_Integer mercury_data_interface__functor_number_map_time_format_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_time_format_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__time_format_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__time_format_0_0)),
	"interface",
	"time_format",
	{ (void *)mercury_data_interface__enum_name_ordered_time_format_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_time_format_0 },
	3,
	4,
	mercury_data_interface__functor_number_map_time_format_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_time_fields_0_0 = {
	"no_time",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_time_fields_0_1 = {
	"ticks",
	1
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_time_fields_0_2 = {
	"time",
	2
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_time_fields_0_3 = {
	"ticks_and_time",
	3
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_time_fields_0_4 = {
	"time_and_percall",
	4
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_time_fields_0_5 = {
	"ticks_and_time_and_percall",
	5
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_time_fields_0[] = {
	&mercury_data_interface__enum_functor_desc_time_fields_0_0,
	&mercury_data_interface__enum_functor_desc_time_fields_0_1,
	&mercury_data_interface__enum_functor_desc_time_fields_0_2,
	&mercury_data_interface__enum_functor_desc_time_fields_0_3,
	&mercury_data_interface__enum_functor_desc_time_fields_0_4,
	&mercury_data_interface__enum_functor_desc_time_fields_0_5
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_time_fields_0[] = {
	&mercury_data_interface__enum_functor_desc_time_fields_0_0,
	&mercury_data_interface__enum_functor_desc_time_fields_0_1,
	&mercury_data_interface__enum_functor_desc_time_fields_0_3,
	&mercury_data_interface__enum_functor_desc_time_fields_0_5,
	&mercury_data_interface__enum_functor_desc_time_fields_0_2,
	&mercury_data_interface__enum_functor_desc_time_fields_0_4
};

const MR_Integer mercury_data_interface__functor_number_map_time_fields_0[] = {
	0,
	1,
	4,
	2,
	5,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_time_fields_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__time_fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__time_fields_0_0)),
	"interface",
	"time_fields",
	{ (void *)mercury_data_interface__enum_name_ordered_time_fields_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_time_fields_0 },
	6,
	4,
	mercury_data_interface__functor_number_map_time_fields_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_summarize_0_0 = {
	"summarize",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_summarize_0_1 = {
	"dont_summarize",
	1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_summarize_0[] = {
	&mercury_data_interface__enum_functor_desc_summarize_0_0,
	&mercury_data_interface__enum_functor_desc_summarize_0_1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_summarize_0[] = {
	&mercury_data_interface__enum_functor_desc_summarize_0_1,
	&mercury_data_interface__enum_functor_desc_summarize_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_summarize_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_summarize_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__summarize_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__summarize_0_0)),
	"interface",
	"summarize",
	{ (void *)mercury_data_interface__enum_name_ordered_summarize_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_summarize_0 },
	2,
	4,
	mercury_data_interface__functor_number_map_summarize_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_NotagFunctorDesc mercury_data_interface__notag_functor_desc_resp_0 = {
	"html",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_interface__functor_number_map_resp_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_resp_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__resp_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__resp_0_0)),
	"interface",
	"resp",
	{ (void *)&mercury_data_interface__notag_functor_desc_resp_0 },
	{ (void *)&mercury_data_interface__notag_functor_desc_resp_0 },
	1,
	4,
	mercury_data_interface__functor_number_map_resp_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_preferences_0;

const MR_PseudoTypeInfo mercury_data_interface__field_types_preferences_indication_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_preferences_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_preferences_indication_0_0 = {
	"given_pref",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_preferences_indication_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_preferences_indication_0_1 = {
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

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_preferences_indication_0_2 = {
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

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_preferences_indication_0_0[] = {
	&mercury_data_interface__du_functor_desc_preferences_indication_0_1,
	&mercury_data_interface__du_functor_desc_preferences_indication_0_2

};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_preferences_indication_0_1[] = {
	&mercury_data_interface__du_functor_desc_preferences_indication_0_0

};

const MR_DuPtagLayout mercury_data_interface__du_ptag_ordered_preferences_indication_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_interface__du_stag_ordered_preferences_indication_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_preferences_indication_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_interface__du_name_ordered_preferences_indication_0[] = {
	&mercury_data_interface__du_functor_desc_preferences_indication_0_2,
	&mercury_data_interface__du_functor_desc_preferences_indication_0_1,
	&mercury_data_interface__du_functor_desc_preferences_indication_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_preferences_indication_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_preferences_indication_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__preferences_indication_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__preferences_indication_0_0)),
	"interface",
	"preferences_indication",
	{ (void *)mercury_data_interface__du_name_ordered_preferences_indication_0 },
	{ (void *)mercury_data_interface__du_ptag_ordered_preferences_indication_0 },
	3,
	4,
	mercury_data_interface__functor_number_map_preferences_indication_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_box_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_colour_scheme_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_summarize_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_order_criteria_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_contour_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_time_format_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_inactive_items_0;

const MR_PseudoTypeInfo mercury_data_interface__field_types_preferences_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_box_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_colour_scheme_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_summarize_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_order_criteria_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_contour_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_time_format_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_inactive_items_0
};

const MR_ConstString mercury_data_interface__field_names_preferences_0_0[] = {
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

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_preferences_0_0 = {
	"preferences",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_preferences_0_0,
	mercury_data_interface__field_names_preferences_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_preferences_0_0[] = {
	&mercury_data_interface__du_functor_desc_preferences_0_0

};

const MR_DuPtagLayout mercury_data_interface__du_ptag_ordered_preferences_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_preferences_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_interface__du_name_ordered_preferences_0[] = {
	&mercury_data_interface__du_functor_desc_preferences_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_preferences_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_preferences_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__preferences_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__preferences_0_0)),
	"interface",
	"preferences",
	{ (void *)mercury_data_interface__du_name_ordered_preferences_0 },
	{ (void *)mercury_data_interface__du_ptag_ordered_preferences_0 },
	1,
	4,
	mercury_data_interface__functor_number_map_preferences_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_port_fields_0_0 = {
	"no_port",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_port_fields_0_1 = {
	"port",
	1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_port_fields_0[] = {
	&mercury_data_interface__enum_functor_desc_port_fields_0_0,
	&mercury_data_interface__enum_functor_desc_port_fields_0_1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_port_fields_0[] = {
	&mercury_data_interface__enum_functor_desc_port_fields_0_0,
	&mercury_data_interface__enum_functor_desc_port_fields_0_1
};

const MR_Integer mercury_data_interface__functor_number_map_port_fields_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_port_fields_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__port_fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__port_fields_0_0)),
	"interface",
	"port_fields",
	{ (void *)mercury_data_interface__enum_name_ordered_port_fields_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_port_fields_0 },
	2,
	4,
	mercury_data_interface__functor_number_map_port_fields_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_order_criteria_0_0 = {
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

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_order_criteria_0_1 = {
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
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_cost_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_include_descendants_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_measurement_scope_0;

const MR_PseudoTypeInfo mercury_data_interface__field_types_order_criteria_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_cost_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_include_descendants_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_measurement_scope_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_order_criteria_0_2 = {
	"by_cost",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_order_criteria_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_order_criteria_0_0[] = {
	&mercury_data_interface__du_functor_desc_order_criteria_0_0,
	&mercury_data_interface__du_functor_desc_order_criteria_0_1

};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_order_criteria_0_1[] = {
	&mercury_data_interface__du_functor_desc_order_criteria_0_2

};

const MR_DuPtagLayout mercury_data_interface__du_ptag_ordered_order_criteria_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_interface__du_stag_ordered_order_criteria_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_order_criteria_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_interface__du_name_ordered_order_criteria_0[] = {
	&mercury_data_interface__du_functor_desc_order_criteria_0_0,
	&mercury_data_interface__du_functor_desc_order_criteria_0_2,
	&mercury_data_interface__du_functor_desc_order_criteria_0_1
};

const MR_Integer mercury_data_interface__functor_number_map_order_criteria_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_order_criteria_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__order_criteria_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__order_criteria_0_0)),
	"interface",
	"order_criteria",
	{ (void *)mercury_data_interface__du_name_ordered_order_criteria_0 },
	{ (void *)mercury_data_interface__du_ptag_ordered_order_criteria_0 },
	3,
	4,
	mercury_data_interface__functor_number_map_order_criteria_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_memory_units_0_0 = {
	"units_words",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_memory_units_0_1 = {
	"units_bytes",
	1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_memory_units_0[] = {
	&mercury_data_interface__enum_functor_desc_memory_units_0_0,
	&mercury_data_interface__enum_functor_desc_memory_units_0_1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_memory_units_0[] = {
	&mercury_data_interface__enum_functor_desc_memory_units_0_1,
	&mercury_data_interface__enum_functor_desc_memory_units_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_memory_units_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_memory_units_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__memory_units_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__memory_units_0_0)),
	"interface",
	"memory_units",
	{ (void *)mercury_data_interface__enum_name_ordered_memory_units_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_memory_units_0 },
	2,
	4,
	mercury_data_interface__functor_number_map_memory_units_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_memory_fields_0_0 = {
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
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_memory_units_0;

const MR_PseudoTypeInfo mercury_data_interface__field_types_memory_fields_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_memory_units_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_memory_fields_0_1 = {
	"memory",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_memory_fields_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_interface__field_types_memory_fields_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_memory_units_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_memory_fields_0_2 = {
	"memory_and_percall",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_memory_fields_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_memory_fields_0_0[] = {
	&mercury_data_interface__du_functor_desc_memory_fields_0_0

};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_memory_fields_0_1[] = {
	&mercury_data_interface__du_functor_desc_memory_fields_0_1

};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_memory_fields_0_2[] = {
	&mercury_data_interface__du_functor_desc_memory_fields_0_2

};

const MR_DuPtagLayout mercury_data_interface__du_ptag_ordered_memory_fields_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_interface__du_stag_ordered_memory_fields_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_memory_fields_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_memory_fields_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_interface__du_name_ordered_memory_fields_0[] = {
	&mercury_data_interface__du_functor_desc_memory_fields_0_1,
	&mercury_data_interface__du_functor_desc_memory_fields_0_2,
	&mercury_data_interface__du_functor_desc_memory_fields_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_memory_fields_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_memory_fields_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__memory_fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__memory_fields_0_0)),
	"interface",
	"memory_fields",
	{ (void *)mercury_data_interface__du_name_ordered_memory_fields_0 },
	{ (void *)mercury_data_interface__du_ptag_ordered_memory_fields_0 },
	3,
	4,
	mercury_data_interface__functor_number_map_memory_fields_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_measurement_scope_0_0 = {
	"per_call",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_measurement_scope_0_1 = {
	"overall",
	1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_measurement_scope_0[] = {
	&mercury_data_interface__enum_functor_desc_measurement_scope_0_0,
	&mercury_data_interface__enum_functor_desc_measurement_scope_0_1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_measurement_scope_0[] = {
	&mercury_data_interface__enum_functor_desc_measurement_scope_0_1,
	&mercury_data_interface__enum_functor_desc_measurement_scope_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_measurement_scope_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_measurement_scope_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__measurement_scope_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__measurement_scope_0_0)),
	"interface",
	"measurement_scope",
	{ (void *)mercury_data_interface__enum_name_ordered_measurement_scope_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_measurement_scope_0 },
	2,
	4,
	mercury_data_interface__functor_number_map_measurement_scope_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_include_descendants_0_0 = {
	"self",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_include_descendants_0_1 = {
	"self_and_desc",
	1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_include_descendants_0[] = {
	&mercury_data_interface__enum_functor_desc_include_descendants_0_0,
	&mercury_data_interface__enum_functor_desc_include_descendants_0_1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_include_descendants_0[] = {
	&mercury_data_interface__enum_functor_desc_include_descendants_0_0,
	&mercury_data_interface__enum_functor_desc_include_descendants_0_1
};

const MR_Integer mercury_data_interface__functor_number_map_include_descendants_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_include_descendants_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__include_descendants_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__include_descendants_0_0)),
	"interface",
	"include_descendants",
	{ (void *)mercury_data_interface__enum_name_ordered_include_descendants_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_include_descendants_0 },
	2,
	4,
	mercury_data_interface__functor_number_map_include_descendants_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_inactive_status_0_0 = {
	"inactive_hide",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_inactive_status_0_1 = {
	"inactive_show",
	1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_inactive_status_0[] = {
	&mercury_data_interface__enum_functor_desc_inactive_status_0_0,
	&mercury_data_interface__enum_functor_desc_inactive_status_0_1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_inactive_status_0[] = {
	&mercury_data_interface__enum_functor_desc_inactive_status_0_0,
	&mercury_data_interface__enum_functor_desc_inactive_status_0_1
};

const MR_Integer mercury_data_interface__functor_number_map_inactive_status_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_inactive_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__inactive_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__inactive_status_0_0)),
	"interface",
	"inactive_status",
	{ (void *)mercury_data_interface__enum_name_ordered_inactive_status_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_inactive_status_0 },
	2,
	4,
	mercury_data_interface__functor_number_map_inactive_status_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_inactive_status_0;

const MR_PseudoTypeInfo mercury_data_interface__field_types_inactive_items_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_inactive_status_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_inactive_status_0
};

const MR_ConstString mercury_data_interface__field_names_inactive_items_0_0[] = {
	"inactive_procs",
	"inactive_modules"
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_inactive_items_0_0 = {
	"inactive_items",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_inactive_items_0_0,
	mercury_data_interface__field_names_inactive_items_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_inactive_items_0_0[] = {
	&mercury_data_interface__du_functor_desc_inactive_items_0_0

};

const MR_DuPtagLayout mercury_data_interface__du_ptag_ordered_inactive_items_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_inactive_items_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_interface__du_name_ordered_inactive_items_0[] = {
	&mercury_data_interface__du_functor_desc_inactive_items_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_inactive_items_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_inactive_items_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__inactive_items_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__inactive_items_0_0)),
	"interface",
	"inactive_items",
	{ (void *)mercury_data_interface__du_name_ordered_inactive_items_0 },
	{ (void *)mercury_data_interface__du_ptag_ordered_inactive_items_0 },
	1,
	4,
	mercury_data_interface__functor_number_map_inactive_items_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_port_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_time_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_callseqs_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_alloc_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_memory_fields_0;

const MR_PseudoTypeInfo mercury_data_interface__field_types_fields_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_port_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_time_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_callseqs_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_alloc_fields_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_memory_fields_0
};

const MR_ConstString mercury_data_interface__field_names_fields_0_0[] = {
	"port_fields",
	"time_fields",
	"callseqs_fields",
	"alloc_fields",
	"memory_fields"
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_fields_0_0 = {
	"fields",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_fields_0_0,
	mercury_data_interface__field_names_fields_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_fields_0_0[] = {
	&mercury_data_interface__du_functor_desc_fields_0_0

};

const MR_DuPtagLayout mercury_data_interface__du_ptag_ordered_fields_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_fields_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_interface__du_name_ordered_fields_0[] = {
	&mercury_data_interface__du_functor_desc_fields_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_fields_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_fields_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__fields_0_0)),
	"interface",
	"fields",
	{ (void *)mercury_data_interface__du_name_ordered_fields_0 },
	{ (void *)mercury_data_interface__du_ptag_ordered_fields_0 },
	1,
	4,
	mercury_data_interface__functor_number_map_fields_0
};

const MR_PseudoTypeInfo mercury_data_interface__field_types_display_limit_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_display_limit_0_0 = {
	"rank_range",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_display_limit_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_interface__field_types_display_limit_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_display_limit_0_1 = {
	"threshold_percent",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_display_limit_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_interface__field_types_display_limit_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_display_limit_0_2 = {
	"threshold_value",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_display_limit_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_display_limit_0_0[] = {
	&mercury_data_interface__du_functor_desc_display_limit_0_0

};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_display_limit_0_1[] = {
	&mercury_data_interface__du_functor_desc_display_limit_0_1

};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_display_limit_0_2[] = {
	&mercury_data_interface__du_functor_desc_display_limit_0_2

};

const MR_DuPtagLayout mercury_data_interface__du_ptag_ordered_display_limit_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_display_limit_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_display_limit_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_display_limit_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_interface__du_name_ordered_display_limit_0[] = {
	&mercury_data_interface__du_functor_desc_display_limit_0_0,
	&mercury_data_interface__du_functor_desc_display_limit_0_1,
	&mercury_data_interface__du_functor_desc_display_limit_0_2
};

const MR_Integer mercury_data_interface__functor_number_map_display_limit_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_display_limit_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__display_limit_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__display_limit_0_0)),
	"interface",
	"display_limit",
	{ (void *)mercury_data_interface__du_name_ordered_display_limit_0 },
	{ (void *)mercury_data_interface__du_ptag_ordered_display_limit_0 },
	3,
	4,
	mercury_data_interface__functor_number_map_display_limit_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_cost_kind_0_0 = {
	"cost_calls",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_cost_kind_0_1 = {
	"cost_redos",
	1
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_cost_kind_0_2 = {
	"cost_time",
	2
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_cost_kind_0_3 = {
	"cost_callseqs",
	3
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_cost_kind_0_4 = {
	"cost_allocs",
	4
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_cost_kind_0_5 = {
	"cost_words",
	5
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_cost_kind_0[] = {
	&mercury_data_interface__enum_functor_desc_cost_kind_0_0,
	&mercury_data_interface__enum_functor_desc_cost_kind_0_1,
	&mercury_data_interface__enum_functor_desc_cost_kind_0_2,
	&mercury_data_interface__enum_functor_desc_cost_kind_0_3,
	&mercury_data_interface__enum_functor_desc_cost_kind_0_4,
	&mercury_data_interface__enum_functor_desc_cost_kind_0_5
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_cost_kind_0[] = {
	&mercury_data_interface__enum_functor_desc_cost_kind_0_4,
	&mercury_data_interface__enum_functor_desc_cost_kind_0_0,
	&mercury_data_interface__enum_functor_desc_cost_kind_0_3,
	&mercury_data_interface__enum_functor_desc_cost_kind_0_1,
	&mercury_data_interface__enum_functor_desc_cost_kind_0_2,
	&mercury_data_interface__enum_functor_desc_cost_kind_0_5
};

const MR_Integer mercury_data_interface__functor_number_map_cost_kind_0[] = {
	1,
	3,
	4,
	2,
	0,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_cost_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__cost_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__cost_kind_0_0)),
	"interface",
	"cost_kind",
	{ (void *)mercury_data_interface__enum_name_ordered_cost_kind_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_cost_kind_0 },
	6,
	4,
	mercury_data_interface__functor_number_map_cost_kind_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_contour_0_0 = {
	"apply_contour",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_contour_0_1 = {
	"no_contour",
	1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_contour_0[] = {
	&mercury_data_interface__enum_functor_desc_contour_0_0,
	&mercury_data_interface__enum_functor_desc_contour_0_1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_contour_0[] = {
	&mercury_data_interface__enum_functor_desc_contour_0_0,
	&mercury_data_interface__enum_functor_desc_contour_0_1
};

const MR_Integer mercury_data_interface__functor_number_map_contour_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_contour_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__contour_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__contour_0_0)),
	"interface",
	"contour",
	{ (void *)mercury_data_interface__enum_name_ordered_contour_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_contour_0 },
	2,
	4,
	mercury_data_interface__functor_number_map_contour_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_colour_scheme_0_0 = {
	"colour_column_groups",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_colour_scheme_0_1 = {
	"colour_none",
	1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_colour_scheme_0[] = {
	&mercury_data_interface__enum_functor_desc_colour_scheme_0_0,
	&mercury_data_interface__enum_functor_desc_colour_scheme_0_1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_colour_scheme_0[] = {
	&mercury_data_interface__enum_functor_desc_colour_scheme_0_0,
	&mercury_data_interface__enum_functor_desc_colour_scheme_0_1
};

const MR_Integer mercury_data_interface__functor_number_map_colour_scheme_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_colour_scheme_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__colour_scheme_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__colour_scheme_0_0)),
	"interface",
	"colour_scheme",
	{ (void *)mercury_data_interface__enum_name_ordered_colour_scheme_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_colour_scheme_0 },
	2,
	4,
	mercury_data_interface__functor_number_map_colour_scheme_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_preferences_indication_0;

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_pref_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_cmd_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_preferences_indication_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_pref_0_0 = {
	"cmd_pref",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_pref_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_cmd_pref_0_0[] = {
	&mercury_data_interface__du_functor_desc_cmd_pref_0_0

};

const MR_DuPtagLayout mercury_data_interface__du_ptag_ordered_cmd_pref_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_cmd_pref_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_interface__du_name_ordered_cmd_pref_0[] = {
	&mercury_data_interface__du_functor_desc_cmd_pref_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_cmd_pref_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_cmd_pref_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__cmd_pref_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__cmd_pref_0_0)),
	"interface",
	"cmd_pref",
	{ (void *)mercury_data_interface__du_name_ordered_cmd_pref_0 },
	{ (void *)mercury_data_interface__du_ptag_ordered_cmd_pref_0 },
	1,
	4,
	mercury_data_interface__functor_number_map_cmd_pref_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_0 = {
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

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_1 = {
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

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_2 = {
	"deep_cmd_timeout",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_3 = {
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

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_4 = {
	"deep_cmd_root",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_5 = {
	"deep_cmd_clique",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	5,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_6 = {
	"deep_cmd_proc",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_6,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_caller_groups_0;

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_caller_groups_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_7 = {
	"deep_cmd_proc_callers",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	7,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_7,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_8 = {
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

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_9 = {
	"deep_cmd_module",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	9,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_9,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_display_limit_0;

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_display_limit_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_cost_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_include_descendants_0,
	(MR_PseudoTypeInfo) &mercury_data_interface__type_ctor_info_measurement_scope_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_10 = {
	"deep_cmd_top_procs",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	10,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_10,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_11 = {
	"deep_cmd_proc_static",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	11,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_12 = {
	"deep_cmd_proc_dynamic",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	12,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_12,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_13 = {
	"deep_cmd_call_site_static",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	13,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_13,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_14 = {
	"deep_cmd_call_site_dynamic",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	14,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_14,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_interface__field_types_cmd_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_interface__du_functor_desc_cmd_0_15 = {
	"deep_cmd_raw_clique",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	15,
	(MR_PseudoTypeInfo *) mercury_data_interface__field_types_cmd_0_15,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_cmd_0_0[] = {
	&mercury_data_interface__du_functor_desc_cmd_0_0,
	&mercury_data_interface__du_functor_desc_cmd_0_1,
	&mercury_data_interface__du_functor_desc_cmd_0_3,
	&mercury_data_interface__du_functor_desc_cmd_0_8

};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_cmd_0_1[] = {
	&mercury_data_interface__du_functor_desc_cmd_0_2

};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_cmd_0_2[] = {
	&mercury_data_interface__du_functor_desc_cmd_0_4

};

const MR_DuFunctorDescPtr mercury_data_interface__du_stag_ordered_cmd_0_3[] = {
	&mercury_data_interface__du_functor_desc_cmd_0_5,
	&mercury_data_interface__du_functor_desc_cmd_0_6,
	&mercury_data_interface__du_functor_desc_cmd_0_7,
	&mercury_data_interface__du_functor_desc_cmd_0_9,
	&mercury_data_interface__du_functor_desc_cmd_0_10,
	&mercury_data_interface__du_functor_desc_cmd_0_11,
	&mercury_data_interface__du_functor_desc_cmd_0_12,
	&mercury_data_interface__du_functor_desc_cmd_0_13,
	&mercury_data_interface__du_functor_desc_cmd_0_14,
	&mercury_data_interface__du_functor_desc_cmd_0_15

};

const MR_DuPtagLayout mercury_data_interface__du_ptag_ordered_cmd_0[] = {
	{ 4, MR_SECTAG_LOCAL,
	mercury_data_interface__du_stag_ordered_cmd_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_cmd_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_interface__du_stag_ordered_cmd_0_2 },
	{ 10, MR_SECTAG_REMOTE,
	mercury_data_interface__du_stag_ordered_cmd_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_interface__du_name_ordered_cmd_0[] = {
	&mercury_data_interface__du_functor_desc_cmd_0_14,
	&mercury_data_interface__du_functor_desc_cmd_0_13,
	&mercury_data_interface__du_functor_desc_cmd_0_5,
	&mercury_data_interface__du_functor_desc_cmd_0_3,
	&mercury_data_interface__du_functor_desc_cmd_0_9,
	&mercury_data_interface__du_functor_desc_cmd_0_8,
	&mercury_data_interface__du_functor_desc_cmd_0_6,
	&mercury_data_interface__du_functor_desc_cmd_0_7,
	&mercury_data_interface__du_functor_desc_cmd_0_12,
	&mercury_data_interface__du_functor_desc_cmd_0_11,
	&mercury_data_interface__du_functor_desc_cmd_0_0,
	&mercury_data_interface__du_functor_desc_cmd_0_15,
	&mercury_data_interface__du_functor_desc_cmd_0_1,
	&mercury_data_interface__du_functor_desc_cmd_0_4,
	&mercury_data_interface__du_functor_desc_cmd_0_2,
	&mercury_data_interface__du_functor_desc_cmd_0_10
};

const MR_Integer mercury_data_interface__functor_number_map_cmd_0[] = {
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
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_cmd_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__cmd_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__cmd_0_0)),
	"interface",
	"cmd",
	{ (void *)mercury_data_interface__du_name_ordered_cmd_0 },
	{ (void *)mercury_data_interface__du_ptag_ordered_cmd_0 },
	16,
	4,
	mercury_data_interface__functor_number_map_cmd_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_callseqs_fields_0_0 = {
	"no_callseqs",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_callseqs_fields_0_1 = {
	"callseqs",
	1
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_callseqs_fields_0_2 = {
	"callseqs_and_percall",
	2
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_callseqs_fields_0[] = {
	&mercury_data_interface__enum_functor_desc_callseqs_fields_0_0,
	&mercury_data_interface__enum_functor_desc_callseqs_fields_0_1,
	&mercury_data_interface__enum_functor_desc_callseqs_fields_0_2
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_callseqs_fields_0[] = {
	&mercury_data_interface__enum_functor_desc_callseqs_fields_0_1,
	&mercury_data_interface__enum_functor_desc_callseqs_fields_0_2,
	&mercury_data_interface__enum_functor_desc_callseqs_fields_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_callseqs_fields_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_callseqs_fields_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__callseqs_fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__callseqs_fields_0_0)),
	"interface",
	"callseqs_fields",
	{ (void *)mercury_data_interface__enum_name_ordered_callseqs_fields_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_callseqs_fields_0 },
	3,
	4,
	mercury_data_interface__functor_number_map_callseqs_fields_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_caller_groups_0_0 = {
	"group_by_call_site",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_caller_groups_0_1 = {
	"group_by_proc",
	1
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_caller_groups_0_2 = {
	"group_by_module",
	2
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_caller_groups_0_3 = {
	"group_by_clique",
	3
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_caller_groups_0[] = {
	&mercury_data_interface__enum_functor_desc_caller_groups_0_0,
	&mercury_data_interface__enum_functor_desc_caller_groups_0_1,
	&mercury_data_interface__enum_functor_desc_caller_groups_0_2,
	&mercury_data_interface__enum_functor_desc_caller_groups_0_3
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_caller_groups_0[] = {
	&mercury_data_interface__enum_functor_desc_caller_groups_0_0,
	&mercury_data_interface__enum_functor_desc_caller_groups_0_3,
	&mercury_data_interface__enum_functor_desc_caller_groups_0_2,
	&mercury_data_interface__enum_functor_desc_caller_groups_0_1
};

const MR_Integer mercury_data_interface__functor_number_map_caller_groups_0[] = {
	0,
	3,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_caller_groups_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__caller_groups_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__caller_groups_0_0)),
	"interface",
	"caller_groups",
	{ (void *)mercury_data_interface__enum_name_ordered_caller_groups_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_caller_groups_0 },
	4,
	4,
	mercury_data_interface__functor_number_map_caller_groups_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_box_0_0 = {
	"box",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_box_0_1 = {
	"nobox",
	1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_box_0[] = {
	&mercury_data_interface__enum_functor_desc_box_0_0,
	&mercury_data_interface__enum_functor_desc_box_0_1
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_box_0[] = {
	&mercury_data_interface__enum_functor_desc_box_0_0,
	&mercury_data_interface__enum_functor_desc_box_0_1
};

const MR_Integer mercury_data_interface__functor_number_map_box_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_box_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__box_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__box_0_0)),
	"interface",
	"box",
	{ (void *)mercury_data_interface__enum_name_ordered_box_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_box_0 },
	2,
	4,
	mercury_data_interface__functor_number_map_box_0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_alloc_fields_0_0 = {
	"no_alloc",
	0
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_alloc_fields_0_1 = {
	"alloc",
	1
};

static const MR_EnumFunctorDesc mercury_data_interface__enum_functor_desc_alloc_fields_0_2 = {
	"alloc_and_percall",
	2
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_value_ordered_alloc_fields_0[] = {
	&mercury_data_interface__enum_functor_desc_alloc_fields_0_0,
	&mercury_data_interface__enum_functor_desc_alloc_fields_0_1,
	&mercury_data_interface__enum_functor_desc_alloc_fields_0_2
};

const MR_EnumFunctorDescPtr mercury_data_interface__enum_name_ordered_alloc_fields_0[] = {
	&mercury_data_interface__enum_functor_desc_alloc_fields_0_1,
	&mercury_data_interface__enum_functor_desc_alloc_fields_0_2,
	&mercury_data_interface__enum_functor_desc_alloc_fields_0_0
};

const MR_Integer mercury_data_interface__functor_number_map_alloc_fields_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_interface__type_ctor_info_alloc_fields_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___interface__alloc_fields_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___interface__alloc_fields_0_0)),
	"interface",
	"alloc_fields",
	{ (void *)mercury_data_interface__enum_name_ordered_alloc_fields_0 },
	{ (void *)mercury_data_interface__enum_value_ordered_alloc_fields_0 },
	3,
	4,
	mercury_data_interface__functor_number_map_alloc_fields_0
};


MR_BEGIN_MODULE(interface_module0)
	MR_init_entry1(fn__interface__filename_mangle_2_1_0);
	MR_init_label6(fn__interface__filename_mangle_2_1_0,10,11,4,6,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__filename_mangle_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__interface__filename_mangle_2_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(fn__interface__filename_mangle_2_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),47)) {
		MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 46;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 58;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i9);
	}
MR_def_label(fn__interface__filename_mangle_2_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),58)) {
		MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 58;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 58;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i9);
	}
MR_def_label(fn__interface__filename_mangle_2_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__interface__filename_mangle_2_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i11);
	}
	MR_proceed();
MR_def_label(fn__interface__filename_mangle_2_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__to_char_list_1_0);
MR_decl_entry(fn__string__from_char_list_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(interface_module1)
	MR_init_entry1(fn__interface__to_server_pipe_name_1_0);
	MR_init_label5(fn__interface__to_server_pipe_name_1_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__to_server_pipe_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__interface__to_server_pipe_name_1_0_i2);
MR_def_label(fn__interface__to_server_pipe_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__interface__filename_mangle_2_1_0,
		fn__interface__to_server_pipe_name_1_0_i3);
MR_def_label(fn__interface__to_server_pipe_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__interface__to_server_pipe_name_1_0_i4);
MR_def_label(fn__interface__to_server_pipe_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_server_to", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__to_server_pipe_name_1_0_i5);
MR_def_label(fn__interface__to_server_pipe_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__to_server_pipe_name_1_0_i6);
MR_def_label(fn__interface__to_server_pipe_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module2)
	MR_init_entry1(fn__interface__from_server_pipe_name_1_0);
	MR_init_label5(fn__interface__from_server_pipe_name_1_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__from_server_pipe_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__interface__from_server_pipe_name_1_0_i2);
MR_def_label(fn__interface__from_server_pipe_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__interface__filename_mangle_2_1_0,
		fn__interface__from_server_pipe_name_1_0_i3);
MR_def_label(fn__interface__from_server_pipe_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__interface__from_server_pipe_name_1_0_i4);
MR_def_label(fn__interface__from_server_pipe_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_server_from", 18);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__from_server_pipe_name_1_0_i5);
MR_def_label(fn__interface__from_server_pipe_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__from_server_pipe_name_1_0_i6);
MR_def_label(fn__interface__from_server_pipe_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module3)
	MR_init_entry1(fn__interface__server_startup_name_1_0);
	MR_init_label5(fn__interface__server_startup_name_1_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__server_startup_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__interface__server_startup_name_1_0_i2);
MR_def_label(fn__interface__server_startup_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__interface__filename_mangle_2_1_0,
		fn__interface__server_startup_name_1_0_i3);
MR_def_label(fn__interface__server_startup_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__interface__server_startup_name_1_0_i4);
MR_def_label(fn__interface__server_startup_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_startup_err", 18);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__server_startup_name_1_0_i5);
MR_def_label(fn__interface__server_startup_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__server_startup_name_1_0_i6);
MR_def_label(fn__interface__server_startup_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module4)
	MR_init_entry1(fn__interface__mutex_file_name_1_0);
	MR_init_label5(fn__interface__mutex_file_name_1_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__mutex_file_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__interface__mutex_file_name_1_0_i2);
MR_def_label(fn__interface__mutex_file_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__interface__filename_mangle_2_1_0,
		fn__interface__mutex_file_name_1_0_i3);
MR_def_label(fn__interface__mutex_file_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__interface__mutex_file_name_1_0_i4);
MR_def_label(fn__interface__mutex_file_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_mutex", 12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__mutex_file_name_1_0_i5);
MR_def_label(fn__interface__mutex_file_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__mutex_file_name_1_0_i6);
MR_def_label(fn__interface__mutex_file_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module5)
	MR_init_entry1(fn__interface__want_dir_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__want_dir_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module6)
	MR_init_entry1(fn__interface__want_prefix_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__want_prefix_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_want", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__conf__getpid_0_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(interface_module7)
	MR_init_entry1(fn__interface__want_file_name_0_0);
	MR_init_label4(fn__interface__want_file_name_0_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__want_file_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__conf__getpid_0_0,
		fn__interface__want_file_name_0_0_i2);
MR_def_label(fn__interface__want_file_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__interface__want_file_name_0_0_i3);
MR_def_label(fn__interface__want_file_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_want", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__want_file_name_0_0_i4);
MR_def_label(fn__interface__want_file_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__want_file_name_0_0_i5);
MR_def_label(fn__interface__want_file_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module8)
	MR_init_entry1(fn__interface__response_file_name_2_0);
	MR_init_label7(fn__interface__response_file_name_2_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__response_file_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__interface__response_file_name_2_0_i2);
MR_def_label(fn__interface__response_file_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__interface__filename_mangle_2_1_0,
		fn__interface__response_file_name_2_0_i3);
MR_def_label(fn__interface__response_file_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__interface__response_file_name_2_0_i4);
MR_def_label(fn__interface__response_file_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__interface__response_file_name_2_0_i5);
MR_def_label(fn__interface__response_file_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__response_file_name_2_0_i6);
MR_def_label(fn__interface__response_file_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_response", 15);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__response_file_name_2_0_i7);
MR_def_label(fn__interface__response_file_name_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__response_file_name_2_0_i8);
MR_def_label(fn__interface__response_file_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module9)
	MR_init_entry1(fn__interface__contour_file_name_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__contour_file_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".contour", 8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__write_4_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(interface_module10)
	MR_init_entry1(interface__send_term_5_0);
	MR_init_label8(interface__send_term_5_0,2,5,6,4,3,11,14,15)
	MR_init_label2(interface__send_term_5_0,13,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__interface__send_term_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__send_term_5_0_i2);
MR_def_label(interface__send_term_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__send_term_5_0_i4);
	}
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(io__write_4_0,
		interface__send_term_5_0_i5);
MR_def_label(interface__send_term_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__send_term_5_0_i6);
MR_def_label(interface__send_term_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__close_output_3_0,
		interface__send_term_5_0_i3);
MR_def_label(interface__send_term_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("send_term: couldn\'t open pipe", 29);
	MR_np_call_localret_ent(require__error_1_0,
		interface__send_term_5_0_i3);
MR_def_label(interface__send_term_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(interface__send_term_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("/tmp/.send_term", 15);
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__send_term_5_0_i11);
MR_def_label(interface__send_term_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__send_term_5_0_i13);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(io__write_4_0,
		interface__send_term_5_0_i14);
MR_def_label(interface__send_term_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__send_term_5_0_i15);
MR_def_label(interface__send_term_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__close_output_3_0);
MR_def_label(interface__send_term_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("send_term: couldn\'t debug", 25);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(interface__send_term_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module11)
	MR_init_entry1(interface__send_string_5_0);
	MR_init_label8(interface__send_string_5_0,2,5,4,3,10,13,12,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__interface__send_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__send_string_5_0_i2);
MR_def_label(interface__send_string_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__send_string_5_0_i4);
	}
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__send_string_5_0_i5);
MR_def_label(interface__send_string_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__close_output_3_0,
		interface__send_string_5_0_i3);
MR_def_label(interface__send_string_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("send_string: couldn\'t open pipe", 31);
	MR_np_call_localret_ent(require__error_1_0,
		interface__send_string_5_0_i3);
MR_def_label(interface__send_string_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(interface__send_string_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("/tmp/.send_string", 17);
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__send_string_5_0_i10);
MR_def_label(interface__send_string_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__send_string_5_0_i12);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__send_string_5_0_i13);
MR_def_label(interface__send_string_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__close_output_3_0);
MR_def_label(interface__send_string_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("send_string: couldn\'t debug", 27);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(interface__send_string_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__read_4_0);
MR_decl_entry(io__close_input_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_read_result_1;

MR_BEGIN_MODULE(interface_module12)
	MR_init_entry1(interface__recv_term_5_0);
	MR_init_label8(interface__recv_term_5_0,2,5,9,8,6,12,26,14)
	MR_init_label5(interface__recv_term_5_0,15,18,19,17,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__interface__recv_term_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__open_input_4_0,
		interface__recv_term_5_0_i2);
MR_def_label(interface__recv_term_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__recv_term_5_0_i4);
	}
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__read_4_0,
		interface__recv_term_5_0_i5);
MR_def_label(interface__recv_term_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(interface__recv_term_5_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(interface__recv_term_5_0_i9);
	}
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("recv_term: read failed", 22);
	}
	MR_np_call_localret_ent(require__error_1_0,
		interface__recv_term_5_0_i6);
MR_def_label(interface__recv_term_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("recv_term: read failed", 22);
	MR_np_call_localret_ent(require__error_1_0,
		interface__recv_term_5_0_i6);
MR_def_label(interface__recv_term_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(io__close_input_3_0,
		interface__recv_term_5_0_i12);
MR_def_label(interface__recv_term_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_input_3_0,
		interface__recv_term_5_0_i12);
MR_def_label(interface__recv_term_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(interface__recv_term_5_0_i14);
	}
MR_def_label(interface__recv_term_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(interface__recv_term_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/tmp/.recv_term", 15);
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__recv_term_5_0_i15);
MR_def_label(interface__recv_term_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__recv_term_5_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(io, read_result);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(io__write_4_0,
		interface__recv_term_5_0_i18);
MR_def_label(interface__recv_term_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__recv_term_5_0_i19);
MR_def_label(interface__recv_term_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		interface__recv_term_5_0_i26);
MR_def_label(interface__recv_term_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("recv_term: couldn\'t debug", 25);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(interface__recv_term_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("recv_term: couldn\'t open pipe", 29);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_file_as_string_4_0);

MR_BEGIN_MODULE(interface_module13)
	MR_init_entry1(interface__recv_string_5_0);
	MR_init_label8(interface__recv_string_5_0,2,5,7,6,9,22,11,12)
	MR_init_label4(interface__recv_string_5_0,15,16,14,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__interface__recv_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__open_input_4_0,
		interface__recv_string_5_0_i2);
MR_def_label(interface__recv_string_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__recv_string_5_0_i4);
	}
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__read_file_as_string_4_0,
		interface__recv_string_5_0_i5);
MR_def_label(interface__recv_string_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__recv_string_5_0_i7);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(io__close_input_3_0,
		interface__recv_string_5_0_i9);
MR_def_label(interface__recv_string_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("recv_string: read failed", 24);
	MR_np_call_localret_ent(require__error_1_0,
		interface__recv_string_5_0_i6);
MR_def_label(interface__recv_string_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_input_3_0,
		interface__recv_string_5_0_i9);
MR_def_label(interface__recv_string_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(interface__recv_string_5_0_i11);
	}
MR_def_label(interface__recv_string_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(interface__recv_string_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/tmp/.recv_string", 17);
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__recv_string_5_0_i12);
MR_def_label(interface__recv_string_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__recv_string_5_0_i14);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(io__write_4_0,
		interface__recv_string_5_0_i15);
MR_def_label(interface__recv_string_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__recv_string_5_0_i16);
MR_def_label(interface__recv_string_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		interface__recv_string_5_0_i22);
MR_def_label(interface__recv_string_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("recv_string: couldn\'t debug", 27);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(interface__recv_string_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("recv_term: couldn\'t open pipe", 29);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module14)
	MR_init_entry1(fn__interface__should_display_times_1_0);
	MR_init_label1(fn__interface__should_display_times_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__should_display_times_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 6);
	if (MR_INT_LE(MR_tempr1,10)) {
		MR_GOTO_LAB(fn__interface__should_display_times_1_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(fn__interface__should_display_times_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module15)
	MR_init_entry1(fn__interface__default_fields_1_0);
	MR_init_label1(fn__interface__default_fields_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_fields_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 6);
	if (MR_INT_LE(MR_tempr1,10)) {
		MR_GOTO_LAB(fn__interface__default_fields_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_proceed();
	}
MR_def_label(fn__interface__default_fields_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module16)
	MR_init_entry1(fn__interface__default_box_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_box_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module17)
	MR_init_entry1(fn__interface__default_colour_scheme_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_colour_scheme_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module18)
	MR_init_entry1(fn__interface__default_ancestor_limit_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_ancestor_limit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module19)
	MR_init_entry1(fn__interface__default_summarize_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_summarize_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module20)
	MR_init_entry1(fn__interface__default_order_criteria_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_order_criteria_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module21)
	MR_init_entry1(fn__interface__default_contour_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_contour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module22)
	MR_init_entry1(fn__interface__default_time_format_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_time_format_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module23)
	MR_init_entry1(fn__interface__default_inactive_items_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_inactive_items_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module24)
	MR_init_entry1(fn__interface__default_preferences_1_0);
	MR_init_label1(fn__interface__default_preferences_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_preferences_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__interface__default_fields_1_0,
		fn__interface__default_preferences_1_0_i2);
MR_def_label(fn__interface__default_preferences_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 8) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module25)
	MR_init_entry1(fn__interface__all_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__all_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module26)
	MR_init_entry1(fn__interface__solidify_preference_2_0);
	MR_init_label3(fn__interface__solidify_preference_2_0,21,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__solidify_preference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__interface__solidify_preference_2_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(fn__interface__solidify_preference_2_0_i21);
	}
	MR_np_tailcall_ent(fn__interface__default_preferences_1_0);
	}
MR_def_label(fn__interface__solidify_preference_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__interface__default_preferences_1_0,
		fn__interface__solidify_preference_2_0_i7);
MR_def_label(fn__interface__solidify_preference_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,2,2);
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
MR_def_label(fn__interface__solidify_preference_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module27)
	MR_init_entry1(fn__interface__default_cost_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_cost_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module28)
	MR_init_entry1(fn__interface__default_incl_desc_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_incl_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module29)
	MR_init_entry1(fn__interface__default_scope_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__default_scope_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module30)
	MR_init_entry1(fn__interface__query_separator_char_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__query_separator_char_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 38;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module31)
	MR_init_entry1(fn__interface__cmd_separator_char_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__cmd_separator_char_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module32)
	MR_init_entry1(interface__string_to_caller_groups_2_0);
	MR_init_label4(interface__string_to_caller_groups_2_0,3,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(interface__string_to_caller_groups_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("cl", 2)) != 0)) {
		MR_GOTO_LAB(interface__string_to_caller_groups_2_0_i3);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_caller_groups_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("cs", 2)) != 0)) {
		MR_GOTO_LAB(interface__string_to_caller_groups_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_caller_groups_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("mo", 2)) != 0)) {
		MR_GOTO_LAB(interface__string_to_caller_groups_2_0_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_caller_groups_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("pr", 2)) != 0)) {
		MR_GOTO_LAB(interface__string_to_caller_groups_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_caller_groups_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module33)
	MR_init_entry1(fn__interface__caller_groups_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__caller_groups_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module34)
	MR_init_entry1(interface__string_to_cost_kind_2_0);
	MR_init_label6(interface__string_to_cost_kind_2_0,3,4,5,6,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(interface__string_to_cost_kind_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("allocs", 6)) != 0)) {
		MR_GOTO_LAB(interface__string_to_cost_kind_2_0_i3);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_cost_kind_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("calls", 5)) != 0)) {
		MR_GOTO_LAB(interface__string_to_cost_kind_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_cost_kind_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("callseqs", 8)) != 0)) {
		MR_GOTO_LAB(interface__string_to_cost_kind_2_0_i5);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_cost_kind_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("redos", 5)) != 0)) {
		MR_GOTO_LAB(interface__string_to_cost_kind_2_0_i6);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_cost_kind_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("time", 4)) != 0)) {
		MR_GOTO_LAB(interface__string_to_cost_kind_2_0_i7);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_cost_kind_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("words", 5)) != 0)) {
		MR_GOTO_LAB(interface__string_to_cost_kind_2_0_i1);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_cost_kind_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module35)
	MR_init_entry1(fn__interface__cost_kind_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__cost_kind_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_1, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module36)
	MR_init_entry1(interface__string_to_incl_desc_2_0);
	MR_init_label2(interface__string_to_incl_desc_2_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(interface__string_to_incl_desc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("both", 4)) != 0)) {
		MR_GOTO_LAB(interface__string_to_incl_desc_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_incl_desc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("self", 4)) != 0)) {
		MR_GOTO_LAB(interface__string_to_incl_desc_2_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_incl_desc_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module37)
	MR_init_entry1(fn__interface__incl_desc_to_string_1_0);
	MR_init_label1(fn__interface__incl_desc_to_string_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__incl_desc_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__interface__incl_desc_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("self", 4);
	MR_proceed();
MR_def_label(fn__interface__incl_desc_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("both", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__format_2_0);

MR_BEGIN_MODULE(interface_module38)
	MR_init_entry1(fn__interface__limit_to_string_1_0);
	MR_init_label2(fn__interface__limit_to_string_1_0,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__limit_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr5);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__interface__limit_to_string_1_0_i4);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__interface__limit_to_string_1_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("%d%c%d", 6);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__interface__limit_to_string_1_0,6)
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
MR_def_label(fn__interface__limit_to_string_1_0,4)
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


MR_BEGIN_MODULE(interface_module39)
	MR_init_entry1(interface__string_to_scope_2_0);
	MR_init_label2(interface__string_to_scope_2_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(interface__string_to_scope_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("oa", 2)) != 0)) {
		MR_GOTO_LAB(interface__string_to_scope_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_scope_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("pc", 2)) != 0)) {
		MR_GOTO_LAB(interface__string_to_scope_2_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(interface__string_to_scope_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module40)
	MR_init_entry1(fn__interface__scope_to_string_1_0);
	MR_init_label1(fn__interface__scope_to_string_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__scope_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__interface__scope_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("pc", 2);
	MR_proceed();
MR_def_label(fn__interface__scope_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("oa", 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module41)
	MR_init_entry1(fn__interface__cmd_to_string_1_0);
	MR_init_label8(fn__interface__cmd_to_string_1_0,4,7,6,5,94,9,95,14)
	MR_init_label8(fn__interface__cmd_to_string_1_0,13,16,96,19,20,22,23,25)
	MR_init_label8(fn__interface__cmd_to_string_1_0,26,27,28,29,31,32,34,35)
	MR_init_label8(fn__interface__cmd_to_string_1_0,36,37,38,39,40,41,42,44)
	MR_init_label8(fn__interface__cmd_to_string_1_0,45,47,48,50,51,53,54,56)
	MR_init_label1(fn__interface__cmd_to_string_1_0,57)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__cmd_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i4) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i94) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i95) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i96));
MR_def_label(fn__interface__cmd_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__interface__cmd_to_string_1_0_i5);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__interface__cmd_to_string_1_0_i6);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__interface__cmd_to_string_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("modules", 7);
	MR_proceed();
	}
MR_def_label(fn__interface__cmd_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("menu", 4);
	MR_proceed();
MR_def_label(fn__interface__cmd_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("restart", 7);
	MR_proceed();
MR_def_label(fn__interface__cmd_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("quit", 4);
	MR_proceed();
MR_def_label(fn__interface__cmd_to_string_1_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i9);
MR_def_label(fn__interface__cmd_to_string_1_0,9)
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
MR_def_label(fn__interface__cmd_to_string_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(2, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__interface__cmd_to_string_1_0_i13);
	}
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i14);
MR_def_label(fn__interface__cmd_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_r1 = (MR_Word) MR_string_const("root%c%s", 8);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__interface__cmd_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i16);
MR_def_label(fn__interface__cmd_to_string_1_0,16)
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
MR_def_label(fn__interface__cmd_to_string_1_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i19) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i22) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i25) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i31) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i34) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i44) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i47) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i50) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i53) MR_AND
		MR_LABEL_AP(fn__interface__cmd_to_string_1_0_i56));
MR_def_label(fn__interface__cmd_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i20);
MR_def_label(fn__interface__cmd_to_string_1_0,20)
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
MR_def_label(fn__interface__cmd_to_string_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i23);
MR_def_label(fn__interface__cmd_to_string_1_0,23)
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
MR_def_label(fn__interface__cmd_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__interface__caller_groups_to_string_1_0,
		fn__interface__cmd_to_string_1_0_i26);
MR_def_label(fn__interface__cmd_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i27);
MR_def_label(fn__interface__cmd_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i28);
MR_def_label(fn__interface__cmd_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(5), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(5), 0) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i29);
MR_def_label(fn__interface__cmd_to_string_1_0,29)
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
MR_def_label(fn__interface__cmd_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i32);
MR_def_label(fn__interface__cmd_to_string_1_0,32)
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
MR_def_label(fn__interface__cmd_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__interface__limit_to_string_1_0,
		fn__interface__cmd_to_string_1_0_i35);
MR_def_label(fn__interface__cmd_to_string_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__cost_kind_to_string_1_0,
		fn__interface__cmd_to_string_1_0_i36);
MR_def_label(fn__interface__cmd_to_string_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__incl_desc_to_string_1_0,
		fn__interface__cmd_to_string_1_0_i37);
MR_def_label(fn__interface__cmd_to_string_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__scope_to_string_1_0,
		fn__interface__cmd_to_string_1_0_i38);
MR_def_label(fn__interface__cmd_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i39);
MR_def_label(fn__interface__cmd_to_string_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(5), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(5), 0) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i40);
MR_def_label(fn__interface__cmd_to_string_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(6), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(6), 0) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i41);
MR_def_label(fn__interface__cmd_to_string_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(7), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(7), 0) = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i42);
MR_def_label(fn__interface__cmd_to_string_1_0,42)
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
MR_def_label(fn__interface__cmd_to_string_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i45);
MR_def_label(fn__interface__cmd_to_string_1_0,45)
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
MR_def_label(fn__interface__cmd_to_string_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i48);
MR_def_label(fn__interface__cmd_to_string_1_0,48)
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
MR_def_label(fn__interface__cmd_to_string_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i51);
MR_def_label(fn__interface__cmd_to_string_1_0,51)
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
MR_def_label(fn__interface__cmd_to_string_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i54);
MR_def_label(fn__interface__cmd_to_string_1_0,54)
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
MR_def_label(fn__interface__cmd_to_string_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__interface__cmd_separator_char_0_0,
		fn__interface__cmd_to_string_1_0_i57);
MR_def_label(fn__interface__cmd_to_string_1_0,57)
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
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module42)
	MR_init_entry1(fn__interface__pref_separator_char_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__pref_separator_char_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__char_to_string_1_0);

MR_BEGIN_MODULE(interface_module43)
	MR_init_entry1(fn__interface__fields_to_string_1_0);
	MR_init_label8(fn__interface__fields_to_string_1_0,3,4,6,8,9,10,12,13)
	MR_init_label8(fn__interface__fields_to_string_1_0,14,20,22,17,19,23,24,25)
	MR_init_label4(fn__interface__fields_to_string_1_0,26,27,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__fields_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__interface__fields_to_string_1_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(5) = (MR_Word) MR_string_const("_", 1);
	MR_r1 = (MR_Integer) 45;
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__fields_to_string_1_0_i4);
MR_def_label(fn__interface__fields_to_string_1_0,3)
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
		fn__interface__fields_to_string_1_0_i4);
MR_def_label(fn__interface__fields_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_0, ((MR_Integer) MR_tempr3 * (MR_Integer) 2));
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__fields_to_string_1_0_i6);
MR_def_label(fn__interface__fields_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__interface__fields_to_string_1_0_i8);
	}
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_string_const("_", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__fields_to_string_1_0_i10);
MR_def_label(fn__interface__fields_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__interface__fields_to_string_1_0_i9);
	}
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_string_const("s", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__fields_to_string_1_0_i10);
MR_def_label(fn__interface__fields_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_string_const("S", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__fields_to_string_1_0_i10);
MR_def_label(fn__interface__fields_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__interface__fields_to_string_1_0_i12);
	}
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_string_const("_", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__fields_to_string_1_0_i14);
MR_def_label(fn__interface__fields_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__interface__fields_to_string_1_0_i13);
	}
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_string_const("a", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__fields_to_string_1_0_i14);
MR_def_label(fn__interface__fields_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_string_const("A", 1);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__fields_to_string_1_0_i14);
MR_def_label(fn__interface__fields_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__interface__fields_to_string_1_0_i17);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__interface__fields_to_string_1_0_i20);
	}
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i23);
MR_def_label(fn__interface__fields_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__interface__fields_to_string_1_0_i22);
	}
	MR_r2 = (MR_Word) MR_string_const("W", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i23);
MR_def_label(fn__interface__fields_to_string_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("B", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i23);
MR_def_label(fn__interface__fields_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__interface__fields_to_string_1_0_i19);
	}
	MR_r2 = (MR_Word) MR_string_const("w", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i23);
MR_def_label(fn__interface__fields_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("b", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i23);
MR_def_label(fn__interface__fields_to_string_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i24);
MR_def_label(fn__interface__fields_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i25);
MR_def_label(fn__interface__fields_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i26);
MR_def_label(fn__interface__fields_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i27);
MR_def_label(fn__interface__fields_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i28);
MR_def_label(fn__interface__fields_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__fields_to_string_1_0_i29);
MR_def_label(fn__interface__fields_to_string_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module44)
	MR_init_entry1(fn__interface__order_criteria_to_string_1_0);
	MR_init_label8(fn__interface__order_criteria_to_string_1_0,5,41,6,8,10,11,13,14)
	MR_init_label4(fn__interface__order_criteria_to_string_1_0,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__order_criteria_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__interface__order_criteria_to_string_1_0_i41);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(fn__interface__order_criteria_to_string_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("context", 7);
	MR_proceed();
	}
MR_def_label(fn__interface__order_criteria_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("name", 4);
	MR_proceed();
MR_def_label(fn__interface__order_criteria_to_string_1_0,41)
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
		fn__interface__order_criteria_to_string_1_0_i6);
MR_def_label(fn__interface__order_criteria_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_1, ((MR_Integer) MR_tempr3 * (MR_Integer) 2));
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__order_criteria_to_string_1_0_i8);
MR_def_label(fn__interface__order_criteria_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__interface__order_criteria_to_string_1_0_i10);
	}
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_string_const("self", 4);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__order_criteria_to_string_1_0_i11);
MR_def_label(fn__interface__order_criteria_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_string_const("both", 4);
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__order_criteria_to_string_1_0_i11);
MR_def_label(fn__interface__order_criteria_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__interface__order_criteria_to_string_1_0_i13);
	}
	MR_r2 = (MR_Word) MR_string_const("pc", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__order_criteria_to_string_1_0_i14);
MR_def_label(fn__interface__order_criteria_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("oa", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__order_criteria_to_string_1_0_i14);
MR_def_label(fn__interface__order_criteria_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__order_criteria_to_string_1_0_i15);
MR_def_label(fn__interface__order_criteria_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__order_criteria_to_string_1_0_i16);
MR_def_label(fn__interface__order_criteria_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__order_criteria_to_string_1_0_i17);
MR_def_label(fn__interface__order_criteria_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__order_criteria_to_string_1_0_i18);
MR_def_label(fn__interface__order_criteria_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cost", 4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module45)
	MR_init_entry1(fn__interface__preferences_to_string_1_0);
	MR_init_label8(fn__interface__preferences_to_string_1_0,3,4,5,7,6,9,8,11)
	MR_init_label8(fn__interface__preferences_to_string_1_0,12,14,13,16,17,15,21,19)
	MR_init_label1(fn__interface__preferences_to_string_1_0,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__preferences_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i3);
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
	MR_np_call_localret_ent(fn__interface__fields_to_string_1_0,
		fn__interface__preferences_to_string_1_0_i5);
MR_def_label(fn__interface__preferences_to_string_1_0,3)
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
		fn__interface__preferences_to_string_1_0_i4);
MR_def_label(fn__interface__preferences_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__fields_to_string_1_0,
		fn__interface__preferences_to_string_1_0_i5);
MR_def_label(fn__interface__preferences_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,4,1);
	MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i6);
MR_def_label(fn__interface__preferences_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,4,2);
MR_def_label(fn__interface__preferences_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i9);
	}
	MR_tag_alloc_heap(MR_sv(5), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(5), 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,4,3);
	MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i8);
MR_def_label(fn__interface__preferences_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(5), 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,4,4);
MR_def_label(fn__interface__preferences_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i11);
	}
	MR_sv(4) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(2,4,5);
	MR_np_call_localret_ent(fn__interface__order_criteria_to_string_1_0,
		fn__interface__preferences_to_string_1_0_i12);
MR_def_label(fn__interface__preferences_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(2,4,6);
	MR_np_call_localret_ent(fn__interface__order_criteria_to_string_1_0,
		fn__interface__preferences_to_string_1_0_i12);
MR_def_label(fn__interface__preferences_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i14);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,4,7);
	MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i13);
	}
MR_def_label(fn__interface__preferences_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,4,8);
MR_def_label(fn__interface__preferences_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i16);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,4,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i15);
	}
MR_def_label(fn__interface__preferences_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i17);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,4,9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i15);
	}
MR_def_label(fn__interface__preferences_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,4,10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	}
MR_def_label(fn__interface__preferences_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i19);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr11 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
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
MR_def_label(fn__interface__preferences_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr11 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
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
MR_def_label(fn__interface__preferences_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__interface__preferences_to_string_1_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr11 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,4);
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
MR_def_label(fn__interface__preferences_to_string_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr11 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,5);
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


MR_BEGIN_MODULE(interface_module46)
	MR_init_entry1(fn__interface__machine_datafile_cmd_pref_to_url_5_0);
	MR_init_label8(fn__interface__machine_datafile_cmd_pref_to_url_5_0,2,3,4,5,6,7,8,9)
	MR_init_label3(fn__interface__machine_datafile_cmd_pref_to_url_5_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__machine_datafile_cmd_pref_to_url_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__interface__cmd_to_string_1_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i2);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 38;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i3);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__preferences_to_string_1_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i4);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 38;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i5);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i6);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i7);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i8);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i9);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("?", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i10);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i11);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__machine_datafile_cmd_pref_to_url_5_0_i12);
MR_def_label(fn__interface__machine_datafile_cmd_pref_to_url_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("http://", 7);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(util__split_3_0);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(string__append_3_1);
MR_decl_entry(string__to_float_2_0);

MR_BEGIN_MODULE(interface_module47)
	MR_init_entry1(interface__string_to_limit_2_0);
	MR_init_label8(interface__string_to_limit_2_0,3,7,9,2,12,14,11,16)
	MR_init_label2(interface__string_to_limit_2_0,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(interface__string_to_limit_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 45;
	MR_np_call_localret_ent(util__split_3_0,
		interface__string_to_limit_2_0_i3);
MR_def_label(interface__string_to_limit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(interface__string_to_limit_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(interface__string_to_limit_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(interface__string_to_limit_2_0_i2);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		interface__string_to_limit_2_0_i7);
MR_def_label(interface__string_to_limit_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(interface__string_to_limit_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		interface__string_to_limit_2_0_i9);
MR_def_label(interface__string_to_limit_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(interface__string_to_limit_2_0_i2);
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
MR_def_label(interface__string_to_limit_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("p", 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		interface__string_to_limit_2_0_i12);
MR_def_label(interface__string_to_limit_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(interface__string_to_limit_2_0_i11);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_float_2_0,
		interface__string_to_limit_2_0_i14);
MR_def_label(interface__string_to_limit_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(interface__string_to_limit_2_0_i11);
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
MR_def_label(interface__string_to_limit_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("v", 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		interface__string_to_limit_2_0_i16);
MR_def_label(interface__string_to_limit_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(interface__string_to_limit_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_float_2_0,
		interface__string_to_limit_2_0_i18);
MR_def_label(interface__string_to_limit_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(interface__string_to_limit_2_0_i1);
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
MR_def_label(interface__string_to_limit_2_0,1)
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


MR_BEGIN_MODULE(interface_module48)
	MR_init_entry1(fn__interface__url_component_to_maybe_cmd_1_0);
	MR_init_label8(fn__interface__url_component_to_maybe_cmd_1_0,2,3,10,12,14,4,5,21)
	MR_init_label8(fn__interface__url_component_to_maybe_cmd_1_0,15,16,29,23,24,39,41,43)
	MR_init_label8(fn__interface__url_component_to_maybe_cmd_1_0,31,32,45,49,63,65,67,69)
	MR_init_label8(fn__interface__url_component_to_maybe_cmd_1_0,54,55,71,81,75,76,89,83)
	MR_init_label8(fn__interface__url_component_to_maybe_cmd_1_0,84,97,91,92,105,99,100,113)
	MR_init_label7(fn__interface__url_component_to_maybe_cmd_1_0,107,108,121,115,116,123,127)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__url_component_to_maybe_cmd_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__interface__pref_separator_char_0_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i2);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(util__split_3_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i3);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("root", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i5);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i5);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i5);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i10);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i14);
	}
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i12);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("clique", 6)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i16);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i16);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i16);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i21);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i15);
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
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("proc", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i24);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i24);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i24);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i29);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i23);
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
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("proc_callers", 12)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i32);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i32);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i32);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i32);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i32);
	}
	MR_sv(1) = MR_tempr5;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i39);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i31);
	}
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i41);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i31);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(interface__string_to_caller_groups_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i43);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i31);
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
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("modules", 7)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i45);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i49);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("module", 6)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i49);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i49);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i49);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_ctfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i55);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("top_procs", 9)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i55);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i55);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i55);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i55);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i55);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i55);
	}
	MR_sv(1) = MR_tempr6;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr4, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(interface__string_to_limit_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i63);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i54);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(interface__string_to_cost_kind_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i65);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i54);
	}
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(interface__string_to_incl_desc_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i67);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i54);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(interface__string_to_scope_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i69);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i54);
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
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i71);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("menu", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i71);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i76);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("proc_static", 11)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i76);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i76);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i76);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i81);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i75);
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
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i84);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("proc_dynamic", 12)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i84);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i84);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i84);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i89);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i83);
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
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i92);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("call_site_static", 16)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i92);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i92);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i92);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i97);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i91);
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
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i100);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("call_site_dynamic", 17)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i100);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i100);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i100);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i105);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i99);
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
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i108);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("raw_clique", 10)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i108);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i108);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i108);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i113);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i107);
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
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i116);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("timeout", 7)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i116);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i116);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i116);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_cmd_1_0_i121);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i115);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i123);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("restart", 7)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i123);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i123);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i127);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("quit", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i127);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_cmd_1_0_i127);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__interface__url_component_to_maybe_cmd_1_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module49)
	MR_init_entry1(fn__interface__url_component_to_cmd_2_0);
	MR_init_label2(fn__interface__url_component_to_cmd_2_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__url_component_to_cmd_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__interface__url_component_to_maybe_cmd_1_0,
		fn__interface__url_component_to_cmd_2_0_i2);
MR_def_label(fn__interface__url_component_to_cmd_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_cmd_2_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(fn__interface__url_component_to_cmd_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module50)
	MR_init_entry1(fn__interface__url_component_to_maybe_pref_1_0);
	MR_init_label8(fn__interface__url_component_to_maybe_pref_1_0,2,14,22,21,25,26,27,28)
	MR_init_label8(fn__interface__url_component_to_maybe_pref_1_0,29,24,32,33,31,36,37,35)
	MR_init_label8(fn__interface__url_component_to_maybe_pref_1_0,40,41,42,43,39,46,45,49)
	MR_init_label8(fn__interface__url_component_to_maybe_pref_1_0,48,53,51,56,58,57,60,62)
	MR_init_label8(fn__interface__url_component_to_maybe_pref_1_0,64,72,73,74,75,76,71,79)
	MR_init_label8(fn__interface__url_component_to_maybe_pref_1_0,78,82,85,87,86,90,91,89)
	MR_init_label5(fn__interface__url_component_to_maybe_pref_1_0,94,95,96,93,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__url_component_to_maybe_pref_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 47;
	MR_np_call_localret_ent(util__split_3_0,
		fn__interface__url_component_to_maybe_pref_1_0_i2);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr6,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr7 = MR_ctfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr7,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr8 = MR_ctfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr8,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr9 = MR_ctfield(1, MR_tempr8, 1);
	if (MR_LTAGS_TESTR(MR_tempr9,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
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
		fn__interface__url_component_to_maybe_pref_1_0_i14);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	MR_r5 = MR_tempr4;
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r6 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r6 = MR_ctfield(1, MR_tempr5, 0);
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_r5 = MR_ctfield(1, MR_r5, 0);
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i21);
	}
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("p", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_r5 = MR_ctfield(1, MR_r5, 0);
	MR_r6 = (MR_Integer) 1;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i25);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i24);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("q", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i26);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i24);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("qt", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i27);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 3;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i24);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("qtp", 3)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i28);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 5;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i24);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("t", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i29);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i24);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("tp", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 4;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("S", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i32);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i31);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i33);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i31);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("s", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 1;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("A", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i36);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i35);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i37);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i35);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("a", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 1;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("B", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(2,1,4);
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i39);
	}
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("W", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(2,1,0);
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i39);
	}
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i42);
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
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i39);
	}
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("b", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i39);
	}
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("w", 1)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(1,1,0);
	}
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(1), (char *)(MR_Word) MR_string_const("box", 3)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i46);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i45);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(1), (char *)(MR_Word) MR_string_const("nobox", 5)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 1;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("cols", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i49);
	}
	MR_sv(2) = MR_r2;
	MR_sv(9) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i48);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("none", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(9) = (MR_Integer) 1;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__interface__url_component_to_maybe_pref_1_0_i53);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i51);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i56);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(4), (char *)(MR_Word) MR_string_const("nosum", 5)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i58);
	}
	MR_sv(4) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i57);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(4), (char *)(MR_Word) MR_string_const("sum", 3)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_sv(4) = (MR_Integer) 0;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(5), (char *)(MR_Word) MR_string_const("context", 7)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i60);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i85);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(5), (char *)(MR_Word) MR_string_const("name", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i62);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i85);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 45;
	MR_np_call_localret_ent(util__split_3_0,
		fn__interface__url_component_to_maybe_pref_1_0_i64);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("cost", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r5 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("allocs", 6)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i72);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = (MR_Integer) 4;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i71);
	}
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("calls", 5)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i73);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i71);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("callseqs", 8)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i74);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = (MR_Integer) 3;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i71);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("redos", 5)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i75);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i71);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("time", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i76);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i71);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("words", 5)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = (MR_Integer) 5;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("both", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i79);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i78);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("self", 4)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("oa", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i82);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i85);
	}
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("pc", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(6), (char *)(MR_Word) MR_string_const("ac", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i87);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i86);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(6), (char *)(MR_Word) MR_string_const("nc", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(7), (char *)(MR_Word) MR_string_const("mi", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i90);
	}
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i89);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(7), (char *)(MR_Word) MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i91);
	}
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i89);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(7), (char *)(MR_Word) MR_string_const("th", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r3 = (MR_Integer) 2;
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(8), (char *)(MR_Word) MR_string_const("hh", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i94);
	}
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i93);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(8), (char *)(MR_Word) MR_string_const("hs", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i95);
	}
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i93);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(8), (char *)(MR_Word) MR_string_const("sh", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i96);
	}
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i93);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(8), (char *)(MR_Word) MR_string_const("ss", 2)) != 0)) {
		MR_GOTO_LAB(fn__interface__url_component_to_maybe_pref_1_0_i3);
	}
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,3);
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,93)
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
MR_def_label(fn__interface__url_component_to_maybe_pref_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module51)
	MR_init_entry1(__Unify___interface__alloc_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__alloc_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(interface_module52)
	MR_init_entry1(__Compare___interface__alloc_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__alloc_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module53)
	MR_init_entry1(__Unify___interface__box_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__box_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module54)
	MR_init_entry1(__Compare___interface__box_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__box_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module55)
	MR_init_entry1(__Unify___interface__caller_groups_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__caller_groups_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module56)
	MR_init_entry1(__Compare___interface__caller_groups_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__caller_groups_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module57)
	MR_init_entry1(__Unify___interface__callseqs_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__callseqs_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module58)
	MR_init_entry1(__Compare___interface__callseqs_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__callseqs_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(interface_module59)
	MR_init_entry1(__Unify___interface__cmd_0_0);
	MR_init_label8(__Unify___interface__cmd_0_0,6,10,12,16,17,19,21,23)
	MR_init_label8(__Unify___interface__cmd_0_0,25,27,29,31,33,35,37,76)
	MR_init_label1(__Unify___interface__cmd_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i76);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i16));
MR_def_label(__Unify___interface__cmd_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___interface__cmd_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i21) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i29) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i31) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i33) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i35) MR_AND
		MR_LABEL_AP(__Unify___interface__cmd_0_0_i37));
MR_def_label(__Unify___interface__cmd_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 3);
	MR_r1 = MR_ctfield(3, MR_tempr4, 3);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___interface__display_limit_0_0,
		__Unify___interface__cmd_0_0_i27);
MR_def_label(__Unify___interface__cmd_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___interface__cmd_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___interface__cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___interface__cmd_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___interface__cmd_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module60)
	MR_init_entry1(__Index___interface__cmd_0_0);
	MR_init_label8(__Index___interface__cmd_0_0,4,7,6,5,8,9,10,11)
	MR_init_label8(__Index___interface__cmd_0_0,12,13,14,15,16,17,18,19)
	MR_init_label1(__Index___interface__cmd_0_0,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___interface__cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___interface__cmd_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i10));
MR_def_label(__Index___interface__cmd_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Index___interface__cmd_0_0_i5);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Index___interface__cmd_0_0_i6);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Index___interface__cmd_0_0_i7);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
	}
MR_def_label(__Index___interface__cmd_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___interface__cmd_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___interface__cmd_0_0_i20));
MR_def_label(__Index___interface__cmd_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___interface__cmd_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(interface_module61)
	MR_init_entry1(__Compare___interface__cmd_0_0);
	MR_init_label8(__Compare___interface__cmd_0_0,3,2,4,5,6,7,11,15)
	MR_init_label8(__Compare___interface__cmd_0_0,18,21,22,25,28,31,35,41)
	MR_init_label8(__Compare___interface__cmd_0_0,44,47,51,55,62,65,68,71)
	MR_init_label3(__Compare___interface__cmd_0_0,74,183,184)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___interface__cmd_0_0_i2);
MR_def_label(__Compare___interface__cmd_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___interface__cmd_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Index___interface__cmd_0_0,
		__Compare___interface__cmd_0_0_i4);
MR_def_label(__Compare___interface__cmd_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___interface__cmd_0_0,
		__Compare___interface__cmd_0_0_i5);
MR_def_label(__Compare___interface__cmd_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___interface__cmd_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___interface__cmd_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i15) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i21));
MR_def_label(__Compare___interface__cmd_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r3);
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Compare___interface__cmd_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__cmd_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___interface__cmd_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i25) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i28) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i44) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i65) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i68) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i71) MR_AND
		MR_LABEL_AP(__Compare___interface__cmd_0_0_i74));
MR_def_label(__Compare___interface__cmd_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__cmd_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__cmd_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__cmd_0_0_i31);
MR_def_label(__Compare___interface__cmd_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i184);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__cmd_0_0_i35);
MR_def_label(__Compare___interface__cmd_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i184);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__cmd_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___interface__cmd_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___interface__display_limit_0_0,
		__Compare___interface__cmd_0_0_i47);
MR_def_label(__Compare___interface__cmd_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i184);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__cmd_0_0_i51);
MR_def_label(__Compare___interface__cmd_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i184);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__cmd_0_0_i55);
MR_def_label(__Compare___interface__cmd_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i184);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__cmd_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__cmd_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__cmd_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__cmd_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__cmd_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___interface__cmd_0_0_i183);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__cmd_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___interface__cmd_0_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module62)
	MR_init_entry1(__Unify___interface__cmd_pref_0_0);
	MR_init_label3(__Unify___interface__cmd_pref_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__cmd_pref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___interface__cmd_pref_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___interface__cmd_0_0,
		__Unify___interface__cmd_pref_0_0_i4);
MR_def_label(__Unify___interface__cmd_pref_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___interface__cmd_pref_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___interface__preferences_indication_0_0);
MR_def_label(__Unify___interface__cmd_pref_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___interface__cmd_pref_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module63)
	MR_init_entry1(__Compare___interface__cmd_pref_0_0);
	MR_init_label4(__Compare___interface__cmd_pref_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__cmd_pref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___interface__cmd_pref_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___interface__cmd_pref_0_0_i2);
MR_def_label(__Compare___interface__cmd_pref_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___interface__cmd_pref_0_0,2)
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
	MR_np_call_localret_ent(__Compare___interface__cmd_0_0,
		__Compare___interface__cmd_pref_0_0_i5);
MR_def_label(__Compare___interface__cmd_pref_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__cmd_pref_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___interface__preferences_indication_0_0);
MR_def_label(__Compare___interface__cmd_pref_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module64)
	MR_init_entry1(__Unify___interface__colour_scheme_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__colour_scheme_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module65)
	MR_init_entry1(__Compare___interface__colour_scheme_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__colour_scheme_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module66)
	MR_init_entry1(__Unify___interface__contour_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__contour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module67)
	MR_init_entry1(__Compare___interface__contour_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__contour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module68)
	MR_init_entry1(__Unify___interface__cost_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__cost_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module69)
	MR_init_entry1(__Compare___interface__cost_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__cost_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module70)
	MR_init_entry1(__Unify___interface__display_limit_0_0);
	MR_init_label4(__Unify___interface__display_limit_0_0,8,6,21,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__display_limit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___interface__display_limit_0_0_i21);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___interface__display_limit_0_0_i6);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___interface__display_limit_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___interface__display_limit_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___interface__display_limit_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_tempr3 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___interface__display_limit_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___interface__display_limit_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_tempr1) == MR_word_to_float(MR_r1));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___interface__display_limit_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___interface__display_limit_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_tempr1) == MR_word_to_float(MR_r1));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___interface__display_limit_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___interface__display_limit_0_0,1)
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

MR_BEGIN_MODULE(interface_module71)
	MR_init_entry1(__Compare___interface__display_limit_0_0);
	MR_init_label8(__Compare___interface__display_limit_0_0,3,2,23,12,6,38,11,9)
	MR_init_label1(__Compare___interface__display_limit_0_0,74)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__display_limit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i2);
MR_def_label(__Compare___interface__display_limit_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___interface__display_limit_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i6);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i12);
	}
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i11);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i11);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__display_limit_0_0_i23);
MR_def_label(__Compare___interface__display_limit_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i74);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__display_limit_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i38);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___interface__display_limit_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___interface__display_limit_0_0_i11);
	}
	}
MR_def_label(__Compare___interface__display_limit_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___interface__display_limit_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___interface__display_limit_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r3, 0);
	MR_r2 = MR_const_mask_field(MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___interface__display_limit_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module72)
	MR_init_entry1(__Unify___interface__fields_0_0);
	MR_init_label2(__Unify___interface__fields_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___interface__fields_0_0_i6);
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
		MR_GOTO_LAB(__Unify___interface__fields_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___interface__fields_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___interface__fields_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 3);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___interface__fields_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	MR_r2 = MR_ctfield(0, MR_tempr2, 4);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___interface__memory_fields_0_0);
	}
MR_def_label(__Unify___interface__fields_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___interface__fields_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module73)
	MR_init_entry1(__Compare___interface__fields_0_0);
	MR_init_label7(__Compare___interface__fields_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___interface__fields_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___interface__fields_0_0_i2);
MR_def_label(__Compare___interface__fields_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___interface__fields_0_0,2)
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
		__Compare___interface__fields_0_0_i5);
MR_def_label(__Compare___interface__fields_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__fields_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__fields_0_0_i9);
MR_def_label(__Compare___interface__fields_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__fields_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__fields_0_0_i13);
MR_def_label(__Compare___interface__fields_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__fields_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__fields_0_0_i17);
MR_def_label(__Compare___interface__fields_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__fields_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___interface__memory_fields_0_0);
MR_def_label(__Compare___interface__fields_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module74)
	MR_init_entry1(__Unify___interface__inactive_items_0_0);
	MR_init_label2(__Unify___interface__inactive_items_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__inactive_items_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___interface__inactive_items_0_0_i4);
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
		MR_GOTO_LAB(__Unify___interface__inactive_items_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___interface__inactive_items_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___interface__inactive_items_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module75)
	MR_init_entry1(__Compare___interface__inactive_items_0_0);
	MR_init_label4(__Compare___interface__inactive_items_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__inactive_items_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___interface__inactive_items_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___interface__inactive_items_0_0_i2);
MR_def_label(__Compare___interface__inactive_items_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___interface__inactive_items_0_0,2)
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
		__Compare___interface__inactive_items_0_0_i5);
MR_def_label(__Compare___interface__inactive_items_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__inactive_items_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__inactive_items_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module76)
	MR_init_entry1(__Unify___interface__inactive_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__inactive_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module77)
	MR_init_entry1(__Compare___interface__inactive_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__inactive_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module78)
	MR_init_entry1(__Unify___interface__include_descendants_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__include_descendants_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module79)
	MR_init_entry1(__Compare___interface__include_descendants_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__include_descendants_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module80)
	MR_init_entry1(__Unify___interface__measurement_scope_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__measurement_scope_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module81)
	MR_init_entry1(__Compare___interface__measurement_scope_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__measurement_scope_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module82)
	MR_init_entry1(__Unify___interface__memory_fields_0_0);
	MR_init_label4(__Unify___interface__memory_fields_0_0,8,6,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__memory_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___interface__memory_fields_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___interface__memory_fields_0_0_i6);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___interface__memory_fields_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___interface__memory_fields_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___interface__memory_fields_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___interface__memory_fields_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___interface__memory_fields_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___interface__memory_fields_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___interface__memory_fields_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module83)
	MR_init_entry1(__Compare___interface__memory_fields_0_0);
	MR_init_label6(__Compare___interface__memory_fields_0_0,36,12,6,31,11,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__memory_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___interface__memory_fields_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___interface__memory_fields_0_0_i6);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___interface__memory_fields_0_0_i12);
	}
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___interface__memory_fields_0_0_i11);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___interface__memory_fields_0_0_i11);
	}
	}
MR_def_label(__Compare___interface__memory_fields_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___interface__memory_fields_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___interface__memory_fields_0_0_i31);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___interface__memory_fields_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___interface__memory_fields_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___interface__memory_fields_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___interface__memory_fields_0_0_i11);
	}
	}
MR_def_label(__Compare___interface__memory_fields_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___interface__memory_fields_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___interface__memory_fields_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r3, 0);
	MR_r2 = MR_const_mask_field(MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module84)
	MR_init_entry1(__Unify___interface__memory_units_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__memory_units_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module85)
	MR_init_entry1(__Compare___interface__memory_units_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__memory_units_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module86)
	MR_init_entry1(__Unify___interface__order_criteria_0_0);
	MR_init_label3(__Unify___interface__order_criteria_0_0,6,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__order_criteria_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___interface__order_criteria_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___interface__order_criteria_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___interface__order_criteria_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___interface__order_criteria_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___interface__order_criteria_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___interface__order_criteria_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 2);
	MR_r1 = MR_ctfield(1, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___interface__order_criteria_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___interface__order_criteria_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module87)
	MR_init_entry1(__Compare___interface__order_criteria_0_0);
	MR_init_label8(__Compare___interface__order_criteria_0_0,36,7,14,6,18,21,25,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__order_criteria_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___interface__order_criteria_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___interface__order_criteria_0_0_i6);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___interface__order_criteria_0_0_i7);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr3);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___interface__order_criteria_0_0_i14);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr3),0)) {
		MR_GOTO_LAB(__Compare___interface__order_criteria_0_0_i14);
	}
	}
MR_def_label(__Compare___interface__order_criteria_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___interface__order_criteria_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___interface__order_criteria_0_0_i14);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___interface__order_criteria_0_0_i36);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___interface__order_criteria_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___interface__order_criteria_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___interface__order_criteria_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___interface__order_criteria_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 2);
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__order_criteria_0_0_i21);
MR_def_label(__Compare___interface__order_criteria_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__order_criteria_0_0_i31);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__order_criteria_0_0_i25);
MR_def_label(__Compare___interface__order_criteria_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__order_criteria_0_0_i31);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___interface__order_criteria_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module88)
	MR_init_entry1(__Unify___interface__port_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__port_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module89)
	MR_init_entry1(__Compare___interface__port_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__port_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module90)
	MR_init_entry1(__Unify___interface__preferences_0_0);
	MR_init_label5(__Unify___interface__preferences_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__preferences_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___interface__preferences_0_0_i12);
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
	MR_np_call_localret_ent(__Unify___interface__fields_0_0,
		__Unify___interface__preferences_0_0_i4);
MR_def_label(__Unify___interface__preferences_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___interface__preferences_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___interface__preferences_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(10))) {
		MR_GOTO_LAB(__Unify___interface__preferences_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___interface__preferences_0_0_i6);
MR_def_label(__Unify___interface__preferences_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___interface__preferences_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___interface__preferences_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___interface__order_criteria_0_0,
		__Unify___interface__preferences_0_0_i8);
MR_def_label(__Unify___interface__preferences_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___interface__preferences_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___interface__preferences_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___interface__preferences_0_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___interface__inactive_items_0_0);
MR_def_label(__Unify___interface__preferences_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___interface__preferences_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module91)
	MR_init_entry1(__Compare___interface__preferences_0_0);
	MR_init_label8(__Compare___interface__preferences_0_0,3,2,5,9,13,17,21,25)
	MR_init_label3(__Compare___interface__preferences_0_0,29,33,77)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__preferences_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___interface__preferences_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___interface__preferences_0_0_i2);
MR_def_label(__Compare___interface__preferences_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___interface__preferences_0_0,2)
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
	MR_np_call_localret_ent(__Compare___interface__fields_0_0,
		__Compare___interface__preferences_0_0_i5);
MR_def_label(__Compare___interface__preferences_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__preferences_0_0_i9);
MR_def_label(__Compare___interface__preferences_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__preferences_0_0_i13);
MR_def_label(__Compare___interface__preferences_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___interface__preferences_0_0_i17);
MR_def_label(__Compare___interface__preferences_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__preferences_0_0_i21);
MR_def_label(__Compare___interface__preferences_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___interface__order_criteria_0_0,
		__Compare___interface__preferences_0_0_i25);
MR_def_label(__Compare___interface__preferences_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__preferences_0_0_i29);
MR_def_label(__Compare___interface__preferences_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___interface__preferences_0_0_i33);
MR_def_label(__Compare___interface__preferences_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_0_0_i77);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___interface__inactive_items_0_0);
MR_def_label(__Compare___interface__preferences_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module92)
	MR_init_entry1(__Unify___interface__preferences_indication_0_0);
	MR_init_label3(__Unify___interface__preferences_indication_0_0,6,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__preferences_indication_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___interface__preferences_indication_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___interface__preferences_indication_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___interface__preferences_indication_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___interface__preferences_indication_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___interface__preferences_0_0);
MR_def_label(__Unify___interface__preferences_indication_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___interface__preferences_indication_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module93)
	MR_init_entry1(__Compare___interface__preferences_indication_0_0);
	MR_init_label6(__Compare___interface__preferences_indication_0_0,26,7,28,6,30,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__preferences_indication_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___interface__preferences_indication_0_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___interface__preferences_indication_0_0_i6);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_indication_0_0_i7);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr3);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___interface__preferences_indication_0_0_i28);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr3),0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_indication_0_0_i30);
	}
	}
MR_def_label(__Compare___interface__preferences_indication_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___interface__preferences_indication_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___interface__preferences_indication_0_0_i28);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___interface__preferences_indication_0_0_i26);
	}
	}
MR_def_label(__Compare___interface__preferences_indication_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___interface__preferences_indication_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___interface__preferences_indication_0_0_i18);
	}
	}
MR_def_label(__Compare___interface__preferences_indication_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___interface__preferences_indication_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___interface__preferences_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module94)
	MR_init_entry1(__Unify___interface__resp_0_0);
	MR_init_label1(__Unify___interface__resp_0_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__resp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___interface__resp_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *)MR_sv(1), (char *)MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___interface__resp_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module95)
	MR_init_entry1(__Compare___interface__resp_0_0);
	MR_init_label2(__Compare___interface__resp_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__resp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___interface__resp_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___interface__resp_0_0_i2);
MR_def_label(__Compare___interface__resp_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___interface__resp_0_0,2)
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


MR_BEGIN_MODULE(interface_module96)
	MR_init_entry1(__Unify___interface__summarize_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__summarize_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module97)
	MR_init_entry1(__Compare___interface__summarize_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__summarize_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module98)
	MR_init_entry1(__Unify___interface__time_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__time_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module99)
	MR_init_entry1(__Compare___interface__time_fields_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__time_fields_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module100)
	MR_init_entry1(__Unify___interface__time_format_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___interface__time_format_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module101)
	MR_init_entry1(__Compare___interface__time_format_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___interface__time_format_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__interface_maybe_bunch_0(void)
{
	interface_module0();
	interface_module1();
	interface_module2();
	interface_module3();
	interface_module4();
	interface_module5();
	interface_module6();
	interface_module7();
	interface_module8();
	interface_module9();
	interface_module10();
	interface_module11();
	interface_module12();
	interface_module13();
	interface_module14();
	interface_module15();
	interface_module16();
	interface_module17();
	interface_module18();
	interface_module19();
	interface_module20();
	interface_module21();
	interface_module22();
	interface_module23();
	interface_module24();
	interface_module25();
	interface_module26();
	interface_module27();
	interface_module28();
	interface_module29();
	interface_module30();
	interface_module31();
	interface_module32();
	interface_module33();
	interface_module34();
	interface_module35();
	interface_module36();
	interface_module37();
	interface_module38();
	interface_module39();
}

static void mercury__interface_maybe_bunch_1(void)
{
	interface_module40();
	interface_module41();
	interface_module42();
	interface_module43();
	interface_module44();
	interface_module45();
	interface_module46();
	interface_module47();
	interface_module48();
	interface_module49();
	interface_module50();
	interface_module51();
	interface_module52();
	interface_module53();
	interface_module54();
	interface_module55();
	interface_module56();
	interface_module57();
	interface_module58();
	interface_module59();
	interface_module60();
	interface_module61();
	interface_module62();
	interface_module63();
	interface_module64();
	interface_module65();
	interface_module66();
	interface_module67();
	interface_module68();
	interface_module69();
	interface_module70();
	interface_module71();
	interface_module72();
	interface_module73();
	interface_module74();
	interface_module75();
	interface_module76();
	interface_module77();
	interface_module78();
	interface_module79();
}

static void mercury__interface_maybe_bunch_2(void)
{
	interface_module80();
	interface_module81();
	interface_module82();
	interface_module83();
	interface_module84();
	interface_module85();
	interface_module86();
	interface_module87();
	interface_module88();
	interface_module89();
	interface_module90();
	interface_module91();
	interface_module92();
	interface_module93();
	interface_module94();
	interface_module95();
	interface_module96();
	interface_module97();
	interface_module98();
	interface_module99();
	interface_module100();
	interface_module101();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__interface__init(void);
void mercury__interface__init_type_tables(void);
void mercury__interface__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__interface__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__interface__init_complexity_procs(void);
#endif

void mercury__interface__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__interface_maybe_bunch_0();
	mercury__interface_maybe_bunch_1();
	mercury__interface_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_time_format_0,
		interface__time_format_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_time_fields_0,
		interface__time_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_summarize_0,
		interface__summarize_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_resp_0,
		interface__resp_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_preferences_indication_0,
		interface__preferences_indication_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_preferences_0,
		interface__preferences_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_port_fields_0,
		interface__port_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_order_criteria_0,
		interface__order_criteria_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_memory_units_0,
		interface__memory_units_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_memory_fields_0,
		interface__memory_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_measurement_scope_0,
		interface__measurement_scope_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_include_descendants_0,
		interface__include_descendants_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_inactive_status_0,
		interface__inactive_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_inactive_items_0,
		interface__inactive_items_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_fields_0,
		interface__fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_display_limit_0,
		interface__display_limit_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_cost_kind_0,
		interface__cost_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_contour_0,
		interface__contour_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_colour_scheme_0,
		interface__colour_scheme_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_cmd_pref_0,
		interface__cmd_pref_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_cmd_0,
		interface__cmd_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_callseqs_fields_0,
		interface__callseqs_fields_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_caller_groups_0,
		interface__caller_groups_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_box_0,
		interface__box_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_interface__type_ctor_info_alloc_fields_0,
		interface__alloc_fields_0_0);
	mercury__interface__init_debugger();
}

void mercury__interface__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_time_format_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_time_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_summarize_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_resp_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_preferences_indication_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_preferences_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_port_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_order_criteria_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_memory_units_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_memory_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_measurement_scope_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_include_descendants_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_inactive_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_inactive_items_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_display_limit_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_cost_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_contour_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_colour_scheme_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_cmd_pref_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_cmd_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_callseqs_fields_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_caller_groups_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_box_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_interface__type_ctor_info_alloc_fields_0);
	}
}


void mercury__interface__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__interface__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__interface);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__interface__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
