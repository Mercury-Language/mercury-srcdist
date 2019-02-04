/*
** Automatically generated from `mdprof_feedback.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__mdprof_feedback__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "mdprof_feedback.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "mdprof_feedback.c"
#line 126 "../library/array.int"
#include "array.mh"

#line 35 "mdprof_feedback.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "mdprof_feedback.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "mdprof_feedback.c"
#line 44 "mdprof_feedback.c"
#include "mdprof_feedback.mh"

#line 47 "mdprof_feedback.c"
#line 48 "mdprof_feedback.c"
#ifndef MDPROF_FEEDBACK_DECL_GUARD
#define MDPROF_FEEDBACK_DECL_GUARD

#line 52 "mdprof_feedback.c"
#line 53 "mdprof_feedback.c"

#endif
#line 56 "mdprof_feedback.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
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
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

MR_STATIC_LINKAGE const struct mercury_type_7 mercury_vector_common_7_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_feedback__type_ctor_info_option_table_0,
	mercury_data_mdprof_feedback__type_ctor_info_option_0,
	mercury_data_mdprof_feedback__type_ctor_info_measure_type_0;
MR_decl_label2(mdprof_feedback__compare_csd_ptr_4_0, 2,3)
MR_decl_label8(mdprof_feedback__compute_css_list_above_threshold_6_0, 43,2,3,4,5,6,7,8)
MR_decl_label8(mdprof_feedback__compute_css_list_above_threshold_6_0, 12,11,14,15,16,17,18,20)
MR_decl_label2(mdprof_feedback__compute_css_list_above_threshold_6_0, 21,19)
MR_decl_label2(mdprof_feedback__construct_measure_2_0, 3,1)
MR_decl_label3(mdprof_feedback__defaults_2_0, 2,3,4)
MR_decl_label8(mdprof_feedback__generate_feedback_file_7_0, 2,5,6,9,8,10,7,11)
MR_decl_label5(mdprof_feedback__generate_feedback_file_7_0, 12,4,14,15,16)
MR_decl_label7(mdprof_feedback__long_2_0, 3,4,5,6,7,8,1)
MR_decl_label8(main_2_0, 2,3,4,7,8,9,57,12)
MR_decl_label8(main_2_0, 19,22,24,25,26,27,28,31)
MR_decl_label8(main_2_0, 30,33,34,21,15,6,44,45)
MR_decl_label4(mdprof_feedback__read_deep_file_7_0, 2,3,5,6)
MR_decl_label7(mdprof_feedback__short_2_0, 3,4,5,6,7,8,1)
MR_decl_label4(mdprof_feedback__sum_callseqs_csd_ptr_4_0, 2,3,4,5)
MR_decl_label8(mdprof_feedback__write_css_list_5_0, 43,4,5,6,7,8,16,14)
MR_decl_label5(mdprof_feedback__write_css_list_5_0, 12,11,19,20,45)
MR_decl_label8(mdprof_feedback__write_help_message_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(mdprof_feedback__write_help_message_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label1(mdprof_feedback__write_help_message_3_0, 18)
MR_decl_label5(mdprof_feedback__write_version_message_3_0, 2,3,4,5,6)
MR_decl_static(mdprof_feedback__write_help_message_3_0)
MR_decl_static(mdprof_feedback__write_version_message_3_0)
MR_decl_static(mdprof_feedback__read_deep_file_7_0)
MR_decl_static(mdprof_feedback__sum_callseqs_csd_ptr_4_0)
MR_decl_static(mdprof_feedback__compute_css_list_above_threshold_6_0)
MR_decl_static(mdprof_feedback__write_css_list_5_0)
MR_decl_static(mdprof_feedback__generate_feedback_file_7_0)
MR_decl_static(mdprof_feedback__construct_measure_2_0)
MR_def_extern_entry(main_2_0)
MR_decl_static(mdprof_feedback__compare_csd_ptr_4_0)
MR_decl_static(mdprof_feedback__short_2_0)
MR_decl_static(mdprof_feedback__long_2_0)
MR_decl_static(mdprof_feedback__defaults_2_0)
MR_decl_static(__Unify___mdprof_feedback__measure_type_0_0)
MR_decl_static(__Compare___mdprof_feedback__measure_type_0_0)
MR_decl_static(__Unify___mdprof_feedback__option_0_0)
MR_decl_static(__Compare___mdprof_feedback__option_0_0)
MR_decl_static(__Unify___mdprof_feedback__option_table_0_0)
MR_decl_static(__Compare___mdprof_feedback__option_table_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_TAG_COMMON(0,4,0),
MR_TAG_COMMON(0,4,1),
MR_TAG_COMMON(0,4,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_feedback__compute_css_list_above_threshold_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_feedback__compute_css_list_above_threshold_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_feedback__compute_css_list_above_threshold_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_feedback__compute_css_list_above_threshold_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_feedback__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_feedback, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_feedback, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdprof_feedback, option),
MR_CTOR0_ADDR(getopt, option_data)
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(mdprof_feedback__short_2_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(mdprof_feedback__long_2_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(mdprof_feedback__defaults_2_0),
0
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
100000
},
{
0
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
0,
MR_string_const("average", 7)
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
3,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_7 mercury_vector_common_7_0[7] =
{
{
0,
MR_TAG_COMMON(2,5,0)
},
{
1,
MR_TAG_COMMON(1,5,1)
},
{
2,
MR_TAG_COMMON(1,5,1)
},
{
3,
MR_TAG_COMMON(1,5,1)
},
{
4,
MR_TAG_COMMON(3,6,0)
},
{
5,
MR_TAG_COMMON(3,7,0)
},
{
6,
MR_TAG_COMMON(3,7,0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_feedback__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdprof_feedback__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdprof_feedback__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdprof_feedback__type_ctor_info_option_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_feedback__option_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_feedback__option_table_0_0)),
	"mdprof_feedback",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdprof_feedback__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_0 = {
	"threshold",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_1 = {
	"help",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_2 = {
	"verbose",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_3 = {
	"version",
	3
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_4 = {
	"measure",
	4
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_5 = {
	"dump_stages",
	5
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_6 = {
	"dump_options",
	6
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_feedback__enum_value_ordered_option_0[] = {
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_3,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_6
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_feedback__enum_name_ordered_option_0[] = {
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_3
};

const MR_Integer mercury_data_mdprof_feedback__functor_number_map_option_0[] = {
	4,
	2,
	5,
	6,
	3,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_feedback__type_ctor_info_option_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_feedback__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_feedback__option_0_0)),
	"mdprof_feedback",
	"option",
	{ (void *)mercury_data_mdprof_feedback__enum_name_ordered_option_0 },
	{ (void *)mercury_data_mdprof_feedback__enum_value_ordered_option_0 },
	7,
	4,
	mercury_data_mdprof_feedback__functor_number_map_option_0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_measure_type_0_0 = {
	"average",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_measure_type_0_1 = {
	"median",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_feedback__enum_value_ordered_measure_type_0[] = {
	&mercury_data_mdprof_feedback__enum_functor_desc_measure_type_0_0,
	&mercury_data_mdprof_feedback__enum_functor_desc_measure_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_feedback__enum_name_ordered_measure_type_0[] = {
	&mercury_data_mdprof_feedback__enum_functor_desc_measure_type_0_0,
	&mercury_data_mdprof_feedback__enum_functor_desc_measure_type_0_1
};

const MR_Integer mercury_data_mdprof_feedback__functor_number_map_measure_type_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_feedback__type_ctor_info_measure_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_feedback__measure_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_feedback__measure_type_0_0)),
	"mdprof_feedback",
	"measure_type",
	{ (void *)mercury_data_mdprof_feedback__enum_name_ordered_measure_type_0 },
	{ (void *)mercury_data_mdprof_feedback__enum_value_ordered_measure_type_0 },
	2,
	4,
	mercury_data_mdprof_feedback__functor_number_map_measure_type_0
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_feedback__compute_css_list_above_threshold_6_0_1 = {
{
MR_PREDICATE,
"mdprof_feedback",
"mdprof_feedback",
"sum_callseqs_csd_ptr",
4,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
184,
"d1;c9;e;c6;e;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_feedback__compute_css_list_above_threshold_6_0_2 = {
{
MR_PREDICATE,
"mdprof_feedback",
"mdprof_feedback",
"compare_csd_ptr",
4,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
190,
"d1;c9;e;c6;e;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"mdprof_feedback",
"mdprof_feedback",
"short",
2,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
55,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"mdprof_feedback",
"mdprof_feedback",
"long",
2,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
55,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"mdprof_feedback",
"mdprof_feedback",
"defaults",
2,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
55,
"d1;c9;"
};

MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(mdprof_feedback_module0)
	MR_init_entry1(mdprof_feedback__write_help_message_3_0);
	MR_init_label8(mdprof_feedback__write_help_message_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(mdprof_feedback__write_help_message_3_0,10,11,12,13,14,15,16,17)
	MR_init_label1(mdprof_feedback__write_help_message_3_0,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__write_help_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("Usage: %s [<options>] <input> <output>\n", 39);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i2);
MR_def_label(mdprof_feedback__write_help_message_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<input> must name a deep profiling data file.\n", 46);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i3);
MR_def_label(mdprof_feedback__write_help_message_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<output> is the file generated by this program.\n", 48);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i4);
MR_def_label(mdprof_feedback__write_help_message_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("You may specify one of the following options:\n", 46);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i5);
MR_def_label(mdprof_feedback__write_help_message_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("--help      Generate this help message.\n", 40);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i6);
MR_def_label(mdprof_feedback__write_help_message_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("--version   Report the program\'s version number.\n", 49);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i7);
MR_def_label(mdprof_feedback__write_help_message_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("--verbose   Generate progress messages.\n", 40);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i8);
MR_def_label(mdprof_feedback__write_help_message_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("--threshold <value>\n", 20);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i9);
MR_def_label(mdprof_feedback__write_help_message_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("            Set the threshold to <value>.\n", 42);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i10);
MR_def_label(mdprof_feedback__write_help_message_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("--measure average|median\n", 25);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i11);
MR_def_label(mdprof_feedback__write_help_message_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("            average : Write to <output> the call sites\n", 55);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i12);
MR_def_label(mdprof_feedback__write_help_message_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("            static whose call sites dynamic\'s average\n", 54);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i13);
MR_def_label(mdprof_feedback__write_help_message_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("            call sequence counts exceed the given\n", 50);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i14);
MR_def_label(mdprof_feedback__write_help_message_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("            threshold (default option).\n", 40);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i15);
MR_def_label(mdprof_feedback__write_help_message_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("            median : Write to <output> the call sites\n", 54);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i16);
MR_def_label(mdprof_feedback__write_help_message_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("            static whose call sites dynamic\'s median\n", 53);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i17);
MR_def_label(mdprof_feedback__write_help_message_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("            call sequence counts exceed the given\n", 50);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_feedback__write_help_message_3_0_i18);
MR_def_label(mdprof_feedback__write_help_message_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("            threshold.\n", 23);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__format_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__version_1_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(mdprof_feedback_module1)
	MR_init_entry1(mdprof_feedback__write_version_message_3_0);
	MR_init_label5(mdprof_feedback__write_version_message_3_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__write_version_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(library__version_1_0,
		mdprof_feedback__write_version_message_3_0_i2);
MR_def_label(mdprof_feedback__write_version_message_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_feedback__write_version_message_3_0_i3);
MR_def_label(mdprof_feedback__write_version_message_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": Mercury deep profiler", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_feedback__write_version_message_3_0_i4);
MR_def_label(mdprof_feedback__write_version_message_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdprof_feedback__write_version_message_3_0_i5);
MR_def_label(mdprof_feedback__write_version_message_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_feedback__write_version_message_3_0_i6);
MR_def_label(mdprof_feedback__write_version_message_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(conf__server_name_port_3_0);
MR_decl_entry(conf__script_name_3_0);
MR_decl_entry(startup__read_and_startup_10_0);
MR_decl_entry(io__stdout_stream_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module2)
	MR_init_entry1(mdprof_feedback__read_deep_file_7_0);
	MR_init_label4(mdprof_feedback__read_deep_file_7_0,2,3,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__read_deep_file_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(conf__server_name_port_3_0,
		mdprof_feedback__read_deep_file_7_0_i2);
MR_def_label(mdprof_feedback__read_deep_file_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(conf__script_name_3_0,
		mdprof_feedback__read_deep_file_7_0_i3);
MR_def_label(mdprof_feedback__read_deep_file_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(mdprof_feedback__read_deep_file_7_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(startup__read_and_startup_10_0);
	}
MR_def_label(mdprof_feedback__read_deep_file_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		mdprof_feedback__read_deep_file_7_0_i6);
MR_def_label(mdprof_feedback__read_deep_file_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(startup__read_and_startup_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_call_site_dynamics_3_0);
MR_decl_entry(profile__lookup_csd_desc_3_0);
MR_decl_entry(fn__measurements__callseqs_1_0);
MR_decl_entry(fn__measurements__inherit_callseqs_1_0);

MR_BEGIN_MODULE(mdprof_feedback_module3)
	MR_init_entry1(mdprof_feedback__sum_callseqs_csd_ptr_4_0);
	MR_init_label4(mdprof_feedback__sum_callseqs_csd_ptr_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__sum_callseqs_csd_ptr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		mdprof_feedback__sum_callseqs_csd_ptr_4_0_i2);
MR_def_label(mdprof_feedback__sum_callseqs_csd_ptr_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 18);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(profile__lookup_csd_desc_3_0,
		mdprof_feedback__sum_callseqs_csd_ptr_4_0_i3);
MR_def_label(mdprof_feedback__sum_callseqs_csd_ptr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		mdprof_feedback__sum_callseqs_csd_ptr_4_0_i4);
MR_def_label(mdprof_feedback__sum_callseqs_csd_ptr_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		mdprof_feedback__sum_callseqs_csd_ptr_4_0_i5);
MR_def_label(mdprof_feedback__sum_callseqs_csd_ptr_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;
MR_decl_entry(array__size_2_0);
MR_decl_entry(fn__array__lookup_2_0);
MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(list__length_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldr_4_1);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(list__sort_3_0);
MR_decl_entry(list__index0_det_3_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(mdprof_feedback_module4)
	MR_init_entry1(mdprof_feedback__compute_css_list_above_threshold_6_0);
	MR_init_label8(mdprof_feedback__compute_css_list_above_threshold_6_0,43,2,3,4,5,6,7,8)
	MR_init_label8(mdprof_feedback__compute_css_list_above_threshold_6_0,12,11,14,15,16,17,18,20)
	MR_init_label2(mdprof_feedback__compute_css_list_above_threshold_6_0,21,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__compute_css_list_above_threshold_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_ctfield(0, MR_r2, 7);
	MR_np_call_localret_ent(array__size_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i2);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i3);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 15);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__array__lookup_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i4);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__values_1_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i5);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i6);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i7);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i8);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i18);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_feedback__sum_callseqs_csd_ptr_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldr_4_1,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i12);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i17);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_feedback__compare_csd_ptr_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	}
	MR_np_call_localret_ent(list__sort_3_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i14);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i15);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__index0_det_3_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i16);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdprof_feedback__sum_callseqs_csd_ptr_4_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i17);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i19);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_ctfield(0, MR_sv(2), 7);
	MR_np_call_localret_ent(fn__array__lookup_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i20);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i21);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i43);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i43);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_proc_statics_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__write_int_4_0);
MR_decl_entry(io__format_5_0);

MR_BEGIN_MODULE(mdprof_feedback_module5)
	MR_init_entry1(mdprof_feedback__write_css_list_5_0);
	MR_init_label8(mdprof_feedback__write_css_list_5_0,43,4,5,6,7,8,16,14)
	MR_init_label5(mdprof_feedback__write_css_list_5_0,12,11,19,20,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__write_css_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mdprof_feedback__write_css_list_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_feedback__write_css_list_5_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 8);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		mdprof_feedback__write_css_list_5_0_i4);
MR_def_label(mdprof_feedback__write_css_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_feedback__write_css_list_5_0_i5);
MR_def_label(mdprof_feedback__write_css_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__write_css_list_5_0_i6);
MR_def_label(mdprof_feedback__write_css_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(io__write_int_4_0,
		mdprof_feedback__write_css_list_5_0_i7);
MR_def_label(mdprof_feedback__write_css_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__write_css_list_5_0_i8);
MR_def_label(mdprof_feedback__write_css_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_feedback__write_css_list_5_0_i11);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(mdprof_feedback__write_css_list_5_0_i12);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),1)) {
		MR_GOTO_LAB(mdprof_feedback__write_css_list_5_0_i14);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),2)) {
		MR_GOTO_LAB(mdprof_feedback__write_css_list_5_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("callback\n", 9);
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__write_css_list_5_0_i20);
MR_def_label(mdprof_feedback__write_css_list_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("method_call\n", 12);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__write_css_list_5_0_i20);
MR_def_label(mdprof_feedback__write_css_list_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("higher_order_call\n", 18);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__write_css_list_5_0_i20);
MR_def_label(mdprof_feedback__write_css_list_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("special_call\n", 13);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__write_css_list_5_0_i20);
MR_def_label(mdprof_feedback__write_css_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 8);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		mdprof_feedback__write_css_list_5_0_i19);
MR_def_label(mdprof_feedback__write_css_list_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("normal_call %s\n", 15);
	}
	MR_np_call_localret_ent(io__format_5_0,
		mdprof_feedback__write_css_list_5_0_i20);
MR_def_label(mdprof_feedback__write_css_list_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mdprof_feedback__write_css_list_5_0_i43);
MR_def_label(mdprof_feedback__write_css_list_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(fn__io__error_message_1_0);

MR_BEGIN_MODULE(mdprof_feedback_module6)
	MR_init_entry1(mdprof_feedback__generate_feedback_file_7_0);
	MR_init_label8(mdprof_feedback__generate_feedback_file_7_0,2,5,6,9,8,10,7,11)
	MR_init_label5(mdprof_feedback__generate_feedback_file_7_0,12,4,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__generate_feedback_file_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(io__open_output_4_0,
		mdprof_feedback__generate_feedback_file_7_0_i2);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_feedback__generate_feedback_file_7_0_i4);
	}
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("Profiling feedback file\n", 24);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__generate_feedback_file_7_0_i5);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("Version = 1.0\n", 14);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__generate_feedback_file_7_0_i6);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(mdprof_feedback__generate_feedback_file_7_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("Measure = average\n", 18);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__generate_feedback_file_7_0_i9);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("Threshold = %i\n", 15);
	MR_GOTO_LAB(mdprof_feedback__generate_feedback_file_7_0_i7);
	}
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("Measure = median\n", 17);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__generate_feedback_file_7_0_i10);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("Threshold = %i\n", 15);
	}
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(io__format_5_0,
		mdprof_feedback__generate_feedback_file_7_0_i11);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdprof_feedback__write_css_list_5_0,
		mdprof_feedback__generate_feedback_file_7_0_i12);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__close_output_3_0);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mdprof_feedback__generate_feedback_file_7_0_i14);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		mdprof_feedback__generate_feedback_file_7_0_i15);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_feedback__generate_feedback_file_7_0_i16);
MR_def_label(mdprof_feedback__generate_feedback_file_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module7)
	MR_init_entry1(mdprof_feedback__construct_measure_2_0);
	MR_init_label2(mdprof_feedback__construct_measure_2_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__construct_measure_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("average", 7)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__construct_measure_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__construct_measure_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("median", 6)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__construct_measure_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__construct_measure_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(getopt__lookup_bool_option_3_0);
MR_decl_entry(getopt__lookup_string_option_3_0);
MR_decl_entry(getopt__lookup_int_option_3_0);
MR_decl_entry(getopt__lookup_accumulating_option_3_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module8)
	MR_init_entry1(main_2_0);
	MR_init_label8(main_2_0,2,3,4,7,8,9,57,12)
	MR_init_label8(main_2_0,19,22,24,25,26,27,28,31)
	MR_init_label8(main_2_0,30,33,34,21,15,6,44,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("mdprof_feedback", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i3);
MR_def_label(main_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,1,1);
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i4);
MR_def_label(main_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(main_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i7);
MR_def_label(main_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i8);
MR_def_label(main_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_feedback__write_version_message_3_0);
MR_def_label(main_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(main_2_0_i12);
	}
MR_def_label(main_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_feedback__write_help_message_3_0);
MR_def_label(main_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(main_2_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(main_2_0_i15);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(main_2_0_i15);
	}
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 4;
	}
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		main_2_0_i19);
MR_def_label(main_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdprof_feedback__construct_measure_2_0,
		main_2_0_i22);
MR_def_label(main_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(main_2_0_i21);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		main_2_0_i24);
MR_def_label(main_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i25);
MR_def_label(main_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 5;
	MR_np_call_localret_ent(getopt__lookup_accumulating_option_3_0,
		main_2_0_i26);
MR_def_label(main_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r3 = (MR_Integer) 6;
	MR_np_call_localret_ent(getopt__lookup_accumulating_option_3_0,
		main_2_0_i27);
MR_def_label(main_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdprof_feedback__read_deep_file_7_0,
		main_2_0_i28);
MR_def_label(main_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(main_2_0_i30);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdprof_feedback__compute_css_list_above_threshold_6_0,
		main_2_0_i31);
MR_def_label(main_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_feedback__generate_feedback_file_7_0);
MR_def_label(main_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i33);
MR_def_label(main_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i34);
MR_def_label(main_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("%s: error reading deep file: %s\n", 32);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__format_5_0);
	}
MR_def_label(main_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i57);
MR_def_label(main_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i57);
MR_def_label(main_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i44);
MR_def_label(main_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i45);
MR_def_label(main_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("%s: error parsing options: %s\n", 30);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__format_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module9)
	MR_init_entry1(mdprof_feedback__compare_csd_ptr_4_0);
	MR_init_label2(mdprof_feedback__compare_csd_ptr_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__compare_csd_ptr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdprof_feedback__sum_callseqs_csd_ptr_4_0,
		mdprof_feedback__compare_csd_ptr_4_0_i2);
MR_def_label(mdprof_feedback__compare_csd_ptr_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdprof_feedback__sum_callseqs_csd_ptr_4_0,
		mdprof_feedback__compare_csd_ptr_4_0_i3);
MR_def_label(mdprof_feedback__compare_csd_ptr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module10)
	MR_init_entry1(mdprof_feedback__short_2_0);
	MR_init_label7(mdprof_feedback__short_2_0,3,4,5,6,7,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__short_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,68)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i3);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,86)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i4);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,100)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i5);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,104)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i6);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,109)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i7);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,116)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i8);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i1);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module11)
	MR_init_entry1(mdprof_feedback__long_2_0);
	MR_init_label7(mdprof_feedback__long_2_0,3,4,5,6,7,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__long_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("dump-options", 12)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__long_2_0_i3);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("dump-stages", 11)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__long_2_0_i4);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("help", 4)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__long_2_0_i5);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("measure", 7)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__long_2_0_i6);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("threshold", 9)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__long_2_0_i7);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__long_2_0_i8);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("version", 7)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__long_2_0_i1);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mdprof_feedback_module12)
	MR_init_entry1(mdprof_feedback__defaults_2_0);
	MR_init_label3(mdprof_feedback__defaults_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdprof_feedback.defaults/2-0", 1,
		MR_LABEL_AP(mdprof_feedback__defaults_2_0_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_0, (MR_Integer) 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdprof_feedback__defaults_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,12)) {
		MR_GOTO_LAB(mdprof_feedback__defaults_2_0_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdprof_feedback__defaults_2_0_i4);
MR_def_label(mdprof_feedback__defaults_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdprof_feedback__defaults_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_0, MR_r3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module13)
	MR_init_entry1(__Unify___mdprof_feedback__measure_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_feedback__measure_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module14)
	MR_init_entry1(__Compare___mdprof_feedback__measure_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_feedback__measure_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module15)
	MR_init_entry1(__Unify___mdprof_feedback__option_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_feedback__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module16)
	MR_init_entry1(__Compare___mdprof_feedback__option_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_feedback__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdprof_feedback_module17)
	MR_init_entry1(__Unify___mdprof_feedback__option_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_feedback__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
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

MR_BEGIN_MODULE(mdprof_feedback_module18)
	MR_init_entry1(__Compare___mdprof_feedback__option_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_feedback__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
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

static void mercury__mdprof_feedback_maybe_bunch_0(void)
{
	mdprof_feedback_module0();
	mdprof_feedback_module1();
	mdprof_feedback_module2();
	mdprof_feedback_module3();
	mdprof_feedback_module4();
	mdprof_feedback_module5();
	mdprof_feedback_module6();
	mdprof_feedback_module7();
	mdprof_feedback_module8();
	mdprof_feedback_module9();
	mdprof_feedback_module10();
	mdprof_feedback_module11();
	mdprof_feedback_module12();
	mdprof_feedback_module13();
	mdprof_feedback_module14();
	mdprof_feedback_module15();
	mdprof_feedback_module16();
	mdprof_feedback_module17();
	mdprof_feedback_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_feedback__init(void);
void mercury__mdprof_feedback__init_type_tables(void);
void mercury__mdprof_feedback__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_feedback__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_feedback__init_complexity_procs(void);
#endif

void mercury__mdprof_feedback__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_feedback_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_feedback__type_ctor_info_option_table_0,
		mdprof_feedback__option_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_feedback__type_ctor_info_option_0,
		mdprof_feedback__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_feedback__type_ctor_info_measure_type_0,
		mdprof_feedback__measure_type_0_0);
	mercury__mdprof_feedback__init_debugger();
}

void mercury__mdprof_feedback__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_feedback__type_ctor_info_option_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_feedback__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_feedback__type_ctor_info_measure_type_0);
	}
}


void mercury__mdprof_feedback__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_feedback__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_feedback__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
