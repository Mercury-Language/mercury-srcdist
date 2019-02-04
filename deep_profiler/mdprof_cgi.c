/*
** Automatically generated from `mdprof_cgi.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__mdprof_cgi__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mdprof_cgi.c"
#include "mdprof_cgi.mh"

#line 27 "mdprof_cgi.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 31 "mdprof_cgi.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 35 "mdprof_cgi.c"
#line 268 "profile.int"
#include "profile.mh"

#line 39 "mdprof_cgi.c"
#line 226 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 43 "mdprof_cgi.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "mdprof_cgi.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "mdprof_cgi.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 55 "mdprof_cgi.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 59 "mdprof_cgi.c"
#line 60 "mdprof_cgi.c"
#ifndef MDPROF_CGI_DECL_GUARD
#define MDPROF_CGI_DECL_GUARD

#line 64 "mdprof_cgi.c"
#line 699 "mdprof_cgi.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
  #include <sys/types.h>
  #include <sys/stat.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include <unistd.h>
#endif

#line 75 "mdprof_cgi.c"
#line 76 "mdprof_cgi.c"

#endif
#line 79 "mdprof_cgi.c"

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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1[64];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_String f2[6];
	MR_Integer f3[7];
	MR_String f4;
	MR_Integer f5[6];
	MR_String f6;
	MR_Integer f7;
	MR_String f8;
	MR_Integer f9[4];
	MR_String f10[2];
	MR_Integer f11;
	MR_String f12;
	MR_Integer f13;
	MR_String f14[2];
	MR_Integer f15[7];
	MR_String f16[2];
	MR_Integer f17;
	MR_String f18;
	MR_Integer f19[2];
	MR_String f20;
	MR_Integer f21[3];
	MR_String f22;
	MR_Integer f23[5];
	MR_String f24;
	MR_Integer f25[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_vector_common_8_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_cgi__type_ctor_info_child_has_parent_0,
	mercury_data_mdprof_cgi__type_ctor_info_cmd_pref_0,
	mercury_data_mdprof_cgi__type_ctor_info_detach_process_result_0,
	mercury_data_mdprof_cgi__type_ctor_info_option_0,
	mercury_data_mdprof_cgi__type_ctor_info_option_table_0;
MR_decl_label8(mdprof_cgi__decode_input_lines_5_0, 86,2,11,12,13,15,17,19)
MR_decl_label8(mdprof_cgi__decode_input_lines_5_0, 20,21,22,23,24,26,27,10)
MR_decl_label8(mdprof_cgi__decode_input_lines_5_0, 30,31,34,35,33,37,38,28)
MR_decl_label8(mdprof_cgi__decode_input_lines_5_0, 41,42,45,46,47,44,48,49)
MR_decl_label5(mdprof_cgi__decode_input_lines_5_0, 88,5,6,89,90)
MR_decl_label3(mdprof_cgi__defaults_2_0, 22,23,24)
MR_decl_label8(mdprof_cgi__handle_query_from_existing_server_9_0, 2,4,5,6,7,8,9,10)
MR_decl_label8(mdprof_cgi__handle_query_from_new_server_11_0, 2,5,4,6,7,8,9,10)
MR_decl_label8(mdprof_cgi__handle_query_from_new_server_11_0, 12,13,17,15,11,19,22,23)
MR_decl_label8(mdprof_cgi__handle_query_from_new_server_11_0, 24,25,21,27,28,30,31,32)
MR_decl_label8(mdprof_cgi__handle_query_from_new_server_11_0, 33,34,29,37,38,36,40,43)
MR_decl_label5(mdprof_cgi__handle_query_from_new_server_11_0, 44,45,42,47,48)
MR_decl_label8(mdprof_cgi__long_2_0, 3,27,5,6,7,8,9,10)
MR_decl_label8(mdprof_cgi__long_2_0, 11,12,13,14,15,16,17,18)
MR_decl_label7(mdprof_cgi__long_2_0, 19,20,21,22,23,24,25)
MR_decl_label8(main_2_0, 2,3,4,6,12,14,13,16)
MR_decl_label4(main_2_0, 19,18,23,22)
MR_decl_label8(mdprof_cgi__make_pipes_4_0, 2,3,4,5,6,7,13,14)
MR_decl_label3(mdprof_cgi__make_pipes_4_0, 8,15,16)
MR_decl_label8(mdprof_cgi__process_args_5_0, 5,6,7,8,9,10,11,14)
MR_decl_label8(mdprof_cgi__process_args_5_0, 16,18,20,22,2,31,32,33)
MR_decl_label3(mdprof_cgi__process_args_5_0, 34,35,36)
MR_decl_label8(mdprof_cgi__process_command_line_2_0, 2,3,8,11,12,13,14,10)
MR_decl_label8(mdprof_cgi__process_command_line_2_0, 16,17,18,19,20,22,23,24)
MR_decl_label8(mdprof_cgi__process_command_line_2_0, 25,26,27,28,21,31,32,33)
MR_decl_label8(mdprof_cgi__process_command_line_2_0, 34,35,36,29,37,41,42,9)
MR_decl_label8(mdprof_cgi__process_query_6_0, 2,4,6,5,9,12,8,13)
MR_decl_label8(mdprof_cgi__process_query_6_0, 15,17,18,19,20,21,22,23)
MR_decl_label8(mdprof_cgi__process_query_6_0, 24,27,28,26,30,33,36,37)
MR_decl_label6(mdprof_cgi__process_query_6_0, 38,14,42,43,44,45)
MR_decl_label8(mdprof_cgi__server_loop_10_0, 104,2,3,8,11,10,12,13)
MR_decl_label8(mdprof_cgi__server_loop_10_0, 6,14,15,16,17,18,20,19)
MR_decl_label8(mdprof_cgi__server_loop_10_0, 22,23,5,25,26,27,28,29)
MR_decl_label8(mdprof_cgi__server_loop_10_0, 30,31,34,37,36,38,39,32)
MR_decl_label8(mdprof_cgi__server_loop_10_0, 40,41,42,43,44,46,45,48)
MR_decl_label8(mdprof_cgi__server_loop_10_0, 49,50,51,52,53,54,55,56)
MR_decl_label3(mdprof_cgi__server_loop_10_0, 4,58,61)
MR_decl_label8(mdprof_cgi__short_2_0, 3,4,5,6,7,8,9,10)
MR_decl_label2(mdprof_cgi__short_2_0, 11,1)
MR_decl_label8(mdprof_cgi__start_server_9_0, 2,3,4,7,8,10,9,6)
MR_decl_label8(mdprof_cgi__start_server_9_0, 15,14,18,17,20,21,22,23)
MR_decl_label8(mdprof_cgi__start_server_9_0, 24,25,26,27,28,29,30,31)
MR_decl_label4(mdprof_cgi__start_server_9_0, 33,32,34,35)
MR_decl_label3(__Unify___mdprof_cgi__cmd_pref_0_0, 4,8,1)
MR_decl_label3(__Unify___mdprof_cgi__detach_process_result_0_0, 6,11,1)
MR_decl_label4(__Compare___mdprof_cgi__cmd_pref_0_0, 3,2,5,21)
MR_decl_label6(__Compare___mdprof_cgi__detach_process_result_0_0, 34,5,44,12,38,15)
MR_decl_static(mdprof_cgi__decode_input_lines_5_0)
MR_decl_static(mdprof_cgi__handle_query_from_existing_server_9_0)
MR_decl_static(mdprof_cgi__server_loop_10_0)
MR_decl_static(mdprof_cgi__raw_detach_process_3_0)
MR_decl_static(mdprof_cgi__start_server_9_0)
MR_decl_static(mdprof_cgi__make_pipes_4_0)
MR_decl_static(mdprof_cgi__handle_query_from_new_server_11_0)
MR_decl_static(mdprof_cgi__check_for_existing_fifos_5_0)
MR_decl_static(mdprof_cgi__process_query_6_0)
MR_decl_static(mdprof_cgi__process_args_5_0)
MR_decl_static(mdprof_cgi__process_command_line_2_0)
MR_def_extern_entry(main_2_0)
MR_decl_static(mdprof_cgi__short_2_0)
MR_decl_static(mdprof_cgi__long_2_0)
MR_decl_static(mdprof_cgi__defaults_2_0)
MR_decl_static(__Unify___mdprof_cgi__child_has_parent_0_0)
MR_decl_static(__Compare___mdprof_cgi__child_has_parent_0_0)
MR_decl_static(__Unify___mdprof_cgi__cmd_pref_0_0)
MR_decl_static(__Compare___mdprof_cgi__cmd_pref_0_0)
MR_decl_static(__Unify___mdprof_cgi__detach_process_result_0_0)
MR_decl_static(__Compare___mdprof_cgi__detach_process_result_0_0)
MR_decl_static(__Unify___mdprof_cgi__option_0_0)
MR_decl_static(__Compare___mdprof_cgi__option_0_0)
MR_decl_static(__Unify___mdprof_cgi__option_table_0_0)
MR_decl_static(__Compare___mdprof_cgi__option_table_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(query, cmd)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(query, preferences)
}
},
};

static const struct mercury_type_1 mercury_common_1[3] =
{
{
1
},
{
0
},
{
30
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_cgi__process_command_line_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_cgi__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_cgi__process_command_line_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_cgi__process_command_line_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
static const struct mercury_type_3 mercury_common_3[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_cgi__process_command_line_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_cgi, option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdprof_cgi__process_command_line_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_cgi, option)
},
{
(MR_Word *) &mercury_data__closure_layout__mdprof_cgi__process_command_line_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdprof_cgi, option),
MR_CTOR0_ADDR(getopt, option_data)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_cgi, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_cgi, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdprof_cgi, option),
MR_CTOR0_ADDR(getopt, option_data)
},
};

static const struct mercury_type_4 mercury_common_4[6] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(mdprof_cgi__short_2_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(mdprof_cgi__long_2_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(mdprof_cgi__defaults_2_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(mdprof_cgi__short_2_0),
0
},
{
MR_COMMON(3,4),
MR_ENTRY_AP(mdprof_cgi__long_2_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(mdprof_cgi__defaults_2_0),
0
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
MR_TAG_COMMON(0,4,0),
MR_TAG_COMMON(0,4,1),
MR_TAG_COMMON(0,4,2)
}
},
{
{
MR_TAG_COMMON(0,4,3),
MR_TAG_COMMON(0,4,4),
MR_TAG_COMMON(0,4,5)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
-2,
-1,
-1,
-1,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
1,
-2,
-2,
-2,
-2,
-1,
2,
-2,
-1,
-2,
3,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
5,
-1,
-2,
-1,
-2,
-2,
6,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
0,
{
MR_string_const("detach-process", 14),
MR_string_const("quit", 4),
MR_string_const("clique", 6),
MR_string_const("localhost", 9),
MR_string_const("decode", 6),
MR_string_const("canonical-clique", 16)
},
{
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("modules", 7),
{
0,
0,
0,
0,
0,
0
},
MR_string_const("help", 4),
0,
MR_string_const("record-loop", 11),
{
0,
0,
0,
0
},
{
MR_string_const("timeout", 7),
MR_string_const("version", 7)
},
0,
MR_string_const("decode-prefs", 12),
0,
{
MR_string_const("decode-cmd", 10),
MR_string_const("root", 4)
},
{
0,
0,
0,
0,
0,
0,
0
},
{
MR_string_const("proc", 4),
MR_string_const("record-startup", 14)
},
0,
MR_string_const("server-process", 14),
{
0,
0
},
MR_string_const("write-query-string", 18),
{
0,
0,
0
},
MR_string_const("debug", 5),
{
0,
0,
0,
0,
0
},
MR_string_const("procrep-coverage", 16),
{
0,
0,
0,
0,
0
}
},
};

static const struct mercury_type_8 mercury_vector_common_8_0[20] =
{
{
0,
MR_TAG_COMMON(1,1,1)
},
{
1,
MR_TAG_COMMON(2,1,1)
},
{
2,
MR_TAG_COMMON(1,1,1)
},
{
3,
MR_TAG_COMMON(1,1,1)
},
{
4,
MR_TAG_COMMON(1,1,1)
},
{
5,
MR_TAG_COMMON(1,1,1)
},
{
6,
MR_TAG_COMMON(1,1,0)
},
{
7,
MR_TAG_COMMON(1,1,1)
},
{
8,
MR_TAG_COMMON(1,1,1)
},
{
9,
MR_TAG_COMMON(1,1,1)
},
{
10,
MR_TAG_COMMON(2,1,1)
},
{
11,
MR_TAG_COMMON(2,1,1)
},
{
12,
MR_TAG_COMMON(1,1,1)
},
{
13,
MR_TAG_COMMON(1,1,1)
},
{
15,
MR_TAG_COMMON(1,1,0)
},
{
14,
MR_TAG_COMMON(1,1,0)
},
{
16,
MR_TAG_COMMON(1,1,0)
},
{
17,
MR_TAG_COMMON(2,1,2)
},
{
18,
MR_TAG_COMMON(1,1,1)
},
{
19,
MR_TAG_COMMON(1,1,0)
},
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_child_has_parent_0_0 = {
	"child_has_parent",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_child_has_parent_0_1 = {
	"child_has_no_parent",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_cgi__enum_value_ordered_child_has_parent_0[] = {
	&mercury_data_mdprof_cgi__enum_functor_desc_child_has_parent_0_0,
	&mercury_data_mdprof_cgi__enum_functor_desc_child_has_parent_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_cgi__enum_name_ordered_child_has_parent_0[] = {
	&mercury_data_mdprof_cgi__enum_functor_desc_child_has_parent_0_1,
	&mercury_data_mdprof_cgi__enum_functor_desc_child_has_parent_0_0
};

const MR_Integer mercury_data_mdprof_cgi__functor_number_map_child_has_parent_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_cgi__type_ctor_info_child_has_parent_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_cgi__child_has_parent_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_cgi__child_has_parent_0_0)),
	"mdprof_cgi",
	"child_has_parent",
	{ (void *)mercury_data_mdprof_cgi__enum_name_ordered_child_has_parent_0 },
	{ (void *)mercury_data_mdprof_cgi__enum_value_ordered_child_has_parent_0 },
	2,
	4,
	mercury_data_mdprof_cgi__functor_number_map_child_has_parent_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_indication_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_preferences_indication_0;

const MR_PseudoTypeInfo mercury_data_mdprof_cgi__field_types_cmd_pref_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_cmd_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_preferences_indication_0
};

static const MR_DuFunctorDesc mercury_data_mdprof_cgi__du_functor_desc_cmd_pref_0_0 = {
	"cmd_pref",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_cgi__field_types_cmd_pref_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_cgi__du_stag_ordered_cmd_pref_0_0[] = {
	&mercury_data_mdprof_cgi__du_functor_desc_cmd_pref_0_0

};

const MR_DuPtagLayout mercury_data_mdprof_cgi__du_ptag_ordered_cmd_pref_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_cgi__du_stag_ordered_cmd_pref_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_cgi__du_name_ordered_cmd_pref_0[] = {
	&mercury_data_mdprof_cgi__du_functor_desc_cmd_pref_0_0
};

const MR_Integer mercury_data_mdprof_cgi__functor_number_map_cmd_pref_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_cgi__type_ctor_info_cmd_pref_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_cgi__cmd_pref_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_cgi__cmd_pref_0_0)),
	"mdprof_cgi",
	"cmd_pref",
	{ (void *)mercury_data_mdprof_cgi__du_name_ordered_cmd_pref_0 },
	{ (void *)mercury_data_mdprof_cgi__du_ptag_ordered_cmd_pref_0 },
	1,
	4,
	mercury_data_mdprof_cgi__functor_number_map_cmd_pref_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_cgi__type_ctor_info_child_has_parent_0;

const MR_PseudoTypeInfo mercury_data_mdprof_cgi__field_types_detach_process_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdprof_cgi__type_ctor_info_child_has_parent_0
};

static const MR_DuFunctorDesc mercury_data_mdprof_cgi__du_functor_desc_detach_process_result_0_0 = {
	"in_child",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_cgi__field_types_detach_process_result_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdprof_cgi__du_functor_desc_detach_process_result_0_1 = {
	"in_parent",
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

static const MR_DuFunctorDesc mercury_data_mdprof_cgi__du_functor_desc_detach_process_result_0_2 = {
	"fork_failed",
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

const MR_DuFunctorDescPtr mercury_data_mdprof_cgi__du_stag_ordered_detach_process_result_0_0[] = {
	&mercury_data_mdprof_cgi__du_functor_desc_detach_process_result_0_1,
	&mercury_data_mdprof_cgi__du_functor_desc_detach_process_result_0_2

};

const MR_DuFunctorDescPtr mercury_data_mdprof_cgi__du_stag_ordered_detach_process_result_0_1[] = {
	&mercury_data_mdprof_cgi__du_functor_desc_detach_process_result_0_0

};

const MR_DuPtagLayout mercury_data_mdprof_cgi__du_ptag_ordered_detach_process_result_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_mdprof_cgi__du_stag_ordered_detach_process_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_cgi__du_stag_ordered_detach_process_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_cgi__du_name_ordered_detach_process_result_0[] = {
	&mercury_data_mdprof_cgi__du_functor_desc_detach_process_result_0_2,
	&mercury_data_mdprof_cgi__du_functor_desc_detach_process_result_0_0,
	&mercury_data_mdprof_cgi__du_functor_desc_detach_process_result_0_1
};

const MR_Integer mercury_data_mdprof_cgi__functor_number_map_detach_process_result_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_cgi__type_ctor_info_detach_process_result_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_cgi__detach_process_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_cgi__detach_process_result_0_0)),
	"mdprof_cgi",
	"detach_process_result",
	{ (void *)mercury_data_mdprof_cgi__du_name_ordered_detach_process_result_0 },
	{ (void *)mercury_data_mdprof_cgi__du_ptag_ordered_detach_process_result_0 },
	3,
	4,
	mercury_data_mdprof_cgi__functor_number_map_detach_process_result_0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_0 = {
	"canonical_clique",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_1 = {
	"clique",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_2 = {
	"debug",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_3 = {
	"decode",
	3
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_4 = {
	"decode_cmd",
	4
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_5 = {
	"decode_prefs",
	5
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_6 = {
	"detach_process",
	6
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_7 = {
	"help",
	7
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_8 = {
	"localhost",
	8
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_9 = {
	"modules",
	9
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_10 = {
	"proc",
	10
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_11 = {
	"procrep_coverage",
	11
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_12 = {
	"quit",
	12
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_13 = {
	"root",
	13
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_14 = {
	"record_startup",
	14
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_15 = {
	"record_loop",
	15
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_16 = {
	"server_process",
	16
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_17 = {
	"timeout",
	17
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_18 = {
	"version",
	18
};

static const MR_EnumFunctorDesc mercury_data_mdprof_cgi__enum_functor_desc_option_0_19 = {
	"write_query_string",
	19
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_cgi__enum_value_ordered_option_0[] = {
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_3,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_7,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_8,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_9,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_10,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_11,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_12,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_13,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_14,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_15,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_16,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_17,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_18,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_19
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_cgi__enum_name_ordered_option_0[] = {
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_3,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_7,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_8,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_9,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_10,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_11,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_12,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_15,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_14,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_13,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_16,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_17,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_18,
	&mercury_data_mdprof_cgi__enum_functor_desc_option_0_19
};

const MR_Integer mercury_data_mdprof_cgi__functor_number_map_option_0[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	15,
	14,
	13,
	16,
	17,
	18,
	19 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_cgi__type_ctor_info_option_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_cgi__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_cgi__option_0_0)),
	"mdprof_cgi",
	"option",
	{ (void *)mercury_data_mdprof_cgi__enum_name_ordered_option_0 },
	{ (void *)mercury_data_mdprof_cgi__enum_value_ordered_option_0 },
	20,
	4,
	mercury_data_mdprof_cgi__functor_number_map_option_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_cgi__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdprof_cgi__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdprof_cgi__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdprof_cgi__type_ctor_info_option_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_cgi__option_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_cgi__option_table_0_0)),
	"mdprof_cgi",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdprof_cgi__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_cgi__process_command_line_2_0_1 = {
{
MR_PREDICATE,
"mdprof_cgi",
"mdprof_cgi",
"short",
2,
0
},
"mdprof_cgi",
"mdprof_cgi.m",
104,
"c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_cgi__process_command_line_2_0_2 = {
{
MR_PREDICATE,
"mdprof_cgi",
"mdprof_cgi",
"long",
2,
0
},
"mdprof_cgi",
"mdprof_cgi.m",
104,
"c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_cgi__process_command_line_2_0_3 = {
{
MR_PREDICATE,
"mdprof_cgi",
"mdprof_cgi",
"defaults",
2,
0
},
"mdprof_cgi",
"mdprof_cgi.m",
104,
"c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"mdprof_cgi",
"mdprof_cgi",
"short",
2,
0
},
"mdprof_cgi",
"mdprof_cgi.m",
67,
"d1;c6;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"mdprof_cgi",
"mdprof_cgi",
"long",
2,
0
},
"mdprof_cgi",
"mdprof_cgi.m",
67,
"d1;c6;d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"mdprof_cgi",
"mdprof_cgi",
"defaults",
2,
0
},
"mdprof_cgi",
"mdprof_cgi.m",
67,
"d1;c6;d1;c5;"
};

MR_decl_entry(io__read_line_as_string_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__query__string_to_maybe_query_1_0);
MR_decl_entry(io__write_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__query__string_to_maybe_cmd_1_0);
MR_decl_entry(fn__query__string_to_maybe_pref_1_0);
MR_decl_entry(io__error_message_2_0);

MR_BEGIN_MODULE(mdprof_cgi_module0)
	MR_init_entry1(mdprof_cgi__decode_input_lines_5_0);
	MR_init_label8(mdprof_cgi__decode_input_lines_5_0,86,2,11,12,13,15,17,19)
	MR_init_label8(mdprof_cgi__decode_input_lines_5_0,20,21,22,23,24,26,27,10)
	MR_init_label8(mdprof_cgi__decode_input_lines_5_0,30,31,34,35,33,37,38,28)
	MR_init_label8(mdprof_cgi__decode_input_lines_5_0,41,42,45,46,47,44,48,49)
	MR_init_label5(mdprof_cgi__decode_input_lines_5_0,88,5,6,89,90)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'decode_input_lines'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__decode_input_lines_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(mdprof_cgi__decode_input_lines_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		mdprof_cgi__decode_input_lines_5_0_i2);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	MR_r3 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i5);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i90);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i11);
	}
	MR_r5 = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(4) = MR_ctfield(1, MR_r5, 0);
	MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i10);
	}
MR_def_label(mdprof_cgi__decode_input_lines_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("considering as query string:\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__decode_input_lines_5_0_i12);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__query__string_to_maybe_query_1_0,
		mdprof_cgi__decode_input_lines_5_0_i13);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("invalid query string: cannot split into components\n", 51);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__decode_input_lines_5_0_i27);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("Maybe Command:\n", 15);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__decode_input_lines_5_0_i17);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_3_0,
		mdprof_cgi__decode_input_lines_5_0_i19);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdprof_cgi__decode_input_lines_5_0_i20);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__decode_input_lines_5_0_i21);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Deep File Name: ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__decode_input_lines_5_0_i22);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__decode_input_lines_5_0_i23);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Maybe Preferences:\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__decode_input_lines_5_0_i24);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(io__write_3_0,
		mdprof_cgi__decode_input_lines_5_0_i26);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdprof_cgi__decode_input_lines_5_0_i27);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("considering as cmd string:\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__decode_input_lines_5_0_i30);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__query__string_to_maybe_cmd_1_0,
		mdprof_cgi__decode_input_lines_5_0_i31);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i33);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__decode_input_lines_5_0_i34);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("invalid command string ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__decode_input_lines_5_0_i35);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__decode_input_lines_5_0_i38);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, cmd);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_3_0,
		mdprof_cgi__decode_input_lines_5_0_i37);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdprof_cgi__decode_input_lines_5_0_i38);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i88);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("considering as preference string:\n", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__decode_input_lines_5_0_i41);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__query__string_to_maybe_pref_1_0,
		mdprof_cgi__decode_input_lines_5_0_i42);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i44);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__decode_input_lines_5_0_i45);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("invalid preferences string ", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__decode_input_lines_5_0_i46);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__decode_input_lines_5_0_i47);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i86);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, preferences);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_3_0,
		mdprof_cgi__decode_input_lines_5_0_i48);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdprof_cgi__decode_input_lines_5_0_i49);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(mdprof_cgi__decode_input_lines_5_0_i86);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		mdprof_cgi__decode_input_lines_5_0_i6);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__decode_input_lines_5_0_i89);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_cgi__decode_input_lines_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt__lookup_bool_option_3_0);
MR_decl_entry(interface__send_term_5_0);
MR_decl_entry(timeout__release_lock_4_0);
MR_decl_entry(timeout__remove_want_file_3_0);
MR_decl_entry(interface__recv_string_5_0);
MR_decl_entry(io__call_system_4_0);
MR_decl_entry(io__remove_file_4_0);

MR_BEGIN_MODULE(mdprof_cgi_module1)
	MR_init_entry1(mdprof_cgi__handle_query_from_existing_server_9_0);
	MR_init_label8(mdprof_cgi__handle_query_from_existing_server_9_0,2,4,5,6,7,8,9,10)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'handle_query_from_existing_server'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__handle_query_from_existing_server_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_r2 = MR_r7;
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__handle_query_from_existing_server_9_0_i2);
MR_def_label(mdprof_cgi__handle_query_from_existing_server_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, cmd_pref);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(interface__send_term_5_0,
		mdprof_cgi__handle_query_from_existing_server_9_0_i4);
MR_def_label(mdprof_cgi__handle_query_from_existing_server_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(timeout__release_lock_4_0,
		mdprof_cgi__handle_query_from_existing_server_9_0_i5);
MR_def_label(mdprof_cgi__handle_query_from_existing_server_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(timeout__remove_want_file_3_0,
		mdprof_cgi__handle_query_from_existing_server_9_0_i6);
MR_def_label(mdprof_cgi__handle_query_from_existing_server_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(interface__recv_string_5_0,
		mdprof_cgi__handle_query_from_existing_server_9_0_i7);
MR_def_label(mdprof_cgi__handle_query_from_existing_server_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cat ", 4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__handle_query_from_existing_server_9_0_i8);
MR_def_label(mdprof_cgi__handle_query_from_existing_server_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_4_0,
		mdprof_cgi__handle_query_from_existing_server_9_0_i9);
MR_def_label(mdprof_cgi__handle_query_from_existing_server_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(mdprof_cgi__handle_query_from_existing_server_9_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__remove_file_4_0);
MR_def_label(mdprof_cgi__handle_query_from_existing_server_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(timeout__setup_timeout_3_0);
MR_decl_entry(interface__recv_term_5_0);
MR_decl_entry(startup__read_and_startup_default_deep_options_9_0);
MR_decl_entry(fn__query__solidify_preference_2_0);
MR_decl_entry(query__try_exec_6_0);
MR_decl_entry(fn__interface__response_file_name_2_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(require__error_1_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(interface__send_string_5_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(io__write_4_0);
MR_decl_entry(io__nl_3_0);
MR_decl_entry(io__flush_output_3_0);
MR_decl_entry(timeout__delete_cleanup_files_2_0);

MR_BEGIN_MODULE(mdprof_cgi_module2)
	MR_init_entry1(mdprof_cgi__server_loop_10_0);
	MR_init_label8(mdprof_cgi__server_loop_10_0,104,2,3,8,11,10,12,13)
	MR_init_label8(mdprof_cgi__server_loop_10_0,6,14,15,16,17,18,20,19)
	MR_init_label8(mdprof_cgi__server_loop_10_0,22,23,5,25,26,27,28,29)
	MR_init_label8(mdprof_cgi__server_loop_10_0,30,31,34,37,36,38,39,32)
	MR_init_label8(mdprof_cgi__server_loop_10_0,40,41,42,43,44,46,45,48)
	MR_init_label8(mdprof_cgi__server_loop_10_0,49,50,51,52,53,54,55,56)
	MR_init_label3(mdprof_cgi__server_loop_10_0,4,58,61)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'server_loop'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__server_loop_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(mdprof_cgi__server_loop_10_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(timeout__setup_timeout_3_0,
		mdprof_cgi__server_loop_10_0_i2);
MR_def_label(mdprof_cgi__server_loop_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, cmd_pref);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(interface__recv_term_5_0,
		mdprof_cgi__server_loop_10_0_i3);
MR_def_label(mdprof_cgi__server_loop_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_r8 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r8,0,1)) {
		MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i6);
	}
	MR_tempr2 = MR_sv(8);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(startup__read_and_startup_default_deep_options_9_0,
		mdprof_cgi__server_loop_10_0_i8);
MR_def_label(mdprof_cgi__server_loop_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_tempr2 = MR_sv(8);
	MR_sv(9) = MR_tempr2;
	MR_sv(11) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__solidify_preference_2_0,
		mdprof_cgi__server_loop_10_0_i11);
MR_def_label(mdprof_cgi__server_loop_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_ctfield(0, MR_sv(8), 3);
	MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i16);
MR_def_label(mdprof_cgi__server_loop_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__solidify_preference_2_0,
		mdprof_cgi__server_loop_10_0_i12);
MR_def_label(mdprof_cgi__server_loop_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(query__try_exec_6_0,
		mdprof_cgi__server_loop_10_0_i13);
MR_def_label(mdprof_cgi__server_loop_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 2);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(8), 3);
	MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i16);
MR_def_label(mdprof_cgi__server_loop_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_tempr2 = MR_sv(8);
	MR_sv(9) = MR_tempr2;
	MR_sv(10) = MR_r8;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__solidify_preference_2_0,
		mdprof_cgi__server_loop_10_0_i14);
MR_def_label(mdprof_cgi__server_loop_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(query__try_exec_6_0,
		mdprof_cgi__server_loop_10_0_i15);
MR_def_label(mdprof_cgi__server_loop_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(8), 3);
MR_def_label(mdprof_cgi__server_loop_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__interface__response_file_name_2_0,
		mdprof_cgi__server_loop_10_0_i17);
MR_def_label(mdprof_cgi__server_loop_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		mdprof_cgi__server_loop_10_0_i18);
MR_def_label(mdprof_cgi__server_loop_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i20);
	}
	MR_r2 = MR_sv(11);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i19);
MR_def_label(mdprof_cgi__server_loop_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot open response file", 25);
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_cgi__server_loop_10_0_i19);
MR_def_label(mdprof_cgi__server_loop_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_cgi__server_loop_10_0_i22);
MR_def_label(mdprof_cgi__server_loop_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(io__close_output_3_0,
		mdprof_cgi__server_loop_10_0_i23);
MR_def_label(mdprof_cgi__server_loop_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(interface__send_string_5_0,
		mdprof_cgi__server_loop_10_0_i4);
MR_def_label(mdprof_cgi__server_loop_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(11) = MR_ctfield(1, MR_sv(4), 0);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdprof_cgi__server_loop_10_0_i25);
MR_def_label(mdprof_cgi__server_loop_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__server_loop_10_0_i26);
MR_def_label(mdprof_cgi__server_loop_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("server loop query ", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__server_loop_10_0_i27);
MR_def_label(mdprof_cgi__server_loop_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_cgi__server_loop_10_0_i28);
MR_def_label(mdprof_cgi__server_loop_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(io__write_4_0,
		mdprof_cgi__server_loop_10_0_i29);
MR_def_label(mdprof_cgi__server_loop_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(io__nl_3_0,
		mdprof_cgi__server_loop_10_0_i30);
MR_def_label(mdprof_cgi__server_loop_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(io__flush_output_3_0,
		mdprof_cgi__server_loop_10_0_i31);
MR_def_label(mdprof_cgi__server_loop_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_r8 = MR_ctfield(0, MR_tempr1, 1);
	MR_r9 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r9,0,1)) {
		MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i32);
	}
	MR_sv(9) = MR_r8;
	MR_tempr2 = MR_sv(8);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(startup__read_and_startup_default_deep_options_9_0,
		mdprof_cgi__server_loop_10_0_i34);
MR_def_label(mdprof_cgi__server_loop_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_tempr2 = MR_sv(8);
	MR_sv(9) = MR_tempr2;
	MR_sv(12) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__solidify_preference_2_0,
		mdprof_cgi__server_loop_10_0_i37);
MR_def_label(mdprof_cgi__server_loop_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_ctfield(0, MR_sv(8), 3);
	MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i42);
MR_def_label(mdprof_cgi__server_loop_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__solidify_preference_2_0,
		mdprof_cgi__server_loop_10_0_i38);
MR_def_label(mdprof_cgi__server_loop_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(query__try_exec_6_0,
		mdprof_cgi__server_loop_10_0_i39);
MR_def_label(mdprof_cgi__server_loop_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 2);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(8), 3);
	MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i42);
MR_def_label(mdprof_cgi__server_loop_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r8;
	}
	MR_np_call_localret_ent(fn__query__solidify_preference_2_0,
		mdprof_cgi__server_loop_10_0_i40);
MR_def_label(mdprof_cgi__server_loop_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(query__try_exec_6_0,
		mdprof_cgi__server_loop_10_0_i41);
MR_def_label(mdprof_cgi__server_loop_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(8), 3);
MR_def_label(mdprof_cgi__server_loop_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__interface__response_file_name_2_0,
		mdprof_cgi__server_loop_10_0_i43);
MR_def_label(mdprof_cgi__server_loop_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		mdprof_cgi__server_loop_10_0_i44);
MR_def_label(mdprof_cgi__server_loop_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i46);
	}
	MR_r2 = MR_sv(12);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i45);
MR_def_label(mdprof_cgi__server_loop_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot open response file", 25);
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_cgi__server_loop_10_0_i45);
MR_def_label(mdprof_cgi__server_loop_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_cgi__server_loop_10_0_i48);
MR_def_label(mdprof_cgi__server_loop_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(io__close_output_3_0,
		mdprof_cgi__server_loop_10_0_i49);
MR_def_label(mdprof_cgi__server_loop_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(interface__send_string_5_0,
		mdprof_cgi__server_loop_10_0_i50);
MR_def_label(mdprof_cgi__server_loop_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__server_loop_10_0_i51);
MR_def_label(mdprof_cgi__server_loop_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" output:\n", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__server_loop_10_0_i52);
MR_def_label(mdprof_cgi__server_loop_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdprof_cgi__server_loop_10_0_i53);
MR_def_label(mdprof_cgi__server_loop_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__server_loop_10_0_i54);
MR_def_label(mdprof_cgi__server_loop_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("query ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__server_loop_10_0_i55);
MR_def_label(mdprof_cgi__server_loop_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_cgi__server_loop_10_0_i56);
MR_def_label(mdprof_cgi__server_loop_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(io__flush_output_3_0,
		mdprof_cgi__server_loop_10_0_i4);
MR_def_label(mdprof_cgi__server_loop_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i58);
	}
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(timeout__delete_cleanup_files_2_0);
MR_def_label(mdprof_cgi__server_loop_10_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(10),1)) {
		MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(1, MR_sv(10), 0);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(9);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i104);
MR_def_label(mdprof_cgi__server_loop_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(9);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(mdprof_cgi__server_loop_10_0_i104);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_cgi_module3)
	MR_init_entry1(mdprof_cgi__raw_detach_process_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'raw_detach_process'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__raw_detach_process_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	ResCode;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__mdprof_cgi__raw_detach_process_3_0
	MR_OBTAIN_GLOBAL_LOCK("raw_detach_process");
{
#line 774 "mdprof_cgi.m"
{
#ifdef  MR_DEEP_PROFILER_ENABLED
    pid_t   status;

    fflush(stdout);
    fflush(stderr);
    status = fork();
    if (status < 0) {
        ResCode = -1;
    } else if (status > 0) {
        ResCode = 1;
    } else {
#ifdef  MR_HAVE_SETPGID
        /*
        ** Try to detach the server process from the parent's process group,
        ** in case it uses the number of processes in the process group
        ** to decide when the cgi `script' is done.
        */
        setpgid(0, 0);
#else
        /* Hope that web server doesn't depend on the process group. */
#endif
        ResCode = 0;
    }

    S = S0;
#else
    MR_fatal_error("deep profiling not enabled");
#endif
};}
#line 2072 "mdprof_cgi.c"
	MR_RELEASE_GLOBAL_LOCK("raw_detach_process");
	MR_r1 = ResCode;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt__lookup_int_option_3_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(timeout__unregister_file_for_cleanup_3_0);
MR_decl_entry(io__stdin_stream_3_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(io__stdout_stream_3_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(io__binary_input_stream_3_0);
MR_decl_entry(io__close_binary_input_3_0);
MR_decl_entry(io__binary_output_stream_3_0);
MR_decl_entry(io__close_binary_output_3_0);

MR_BEGIN_MODULE(mdprof_cgi_module4)
	MR_init_entry1(mdprof_cgi__start_server_9_0);
	MR_init_label8(mdprof_cgi__start_server_9_0,2,3,4,7,8,10,9,6)
	MR_init_label8(mdprof_cgi__start_server_9_0,15,14,18,17,20,21,22,23)
	MR_init_label8(mdprof_cgi__start_server_9_0,24,25,26,27,28,29,30,31)
	MR_init_label4(mdprof_cgi__start_server_9_0,33,32,34,35)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'start_server'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__start_server_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 6;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__start_server_9_0_i2);
MR_def_label(mdprof_cgi__start_server_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 15;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__start_server_9_0_i3);
MR_def_label(mdprof_cgi__start_server_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__start_server_9_0_i4);
MR_def_label(mdprof_cgi__start_server_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(mdprof_cgi__start_server_9_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(timeout__release_lock_4_0,
		mdprof_cgi__start_server_9_0_i7);
MR_def_label(mdprof_cgi__start_server_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(timeout__remove_want_file_3_0,
		mdprof_cgi__start_server_9_0_i8);
MR_def_label(mdprof_cgi__start_server_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(mdprof_cgi__start_server_9_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 17;
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(mdprof_cgi__start_server_9_0_i9);
MR_def_label(mdprof_cgi__start_server_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 17;
	MR_r1 = MR_sv(10);
MR_def_label(mdprof_cgi__start_server_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_cgi__start_server_9_0_i34);
MR_def_label(mdprof_cgi__start_server_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	ResCode;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__mdprof_cgi__start_server_9_0
	MR_OBTAIN_GLOBAL_LOCK("raw_detach_process");
{
#line 774 "mdprof_cgi.m"
{
#ifdef  MR_DEEP_PROFILER_ENABLED
    pid_t   status;

    fflush(stdout);
    fflush(stderr);
    status = fork();
    if (status < 0) {
        ResCode = -1;
    } else if (status > 0) {
        ResCode = 1;
    } else {
#ifdef  MR_HAVE_SETPGID
        /*
        ** Try to detach the server process from the parent's process group,
        ** in case it uses the number of processes in the process group
        ** to decide when the cgi `script' is done.
        */
        setpgid(0, 0);
#else
        /* Hope that web server doesn't depend on the process group. */
#endif
        ResCode = 0;
    }

    S = S0;
#else
    MR_fatal_error("deep profiling not enabled");
#endif
};}
#line 2223 "mdprof_cgi.c"
	MR_RELEASE_GLOBAL_LOCK("raw_detach_process");
	MR_r2 = ResCode;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_cgi__start_server_9_0_i14);
	}
	MR_np_call_localret_ent(timeout__delete_cleanup_files_2_0,
		mdprof_cgi__start_server_9_0_i15);
MR_def_label(mdprof_cgi__start_server_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(mdprof_cgi__start_server_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_cgi__start_server_9_0_i17);
	}
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(timeout__release_lock_4_0,
		mdprof_cgi__start_server_9_0_i18);
MR_def_label(mdprof_cgi__start_server_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(timeout__remove_want_file_3_0);
MR_def_label(mdprof_cgi__start_server_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(timeout__unregister_file_for_cleanup_3_0,
		mdprof_cgi__start_server_9_0_i20);
MR_def_label(mdprof_cgi__start_server_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(timeout__unregister_file_for_cleanup_3_0,
		mdprof_cgi__start_server_9_0_i21);
MR_def_label(mdprof_cgi__start_server_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__stdin_stream_3_0,
		mdprof_cgi__start_server_9_0_i22);
MR_def_label(mdprof_cgi__start_server_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_input_3_0,
		mdprof_cgi__start_server_9_0_i23);
MR_def_label(mdprof_cgi__start_server_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		mdprof_cgi__start_server_9_0_i24);
MR_def_label(mdprof_cgi__start_server_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_output_3_0,
		mdprof_cgi__start_server_9_0_i25);
MR_def_label(mdprof_cgi__start_server_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mdprof_cgi__start_server_9_0_i26);
MR_def_label(mdprof_cgi__start_server_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_output_3_0,
		mdprof_cgi__start_server_9_0_i27);
MR_def_label(mdprof_cgi__start_server_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__binary_input_stream_3_0,
		mdprof_cgi__start_server_9_0_i28);
MR_def_label(mdprof_cgi__start_server_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_binary_input_3_0,
		mdprof_cgi__start_server_9_0_i29);
MR_def_label(mdprof_cgi__start_server_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__binary_output_stream_3_0,
		mdprof_cgi__start_server_9_0_i30);
MR_def_label(mdprof_cgi__start_server_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_binary_output_3_0,
		mdprof_cgi__start_server_9_0_i31);
MR_def_label(mdprof_cgi__start_server_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(mdprof_cgi__start_server_9_0_i33);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(10);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 17;
	MR_GOTO_LAB(mdprof_cgi__start_server_9_0_i32);
MR_def_label(mdprof_cgi__start_server_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(10);
	MR_r3 = (MR_Integer) 17;
MR_def_label(mdprof_cgi__start_server_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_cgi__start_server_9_0_i34);
MR_def_label(mdprof_cgi__start_server_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__start_server_9_0_i35);
MR_def_label(mdprof_cgi__start_server_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = (MR_Integer) 0;
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(mdprof_cgi__server_loop_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__interface__to_server_pipe_name_1_0);
MR_decl_entry(fn__interface__from_server_pipe_name_1_0);
MR_decl_entry(fn__conf__make_pipe_cmd_1_0);
MR_decl_entry(timeout__register_file_for_cleanup_3_0);

MR_BEGIN_MODULE(mdprof_cgi_module5)
	MR_init_entry1(mdprof_cgi__make_pipes_4_0);
	MR_init_label8(mdprof_cgi__make_pipes_4_0,2,3,4,5,6,7,13,14)
	MR_init_label3(mdprof_cgi__make_pipes_4_0,8,15,16)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_pipes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__make_pipes_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__interface__to_server_pipe_name_1_0,
		mdprof_cgi__make_pipes_4_0_i2);
MR_def_label(mdprof_cgi__make_pipes_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__interface__from_server_pipe_name_1_0,
		mdprof_cgi__make_pipes_4_0_i3);
MR_def_label(mdprof_cgi__make_pipes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__conf__make_pipe_cmd_1_0,
		mdprof_cgi__make_pipes_4_0_i4);
MR_def_label(mdprof_cgi__make_pipes_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__conf__make_pipe_cmd_1_0,
		mdprof_cgi__make_pipes_4_0_i5);
MR_def_label(mdprof_cgi__make_pipes_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__call_system_4_0,
		mdprof_cgi__make_pipes_4_0_i6);
MR_def_label(mdprof_cgi__make_pipes_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__call_system_4_0,
		mdprof_cgi__make_pipes_4_0_i7);
MR_def_label(mdprof_cgi__make_pipes_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(mdprof_cgi__make_pipes_4_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_cgi__make_pipes_4_0_i8);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_cgi__make_pipes_4_0_i8);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_cgi__make_pipes_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(timeout__register_file_for_cleanup_3_0,
		mdprof_cgi__make_pipes_4_0_i13);
MR_def_label(mdprof_cgi__make_pipes_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(timeout__register_file_for_cleanup_3_0,
		mdprof_cgi__make_pipes_4_0_i14);
MR_def_label(mdprof_cgi__make_pipes_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(mdprof_cgi__make_pipes_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__remove_file_4_0,
		mdprof_cgi__make_pipes_4_0_i15);
MR_def_label(mdprof_cgi__make_pipes_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__remove_file_4_0,
		mdprof_cgi__make_pipes_4_0_i16);
MR_def_label(mdprof_cgi__make_pipes_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(conf__server_name_port_3_0);
MR_decl_entry(conf__script_name_3_0);
MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(mdprof_cgi_module6)
	MR_init_entry1(mdprof_cgi__handle_query_from_new_server_11_0);
	MR_init_label8(mdprof_cgi__handle_query_from_new_server_11_0,2,5,4,6,7,8,9,10)
	MR_init_label8(mdprof_cgi__handle_query_from_new_server_11_0,12,13,17,15,11,19,22,23)
	MR_init_label8(mdprof_cgi__handle_query_from_new_server_11_0,24,25,21,27,28,30,31,32)
	MR_init_label8(mdprof_cgi__handle_query_from_new_server_11_0,33,34,29,37,38,36,40,43)
	MR_init_label5(mdprof_cgi__handle_query_from_new_server_11_0,44,45,42,47,48)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'handle_query_from_new_server'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__handle_query_from_new_server_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(9) = MR_tempr1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i2);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_cgi__handle_query_from_new_server_11_0_i4);
	}
	MR_np_call_localret_ent(conf__server_name_port_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i5);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(conf__script_name_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i6);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_string_const("localhost", 9);
	MR_np_call_localret_ent(conf__script_name_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i6);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i7);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 16;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i8);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i9);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i10);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_cgi__handle_query_from_new_server_11_0_i12);
	}
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(mdprof_cgi__handle_query_from_new_server_11_0_i11);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__open_output_4_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i13);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_cgi__handle_query_from_new_server_11_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(timeout__register_file_for_cleanup_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i17);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(mdprof_cgi__handle_query_from_new_server_11_0_i11);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot create startup file", 26);
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i11);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r5;
	MR_np_call_localret_ent(startup__read_and_startup_default_deep_options_9_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i19);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_cgi__handle_query_from_new_server_11_0_i21);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(timeout__release_lock_4_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i22);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(timeout__remove_want_file_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i23);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i24);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i25);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__query__solidify_preference_2_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i27);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(query__try_exec_6_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i28);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(mdprof_cgi__handle_query_from_new_server_11_0_i30);
	}
	MR_r2 = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(mdprof_cgi__handle_query_from_new_server_11_0_i29);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_ctfield(1, MR_sv(6), 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i31);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("query 0 output:\n", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i32);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i33);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(io__flush_output_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i34);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(14);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(13),0)) {
		MR_GOTO_LAB(mdprof_cgi__handle_query_from_new_server_11_0_i36);
	}
	MR_np_call_localret_ent(timeout__release_lock_4_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i37);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(timeout__remove_want_file_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i38);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdprof_cgi__make_pipes_4_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i40);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_cgi__handle_query_from_new_server_11_0_i42);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(timeout__release_lock_4_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i43);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(timeout__remove_want_file_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i44);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i45);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("could not make pipes\n", 21);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i47);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		mdprof_cgi__handle_query_from_new_server_11_0_i48);
MR_def_label(mdprof_cgi__handle_query_from_new_server_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(mdprof_cgi__start_server_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_cgi_module7)
	MR_init_entry1(mdprof_cgi__check_for_existing_fifos_5_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'check_for_existing_fifos'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__check_for_existing_fifos_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Fifo1;
	MR_String	Fifo2;
	MR_Integer	FifoCount;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__mdprof_cgi__check_for_existing_fifos_5_0
	Fifo1 = (MR_String) MR_r1;
	Fifo2 = (MR_String) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("check_for_existing_fifos");
{
#line 716 "mdprof_cgi.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    struct stat statbuf;
    int         status;

    FifoCount = 0;
    status = stat(Fifo1, &statbuf);
    if ((status == 0) && (S_ISFIFO(statbuf.st_mode))) {
        FifoCount++;
    }
    status = stat(Fifo2, &statbuf);
    if ((status == 0) && (S_ISFIFO(statbuf.st_mode))) {
        FifoCount++;
    }

    S = S0;
#else
    MR_fatal_error("deep profiling not enabled");
#endif
;}
#line 2851 "mdprof_cgi.c"
	MR_RELEASE_GLOBAL_LOCK("check_for_existing_fifos");
	MR_r1 = FifoCount;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(fn__interface__server_startup_name_1_0);
MR_decl_entry(fn__interface__mutex_file_name_1_0);
MR_decl_entry(fn__interface__want_file_name_0_0);
MR_decl_entry(timeout__make_want_file_3_0);
MR_decl_entry(timeout__get_lock_4_0);
MR_decl_entry(fn__interface__want_dir_0_0);
MR_decl_entry(fn__interface__want_prefix_0_0);
MR_decl_entry(timeout__setup_signals_5_0);

MR_BEGIN_MODULE(mdprof_cgi_module8)
	MR_init_entry1(mdprof_cgi__process_query_6_0);
	MR_init_label8(mdprof_cgi__process_query_6_0,2,4,6,5,9,12,8,13)
	MR_init_label8(mdprof_cgi__process_query_6_0,15,17,18,19,20,21,22,23)
	MR_init_label8(mdprof_cgi__process_query_6_0,24,27,28,26,30,33,36,37)
	MR_init_label6(mdprof_cgi__process_query_6_0,38,14,42,43,44,45)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'process_query'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__process_query_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(mdprof_cgi__process_query_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 2);
	MR_GOTO_LAB(mdprof_cgi__process_query_6_0_i4);
MR_def_label(mdprof_cgi__process_query_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = MR_r4;
MR_def_label(mdprof_cgi__process_query_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_cgi__process_query_6_0_i6);
	}
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(mdprof_cgi__process_query_6_0_i5);
MR_def_label(mdprof_cgi__process_query_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_ctfield(1, MR_r2, 0);
MR_def_label(mdprof_cgi__process_query_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".localhost", 10);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		mdprof_cgi__process_query_6_0_i9);
MR_def_label(mdprof_cgi__process_query_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_cgi__process_query_6_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 8;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_np_call_localret_ent(map__det_update_4_0,
		mdprof_cgi__process_query_6_0_i12);
MR_def_label(mdprof_cgi__process_query_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mdprof_cgi__process_query_6_0_i13);
MR_def_label(mdprof_cgi__process_query_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(mdprof_cgi__process_query_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".data", 5);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		mdprof_cgi__process_query_6_0_i15);
MR_def_label(mdprof_cgi__process_query_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_cgi__process_query_6_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__interface__to_server_pipe_name_1_0,
		mdprof_cgi__process_query_6_0_i17);
MR_def_label(mdprof_cgi__process_query_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__interface__from_server_pipe_name_1_0,
		mdprof_cgi__process_query_6_0_i18);
MR_def_label(mdprof_cgi__process_query_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__interface__server_startup_name_1_0,
		mdprof_cgi__process_query_6_0_i19);
MR_def_label(mdprof_cgi__process_query_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__interface__mutex_file_name_1_0,
		mdprof_cgi__process_query_6_0_i20);
MR_def_label(mdprof_cgi__process_query_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__process_query_6_0_i21);
MR_def_label(mdprof_cgi__process_query_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__interface__want_file_name_0_0,
		mdprof_cgi__process_query_6_0_i22);
MR_def_label(mdprof_cgi__process_query_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(timeout__make_want_file_3_0,
		mdprof_cgi__process_query_6_0_i23);
MR_def_label(mdprof_cgi__process_query_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(timeout__get_lock_4_0,
		mdprof_cgi__process_query_6_0_i24);
MR_def_label(mdprof_cgi__process_query_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_query_6_0_i26);
	}
	MR_np_call_localret_ent(fn__interface__want_dir_0_0,
		mdprof_cgi__process_query_6_0_i27);
MR_def_label(mdprof_cgi__process_query_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__interface__want_prefix_0_0,
		mdprof_cgi__process_query_6_0_i28);
MR_def_label(mdprof_cgi__process_query_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(timeout__setup_signals_5_0,
		mdprof_cgi__process_query_6_0_i26);
MR_def_label(mdprof_cgi__process_query_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(10);
	{
	MR_String	Fifo1;
	MR_String	Fifo2;
	MR_Integer	FifoCount;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__mdprof_cgi__process_query_6_0
	Fifo1 = (MR_String) MR_r4;
	Fifo2 = (MR_String) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("check_for_existing_fifos");
{
#line 716 "mdprof_cgi.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    struct stat statbuf;
    int         status;

    FifoCount = 0;
    status = stat(Fifo1, &statbuf);
    if ((status == 0) && (S_ISFIFO(statbuf.st_mode))) {
        FifoCount++;
    }
    status = stat(Fifo2, &statbuf);
    if ((status == 0) && (S_ISFIFO(statbuf.st_mode))) {
        FifoCount++;
    }

    S = S0;
#else
    MR_fatal_error("deep profiling not enabled");
#endif
;}
#line 3067 "mdprof_cgi.c"
	MR_RELEASE_GLOBAL_LOCK("check_for_existing_fifos");
	MR_r11 = FifoCount;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r11,0)) {
		MR_GOTO_LAB(mdprof_cgi__process_query_6_0_i30);
	}
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(mdprof_cgi__handle_query_from_new_server_11_0);
MR_def_label(mdprof_cgi__process_query_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r11,2)) {
		MR_GOTO_LAB(mdprof_cgi__process_query_6_0_i33);
	}
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(mdprof_cgi__handle_query_from_existing_server_9_0);
MR_def_label(mdprof_cgi__process_query_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r8;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(timeout__release_lock_4_0,
		mdprof_cgi__process_query_6_0_i36);
MR_def_label(mdprof_cgi__process_query_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(timeout__remove_want_file_3_0,
		mdprof_cgi__process_query_6_0_i37);
MR_def_label(mdprof_cgi__process_query_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_cgi__process_query_6_0_i38);
MR_def_label(mdprof_cgi__process_query_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof internal error: bad fifo count", 37);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_cgi__process_query_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_cgi__process_query_6_0_i42);
MR_def_label(mdprof_cgi__process_query_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".<h3>\n\n", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__process_query_6_0_i43);
MR_def_label(mdprof_cgi__process_query_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<h3> Invalid file name ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__process_query_6_0_i44);
MR_def_label(mdprof_cgi__process_query_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_query_6_0_i45);
MR_def_label(mdprof_cgi__process_query_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Deep profiling data files must have a .data suffix, to allow the deep profiler to locate any related files.\n", 108);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_cgi_module9)
	MR_init_entry1(mdprof_cgi__process_args_5_0);
	MR_init_label8(mdprof_cgi__process_args_5_0,5,6,7,8,9,10,11,14)
	MR_init_label8(mdprof_cgi__process_args_5_0,16,18,20,22,2,31,32,33)
	MR_init_label3(mdprof_cgi__process_args_5_0,34,35,36)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'process_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__process_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_cgi__process_args_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_cgi__process_args_5_0_i2);
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 12;
	}
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__process_args_5_0_i5);
MR_def_label(mdprof_cgi__process_args_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__process_args_5_0_i6);
MR_def_label(mdprof_cgi__process_args_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 9;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__process_args_5_0_i7);
MR_def_label(mdprof_cgi__process_args_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_cgi__process_args_5_0_i8);
MR_def_label(mdprof_cgi__process_args_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 10;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_cgi__process_args_5_0_i9);
MR_def_label(mdprof_cgi__process_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 11;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_cgi__process_args_5_0_i10);
MR_def_label(mdprof_cgi__process_args_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(mdprof_cgi__process_args_5_0_i11);
	}
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,2,0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_cgi__process_query_6_0);
MR_def_label(mdprof_cgi__process_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(mdprof_cgi__process_args_5_0_i14);
	}
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_cgi__process_query_6_0);
MR_def_label(mdprof_cgi__process_args_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(6),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_args_5_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_cgi__process_query_6_0);
	}
MR_def_label(mdprof_cgi__process_args_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(7),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_args_5_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_cgi__process_query_6_0);
	}
MR_def_label(mdprof_cgi__process_args_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_cgi__process_args_5_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_cgi__process_query_6_0);
	}
MR_def_label(mdprof_cgi__process_args_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(mdprof_cgi__process_args_5_0_i22);
	}
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_cgi__process_query_6_0);
MR_def_label(mdprof_cgi__process_args_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_cgi__process_query_6_0);
MR_def_label(mdprof_cgi__process_args_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_cgi__process_args_5_0_i31);
MR_def_label(mdprof_cgi__process_args_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__process_args_5_0_i32);
MR_def_label(mdprof_cgi__process_args_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Usage: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__process_args_5_0_i33);
MR_def_label(mdprof_cgi__process_args_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_args_5_0_i34);
MR_def_label(mdprof_cgi__process_args_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("This program doesn\'t expect any arguments;\n", 43);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_args_5_0_i35);
MR_def_label(mdprof_cgi__process_args_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instead it decides what to do based on the\n", 43);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_args_5_0_i36);
MR_def_label(mdprof_cgi__process_args_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("QUERY_STRING environment variable.\n", 35);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(library__version_1_0);

MR_BEGIN_MODULE(mdprof_cgi_module10)
	MR_init_entry1(mdprof_cgi__process_command_line_2_0);
	MR_init_label8(mdprof_cgi__process_command_line_2_0,2,3,8,11,12,13,14,10)
	MR_init_label8(mdprof_cgi__process_command_line_2_0,16,17,18,19,20,22,23,24)
	MR_init_label8(mdprof_cgi__process_command_line_2_0,25,26,27,28,21,31,32,33)
	MR_init_label8(mdprof_cgi__process_command_line_2_0,34,35,36,29,37,41,42,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'process_command_line'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__process_command_line_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("mdprof_cgi", 10);
	MR_np_call_localret_ent(io__progname_base_4_0,
		mdprof_cgi__process_command_line_2_0_i2);
MR_def_label(mdprof_cgi__process_command_line_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		mdprof_cgi__process_command_line_2_0_i3);
MR_def_label(mdprof_cgi__process_command_line_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		mdprof_cgi__process_command_line_2_0_i8);
MR_def_label(mdprof_cgi__process_command_line_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i10);
	}
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_cgi__process_command_line_2_0_i11);
MR_def_label(mdprof_cgi__process_command_line_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__process_command_line_2_0_i12);
MR_def_label(mdprof_cgi__process_command_line_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error parsing options: ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__process_command_line_2_0_i13);
MR_def_label(mdprof_cgi__process_command_line_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__process_command_line_2_0_i14);
MR_def_label(mdprof_cgi__process_command_line_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_cgi__process_command_line_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 7;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__process_command_line_2_0_i16);
MR_def_label(mdprof_cgi__process_command_line_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 18;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__process_command_line_2_0_i17);
MR_def_label(mdprof_cgi__process_command_line_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__process_command_line_2_0_i18);
MR_def_label(mdprof_cgi__process_command_line_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__process_command_line_2_0_i19);
MR_def_label(mdprof_cgi__process_command_line_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 5;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_cgi__process_command_line_2_0_i20);
MR_def_label(mdprof_cgi__process_command_line_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i22);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i21);
MR_def_label(mdprof_cgi__process_command_line_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__process_command_line_2_0_i23);
MR_def_label(mdprof_cgi__process_command_line_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Usage: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_cgi__process_command_line_2_0_i24);
MR_def_label(mdprof_cgi__process_command_line_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_command_line_2_0_i25);
MR_def_label(mdprof_cgi__process_command_line_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("This program doesn\'t expect any arguments;\n", 43);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_command_line_2_0_i26);
MR_def_label(mdprof_cgi__process_command_line_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instead it decides what to do based on the\n", 43);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_command_line_2_0_i27);
MR_def_label(mdprof_cgi__process_command_line_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("QUERY_STRING environment variable.\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_command_line_2_0_i28);
MR_def_label(mdprof_cgi__process_command_line_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(mdprof_cgi__process_command_line_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(5),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i29);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(library__version_1_0,
		mdprof_cgi__process_command_line_2_0_i31);
MR_def_label(mdprof_cgi__process_command_line_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_command_line_2_0_i32);
MR_def_label(mdprof_cgi__process_command_line_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": Mercury deep profiler", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_command_line_2_0_i33);
MR_def_label(mdprof_cgi__process_command_line_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdprof_cgi__process_command_line_2_0_i34);
MR_def_label(mdprof_cgi__process_command_line_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_cgi__process_command_line_2_0_i35);
MR_def_label(mdprof_cgi__process_command_line_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdprof_cgi__process_command_line_2_0_i36);
MR_def_label(mdprof_cgi__process_command_line_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(mdprof_cgi__process_command_line_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i37);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i37);
	}
	if (MR_INT_EQ(MR_sv(8),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i42);
	}
MR_def_label(mdprof_cgi__process_command_line_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mdprof_cgi__decode_input_lines_5_0,
		mdprof_cgi__process_command_line_2_0_i41);
MR_def_label(mdprof_cgi__process_command_line_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(mdprof_cgi__process_command_line_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i9);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i9);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i9);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i9);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(mdprof_cgi__process_command_line_2_0_i9);
	}
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(mdprof_cgi__process_args_5_0);
MR_def_label(mdprof_cgi__process_command_line_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__get_environment_var_4_0);
MR_decl_entry(fn__query__default_command_0_0);

MR_BEGIN_MODULE(mdprof_cgi_module11)
	MR_init_entry1(main_2_0);
	MR_init_label8(main_2_0,2,3,4,6,12,14,13,16)
	MR_init_label4(main_2_0,19,18,23,22)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("Content-type: text/html\n\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		main_2_0_i3);
MR_def_label(main_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("QUERY_STRING", 12);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		main_2_0_i4);
MR_def_label(main_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i6);
	}
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdprof_cgi__process_command_line_2_0);
MR_def_label(main_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i12);
MR_def_label(main_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(main_2_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__query__string_to_maybe_query_1_0,
		main_2_0_i16);
MR_def_label(main_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_cgi: error parsing empty command line", 44);
	MR_np_call_localret_ent(require__error_1_0,
		main_2_0_i13);
MR_def_label(main_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__query__string_to_maybe_query_1_0,
		main_2_0_i16);
MR_def_label(main_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i19);
MR_def_label(main_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Bad URL; expected filename \n", 28);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(main_2_0_i22);
	}
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__query__default_command_0_0,
		main_2_0_i23);
MR_def_label(main_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdprof_cgi__process_query_6_0);
MR_def_label(main_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdprof_cgi__process_query_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_cgi_module12)
	MR_init_entry1(mdprof_cgi__short_2_0);
	MR_init_label8(mdprof_cgi__short_2_0,3,4,5,6,7,8,9,10)
	MR_init_label2(mdprof_cgi__short_2_0,11,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'short'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__short_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,67)) {
		MR_GOTO_LAB(mdprof_cgi__short_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__short_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,99)) {
		MR_GOTO_LAB(mdprof_cgi__short_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__short_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,100)) {
		MR_GOTO_LAB(mdprof_cgi__short_2_0_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__short_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,109)) {
		MR_GOTO_LAB(mdprof_cgi__short_2_0_i6);
	}
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__short_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,112)) {
		MR_GOTO_LAB(mdprof_cgi__short_2_0_i7);
	}
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__short_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,113)) {
		MR_GOTO_LAB(mdprof_cgi__short_2_0_i8);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__short_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,114)) {
		MR_GOTO_LAB(mdprof_cgi__short_2_0_i9);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__short_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,115)) {
		MR_GOTO_LAB(mdprof_cgi__short_2_0_i10);
	}
	MR_r2 = (MR_Integer) 16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__short_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,116)) {
		MR_GOTO_LAB(mdprof_cgi__short_2_0_i11);
	}
	MR_r2 = (MR_Integer) 17;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__short_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,119)) {
		MR_GOTO_LAB(mdprof_cgi__short_2_0_i1);
	}
	MR_r2 = (MR_Integer) 19;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__short_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_cgi_module13)
	MR_init_entry1(mdprof_cgi__long_2_0);
	MR_init_label8(mdprof_cgi__long_2_0,3,27,5,6,7,8,9,10)
	MR_init_label8(mdprof_cgi__long_2_0,11,12,13,14,15,16,17,18)
	MR_init_label7(mdprof_cgi__long_2_0,19,20,21,22,23,24,25)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'long'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__long_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 63);
MR_def_label(mdprof_cgi__long_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(7,0))[(MR_Integer) MR_r3];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(mdprof_cgi__long_2_0_i5);
	}
	MR_r3 = (MR_COMMON(6,0))[(MR_Integer) MR_r3];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(mdprof_cgi__long_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i19) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i13) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i24) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i22) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i25) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i16) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i18) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i12) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i8) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i7) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i20) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i21) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i10) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i15) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i11) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i9) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i6) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i14) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27) MR_AND
		MR_LABEL_AP(mdprof_cgi__long_2_0_i27));
MR_def_label(mdprof_cgi__long_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 19;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 18;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 17;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_cgi__long_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mdprof_cgi_module14)
	MR_init_entry1(mdprof_cgi__defaults_2_0);
	MR_init_label3(mdprof_cgi__defaults_2_0,22,23,24)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'defaults'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_cgi__defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdprof_cgi.defaults/2-0", 1,
		MR_LABEL_AP(mdprof_cgi__defaults_2_0_i22));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdprof_cgi__defaults_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,38)) {
		MR_GOTO_LAB(mdprof_cgi__defaults_2_0_i23);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdprof_cgi__defaults_2_0_i24);
MR_def_label(mdprof_cgi__defaults_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdprof_cgi__defaults_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, (MR_Integer) MR_r3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_cgi_module15)
	MR_init_entry1(__Unify___mdprof_cgi__child_has_parent_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_cgi__child_has_parent_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdprof_cgi_module16)
	MR_init_entry1(__Compare___mdprof_cgi__child_has_parent_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_cgi__child_has_parent_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___query__cmd_0_0);
MR_decl_entry(__Unify___query__preferences_indication_0_0);

MR_BEGIN_MODULE(mdprof_cgi_module17)
	MR_init_entry1(__Unify___mdprof_cgi__cmd_pref_0_0);
	MR_init_label3(__Unify___mdprof_cgi__cmd_pref_0_0,4,8,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_cgi__cmd_pref_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_cgi__cmd_pref_0_0_i8);
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
		__Unify___mdprof_cgi__cmd_pref_0_0_i4);
MR_def_label(__Unify___mdprof_cgi__cmd_pref_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_cgi__cmd_pref_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___query__preferences_indication_0_0);
MR_def_label(__Unify___mdprof_cgi__cmd_pref_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_cgi__cmd_pref_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___query__cmd_0_0);
MR_decl_entry(__Compare___query__preferences_indication_0_0);

MR_BEGIN_MODULE(mdprof_cgi_module18)
	MR_init_entry1(__Compare___mdprof_cgi__cmd_pref_0_0);
	MR_init_label4(__Compare___mdprof_cgi__cmd_pref_0_0,3,2,5,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_cgi__cmd_pref_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_cgi__cmd_pref_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_cgi__cmd_pref_0_0_i2);
MR_def_label(__Compare___mdprof_cgi__cmd_pref_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_cgi__cmd_pref_0_0,2)
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
		__Compare___mdprof_cgi__cmd_pref_0_0_i5);
MR_def_label(__Compare___mdprof_cgi__cmd_pref_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_cgi__cmd_pref_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___query__preferences_indication_0_0);
MR_def_label(__Compare___mdprof_cgi__cmd_pref_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_cgi_module19)
	MR_init_entry1(__Unify___mdprof_cgi__detach_process_result_0_0);
	MR_init_label3(__Unify___mdprof_cgi__detach_process_result_0_0,6,11,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_cgi__detach_process_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_cgi__detach_process_result_0_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___mdprof_cgi__detach_process_result_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdprof_cgi__detach_process_result_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdprof_cgi__detach_process_result_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdprof_cgi__detach_process_result_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_cgi__detach_process_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_cgi_module20)
	MR_init_entry1(__Compare___mdprof_cgi__detach_process_result_0_0);
	MR_init_label6(__Compare___mdprof_cgi__detach_process_result_0_0,34,5,44,12,38,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_cgi__detach_process_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_cgi__detach_process_result_0_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___mdprof_cgi__detach_process_result_0_0_i12);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___mdprof_cgi__detach_process_result_0_0_i5);
	}
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___mdprof_cgi__detach_process_result_0_0_i44);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___mdprof_cgi__detach_process_result_0_0_i38);
	}
	}
MR_def_label(__Compare___mdprof_cgi__detach_process_result_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdprof_cgi__detach_process_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___mdprof_cgi__detach_process_result_0_0_i44);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___mdprof_cgi__detach_process_result_0_0_i34);
	}
	}
MR_def_label(__Compare___mdprof_cgi__detach_process_result_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdprof_cgi__detach_process_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___mdprof_cgi__detach_process_result_0_0_i15);
	}
	}
MR_def_label(__Compare___mdprof_cgi__detach_process_result_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdprof_cgi__detach_process_result_0_0,15)
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


MR_BEGIN_MODULE(mdprof_cgi_module21)
	MR_init_entry1(__Unify___mdprof_cgi__option_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_cgi__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_cgi_module22)
	MR_init_entry1(__Compare___mdprof_cgi__option_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_cgi__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdprof_cgi_module23)
	MR_init_entry1(__Unify___mdprof_cgi__option_table_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_cgi__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
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

MR_BEGIN_MODULE(mdprof_cgi_module24)
	MR_init_entry1(__Compare___mdprof_cgi__option_table_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_cgi__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_cgi, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_cgi_maybe_bunch_0(void)
{
	mdprof_cgi_module0();
	mdprof_cgi_module1();
	mdprof_cgi_module2();
	mdprof_cgi_module3();
	mdprof_cgi_module4();
	mdprof_cgi_module5();
	mdprof_cgi_module6();
	mdprof_cgi_module7();
	mdprof_cgi_module8();
	mdprof_cgi_module9();
	mdprof_cgi_module10();
	mdprof_cgi_module11();
	mdprof_cgi_module12();
	mdprof_cgi_module13();
	mdprof_cgi_module14();
	mdprof_cgi_module15();
	mdprof_cgi_module16();
	mdprof_cgi_module17();
	mdprof_cgi_module18();
	mdprof_cgi_module19();
	mdprof_cgi_module20();
	mdprof_cgi_module21();
	mdprof_cgi_module22();
	mdprof_cgi_module23();
	mdprof_cgi_module24();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_cgi__init(void);
void mercury__mdprof_cgi__init_type_tables(void);
void mercury__mdprof_cgi__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_cgi__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_cgi__init_complexity_procs(void);
#endif

void mercury__mdprof_cgi__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_cgi_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_cgi__type_ctor_info_child_has_parent_0,
		mdprof_cgi__child_has_parent_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_cgi__type_ctor_info_cmd_pref_0,
		mdprof_cgi__cmd_pref_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_cgi__type_ctor_info_detach_process_result_0,
		mdprof_cgi__detach_process_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_cgi__type_ctor_info_option_0,
		mdprof_cgi__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_cgi__type_ctor_info_option_table_0,
		mdprof_cgi__option_table_0_0);
	mercury__mdprof_cgi__init_debugger();
}

void mercury__mdprof_cgi__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_cgi__type_ctor_info_child_has_parent_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_cgi__type_ctor_info_cmd_pref_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_cgi__type_ctor_info_detach_process_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_cgi__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_cgi__type_ctor_info_option_table_0);
	}
}


void mercury__mdprof_cgi__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_cgi__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_cgi);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_cgi__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
