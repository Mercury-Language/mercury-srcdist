/*
** Automatically generated from `display_report.m'
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
INIT mercury__display_report__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 256 "profile.int"
#include "profile.mh"

#line 27 "display_report.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 31 "display_report.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 35 "display_report.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 39 "display_report.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "display_report.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "display_report.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "display_report.c"
#line 52 "display_report.c"
#include "display_report.mh"

#line 55 "display_report.c"
#line 56 "display_report.c"
#ifndef DISPLAY_REPORT_DECL_GUARD
#define DISPLAY_REPORT_DECL_GUARD

#line 60 "display_report.c"
#line 61 "display_report.c"

#endif
#line 64 "display_report.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_String f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_String f2;
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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

MR_STATIC_LINKAGE const struct mercury_type_10 mercury_vector_common_10_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_display_report__type_ctor_info_table_info_0,
	mercury_data_display_report__type_ctor_info_ranked_0;
MR_decl_label2(display_report__IntroducedFrom__pred__sort_controls__775__1_2_0, 3,1)
MR_decl_label4(display_report__display_controls_3_0, 3,2,9,8)
MR_decl_label2(display_report__display_report_4_0, 9,3)
MR_decl_label8(display_report__display_report_menu_11_0, 2,26,25,45,69,70,71,72)
MR_decl_label3(display_report__display_report_menu_11_0, 74,97,99)
MR_decl_label8(display_report__display_report_top_procs_4_0, 3,2,6,7,8,9,10,11)
MR_decl_label8(display_report__display_report_top_procs_4_0, 12,13,26,28,30,34,35,36)
MR_decl_label8(display_report__field_controls_3_0, 3,2,18,20,21,26,28,29)
MR_decl_label6(display_report__field_controls_3_0, 34,36,37,48,50,51)
MR_decl_label4(display_report__incldesc_and_scope_controls_3_0, 3,2,11,22)
MR_decl_label2(display_report__make_alloc_control_4_0, 5,9)
MR_decl_label2(display_report__make_callseqs_control_4_0, 5,9)
MR_decl_label1(display_report__make_memory_control_4_0, 4)
MR_decl_label6(display_report__make_sort_control_4_0, 3,8,13,18,23,28)
MR_decl_label6(display_report__make_time_control_4_0, 5,9,13,17,21,25)
MR_decl_label4(display_report__memory_label_2_0, 6,8,3,5)
MR_decl_label2(display_report__not_unify_2_0, 4,1)
MR_decl_label5(display_report__proc_table_allocations_header_3_0, 6,8,17,18,16)
MR_decl_label5(display_report__proc_table_callseqs_header_3_0, 6,8,17,18,16)
MR_decl_label7(display_report__proc_table_memory_header_3_0, 6,20,21,22,30,9,15)
MR_decl_label2(display_report__proc_table_ports_header_3_0, 26,8)
MR_decl_label8(display_report__proc_table_row_5_0, 3,7,9,26,27,40,59,84)
MR_decl_label8(display_report__proc_table_row_5_0, 97,25,117,130,116,150,163,149)
MR_decl_label8(display_report__proc_table_row_5_0, 196,183,218,219,220,221,222,223)
MR_decl_label8(display_report__proc_table_time_header_3_0, 2,3,4,5,6,7,9,10)
MR_decl_label4(display_report__proc_table_time_header_3_0, 18,28,40,48)
MR_decl_label8(display_report__top_procs_table_4_0, 5,8,9,10,11,12,13,14)
MR_decl_label6(display_report__top_procs_table_4_0, 15,16,17,18,19,22)
MR_decl_label3(__Unify___display_report__table_info_0_0, 4,8,1)
MR_decl_label6(__Compare___display_report__table_info_0_0, 3,2,5,9,13,37)
MR_decl_static(fn__display_report__cmds_menu_restart_quit_0_0)
MR_decl_static(display_report__display_report_menu_11_0)
MR_decl_static(fn__display_report__make_table_link_5_0)
MR_decl_static(fn__display_report__self_link_2_0)
MR_decl_static(fn__display_report__self_percall_link_2_0)
MR_decl_static(fn__display_report__total_link_2_0)
MR_decl_static(fn__display_report__total_percall_link_2_0)
MR_decl_static(fn__display_report__time_link_1_0)
MR_decl_static(fn__display_report__total_time_link_1_0)
MR_decl_static(display_report__proc_table_time_header_3_0)
MR_decl_static(display_report__proc_table_ports_header_3_0)
MR_decl_static(display_report__proc_table_callseqs_header_3_0)
MR_decl_static(display_report__proc_table_allocations_header_3_0)
MR_decl_static(display_report__proc_table_memory_header_3_0)
MR_decl_static(display_report__top_procs_table_4_0)
MR_decl_static(display_report__incldesc_and_scope_controls_3_0)
MR_decl_static(display_report__display_controls_3_0)
MR_decl_static(display_report__make_horizontal_list_2_0)
MR_decl_static(display_report__field_controls_3_0)
MR_decl_static(display_report__display_report_top_procs_4_0)
MR_def_extern_entry(display_report__display_report_4_0)
MR_decl_static(display_report__make_menu_table_row_2_0)
MR_decl_static(display_report__make_command_link_2_0)
MR_decl_static(display_report__proc_to_cell_3_0)
MR_decl_static(display_report__proc_table_row_5_0)
MR_decl_static(display_report__make_sort_control_4_0)
MR_decl_static(display_report__link_to_display_2_0)
MR_decl_static(display_report__make_time_control_4_0)
MR_decl_static(display_report__make_callseqs_control_4_0)
MR_decl_static(display_report__make_alloc_control_4_0)
MR_decl_static(display_report__make_memory_control_4_0)
MR_decl_static(display_report__memory_label_2_0)
MR_decl_static(display_report__not_unify_2_0)
MR_decl_static(__Unify___display_report__ranked_0_0)
MR_decl_static(__Compare___display_report__ranked_0_0)
MR_decl_static(__Unify___display_report__table_info_0_0)
MR_decl_static(__Compare___display_report__table_info_0_0)
MR_decl_static(display_report__IntroducedFrom__pred__sort_controls__775__1_2_0)
MR_decl_static(display_report__IntroducedFrom__pred__field_controls__913__1_2_0)
MR_decl_static(display_report__IntroducedFrom__pred__field_controls__918__1_2_0)
MR_decl_static(display_report__IntroducedFrom__pred__field_controls__925__1_2_0)
MR_decl_static(display_report__IntroducedFrom__pred__field_controls__931__1_2_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
MR_tbmkword(0, 2),
MR_tbmkword(0, 0),
MR_string_const("Menu", 4),
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0),
MR_string_const("Restart", 7),
1
},
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_string_const("Quit", 4),
1
},
};

static const MR_Float mercury_float_const_100pt00000000000000 = 100.00000000000000;
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;
static const MR_Float mercury_float_const_0pt10000000000000001 = 0.10000000000000001;
static const MR_Float mercury_float_const_1000000pt0000000000 = 1000000.0000000000;
static const struct mercury_type_1 mercury_common_1[9] =
{
{
MR_TAG_COMMON(0,0,0)
},
{
MR_TAG_COMMON(0,0,1)
},
{
MR_TAG_COMMON(0,0,2)
},
{
MR_TAG_COMMON(1,4,0)
},
{
MR_tbmkword(0, 0)
},
{
(MR_Word *) &mercury_float_const_100pt00000000000000
},
{
(MR_Word *) &mercury_float_const_1pt0000000000000000
},
{
(MR_Word *) &mercury_float_const_0pt10000000000000001
},
{
(MR_Word *) &mercury_float_const_1000000pt0000000000
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_row_data_1;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_proc_0;
static const struct mercury_type_2 mercury_common_2[24] =
{
{
{
MR_TAG_COMMON(3,1,2),
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
MR_TAG_COMMON(3,1,0),
MR_TAG_COMMON(1,2,1)
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
MR_TAG_COMMON(0,3,1),
MR_TAG_COMMON(1,2,3)
}
},
{
{
MR_TAG_COMMON(0,3,2),
MR_TAG_COMMON(1,2,4)
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
MR_TAG_COMMON(0,3,4),
MR_TAG_COMMON(1,2,6)
}
},
{
{
MR_TAG_COMMON(0,3,5),
MR_TAG_COMMON(1,2,7)
}
},
{
{
MR_TAG_COMMON(0,3,6),
MR_TAG_COMMON(1,2,8)
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
MR_TAG_COMMON(0,3,8),
MR_TAG_COMMON(1,2,10)
}
},
{
{
MR_TAG_COMMON(0,3,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,10),
MR_TAG_COMMON(1,2,12)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_TAG_COMMON(1,2,13)
}
},
{
{
MR_TAG_COMMON(3,11,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,11,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(report, row_data),
MR_CTOR0_ADDR(report, report_proc)
}
},
{
{
MR_CTOR1_ADDR(report, row_data),
MR_CTOR0_ADDR(report, report_proc)
}
},
{
{
MR_TAG_COMMON(2,4,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,4,1),
MR_TAG_COMMON(1,2,19)
}
},
{
{
MR_TAG_COMMON(1,4,2),
MR_TAG_COMMON(1,2,20)
}
},
{
{
MR_TAG_COMMON(1,4,1),
MR_TAG_COMMON(1,2,21)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,2,22)
}
},
};

static const struct mercury_type_3 mercury_common_3[17] =
{
{
MR_tbmkword(0, 3),
MR_string_const("Exploring the program module by module.", 39)
},
{
MR_TAG_COMMON(2,1,3),
MR_string_const("Exploring the call graph, starting at the action.", 49)
},
{
MR_TAG_COMMON(2,1,4),
MR_string_const("Exploring the call graph, starting at the root.", 47)
},
{
MR_TAG_COMMON(3,6,0),
MR_string_const("Top 100 most expensive procedures: words, self+descendants.", 59)
},
{
MR_TAG_COMMON(3,6,1),
MR_string_const("Top 100 most expensive procedures: words, self.", 47)
},
{
MR_TAG_COMMON(3,6,2),
MR_string_const("Top 100 most expensive procedures: callseqs, self+descendants.", 62)
},
{
MR_TAG_COMMON(3,6,3),
MR_string_const("Top 100 most expensive procedures: callseqs, self.", 50)
},
{
MR_TAG_COMMON(3,6,4),
MR_string_const("Top 100 most expensive procedures: time, self+descendants.", 58)
},
{
MR_TAG_COMMON(3,6,5),
MR_string_const("Top 100 most expensive procedures: time, self.", 46)
},
{
MR_TAG_COMMON(3,6,6),
MR_string_const("Procedures above 1 second threshold: time, self+descendants.", 60)
},
{
MR_TAG_COMMON(3,6,7),
MR_string_const("Procedures above 1% threshold: time, self+descendants.", 54)
},
{
MR_TAG_COMMON(3,6,8),
MR_string_const("Procedures above 0.1% threshold: time, self.", 44)
},
{
MR_TAG_COMMON(3,6,9),
MR_string_const("Procedures above 1% threshold: words, self+descendants.", 55)
},
{
MR_TAG_COMMON(3,6,10),
MR_string_const("Procedures above 0.1% threshold: words, self.", 45)
},
{
MR_TAG_COMMON(3,6,11),
MR_string_const("Procedures above 1,000,000 callseqs threshold: callseqs, self+descendants.", 74)
},
{
MR_TAG_COMMON(3,6,12),
MR_string_const("Procedures above 1% threshold: callseqs, self+descendants.", 58)
},
{
MR_TAG_COMMON(3,6,13),
MR_string_const("Procedures above 0.1% threshold: callseqs, self.", 48)
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
90
},
{
0
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

static const struct mercury_type_6 mercury_common_6[14] =
{
{
4,
MR_TAG_COMMON(0,5,0),
5,
1,
1
},
{
4,
MR_TAG_COMMON(0,5,0),
5,
0,
1
},
{
4,
MR_TAG_COMMON(0,5,0),
3,
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
MR_TAG_COMMON(0,5,0),
2,
1,
1
},
{
4,
MR_TAG_COMMON(0,5,0),
2,
0,
1
},
{
4,
MR_TAG_COMMON(2,1,5),
2,
1,
1
},
{
4,
MR_TAG_COMMON(1,1,6),
2,
1,
1
},
{
4,
MR_TAG_COMMON(1,1,7),
2,
0,
1
},
{
4,
MR_TAG_COMMON(1,1,6),
5,
1,
1
},
{
4,
MR_TAG_COMMON(1,1,7),
5,
0,
1
},
{
4,
MR_TAG_COMMON(2,1,8),
3,
1,
1
},
{
4,
MR_TAG_COMMON(1,1,6),
3,
1,
1
},
{
4,
MR_TAG_COMMON(1,1,7),
3,
0,
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(query, cmd),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(query, cmd),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__display_report_menu_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_display_item_0;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__display_report_menu_11_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_row_0;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__incldesc_and_scope_controls_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_deep_link_0;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__incldesc_and_scope_controls_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_time_fields_0;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_callseqs_fields_0;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_alloc_fields_0;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_7;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_memory_fields_0;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__display_report_top_procs_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cost_kind_0;
static const struct mercury_type_8 mercury_common_8[9] =
{
{
(MR_Word *) &mercury_data__closure_layout__display_report__display_report_menu_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(7,1),
MR_CTOR0_ADDR(display, display_item)
},
{
(MR_Word *) &mercury_data__closure_layout__display_report__display_report_menu_11_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(7,3),
MR_CTOR0_ADDR(display, table_row)
},
{
(MR_Word *) &mercury_data__closure_layout__display_report__incldesc_and_scope_controls_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(display, deep_link),
MR_CTOR0_ADDR(display, display_item)
},
{
(MR_Word *) &mercury_data__closure_layout__display_report__incldesc_and_scope_controls_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(display, deep_link),
MR_CTOR0_ADDR(display, display_item)
},
{
(MR_Word *) &mercury_data__closure_layout__display_report__field_controls_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(query, time_fields),
MR_CTOR0_ADDR(query, time_fields)
},
{
(MR_Word *) &mercury_data__closure_layout__display_report__field_controls_3_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(query, callseqs_fields),
MR_CTOR0_ADDR(query, callseqs_fields)
},
{
(MR_Word *) &mercury_data__closure_layout__display_report__field_controls_3_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(query, alloc_fields),
MR_CTOR0_ADDR(query, alloc_fields)
},
{
(MR_Word *) &mercury_data__closure_layout__display_report__field_controls_3_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(query, memory_fields),
MR_CTOR0_ADDR(query, memory_fields)
},
{
(MR_Word *) &mercury_data__closure_layout__display_report__display_report_top_procs_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(query, cost_kind),
MR_CTOR0_ADDR(query, cost_kind)
},
};

static const struct mercury_type_9 mercury_common_9[4] =
{
{
MR_COMMON(8,0),
MR_ENTRY_AP(display_report__make_command_link_2_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(display_report__make_menu_table_row_2_0),
0
},
{
MR_COMMON(8,2),
MR_ENTRY_AP(display_report__link_to_display_2_0),
0
},
{
MR_COMMON(8,3),
MR_ENTRY_AP(display_report__link_to_display_2_0),
0
},
};

static const struct mercury_type_10 mercury_common_10[3] =
{
{
MR_string_const("You can start exploring the deep profile at the following points.", 65)
},
{
MR_string_const("Deep profiler menu", 18)
},
{
MR_string_const("Toggle fields:", 14)
},
};

static const struct mercury_type_11 mercury_common_11[6] =
{
{
2,
MR_string_const("%", 1)
},
{
2,
MR_string_const("Exits", 5)
},
{
2,
MR_string_const("Fails", 5)
},
{
2,
MR_string_const("Excps", 5)
},
{
2,
MR_string_const("Rank", 4)
},
{
2,
MR_string_const("Procedure", 9)
},
};

static const struct mercury_type_12 mercury_common_12[2] =
{
{
MR_TAG_COMMON(3,11,4),
5
},
{
MR_TAG_COMMON(3,11,5),
7
},
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__top_procs_table_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_display_report__type_ctor_info_table_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__display_report__top_procs_table_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(display_report, table_info),
MR_COMMON(2,17),
MR_CTOR0_ADDR(display, table_row),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_14 mercury_common_14[9] =
{
{
5,
MR_tbmkword(0, 0)
},
{
4,
MR_TAG_COMMON(1,14,0)
},
{
3,
MR_TAG_COMMON(1,14,1)
},
{
2,
MR_TAG_COMMON(1,14,2)
},
{
1,
MR_TAG_COMMON(1,14,3)
},
{
0,
MR_TAG_COMMON(1,14,4)
},
{
2,
MR_tbmkword(0, 0)
},
{
1,
MR_TAG_COMMON(1,14,6)
},
{
0,
MR_TAG_COMMON(1,14,7)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__display_report__display_report_top_procs_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_ordering_0;
static const struct mercury_type_15 mercury_common_15[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__display_report__field_controls_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(query, cmd),
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(query, time_fields),
MR_CTOR0_ADDR(display, display_item)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__display_report__field_controls_3_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(query, cmd),
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(query, callseqs_fields),
MR_CTOR0_ADDR(display, display_item)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__display_report__field_controls_3_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(query, cmd),
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(query, alloc_fields),
MR_CTOR0_ADDR(display, display_item)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__display_report__field_controls_3_0_8,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(query, cmd),
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(query, memory_fields),
MR_CTOR0_ADDR(display, display_item)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__display_report__display_report_top_procs_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(report, report_ordering),
MR_CTOR0_ADDR(query, preferences),
MR_CTOR0_ADDR(query, cost_kind),
MR_CTOR0_ADDR(display, display_item)
}
},
};

static const struct mercury_type_10 mercury_vector_common_10_0[6] =
{
{
MR_string_const("number of calls", 15)
},
{
MR_string_const("number of redos", 15)
},
{
MR_string_const("time", 4)
},
{
MR_string_const("call sequence numbers", 21)
},
{
MR_string_const("memory allocations", 18)
},
{
MR_string_const("words allocated", 15)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_class_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_ordering_0;
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_class_0;
extern const MR_TypeCtorInfo_Struct mercury_data_display_report__type_ctor_info_ranked_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_ordering_0;

const MR_PseudoTypeInfo mercury_data_display_report__field_types_table_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_display__type_ctor_info_table_class_0,
	(MR_PseudoTypeInfo) &mercury_data_display_report__type_ctor_info_ranked_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_preferences_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_report_ordering_0
};

const MR_ConstString mercury_data_display_report__field_names_table_info_0_0[] = {
	"table_class",
	"table_ranked",
	"prefs",
	"table_ordering"
};

static const MR_DuFunctorDesc mercury_data_display_report__du_functor_desc_table_info_0_0 = {
	"table_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_display_report__field_types_table_info_0_0,
	mercury_data_display_report__field_names_table_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_display_report__du_stag_ordered_table_info_0_0[] = {
	&mercury_data_display_report__du_functor_desc_table_info_0_0

};

const MR_DuPtagLayout mercury_data_display_report__du_ptag_ordered_table_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_display_report__du_stag_ordered_table_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_display_report__du_name_ordered_table_info_0[] = {
	&mercury_data_display_report__du_functor_desc_table_info_0_0
};

const MR_Integer mercury_data_display_report__functor_number_map_table_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display_report__type_ctor_info_table_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display_report__table_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display_report__table_info_0_0)),
	"display_report",
	"table_info",
	{ (void *)mercury_data_display_report__du_name_ordered_table_info_0 },
	{ (void *)mercury_data_display_report__du_ptag_ordered_table_info_0 },
	1,
	4,
	mercury_data_display_report__functor_number_map_table_info_0
};

static const MR_EnumFunctorDesc mercury_data_display_report__enum_functor_desc_ranked_0_0 = {
	"ranked",
	0
};

static const MR_EnumFunctorDesc mercury_data_display_report__enum_functor_desc_ranked_0_1 = {
	"non_ranked",
	1
};

const MR_EnumFunctorDescPtr mercury_data_display_report__enum_value_ordered_ranked_0[] = {
	&mercury_data_display_report__enum_functor_desc_ranked_0_0,
	&mercury_data_display_report__enum_functor_desc_ranked_0_1
};

const MR_EnumFunctorDescPtr mercury_data_display_report__enum_name_ordered_ranked_0[] = {
	&mercury_data_display_report__enum_functor_desc_ranked_0_1,
	&mercury_data_display_report__enum_functor_desc_ranked_0_0
};

const MR_Integer mercury_data_display_report__functor_number_map_ranked_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_display_report__type_ctor_info_ranked_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___display_report__ranked_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___display_report__ranked_0_0)),
	"display_report",
	"ranked",
	{ (void *)mercury_data_display_report__enum_name_ordered_ranked_0 },
	{ (void *)mercury_data_display_report__enum_value_ordered_ranked_0 },
	2,
	4,
	mercury_data_display_report__functor_number_map_ranked_0
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__display_report_menu_11_0_1 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"make_command_link",
2,
0
},
"display_report",
"display_report.m",
154,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__display_report_menu_11_0_2 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"make_menu_table_row",
2,
0
},
"display_report",
"display_report.m",
169,
"d1;c58;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__top_procs_table_4_0_1 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"proc_table_row",
5,
0
},
"display_report",
"display_report.m",
323,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__incldesc_and_scope_controls_3_0_1 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"link_to_display",
2,
0
},
"display_report",
"display_report.m",
839,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__incldesc_and_scope_controls_3_0_2 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"link_to_display",
2,
0
},
"display_report",
"display_report.m",
839,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_1 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"lambda_display_report_m_913",
2,
0
},
"display_report",
"display_report.m",
913,
"d1;c32;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_2 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"make_time_control",
4,
0
},
"display_report",
"display_report.m",
914,
"d1;c34;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_3 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"lambda_display_report_m_918",
2,
0
},
"display_report",
"display_report.m",
918,
"d1;c44;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_4 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"make_callseqs_control",
4,
0
},
"display_report",
"display_report.m",
920,
"d1;c46;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_5 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"lambda_display_report_m_925",
2,
0
},
"display_report",
"display_report.m",
925,
"d1;c56;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_6 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"make_alloc_control",
4,
0
},
"display_report",
"display_report.m",
926,
"d1;c58;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_7 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"lambda_display_report_m_931",
2,
0
},
"display_report",
"display_report.m",
931,
"d1;c76;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__field_controls_3_0_8 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"make_memory_control",
4,
0
},
"display_report",
"display_report.m",
932,
"d1;c78;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__display_report_top_procs_4_0_1 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"lambda_display_report_m_775",
2,
0
},
"display_report",
"display_report.m",
775,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__display_report__display_report_top_procs_4_0_2 = {
{
MR_PREDICATE,
"display_report",
"display_report",
"make_sort_control",
4,
0
},
"display_report",
"display_report.m",
776,
"d1;c20;"
};


MR_BEGIN_MODULE(display_report_module0)
	MR_init_entry1(fn__display_report__cmds_menu_restart_quit_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__display_report__cmds_menu_restart_quit_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__query__should_display_times_1_0);
MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_display_item_0;
MR_decl_entry(list__map_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_row_0;

MR_BEGIN_MODULE(display_report_module1)
	MR_init_entry1(display_report__display_report_menu_11_0);
	MR_init_label8(display_report__display_report_menu_11_0,2,26,25,45,69,70,71,72)
	MR_init_label3(display_report__display_report_menu_11_0,74,97,99)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__display_report_menu_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_np_call_localret_ent(fn__query__should_display_times_1_0,
		display_report__display_report_menu_11_0_i2);
MR_def_label(display_report__display_report_menu_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(display_report__display_report_menu_11_0_i26);
	}
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_sv(11) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(display_report__display_report_menu_11_0_i25);
MR_def_label(display_report__display_report_menu_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(1,2,14);
MR_def_label(display_report__display_report_menu_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2097152;
	MR_np_call_localret_ent(fn__float__float_1_0,
		display_report__display_report_menu_11_0_i45);
MR_def_label(display_report__display_report_menu_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Procedures above 2M words threshold: words, self+descendants.", 61);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,3,13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,3,14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,3,15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,3,16);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__display_report_menu_11_0_i69);
MR_def_label(display_report__display_report_menu_11_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__display_report_menu_11_0_i70);
MR_def_label(display_report__display_report_menu_11_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__display_report_menu_11_0_i71);
MR_def_label(display_report__display_report_menu_11_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__display_report_menu_11_0_i72);
MR_def_label(display_report__display_report_menu_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		display_report__display_report_menu_11_0_i74);
MR_def_label(display_report__display_report_menu_11_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_string_const("Quanta per second:", 18);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_string_const("Quanta in user code:", 20);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_string_const("Quanta in instrumentation:", 26);
	MR_tfield(0, MR_tempr4, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_string_const("Call sequence numbers:", 22);
	MR_tfield(0, MR_tempr5, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = (MR_Word) MR_string_const("CallSiteDyanic structures:", 26);
	MR_tfield(0, MR_tempr6, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = (MR_Word) MR_string_const("ProcDynamic structures:", 23);
	MR_tfield(0, MR_tempr7, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr8, 0) = (MR_Word) MR_string_const("CallSiteStatic structures:", 26);
	MR_tfield(0, MR_tempr8, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr9, 0) = (MR_Word) MR_string_const("ProcStatic structures:", 22);
	MR_tfield(0, MR_tempr9, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr10, 0) = (MR_Word) MR_string_const("Cliques:", 8);
	MR_tfield(0, MR_tempr10, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr11, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr4;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(display, table_row);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		display_report__display_report_menu_11_0_i97);
MR_def_label(display_report__display_report_menu_11_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	}
	MR_np_call_localret_ent(fn__display_report__cmds_menu_restart_quit_0_0,
		display_report__display_report_menu_11_0_i99);
MR_def_label(display_report__display_report_menu_11_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,10,1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr2;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module2)
	MR_init_entry1(fn__display_report__make_table_link_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__display_report__make_table_link_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_r4;
	MR_tfield(3, MR_tempr1, 4) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_r2;
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module3)
	MR_init_entry1(fn__display_report__self_link_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__display_report__self_link_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Self", 4);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module4)
	MR_init_entry1(fn__display_report__self_percall_link_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__display_report__self_percall_link_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("/call", 5);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module5)
	MR_init_entry1(fn__display_report__total_link_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__display_report__total_link_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Total", 5);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module6)
	MR_init_entry1(fn__display_report__total_percall_link_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__display_report__total_percall_link_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("/call", 5);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module7)
	MR_init_entry1(fn__display_report__time_link_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__display_report__time_link_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Time", 4);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module8)
	MR_init_entry1(fn__display_report__total_time_link_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__display_report__total_time_link_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Time", 4);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module9)
	MR_init_entry1(display_report__proc_table_time_header_3_0);
	MR_init_label8(display_report__proc_table_time_header_3_0,2,3,4,5,6,7,9,10)
	MR_init_label4(display_report__proc_table_time_header_3_0,18,28,40,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__proc_table_time_header_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__display_report__self_link_2_0,
		display_report__proc_table_time_header_3_0_i2);
MR_def_label(display_report__proc_table_time_header_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__display_report__time_link_1_0,
		display_report__proc_table_time_header_3_0_i3);
MR_def_label(display_report__proc_table_time_header_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__display_report__self_percall_link_2_0,
		display_report__proc_table_time_header_3_0_i4);
MR_def_label(display_report__proc_table_time_header_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__display_report__total_link_2_0,
		display_report__proc_table_time_header_3_0_i5);
MR_def_label(display_report__proc_table_time_header_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__display_report__total_time_link_1_0,
		display_report__proc_table_time_header_3_0_i6);
MR_def_label(display_report__proc_table_time_header_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__display_report__total_percall_link_2_0,
		display_report__proc_table_time_header_3_0_i7);
MR_def_label(display_report__proc_table_time_header_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(2),
		MR_LABEL_AP(display_report__proc_table_time_header_3_0_i9) MR_AND
		MR_LABEL_AP(display_report__proc_table_time_header_3_0_i10) MR_AND
		MR_LABEL_AP(display_report__proc_table_time_header_3_0_i40) MR_AND
		MR_LABEL_AP(display_report__proc_table_time_header_3_0_i18) MR_AND
		MR_LABEL_AP(display_report__proc_table_time_header_3_0_i48) MR_AND
		MR_LABEL_AP(display_report__proc_table_time_header_3_0_i28));
MR_def_label(display_report__proc_table_time_header_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(display_report__proc_table_time_header_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Clock ticks", 11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = (MR_Integer) 8;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(display_report__proc_table_time_header_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Clock ticks and times", 21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = (MR_Integer) 8;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(display_report__proc_table_time_header_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Clock ticks and times", 21);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 8;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(display_report__proc_table_time_header_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Time", 4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = (MR_Integer) 8;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(display_report__proc_table_time_header_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Time", 4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 8;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module10)
	MR_init_entry1(display_report__proc_table_ports_header_3_0);
	MR_init_label2(display_report__proc_table_ports_header_3_0,26,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__proc_table_ports_header_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(display_report__proc_table_ports_header_3_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(display_report__proc_table_ports_header_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Calls", 5);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_sv(1), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(1), 0) = MR_tempr3;
	MR_r2 = (MR_Word) MR_string_const("Redos", 5);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__display_report__make_table_link_5_0,
		display_report__proc_table_ports_header_3_0_i8);
MR_def_label(display_report__proc_table_ports_header_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,11,2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,11,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Port counts", 11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module11)
	MR_init_entry1(display_report__proc_table_callseqs_header_3_0);
	MR_init_label5(display_report__proc_table_callseqs_header_3_0,6,8,17,18,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__proc_table_callseqs_header_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Self", 4);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_sv(3), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(3), 0) = MR_tempr3;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_ctfield(0, MR_r2, 2);
	MR_r2 = (MR_Integer) 3;
	}
	MR_np_call_localret_ent(fn__display_report__total_link_2_0,
		display_report__proc_table_callseqs_header_3_0_i6);
MR_def_label(display_report__proc_table_callseqs_header_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(display_report__proc_table_callseqs_header_3_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Call sequence numbers", 21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(display_report__proc_table_callseqs_header_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(display_report__proc_table_callseqs_header_3_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__display_report__self_percall_link_2_0,
		display_report__proc_table_callseqs_header_3_0_i17);
MR_def_label(display_report__proc_table_callseqs_header_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 3;
	}
	MR_np_call_localret_ent(fn__display_report__total_percall_link_2_0,
		display_report__proc_table_callseqs_header_3_0_i18);
MR_def_label(display_report__proc_table_callseqs_header_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Call sequence numbers", 21);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(display_report__proc_table_callseqs_header_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module12)
	MR_init_entry1(display_report__proc_table_allocations_header_3_0);
	MR_init_label5(display_report__proc_table_allocations_header_3_0,6,8,17,18,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__proc_table_allocations_header_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Self", 4);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_sv(3), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(3), 0) = MR_tempr3;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_ctfield(0, MR_r2, 3);
	MR_r2 = (MR_Integer) 4;
	}
	MR_np_call_localret_ent(fn__display_report__total_link_2_0,
		display_report__proc_table_allocations_header_3_0_i6);
MR_def_label(display_report__proc_table_allocations_header_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(display_report__proc_table_allocations_header_3_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Memory allocations", 18);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(display_report__proc_table_allocations_header_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(display_report__proc_table_allocations_header_3_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__display_report__self_percall_link_2_0,
		display_report__proc_table_allocations_header_3_0_i17);
MR_def_label(display_report__proc_table_allocations_header_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	}
	MR_np_call_localret_ent(fn__display_report__total_percall_link_2_0,
		display_report__proc_table_allocations_header_3_0_i18);
MR_def_label(display_report__proc_table_allocations_header_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Memory allocations", 18);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(display_report__proc_table_allocations_header_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module13)
	MR_init_entry1(display_report__proc_table_memory_header_3_0);
	MR_init_label7(display_report__proc_table_memory_header_3_0,6,20,21,22,30,9,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__proc_table_memory_header_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr4, 3), 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Self", 4);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_sv(3), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(3), 0) = MR_tempr3;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_ctfield(0, MR_r2, 4);
	MR_r2 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(fn__display_report__total_link_2_0,
		display_report__proc_table_memory_header_3_0_i6);
MR_def_label(display_report__proc_table_memory_header_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(display_report__proc_table_memory_header_3_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(display_report__proc_table_memory_header_3_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
	}
MR_def_label(display_report__proc_table_memory_header_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(fn__display_report__self_percall_link_2_0,
		display_report__proc_table_memory_header_3_0_i21);
MR_def_label(display_report__proc_table_memory_header_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(fn__display_report__total_percall_link_2_0,
		display_report__proc_table_memory_header_3_0_i22);
MR_def_label(display_report__proc_table_memory_header_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tempr5 = MR_sv(4);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(display_report__proc_table_memory_header_3_0_i30);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Memory bytes", 12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(display_report__proc_table_memory_header_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Memory words", 12);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(display_report__proc_table_memory_header_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr2 = MR_ctfield(1, MR_sv(2), 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(display_report__proc_table_memory_header_3_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Memory bytes", 12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(display_report__proc_table_memory_header_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Memory words", 12);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(display__table_add_header_col_5_0);
MR_decl_entry(display__table_maybe_add_header_col_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_header_cell_0;
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(display_report_module14)
	MR_init_entry1(display_report__top_procs_table_4_0);
	MR_init_label8(display_report__top_procs_table_4_0,5,8,9,10,11,12,13,14)
	MR_init_label6(display_report__top_procs_table_4_0,15,16,17,18,19,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__top_procs_table_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(display__table_add_header_col_5_0,
		display_report__top_procs_table_4_0_i5);
MR_def_label(display_report__top_procs_table_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(display__table_add_header_col_5_0,
		display_report__top_procs_table_4_0_i8);
MR_def_label(display_report__top_procs_table_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(display_report__proc_table_ports_header_3_0,
		display_report__top_procs_table_4_0_i9);
MR_def_label(display_report__top_procs_table_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(display__table_maybe_add_header_col_5_0,
		display_report__top_procs_table_4_0_i10);
MR_def_label(display_report__top_procs_table_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(display_report__proc_table_time_header_3_0,
		display_report__top_procs_table_4_0_i11);
MR_def_label(display_report__top_procs_table_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(display__table_maybe_add_header_col_5_0,
		display_report__top_procs_table_4_0_i12);
MR_def_label(display_report__top_procs_table_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(display_report__proc_table_callseqs_header_3_0,
		display_report__top_procs_table_4_0_i13);
MR_def_label(display_report__top_procs_table_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(display__table_maybe_add_header_col_5_0,
		display_report__top_procs_table_4_0_i14);
MR_def_label(display_report__top_procs_table_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(display_report__proc_table_allocations_header_3_0,
		display_report__top_procs_table_4_0_i15);
MR_def_label(display_report__top_procs_table_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(display__table_maybe_add_header_col_5_0,
		display_report__top_procs_table_4_0_i16);
MR_def_label(display_report__top_procs_table_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(display_report__proc_table_memory_header_3_0,
		display_report__top_procs_table_4_0_i17);
MR_def_label(display_report__top_procs_table_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(display__table_maybe_add_header_col_5_0,
		display_report__top_procs_table_4_0_i18);
MR_def_label(display_report__top_procs_table_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_header_cell);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		display_report__top_procs_table_4_0_i19);
MR_def_label(display_report__top_procs_table_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(display_report__proc_table_row_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,18);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(display, table_row);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		display_report__top_procs_table_4_0_i22);
MR_def_label(display_report__top_procs_table_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_sv(2), 0);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_deep_link_0;

MR_BEGIN_MODULE(display_report_module15)
	MR_init_entry1(display_report__incldesc_and_scope_controls_3_0);
	MR_init_label4(display_report__incldesc_and_scope_controls_3_0,3,2,11,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__incldesc_and_scope_controls_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(display_report__incldesc_and_scope_controls_3_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_r6 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_ctfield(0, MR_tempr5, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_ctfield(0, MR_tempr5, 1);
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 4) = MR_ctfield(0, MR_tempr5, 3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_r8 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = (MR_Word) MR_string_const("Include descendants", 19);
	MR_tfield(0, MR_tempr4, 3) = (MR_Integer) 1;
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_tempr2, 4);
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr3;
	MR_GOTO_LAB(display_report__incldesc_and_scope_controls_3_0_i2);
	}
MR_def_label(display_report__incldesc_and_scope_controls_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Exclude descendants", 19);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r5;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr2;
	}
MR_def_label(display_report__incldesc_and_scope_controls_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(display_report__incldesc_and_scope_controls_3_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r6;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("Count per-call cost", 19);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_r5;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, deep_link);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		display_report__incldesc_and_scope_controls_3_0_i22);
MR_def_label(display_report__incldesc_and_scope_controls_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r6;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("Count overall cost", 18);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_r5;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, deep_link);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		display_report__incldesc_and_scope_controls_3_0_i22);
MR_def_label(display_report__incldesc_and_scope_controls_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module16)
	MR_init_entry1(display_report__display_controls_3_0);
	MR_init_label4(display_report__display_controls_3_0,3,2,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__display_controls_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(display_report__display_controls_3_0_i3);
	}
	MR_tempr2 = MR_tempr3;
	MR_r13 = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("Fade column groups", 18);
	MR_r5 = MR_ctfield(0, MR_tempr2, 1);
	MR_r6 = MR_ctfield(0, MR_tempr2, 0);
	MR_r7 = MR_ctfield(0, MR_tempr2, 8);
	MR_r8 = MR_ctfield(0, MR_tempr2, 7);
	MR_r9 = MR_ctfield(0, MR_tempr2, 6);
	MR_r10 = MR_ctfield(0, MR_tempr2, 5);
	MR_r11 = MR_ctfield(0, MR_tempr2, 4);
	MR_r12 = MR_ctfield(0, MR_tempr2, 3);
	MR_GOTO_LAB(display_report__display_controls_3_0_i2);
	}
MR_def_label(display_report__display_controls_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_string_const("Colour column groups", 20);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	MR_r7 = MR_ctfield(0, MR_tempr1, 8);
	MR_r8 = MR_ctfield(0, MR_tempr1, 7);
	MR_r9 = MR_ctfield(0, MR_tempr1, 6);
	MR_r10 = MR_ctfield(0, MR_tempr1, 5);
	MR_r11 = MR_ctfield(0, MR_tempr1, 4);
	MR_r12 = MR_ctfield(0, MR_tempr1, 3);
	}
MR_def_label(display_report__display_controls_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r13 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r6;
	MR_tempr4 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r12;
	MR_tfield(0, MR_tempr1, 4) = MR_r11;
	MR_tfield(0, MR_tempr1, 5) = MR_r10;
	MR_tfield(0, MR_tempr1, 6) = MR_r9;
	MR_tfield(0, MR_tempr1, 7) = MR_r8;
	MR_tfield(0, MR_tempr1, 8) = MR_r7;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r14 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_r1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_r4;
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r3, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r3, 0) = MR_tempr3;
	if (MR_INT_NE(MR_tempr4,0)) {
		MR_GOTO_LAB(display_report__display_controls_3_0_i9);
	}
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Word) MR_string_const("Unbox", 5);
	MR_GOTO_LAB(display_report__display_controls_3_0_i8);
	}
MR_def_label(display_report__display_controls_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Word) MR_string_const("Box", 3);
MR_def_label(display_report__display_controls_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_r6;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_r12;
	MR_tfield(0, MR_tempr1, 4) = MR_r11;
	MR_tfield(0, MR_tempr1, 5) = MR_r10;
	MR_tfield(0, MR_tempr1, 6) = MR_r9;
	MR_tfield(0, MR_tempr1, 7) = MR_r8;
	MR_tfield(0, MR_tempr1, 8) = MR_r7;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_r1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_r5;
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 3);
	MR_r1 = MR_tempr4;
	MR_tfield(2, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr4, 2) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module17)
	MR_init_entry1(display_report__make_horizontal_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__make_horizontal_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_time_fields_0;
MR_decl_entry(list__filter_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_callseqs_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_alloc_fields_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_memory_fields_0;

MR_BEGIN_MODULE(display_report_module18)
	MR_init_entry1(display_report__field_controls_3_0);
	MR_init_label8(display_report__field_controls_3_0,3,2,18,20,21,26,28,29)
	MR_init_label6(display_report__field_controls_3_0,34,36,37,48,50,51)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__field_controls_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(display_report__field_controls_3_0_i3);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_string_const("Port counts", 11);
	MR_r4 = MR_ctfield(0, MR_tempr2, 8);
	MR_r5 = MR_ctfield(0, MR_tempr2, 7);
	MR_r6 = MR_ctfield(0, MR_tempr2, 6);
	MR_r7 = MR_ctfield(0, MR_tempr2, 5);
	MR_r8 = MR_ctfield(0, MR_tempr2, 4);
	MR_r9 = MR_ctfield(0, MR_tempr2, 3);
	MR_r10 = MR_ctfield(0, MR_tempr2, 2);
	MR_r11 = MR_ctfield(0, MR_tempr2, 1);
	MR_GOTO_LAB(display_report__field_controls_3_0_i2);
	}
MR_def_label(display_report__field_controls_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r5;
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("No port counts", 14);
	MR_r4 = MR_ctfield(0, MR_tempr1, 8);
	MR_r5 = MR_ctfield(0, MR_tempr1, 7);
	MR_r6 = MR_ctfield(0, MR_tempr1, 6);
	MR_r7 = MR_ctfield(0, MR_tempr1, 5);
	MR_r8 = MR_ctfield(0, MR_tempr1, 4);
	MR_r9 = MR_ctfield(0, MR_tempr1, 3);
	MR_r10 = MR_ctfield(0, MR_tempr1, 2);
	MR_r11 = MR_ctfield(0, MR_tempr1, 1);
	}
MR_def_label(display_report__field_controls_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr8 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr8;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r11;
	MR_tfield(0, MR_tempr2, 2) = MR_r10;
	MR_tfield(0, MR_tempr2, 3) = MR_r9;
	MR_tfield(0, MR_tempr2, 4) = MR_r8;
	MR_tfield(0, MR_tempr2, 5) = MR_r7;
	MR_tfield(0, MR_tempr2, 6) = MR_r6;
	MR_tfield(0, MR_tempr2, 7) = MR_r5;
	MR_tfield(0, MR_tempr2, 8) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_r3;
	MR_tfield(0, MR_tempr4, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr3, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 2, (MR_Integer) 3);
	MR_sv(6) = MR_tempr6;
	MR_tfield(2, MR_tempr6, 0) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr6, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr7, 1) = (MR_Word) MR_ENTRY_AP(display_report__IntroducedFrom__pred__field_controls__913__1_2_0);
	MR_tfield(0, MR_tempr7, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr7, 3) = MR_tempr8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, time_fields);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,14,5);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		display_report__field_controls_3_0_i18);
MR_def_label(display_report__field_controls_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(display_report__make_time_control_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, time_fields);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		display_report__field_controls_3_0_i20);
MR_def_label(display_report__field_controls_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(display_report__make_horizontal_list_2_0,
		display_report__field_controls_3_0_i21);
MR_def_label(display_report__field_controls_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(display_report__IntroducedFrom__pred__field_controls__918__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, callseqs_fields);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,14,8);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		display_report__field_controls_3_0_i26);
MR_def_label(display_report__field_controls_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(display_report__make_callseqs_control_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, callseqs_fields);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		display_report__field_controls_3_0_i28);
MR_def_label(display_report__field_controls_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(display_report__make_horizontal_list_2_0,
		display_report__field_controls_3_0_i29);
MR_def_label(display_report__field_controls_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(display_report__IntroducedFrom__pred__field_controls__925__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, alloc_fields);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,14,8);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		display_report__field_controls_3_0_i34);
MR_def_label(display_report__field_controls_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(display_report__make_alloc_control_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, alloc_fields);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		display_report__field_controls_3_0_i36);
MR_def_label(display_report__field_controls_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(display_report__make_horizontal_list_2_0,
		display_report__field_controls_3_0_i37);
MR_def_label(display_report__field_controls_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(display_report__IntroducedFrom__pred__field_controls__931__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, memory_fields);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,2,23);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		display_report__field_controls_3_0_i48);
MR_def_label(display_report__field_controls_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(display_report__make_memory_control_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, memory_fields);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		display_report__field_controls_3_0_i50);
MR_def_label(display_report__field_controls_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(display_report__make_horizontal_list_2_0,
		display_report__field_controls_3_0_i51);
MR_def_label(display_report__field_controls_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,10,2);
	MR_tfield(2, MR_tempr3, 2) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cost_kind_0;

MR_BEGIN_MODULE(display_report_module19)
	MR_init_entry1(display_report__display_report_top_procs_4_0);
	MR_init_label8(display_report__display_report_top_procs_4_0,3,2,6,7,8,9,10,11)
	MR_init_label8(display_report__display_report_top_procs_4_0,12,13,26,28,30,34,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__display_report_top_procs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(display_report__display_report_top_procs_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = (MR_Word) MR_string_const("self", 4);
	MR_GOTO_LAB(display_report__display_report_top_procs_4_0_i2);
	}
MR_def_label(display_report__display_report_top_procs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = (MR_Word) MR_string_const("total", 5);
	}
MR_def_label(display_report__display_report_top_procs_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_10_0, (MR_Integer) MR_sv(5));
	MR_sv(9) = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(display_report__display_report_top_procs_4_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const("overall", 7);
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		display_report__display_report_top_procs_4_0_i7);
MR_def_label(display_report__display_report_top_procs_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("per call", 8);
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		display_report__display_report_top_procs_4_0_i7);
MR_def_label(display_report__display_report_top_procs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		display_report__display_report_top_procs_4_0_i8);
MR_def_label(display_report__display_report_top_procs_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		display_report__display_report_top_procs_4_0_i9);
MR_def_label(display_report__display_report_top_procs_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		display_report__display_report_top_procs_4_0_i10);
MR_def_label(display_report__display_report_top_procs_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ordered by ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		display_report__display_report_top_procs_4_0_i11);
MR_def_label(display_report__display_report_top_procs_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Top procedures ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		display_report__display_report_top_procs_4_0_i12);
MR_def_label(display_report__display_report_top_procs_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(display_report__top_procs_table_4_0,
		display_report__display_report_top_procs_4_0_i13);
MR_def_label(display_report__display_report_top_procs_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 3);
	MR_sv(3) = MR_tempr4;
	MR_tfield(2, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(2, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_COMMON(8,8);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_ENTRY_AP(display_report__IntroducedFrom__pred__sort_controls__775__1_2_0);
	MR_tfield(0, MR_tempr5, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr5, 3) = MR_ctfield(0, MR_sv(2), 1);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, cost_kind);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,14,5);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		display_report__display_report_top_procs_4_0_i26);
MR_def_label(display_report__display_report_top_procs_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(display_report__make_sort_control_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, cost_kind);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(display, display_item);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		display_report__display_report_top_procs_4_0_i28);
MR_def_label(display_report__display_report_top_procs_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(display_report__incldesc_and_scope_controls_3_0,
		display_report__display_report_top_procs_4_0_i30);
MR_def_label(display_report__display_report_top_procs_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 3);
	MR_sv(2) = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(display_report__field_controls_3_0,
		display_report__display_report_top_procs_4_0_i34);
MR_def_label(display_report__display_report_top_procs_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(display_report__display_controls_3_0,
		display_report__display_report_top_procs_4_0_i35);
MR_def_label(display_report__display_report_top_procs_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__display_report__cmds_menu_restart_quit_0_0,
		display_report__display_report_top_procs_4_0_i36);
MR_def_label(display_report__display_report_top_procs_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module20)
	MR_init_entry1(display_report__display_report_4_0);
	MR_init_label2(display_report__display_report_4_0,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__display_report__display_report_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tag(MR_tempr4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(display_report__display_report_4_0_i3);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(display_report__display_report_4_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(display_report__display_report_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	MR_r3 = MR_ctfield(2, MR_r3, 1);
	MR_np_tailcall_ent(display_report__display_report_top_procs_4_0);
MR_def_label(display_report__display_report_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 2);
	MR_r5 = MR_ctfield(1, MR_tempr1, 3);
	MR_r6 = MR_ctfield(1, MR_tempr1, 4);
	MR_r7 = MR_ctfield(1, MR_tempr1, 5);
	MR_r8 = MR_ctfield(1, MR_tempr1, 6);
	MR_r9 = MR_ctfield(1, MR_tempr1, 7);
	MR_r10 = MR_ctfield(1, MR_tempr1, 8);
	MR_np_tailcall_ent(display_report__display_report_menu_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module21)
	MR_init_entry1(display_report__make_menu_table_row_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__make_menu_table_row_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module22)
	MR_init_entry1(display_report__make_command_link_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__make_command_link_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module23)
	MR_init_entry1(display_report__proc_to_cell_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__proc_to_cell_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr5 = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr4;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_display__type_ctor_info_table_cell_0;
MR_decl_entry(fn__list__cons_2_0);

MR_BEGIN_MODULE(display_report_module24)
	MR_init_entry1(display_report__proc_table_row_5_0);
	MR_init_label8(display_report__proc_table_row_5_0,3,7,9,26,27,40,59,84)
	MR_init_label8(display_report__proc_table_row_5_0,97,25,117,130,116,150,163,149)
	MR_init_label8(display_report__proc_table_row_5_0,196,183,218,219,220,221,222,223)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__proc_table_row_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(display_report__proc_table_row_5_0_i3);
	}
	MR_sv(1) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 2), 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(display_report__proc_to_cell_3_0,
		display_report__proc_table_row_5_0_i7);
MR_def_label(display_report__proc_table_row_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr4 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = ((MR_Integer) MR_tempr4 + (MR_Integer) 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(display_report__proc_to_cell_3_0,
		display_report__proc_table_row_5_0_i7);
MR_def_label(display_report__proc_table_row_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(display_report__proc_table_row_5_0_i9);
	}
	MR_tempr1 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(display_report__proc_table_row_5_0_i26) MR_AND
		MR_LABEL_AP(display_report__proc_table_row_5_0_i27) MR_AND
		MR_LABEL_AP(display_report__proc_table_row_5_0_i84) MR_AND
		MR_LABEL_AP(display_report__proc_table_row_5_0_i40) MR_AND
		MR_LABEL_AP(display_report__proc_table_row_5_0_i97) MR_AND
		MR_LABEL_AP(display_report__proc_table_row_5_0_i59));
	}
MR_def_label(display_report__proc_table_row_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tempr17 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr17, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(0, MR_tempr17, 2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_ctfield(0, MR_tempr17, 3);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_ctfield(0, MR_tempr17, 4);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_ctfield(0, MR_tempr17, 5);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr11, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr13;
	MR_tfield(1, MR_tempr13, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr14;
	MR_tfield(1, MR_tempr14, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr14, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr15, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr15;
	MR_tfield(1, MR_tempr15, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr15, 1) = MR_tempr14;
	MR_tempr16 = MR_sv(3);
	MR_r6 = MR_tempr16;
	MR_sv(3) = MR_tempr15;
	MR_r2 = MR_ctfield(0, MR_tempr16, 1);
	MR_r3 = MR_ctfield(0, MR_tempr16, 2);
	MR_r4 = MR_ctfield(0, MR_tempr16, 3);
	MR_r5 = MR_ctfield(0, MR_tempr16, 4);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(display_report__proc_table_row_5_0_i26) MR_AND
		MR_LABEL_AP(display_report__proc_table_row_5_0_i27) MR_AND
		MR_LABEL_AP(display_report__proc_table_row_5_0_i84) MR_AND
		MR_LABEL_AP(display_report__proc_table_row_5_0_i40) MR_AND
		MR_LABEL_AP(display_report__proc_table_row_5_0_i97) MR_AND
		MR_LABEL_AP(display_report__proc_table_row_5_0_i59));
	}
MR_def_label(display_report__proc_table_row_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(display_report__proc_table_row_5_0_i25);
MR_def_label(display_report__proc_table_row_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tempr13 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr13, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr13, 8);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_ctfield(0, MR_tempr13, 10);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 1) = MR_ctfield(0, MR_tempr13, 12);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_r10 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r10 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(display_report__proc_table_row_5_0_i25);
	}
MR_def_label(display_report__proc_table_row_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18, MR_tempr19;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tempr19 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr19, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr19, 7);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = MR_ctfield(0, MR_tempr19, 8);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_ctfield(0, MR_tempr19, 10);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_r10 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr9;
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr9, 1) = MR_ctfield(0, MR_tempr19, 11);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 1);
	MR_r11 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr11;
	MR_tfield(3, MR_tempr11, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr11, 1) = MR_ctfield(0, MR_tempr19, 12);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 1);
	MR_r12 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr13;
	MR_tfield(1, MR_tempr13, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr13, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 2);
	MR_r12 = MR_tempr14;
	MR_tfield(1, MR_tempr14, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr14, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr15, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr15;
	MR_tfield(1, MR_tempr15, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr15, 1) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr16, 1, (MR_Integer) 2);
	MR_r10 = MR_tempr16;
	MR_tfield(1, MR_tempr16, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr16, 1) = MR_tempr15;
	MR_tag_alloc_heap(MR_tempr17, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr17;
	MR_tfield(1, MR_tempr17, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr17, 1) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr18, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr18;
	MR_tfield(1, MR_tempr18, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr18, 1) = MR_tempr17;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(display_report__proc_table_row_5_0_i25);
	}
MR_def_label(display_report__proc_table_row_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18, MR_tempr19, MR_tempr20, MR_tempr21, MR_tempr22, MR_tempr23, MR_tempr24, MR_tempr25;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tempr25 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr25, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr25, 7);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = MR_ctfield(0, MR_tempr25, 8);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr7, 1) = MR_ctfield(0, MR_tempr25, 9);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_r10 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_ctfield(0, MR_tempr25, 10);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 1);
	MR_r11 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr11;
	MR_tfield(3, MR_tempr11, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr11, 1) = MR_ctfield(0, MR_tempr25, 11);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 1);
	MR_r12 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr13;
	MR_tfield(3, MR_tempr13, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr13, 1) = MR_ctfield(0, MR_tempr25, 12);
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 1);
	MR_r13 = MR_tempr14;
	MR_tfield(1, MR_tempr14, 0) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr15, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr15;
	MR_tfield(3, MR_tempr15, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr15, 1) = MR_ctfield(0, MR_tempr25, 13);
	MR_tag_alloc_heap(MR_tempr16, 1, (MR_Integer) 1);
	MR_r14 = MR_tempr16;
	MR_tfield(1, MR_tempr16, 0) = MR_tempr15;
	MR_tag_alloc_heap(MR_tempr17, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr17;
	MR_tfield(1, MR_tempr17, 0) = MR_tempr16;
	MR_tfield(1, MR_tempr17, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr18, 1, (MR_Integer) 2);
	MR_r14 = MR_tempr18;
	MR_tfield(1, MR_tempr18, 0) = MR_tempr14;
	MR_tfield(1, MR_tempr18, 1) = MR_tempr17;
	MR_tag_alloc_heap(MR_tempr19, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr19;
	MR_tfield(1, MR_tempr19, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr19, 1) = MR_tempr18;
	MR_tag_alloc_heap(MR_tempr20, 1, (MR_Integer) 2);
	MR_r12 = MR_tempr20;
	MR_tfield(1, MR_tempr20, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr20, 1) = MR_tempr19;
	MR_tag_alloc_heap(MR_tempr21, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr21;
	MR_tfield(1, MR_tempr21, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr21, 1) = MR_tempr20;
	MR_tag_alloc_heap(MR_tempr22, 1, (MR_Integer) 2);
	MR_r10 = MR_tempr22;
	MR_tfield(1, MR_tempr22, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr22, 1) = MR_tempr21;
	MR_tag_alloc_heap(MR_tempr23, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr23;
	MR_tfield(1, MR_tempr23, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr23, 1) = MR_tempr22;
	MR_tag_alloc_heap(MR_tempr24, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr24;
	MR_tfield(1, MR_tempr24, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr24, 1) = MR_tempr23;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(display_report__proc_table_row_5_0_i25);
	}
MR_def_label(display_report__proc_table_row_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tempr13 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr13, 7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr13, 8);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr5, 1) = MR_ctfield(0, MR_tempr13, 11);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 1) = MR_ctfield(0, MR_tempr13, 12);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_r10 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r10 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(display_report__proc_table_row_5_0_i25);
	}
MR_def_label(display_report__proc_table_row_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tempr9 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr9, 7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr9, 8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr9, 9);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr9, 11);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr9, 12);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr9, 13);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	}
MR_def_label(display_report__proc_table_row_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(display_report__proc_table_row_5_0_i117);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tempr13 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr13, 14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr13, 15);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_ctfield(0, MR_tempr13, 17);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 1) = MR_ctfield(0, MR_tempr13, 18);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_GOTO_LAB(display_report__proc_table_row_5_0_i116);
	}
MR_def_label(display_report__proc_table_row_5_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(display_report__proc_table_row_5_0_i130);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18, MR_tempr19;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tempr19 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr19, 14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr19, 15);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_ctfield(0, MR_tempr19, 17);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 1) = MR_ctfield(0, MR_tempr19, 18);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 1);
	MR_r5 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = MR_ctfield(0, MR_tempr19, 16);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 1);
	MR_r10 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 0, (MR_Integer) 1);
	MR_r5 = MR_tempr11;
	MR_tfield(0, MR_tempr11, 0) = MR_ctfield(0, MR_tempr19, 19);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 1);
	MR_r11 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr13;
	MR_tfield(1, MR_tempr13, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr13, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 2);
	MR_r11 = MR_tempr14;
	MR_tfield(1, MR_tempr14, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr14, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr15, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr15;
	MR_tfield(1, MR_tempr15, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr15, 1) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr16, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr16;
	MR_tfield(1, MR_tempr16, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr16, 1) = MR_tempr15;
	MR_tag_alloc_heap(MR_tempr17, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr17;
	MR_tfield(1, MR_tempr17, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr17, 1) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr18, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr18;
	MR_tfield(1, MR_tempr18, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr18, 1) = MR_tempr17;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_GOTO_LAB(display_report__proc_table_row_5_0_i116);
	}
MR_def_label(display_report__proc_table_row_5_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
MR_def_label(display_report__proc_table_row_5_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(display_report__proc_table_row_5_0_i150);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tempr13 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr13, 20);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr13, 21);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_ctfield(0, MR_tempr13, 23);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 1) = MR_ctfield(0, MR_tempr13, 24);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_GOTO_LAB(display_report__proc_table_row_5_0_i149);
	}
MR_def_label(display_report__proc_table_row_5_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(display_report__proc_table_row_5_0_i163);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18, MR_tempr19;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tempr19 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr19, 20);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr19, 21);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_ctfield(0, MR_tempr19, 23);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 1) = MR_ctfield(0, MR_tempr19, 24);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = MR_ctfield(0, MR_tempr19, 22);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr11;
	MR_tfield(0, MR_tempr11, 0) = MR_ctfield(0, MR_tempr19, 25);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 1);
	MR_r10 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr13;
	MR_tfield(1, MR_tempr13, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr13, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 2);
	MR_r10 = MR_tempr14;
	MR_tfield(1, MR_tempr14, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr14, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr15, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr15;
	MR_tfield(1, MR_tempr15, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr15, 1) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr16, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr16;
	MR_tfield(1, MR_tempr16, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr16, 1) = MR_tempr15;
	MR_tag_alloc_heap(MR_tempr17, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr17;
	MR_tfield(1, MR_tempr17, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr17, 1) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr18, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr18;
	MR_tfield(1, MR_tempr18, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr18, 1) = MR_tempr17;
	MR_GOTO_LAB(display_report__proc_table_row_5_0_i149);
	}
MR_def_label(display_report__proc_table_row_5_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(display_report__proc_table_row_5_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(display_report__proc_table_row_5_0_i183);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(display_report__proc_table_row_5_0_i196);
	}
	MR_sv(2) = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__proc_table_row_5_0_i218);
MR_def_label(display_report__proc_table_row_5_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr9 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr9, 27);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(2, MR_r3, 0);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr9, 29);
	MR_tfield(3, MR_tempr3, 2) = MR_ctfield(3, MR_tempr1, 2);
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 1) = MR_ctfield(0, MR_tempr9, 30);
	MR_tfield(3, MR_tempr5, 2) = MR_ctfield(3, MR_tempr1, 2);
	MR_tfield(3, MR_tempr5, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr7, 1) = MR_ctfield(0, MR_tempr9, 32);
	MR_tfield(3, MR_tempr7, 2) = MR_ctfield(3, MR_tempr1, 2);
	MR_tfield(3, MR_tempr7, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr9, 28);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr9, 31);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__proc_table_row_5_0_i218);
MR_def_label(display_report__proc_table_row_5_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr7 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr7, 27);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(1, MR_r3, 0);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr7, 30);
	MR_tfield(3, MR_tempr3, 2) = MR_ctfield(3, MR_tempr1, 2);
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr7, 28);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr7, 31);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__proc_table_row_5_0_i218);
MR_def_label(display_report__proc_table_row_5_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__proc_table_row_5_0_i219);
MR_def_label(display_report__proc_table_row_5_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__proc_table_row_5_0_i220);
MR_def_label(display_report__proc_table_row_5_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__proc_table_row_5_0_i221);
MR_def_label(display_report__proc_table_row_5_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__cons_2_0,
		display_report__proc_table_row_5_0_i222);
MR_def_label(display_report__proc_table_row_5_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(display, table_cell);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		display_report__proc_table_row_5_0_i223);
MR_def_label(display_report__proc_table_row_5_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module25)
	MR_init_entry1(display_report__make_sort_control_4_0);
	MR_init_label6(display_report__make_sort_control_4_0,3,8,13,18,23,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__make_sort_control_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(display_report__make_sort_control_4_0_i8) MR_AND
		MR_LABEL_AP(display_report__make_sort_control_4_0_i18) MR_AND
		MR_LABEL_AP(display_report__make_sort_control_4_0_i23) MR_AND
		MR_LABEL_AP(display_report__make_sort_control_4_0_i13) MR_AND
		MR_LABEL_AP(display_report__make_sort_control_4_0_i3) MR_AND
		MR_LABEL_AP(display_report__make_sort_control_4_0_i28));
MR_def_label(display_report__make_sort_control_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(3, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Sort by allocations", 19);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
MR_def_label(display_report__make_sort_control_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(3, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Sort by calls", 13);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
MR_def_label(display_report__make_sort_control_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(3, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Sort by call sequence numbers", 29);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
MR_def_label(display_report__make_sort_control_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(3, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Sort by redos", 13);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
MR_def_label(display_report__make_sort_control_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(3, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Sort by time", 12);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
MR_def_label(display_report__make_sort_control_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(3, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("Sort by words", 13);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module26)
	MR_init_entry1(display_report__link_to_display_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__link_to_display_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module27)
	MR_init_entry1(display_report__make_time_control_4_0);
	MR_init_label6(display_report__make_time_control_4_0,5,9,13,17,21,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__make_time_control_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr5 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 9);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_ctfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_ctfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_ctfield(0, MR_tempr4, 7);
	MR_tfield(0, MR_tempr3, 8) = MR_ctfield(0, MR_tempr4, 8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tempr5,
		MR_LABEL_AP(display_report__make_time_control_4_0_i5) MR_AND
		MR_LABEL_AP(display_report__make_time_control_4_0_i9) MR_AND
		MR_LABEL_AP(display_report__make_time_control_4_0_i21) MR_AND
		MR_LABEL_AP(display_report__make_time_control_4_0_i13) MR_AND
		MR_LABEL_AP(display_report__make_time_control_4_0_i25) MR_AND
		MR_LABEL_AP(display_report__make_time_control_4_0_i17));
	}
MR_def_label(display_report__make_time_control_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("No time info", 12);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(display_report__make_time_control_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("Ticks", 5);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(display_report__make_time_control_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("Ticks and times", 15);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(display_report__make_time_control_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("Ticks and times and per-call times", 34);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(display_report__make_time_control_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("Times", 5);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(display_report__make_time_control_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("Times and per-call times", 24);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module28)
	MR_init_entry1(display_report__make_callseqs_control_4_0);
	MR_init_label2(display_report__make_callseqs_control_4_0,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__make_callseqs_control_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr6 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 0);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr7 = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr7;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 9);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_ctfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_ctfield(0, MR_tempr6, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_ctfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_ctfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr3, 8) = MR_ctfield(0, MR_tempr6, 8);
	if (MR_INT_NE(MR_tempr7,1)) {
		MR_GOTO_LAB(display_report__make_callseqs_control_4_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr5, 0) = MR_r1;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 2) = (MR_Word) MR_string_const("Call sequence numbers", 21);
	MR_tfield(0, MR_tempr5, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr5;
	MR_proceed();
	}
MR_def_label(display_report__make_callseqs_control_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(display_report__make_callseqs_control_4_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("Call sequence numbers including per-call", 40);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(display_report__make_callseqs_control_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("No call sequence number info", 28);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module29)
	MR_init_entry1(display_report__make_alloc_control_4_0);
	MR_init_label2(display_report__make_alloc_control_4_0,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__make_alloc_control_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr6 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 0);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr7 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr7;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 9);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_ctfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_ctfield(0, MR_tempr6, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_ctfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_ctfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr3, 8) = MR_ctfield(0, MR_tempr6, 8);
	if (MR_INT_NE(MR_tempr7,1)) {
		MR_GOTO_LAB(display_report__make_alloc_control_4_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr5, 0) = MR_r1;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 2) = (MR_Word) MR_string_const("Allocations", 11);
	MR_tfield(0, MR_tempr5, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr5;
	MR_proceed();
	}
MR_def_label(display_report__make_alloc_control_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(display_report__make_alloc_control_4_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("Allocations and per-call allocations", 36);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(display_report__make_alloc_control_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("No allocations", 14);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module30)
	MR_init_entry1(display_report__make_memory_control_4_0);
	MR_init_label1(display_report__make_memory_control_4_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__make_memory_control_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr4 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr5 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 9);
	MR_sv(2) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_ctfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_ctfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_ctfield(0, MR_tempr4, 7);
	MR_tfield(0, MR_tempr3, 8) = MR_ctfield(0, MR_tempr4, 8);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(display_report__memory_label_2_0,
		display_report__make_memory_control_4_0_i4);
MR_def_label(display_report__make_memory_control_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module31)
	MR_init_entry1(display_report__memory_label_2_0);
	MR_init_label4(display_report__memory_label_2_0,6,8,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__memory_label_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(display_report__memory_label_2_0_i3);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(display_report__memory_label_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("No memory info", 14);
	MR_proceed();
	}
MR_def_label(display_report__memory_label_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(display_report__memory_label_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("Bytes and per-call bytes", 24);
	MR_proceed();
	}
MR_def_label(display_report__memory_label_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Words and per-call words", 24);
	MR_proceed();
MR_def_label(display_report__memory_label_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(display_report__memory_label_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("Bytes", 5);
	MR_proceed();
	}
MR_def_label(display_report__memory_label_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Words", 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(display_report_module32)
	MR_init_entry1(display_report__not_unify_2_0);
	MR_init_label2(display_report__not_unify_2_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__not_unify_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(builtin__unify_2_0,
		display_report__not_unify_2_0_i4);
MR_def_label(display_report__not_unify_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(display_report__not_unify_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(display_report__not_unify_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module33)
	MR_init_entry1(__Unify___display_report__ranked_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___display_report__ranked_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(display_report_module34)
	MR_init_entry1(__Compare___display_report__ranked_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___display_report__ranked_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___query__preferences_0_0);
MR_decl_entry(__Unify___report__report_ordering_0_0);

MR_BEGIN_MODULE(display_report_module35)
	MR_init_entry1(__Unify___display_report__table_info_0_0);
	MR_init_label3(__Unify___display_report__table_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___display_report__table_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___display_report__table_info_0_0_i8);
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
		MR_GOTO_LAB(__Unify___display_report__table_info_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___display_report__table_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 3);
	MR_r1 = MR_ctfield(0, MR_tempr3, 2);
	MR_r2 = MR_ctfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___query__preferences_0_0,
		__Unify___display_report__table_info_0_0_i4);
MR_def_label(__Unify___display_report__table_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___display_report__table_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___report__report_ordering_0_0);
MR_def_label(__Unify___display_report__table_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___display_report__table_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___query__preferences_0_0);
MR_decl_entry(__Compare___report__report_ordering_0_0);

MR_BEGIN_MODULE(display_report_module36)
	MR_init_entry1(__Compare___display_report__table_info_0_0);
	MR_init_label6(__Compare___display_report__table_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___display_report__table_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___display_report__table_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___display_report__table_info_0_0_i2);
MR_def_label(__Compare___display_report__table_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___display_report__table_info_0_0,2)
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
		__Compare___display_report__table_info_0_0_i5);
MR_def_label(__Compare___display_report__table_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display_report__table_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___display_report__table_info_0_0_i9);
MR_def_label(__Compare___display_report__table_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display_report__table_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___query__preferences_0_0,
		__Compare___display_report__table_info_0_0_i13);
MR_def_label(__Compare___display_report__table_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___display_report__table_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___report__report_ordering_0_0);
MR_def_label(__Compare___display_report__table_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module37)
	MR_init_entry1(display_report__IntroducedFrom__pred__sort_controls__775__1_2_0);
	MR_init_label2(display_report__IntroducedFrom__pred__sort_controls__775__1_2_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__IntroducedFrom__pred__sort_controls__775__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, cost_kind);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		display_report__IntroducedFrom__pred__sort_controls__775__1_2_0_i3);
MR_def_label(display_report__IntroducedFrom__pred__sort_controls__775__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(display_report__IntroducedFrom__pred__sort_controls__775__1_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(display_report__IntroducedFrom__pred__sort_controls__775__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module38)
	MR_init_entry1(display_report__IntroducedFrom__pred__field_controls__913__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__IntroducedFrom__pred__field_controls__913__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, time_fields);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(display_report__not_unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module39)
	MR_init_entry1(display_report__IntroducedFrom__pred__field_controls__918__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__IntroducedFrom__pred__field_controls__918__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, callseqs_fields);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(display_report__not_unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module40)
	MR_init_entry1(display_report__IntroducedFrom__pred__field_controls__925__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__IntroducedFrom__pred__field_controls__925__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, alloc_fields);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(display_report__not_unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(display_report_module41)
	MR_init_entry1(display_report__IntroducedFrom__pred__field_controls__931__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(display_report__IntroducedFrom__pred__field_controls__931__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, memory_fields);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(display_report__not_unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__display_report_maybe_bunch_0(void)
{
	display_report_module0();
	display_report_module1();
	display_report_module2();
	display_report_module3();
	display_report_module4();
	display_report_module5();
	display_report_module6();
	display_report_module7();
	display_report_module8();
	display_report_module9();
	display_report_module10();
	display_report_module11();
	display_report_module12();
	display_report_module13();
	display_report_module14();
	display_report_module15();
	display_report_module16();
	display_report_module17();
	display_report_module18();
	display_report_module19();
	display_report_module20();
	display_report_module21();
	display_report_module22();
	display_report_module23();
	display_report_module24();
	display_report_module25();
	display_report_module26();
	display_report_module27();
	display_report_module28();
	display_report_module29();
	display_report_module30();
	display_report_module31();
	display_report_module32();
	display_report_module33();
	display_report_module34();
	display_report_module35();
	display_report_module36();
	display_report_module37();
	display_report_module38();
	display_report_module39();
}

static void mercury__display_report_maybe_bunch_1(void)
{
	display_report_module40();
	display_report_module41();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__display_report__init(void);
void mercury__display_report__init_type_tables(void);
void mercury__display_report__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__display_report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__display_report__init_complexity_procs(void);
#endif

void mercury__display_report__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__display_report_maybe_bunch_0();
	mercury__display_report_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display_report__type_ctor_info_table_info_0,
		display_report__table_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_display_report__type_ctor_info_ranked_0,
		display_report__ranked_0_0);
	mercury__display_report__init_debugger();
}

void mercury__display_report__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_display_report__type_ctor_info_table_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_display_report__type_ctor_info_ranked_0);
	}
}


void mercury__display_report__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__display_report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__display_report);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__display_report__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
