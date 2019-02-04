/*
** Automatically generated from `mdprof_feedback.m'
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
INIT mercury__mdprof_feedback__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "mdprof_feedback.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "mdprof_feedback.c"
#line 166 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 35 "mdprof_feedback.c"
#line 256 "profile.int"
#include "profile.mh"

#line 39 "mdprof_feedback.c"
#line 132 "../library/array.int"
#include "array.mh"

#line 43 "mdprof_feedback.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "mdprof_feedback.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "mdprof_feedback.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 55 "mdprof_feedback.c"
#line 56 "mdprof_feedback.c"
#include "mdprof_feedback.mh"

#line 59 "mdprof_feedback.c"
#line 60 "mdprof_feedback.c"
#ifndef MDPROF_FEEDBACK_DECL_GUARD
#define MDPROF_FEEDBACK_DECL_GUARD

#line 64 "mdprof_feedback.c"
#line 65 "mdprof_feedback.c"

#endif
#line 68 "mdprof_feedback.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1[16];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_String f2[5];
	MR_Integer f3[4];
	MR_String f4;
	MR_Integer f5[2];
	MR_String f6[2];
	MR_Integer f7;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_vector_common_11_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_feedback__type_ctor_info_requested_feedback_info_0,
	mercury_data_mdprof_feedback__type_ctor_info_option_0,
	mercury_data_mdprof_feedback__type_ctor_info_calls_above_threshold_sorted_opts_0;
MR_decl_label8(mdprof_feedback__check_options_2_0, 3,5,2,6,7,9,10,12)
MR_decl_label2(mdprof_feedback__check_options_2_0, 16,1)
MR_decl_label2(mdprof_feedback__compare_csd_ptr_4_0, 2,3)
MR_decl_label8(mdprof_feedback__compute_css_list_above_threshold_6_0, 48,2,3,6,7,8,9,10)
MR_decl_label8(mdprof_feedback__compute_css_list_above_threshold_6_0, 15,13,18,19,20,21,22,24)
MR_decl_label2(mdprof_feedback__compute_css_list_above_threshold_6_0, 26,23)
MR_decl_label6(mdprof_feedback__css_to_call_3_0, 2,10,11,6,8,14)
MR_decl_label3(mdprof_feedback__defaults_2_0, 10,11,12)
MR_decl_label8(mdprof_feedback__long_2_0, 3,15,5,6,7,8,9,10)
MR_decl_label3(mdprof_feedback__long_2_0, 11,12,13)
MR_decl_label8(main_2_0, 2,3,8,11,12,10,19,20)
MR_decl_label8(main_2_0, 21,22,23,90,26,36,38,39)
MR_decl_label8(main_2_0, 42,43,41,49,50,51,108,55)
MR_decl_label3(main_2_0, 60,30,9)
MR_decl_label3(mdprof_feedback__process_deep_to_feedback_4_0, 16,4,6)
MR_decl_label4(mdprof_feedback__read_deep_file_5_0, 2,3,5,7)
MR_decl_label4(mdprof_feedback__short_2_0, 3,4,5,1)
MR_decl_label4(mdprof_feedback__sum_callseqs_csd_ptr_4_0, 2,3,4,5)
MR_decl_label2(mdprof_feedback__write_help_message_3_0, 28,29)
MR_decl_label5(mdprof_feedback__write_version_message_3_0, 2,3,4,5,6)
MR_decl_label2(__Unify___mdprof_feedback__calls_above_threshold_sorted_opts_0_0, 4,1)
MR_decl_label1(__Unify___mdprof_feedback__requested_feedback_info_0_0, 6)
MR_decl_label4(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0, 3,2,5,21)
MR_decl_label2(__Compare___mdprof_feedback__requested_feedback_info_0_0, 3,2)
MR_decl_static(mdprof_feedback__write_help_message_3_0)
MR_decl_static(mdprof_feedback__write_version_message_3_0)
MR_decl_static(mdprof_feedback__read_deep_file_5_0)
MR_decl_static(mdprof_feedback__check_options_2_0)
MR_decl_static(mdprof_feedback__sum_callseqs_csd_ptr_4_0)
MR_decl_static(mdprof_feedback__compute_css_list_above_threshold_6_0)
MR_decl_static(mdprof_feedback__process_deep_to_feedback_4_0)
MR_def_extern_entry(main_2_0)
MR_decl_static(mdprof_feedback__short_2_0)
MR_decl_static(mdprof_feedback__long_2_0)
MR_decl_static(mdprof_feedback__defaults_2_0)
MR_decl_static(mdprof_feedback__compare_csd_ptr_4_0)
MR_decl_static(mdprof_feedback__css_to_call_3_0)
MR_decl_static(__Unify___mdprof_feedback__calls_above_threshold_sorted_opts_0_0)
MR_decl_static(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0)
MR_decl_static(__Unify___mdprof_feedback__option_0_0)
MR_decl_static(__Compare___mdprof_feedback__option_0_0)
MR_decl_static(__Unify___mdprof_feedback__requested_feedback_info_0_0)
MR_decl_static(__Compare___mdprof_feedback__requested_feedback_info_0_0)

static const struct mercury_type_0 mercury_common_0[26] =
{
{
MR_string_const("               median : Use median(call site dynamic cost).", 59),
MR_tbmkword(0, 0)
},
{
MR_string_const("                      default.", 30),
MR_TAG_COMMON(1,0,0)
},
{
MR_string_const("               mean : Use mean(call site dynamic cost), this is the", 67),
MR_TAG_COMMON(1,0,1)
},
{
MR_string_const("   --calls-above-threshold-sorted-measure mean|median", 53),
MR_TAG_COMMON(1,0,2)
},
{
MR_string_const("               Set the threshold to <value>.", 44),
MR_TAG_COMMON(1,0,3)
},
{
MR_string_const("   --calls-above-threshold-sorted-threshold <value>", 51),
MR_TAG_COMMON(1,0,4)
},
{
MR_string_const("               \'typical\' may be specified.", 42),
MR_TAG_COMMON(1,0,5)
},
{
MR_string_const("               counts is above a given threshold, the definition of", 67),
MR_TAG_COMMON(1,0,6)
},
{
MR_string_const("               A list of calls whose typical cost (in call sequence", 67),
MR_TAG_COMMON(1,0,7)
},
{
MR_string_const("   --calls-above-threshold-sorted", 33),
MR_TAG_COMMON(1,0,8)
},
{
MR_string_const("information and parameterise them", 33),
MR_TAG_COMMON(1,0,9)
},
{
MR_string_const("\nThe following options select specific types of feedback", 56),
MR_TAG_COMMON(1,0,10)
},
{
MR_string_const("   --implicit-parallelism", 25),
MR_TAG_COMMON(1,0,11)
},
{
MR_string_const("for particular compiler optimizations", 37),
MR_TAG_COMMON(1,0,12)
},
{
MR_string_const("\nThe following options select sets of feedback information useful", 65),
MR_TAG_COMMON(1,0,13)
},
{
MR_string_const("               feedback file", 28),
MR_TAG_COMMON(1,0,14)
},
{
MR_string_const("               profiling data.  This is stored in the", 53),
MR_TAG_COMMON(1,0,15)
},
{
MR_string_const("               The name of the program that generated the", 57),
MR_TAG_COMMON(1,0,16)
},
{
MR_string_const("   --program-name <name>", 24),
MR_TAG_COMMON(1,0,17)
},
{
MR_string_const("   --verbose   Generate progress messages.", 42),
MR_TAG_COMMON(1,0,18)
},
{
MR_string_const("   --version   Report the program\'s version number.", 51),
MR_TAG_COMMON(1,0,19)
},
{
MR_string_const("   --help      Generate this help message.", 42),
MR_TAG_COMMON(1,0,20)
},
{
MR_string_const("   You may specify the following options:", 41),
MR_TAG_COMMON(1,0,21)
},
{
MR_string_const("   <output> is the file generated by this program.", 50),
MR_TAG_COMMON(1,0,22)
},
{
MR_string_const("   <input> must name a deep profiling data file.", 48),
MR_TAG_COMMON(1,0,23)
},
{
MR_string_const("Usage: %s --program-name <ProgName> [<options>] <input> <output>", 64),
MR_TAG_COMMON(1,0,24)
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
100000
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const struct mercury_type_2 mercury_common_2[1] =
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
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,2,0)
}
},
{
{
MR_TAG_COMMON(0,7,0),
MR_TAG_COMMON(0,7,1),
MR_TAG_COMMON(0,7,2)
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
static const struct mercury_type_4 mercury_common_4[2] =
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
mercury_data__closure_layout__mdprof_feedback__process_deep_to_feedback_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_feedback__process_deep_to_feedback_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_static),
MR_CTOR0_ADDR(mdbcomp__program_representation, call_site)
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
static const struct mercury_type_6 mercury_common_6[3] =
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

static const struct mercury_type_7 mercury_common_7[3] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(mdprof_feedback__short_2_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(mdprof_feedback__long_2_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(mdprof_feedback__defaults_2_0),
0
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
-2,
-1,
-1,
1,
-1,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
4,
-1,
-2
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
0,
{
MR_string_const("calls-above-threshold-sorted", 28),
MR_string_const("program-name", 12),
MR_string_const("calls-above-threshold-sorted-threshold", 38),
MR_string_const("verbose", 7),
MR_string_const("help", 4)
},
{
0,
0,
0,
0
},
MR_string_const("implicit-parallelism", 20),
{
0,
0
},
{
MR_string_const("version", 7),
MR_string_const("calls-above-threshold-sorted-measure", 36)
},
0
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
0,
MR_string_const("", 0)
},
{
0,
MR_string_const("mean", 4)
},
};

static const struct mercury_type_11 mercury_vector_common_11_0[8] =
{
{
0,
MR_TAG_COMMON(1,1,1)
},
{
1,
MR_TAG_COMMON(3,10,0)
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
MR_TAG_COMMON(3,10,1)
},
{
6,
MR_TAG_COMMON(2,1,2)
},
{
7,
MR_TAG_COMMON(1,1,1)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_feedback__type_ctor_info_calls_above_threshold_sorted_opts_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdprof_feedback__type_ctor_info_calls_above_threshold_sorted_opts_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdprof_feedback__type_ctor_info_calls_above_threshold_sorted_opts_0
}};

static const MR_NotagFunctorDesc mercury_data_mdprof_feedback__notag_functor_desc_requested_feedback_info_0 = {
	"requested_feedback_info",
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdprof_feedback__type_ctor_info_calls_above_threshold_sorted_opts_0,
	"maybe_calls_above_threshold_sorted"
};

const MR_Integer mercury_data_mdprof_feedback__functor_number_map_requested_feedback_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_feedback__type_ctor_info_requested_feedback_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_feedback__requested_feedback_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_feedback__requested_feedback_info_0_0)),
	"mdprof_feedback",
	"requested_feedback_info",
	{ (void *)&mercury_data_mdprof_feedback__notag_functor_desc_requested_feedback_info_0 },
	{ (void *)&mercury_data_mdprof_feedback__notag_functor_desc_requested_feedback_info_0 },
	1,
	4,
	mercury_data_mdprof_feedback__functor_number_map_requested_feedback_info_0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_0 = {
	"help",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_1 = {
	"program_name",
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
	"calls_above_threshold_sorted",
	4
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_5 = {
	"calls_above_threshold_sorted_measure",
	5
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_6 = {
	"calls_above_threshold_sorted_threshold",
	6
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_7 = {
	"implicit_parallelism",
	7
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_feedback__enum_value_ordered_option_0[] = {
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_3,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_7
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_feedback__enum_name_ordered_option_0[] = {
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_7,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_3
};

const MR_Integer mercury_data_mdprof_feedback__functor_number_map_option_0[] = {
	3,
	5,
	6,
	7,
	0,
	1,
	2,
	4 };
	
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
	8,
	4,
	mercury_data_mdprof_feedback__functor_number_map_option_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_stat_measure_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_stat_measure_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdprof_feedback__field_types_calls_above_threshold_sorted_opts_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__type_ctor_info_stat_measure_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdprof_feedback__field_names_calls_above_threshold_sorted_opts_0_0[] = {
	"measure",
	"threshold"
};

static const MR_DuFunctorDesc mercury_data_mdprof_feedback__du_functor_desc_calls_above_threshold_sorted_opts_0_0 = {
	"calls_above_threshold_sorted_opts",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_feedback__field_types_calls_above_threshold_sorted_opts_0_0,
	mercury_data_mdprof_feedback__field_names_calls_above_threshold_sorted_opts_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_feedback__du_stag_ordered_calls_above_threshold_sorted_opts_0_0[] = {
	&mercury_data_mdprof_feedback__du_functor_desc_calls_above_threshold_sorted_opts_0_0

};

const MR_DuPtagLayout mercury_data_mdprof_feedback__du_ptag_ordered_calls_above_threshold_sorted_opts_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_feedback__du_stag_ordered_calls_above_threshold_sorted_opts_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_feedback__du_name_ordered_calls_above_threshold_sorted_opts_0[] = {
	&mercury_data_mdprof_feedback__du_functor_desc_calls_above_threshold_sorted_opts_0_0
};

const MR_Integer mercury_data_mdprof_feedback__functor_number_map_calls_above_threshold_sorted_opts_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_feedback__type_ctor_info_calls_above_threshold_sorted_opts_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_feedback__calls_above_threshold_sorted_opts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0)),
	"mdprof_feedback",
	"calls_above_threshold_sorted_opts",
	{ (void *)mercury_data_mdprof_feedback__du_name_ordered_calls_above_threshold_sorted_opts_0 },
	{ (void *)mercury_data_mdprof_feedback__du_ptag_ordered_calls_above_threshold_sorted_opts_0 },
	1,
	4,
	mercury_data_mdprof_feedback__functor_number_map_calls_above_threshold_sorted_opts_0
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
376,
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
382,
"d1;c9;e;c6;e;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_feedback__process_deep_to_feedback_4_0_1 = {
{
MR_PREDICATE,
"mdprof_feedback",
"mdprof_feedback",
"css_to_call",
3,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
347,
"d1;c9;"
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
62,
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
62,
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
62,
"d1;c9;"
};

MR_decl_entry(fn__string__join_list_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(mdprof_feedback_module0)
	MR_init_entry1(mdprof_feedback__write_help_message_3_0);
	MR_init_label2(mdprof_feedback__write_help_message_3_0,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__write_help_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,25);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		mdprof_feedback__write_help_message_3_0_i28);
MR_def_label(mdprof_feedback__write_help_message_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_feedback__write_help_message_3_0_i29);
MR_def_label(mdprof_feedback__write_help_message_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__format_4_0);
	}
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
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
MR_decl_entry(startup__read_and_startup_9_0);
MR_decl_entry(io__stdout_stream_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module2)
	MR_init_entry1(mdprof_feedback__read_deep_file_5_0);
	MR_init_label4(mdprof_feedback__read_deep_file_5_0,2,3,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__read_deep_file_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(conf__server_name_port_3_0,
		mdprof_feedback__read_deep_file_5_0_i2);
MR_def_label(mdprof_feedback__read_deep_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(conf__script_name_3_0,
		mdprof_feedback__read_deep_file_5_0_i3);
MR_def_label(mdprof_feedback__read_deep_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(mdprof_feedback__read_deep_file_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(startup__read_and_startup_9_0);
	}
MR_def_label(mdprof_feedback__read_deep_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		mdprof_feedback__read_deep_file_5_0_i7);
MR_def_label(mdprof_feedback__read_deep_file_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(startup__read_and_startup_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt__lookup_bool_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
MR_decl_entry(svmap__set_4_0);
MR_decl_entry(getopt__lookup_string_option_3_0);
MR_decl_entry(getopt__lookup_int_option_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module3)
	MR_init_entry1(mdprof_feedback__check_options_2_0);
	MR_init_label8(mdprof_feedback__check_options_2_0,3,5,2,6,7,9,10,12)
	MR_init_label2(mdprof_feedback__check_options_2_0,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__check_options_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 7;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_feedback__check_options_2_0_i3);
MR_def_label(mdprof_feedback__check_options_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = (MR_Integer) 4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(svmap__set_4_0,
		mdprof_feedback__check_options_2_0_i5);
MR_def_label(mdprof_feedback__check_options_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i6);
MR_def_label(mdprof_feedback__check_options_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
MR_def_label(mdprof_feedback__check_options_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_feedback__check_options_2_0_i7);
MR_def_label(mdprof_feedback__check_options_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i9);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__check_options_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 5;
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		mdprof_feedback__check_options_2_0_i10);
MR_def_label(mdprof_feedback__check_options_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mean", 4)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = (MR_Integer) 6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	}
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_feedback__check_options_2_0_i16);
MR_def_label(mdprof_feedback__check_options_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("median", 6)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = (MR_Integer) 6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	}
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_feedback__check_options_2_0_i16);
MR_def_label(mdprof_feedback__check_options_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdprof_feedback__check_options_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_call_site_dynamics_3_0);
MR_decl_entry(profile__lookup_csd_desc_3_0);
MR_decl_entry(fn__measurements__callseqs_1_0);
MR_decl_entry(fn__measurements__inherit_callseqs_1_0);

MR_BEGIN_MODULE(mdprof_feedback_module4)
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
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
MR_decl_entry(list__foldr_4_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(list__sort_3_0);
MR_decl_entry(list__index0_det_3_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(mdprof_feedback_module5)
	MR_init_entry1(mdprof_feedback__compute_css_list_above_threshold_6_0);
	MR_init_label8(mdprof_feedback__compute_css_list_above_threshold_6_0,48,2,3,6,7,8,9,10)
	MR_init_label8(mdprof_feedback__compute_css_list_above_threshold_6_0,15,13,18,19,20,21,22,24)
	MR_init_label2(mdprof_feedback__compute_css_list_above_threshold_6_0,26,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__compute_css_list_above_threshold_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,48)
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
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 15);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__array__lookup_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i6);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i7);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i8);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i9);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i10);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i22);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_feedback__sum_callseqs_csd_ptr_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldr_4_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i15);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i21);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_feedback__compare_csd_ptr_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__sort_3_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i18);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i19);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i20);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdprof_feedback__sum_callseqs_csd_ptr_4_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i21);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i23);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_ctfield(0, MR_sv(2), 7);
	MR_np_call_localret_ent(fn__array__lookup_2_0,
		mdprof_feedback__compute_css_list_above_threshold_6_0_i24);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,24)
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
		mdprof_feedback__compute_css_list_above_threshold_6_0_i26);
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i48);
	}
MR_def_label(mdprof_feedback__compute_css_list_above_threshold_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(mdprof_feedback__compute_css_list_above_threshold_6_0_i48);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(mdbcomp__feedback__put_feedback_data_4_0);

MR_BEGIN_MODULE(mdprof_feedback_module6)
	MR_init_entry1(mdprof_feedback__process_deep_to_feedback_4_0);
	MR_init_label3(mdprof_feedback__process_deep_to_feedback_4_0,16,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__process_deep_to_feedback_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_feedback__process_deep_to_feedback_4_0_i16);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(mdprof_feedback__process_deep_to_feedback_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mdprof_feedback__compute_css_list_above_threshold_6_0,
		mdprof_feedback__process_deep_to_feedback_4_0_i4);
MR_def_label(mdprof_feedback__process_deep_to_feedback_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_feedback__css_to_call_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, call_site);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_feedback__process_deep_to_feedback_4_0_i6);
MR_def_label(mdprof_feedback__process_deep_to_feedback_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdbcomp__feedback__put_feedback_data_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(io__format_5_0);
MR_decl_entry(fn__string__strip_1_0);
MR_decl_entry(mdbcomp__feedback__read_or_create_4_0);
MR_decl_entry(mdbcomp__feedback__write_feedback_file_6_0);
MR_decl_entry(io__error_message_2_0);

MR_BEGIN_MODULE(mdprof_feedback_module7)
	MR_init_entry1(main_2_0);
	MR_init_label8(main_2_0,2,3,8,11,12,10,19,20)
	MR_init_label8(main_2_0,21,22,23,90,26,36,38,39)
	MR_init_label8(main_2_0,42,43,41,49,50,51,108,55)
	MR_init_label3(main_2_0,60,30,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,3,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i8);
MR_def_label(main_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(main_2_0_i10);
	}
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i11);
MR_def_label(main_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i12);
MR_def_label(main_2_0,12)
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
	}
	MR_np_call_localret_ent(io__format_5_0,
		main_2_0_i90);
MR_def_label(main_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i19);
MR_def_label(main_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i20);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		main_2_0_i21);
MR_def_label(main_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__strip_1_0,
		main_2_0_i22);
MR_def_label(main_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(main_2_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdprof_feedback__write_version_message_3_0);
MR_def_label(main_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(main_2_0_i26);
	}
MR_def_label(main_2_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdprof_feedback__write_help_message_3_0);
MR_def_label(main_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(main_2_0_i30);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(main_2_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(main_2_0_i30);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(main_2_0_i30);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdprof_feedback__check_options_2_0,
		main_2_0_i36);
MR_def_label(main_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(main_2_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i38);
MR_def_label(main_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_feedback__read_deep_file_5_0,
		main_2_0_i39);
MR_def_label(main_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i41);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i42);
MR_def_label(main_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i43);
MR_def_label(main_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("%s: error reading deep file: %s\n", 32);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__format_5_0);
	}
MR_def_label(main_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__feedback__read_or_create_4_0,
		main_2_0_i49);
MR_def_label(main_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_feedback__process_deep_to_feedback_4_0,
		main_2_0_i50);
MR_def_label(main_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__feedback__write_feedback_file_6_0,
		main_2_0_i51);
MR_def_label(main_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(main_2_0_i108);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(main_2_0_i9);
	}
	}
MR_def_label(main_2_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		main_2_0_i55);
MR_def_label(main_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_r1 = (MR_Word) MR_string_const("%s: %s\n", 7);
	}
	MR_np_call_localret_ent(io__format_4_0,
		main_2_0_i60);
MR_def_label(main_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(main_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i90);
MR_def_label(main_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module8)
	MR_init_entry1(mdprof_feedback__short_2_0);
	MR_init_label4(mdprof_feedback__short_2_0,3,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__short_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,86)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i3);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,104)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,112)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i5);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,5)
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


MR_BEGIN_MODULE(mdprof_feedback_module9)
	MR_init_entry1(mdprof_feedback__long_2_0);
	MR_init_label8(mdprof_feedback__long_2_0,3,15,5,6,7,8,9,10)
	MR_init_label3(mdprof_feedback__long_2_0,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__long_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 15);
MR_def_label(mdprof_feedback__long_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(9,0))[(MR_Integer) MR_r3];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(mdprof_feedback__long_2_0_i5);
	}
	MR_r3 = (MR_COMMON(8,0))[(MR_Integer) MR_r3];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(mdprof_feedback__long_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(mdprof_feedback__long_2_0_i15) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i13) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i8) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i11) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i7) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i10) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i15) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i15) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i15) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i15) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i9) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i15) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i15) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i6) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i12) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i15));
MR_def_label(mdprof_feedback__long_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mdprof_feedback_module10)
	MR_init_entry1(mdprof_feedback__defaults_2_0);
	MR_init_label3(mdprof_feedback__defaults_2_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdprof_feedback.defaults/2-0", 1,
		MR_LABEL_AP(mdprof_feedback__defaults_2_0_i10));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_11_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdprof_feedback__defaults_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,14)) {
		MR_GOTO_LAB(mdprof_feedback__defaults_2_0_i11);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdprof_feedback__defaults_2_0_i12);
MR_def_label(mdprof_feedback__defaults_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdprof_feedback__defaults_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_11_0, (MR_Integer) MR_r3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module11)
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdprof_feedback__sum_callseqs_csd_ptr_4_0,
		mdprof_feedback__compare_csd_ptr_4_0_i3);
MR_def_label(mdprof_feedback__compare_csd_ptr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_proc_statics_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module12)
	MR_init_entry1(mdprof_feedback__css_to_call_3_0);
	MR_init_label6(mdprof_feedback__css_to_call_3_0,2,10,11,6,8,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__css_to_call_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 8);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		mdprof_feedback__css_to_call_3_0_i2);
MR_def_label(mdprof_feedback__css_to_call_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(mdprof_feedback__css_to_call_3_0_i10);
	}
	MR_tempr3 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr3,0)) {
		MR_GOTO_LAB(mdprof_feedback__css_to_call_3_0_i14);
	}
	if (MR_INT_EQ(MR_tempr3,1)) {
		MR_GOTO_LAB(mdprof_feedback__css_to_call_3_0_i6);
	}
	if (MR_INT_EQ(MR_tempr3,2)) {
		MR_GOTO_LAB(mdprof_feedback__css_to_call_3_0_i8);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_ctfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_tempr4, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr4;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdprof_feedback__css_to_call_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_sv(2), 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 8);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(profile__lookup_proc_statics_3_0,
		mdprof_feedback__css_to_call_3_0_i11);
MR_def_label(mdprof_feedback__css_to_call_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdprof_feedback__css_to_call_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_sv(2), 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdprof_feedback__css_to_call_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_sv(2), 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdprof_feedback__css_to_call_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_sv(2), 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module13)
	MR_init_entry1(__Unify___mdprof_feedback__calls_above_threshold_sorted_opts_0_0);
	MR_init_label2(__Unify___mdprof_feedback__calls_above_threshold_sorted_opts_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_feedback__calls_above_threshold_sorted_opts_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_feedback__calls_above_threshold_sorted_opts_0_0_i4);
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
		MR_GOTO_LAB(__Unify___mdprof_feedback__calls_above_threshold_sorted_opts_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdprof_feedback__calls_above_threshold_sorted_opts_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_feedback__calls_above_threshold_sorted_opts_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module14)
	MR_init_entry1(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0);
	MR_init_label4(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0_i2);
MR_def_label(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0,2)
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
		__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0_i5);
MR_def_label(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdprof_feedback__calls_above_threshold_sorted_opts_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
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

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdprof_feedback_module17)
	MR_init_entry1(__Unify___mdprof_feedback__requested_feedback_info_0_0);
	MR_init_label1(__Unify___mdprof_feedback__requested_feedback_info_0_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_feedback__requested_feedback_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_feedback__requested_feedback_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, calls_above_threshold_sorted_opts);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdprof_feedback__requested_feedback_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdprof_feedback_module18)
	MR_init_entry1(__Compare___mdprof_feedback__requested_feedback_info_0_0);
	MR_init_label2(__Compare___mdprof_feedback__requested_feedback_info_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_feedback__requested_feedback_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_feedback__requested_feedback_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_feedback__requested_feedback_info_0_0_i2);
MR_def_label(__Compare___mdprof_feedback__requested_feedback_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_feedback__requested_feedback_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, calls_above_threshold_sorted_opts);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
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
void mercury__mdprof_feedback__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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
		mercury_data_mdprof_feedback__type_ctor_info_requested_feedback_info_0,
		mdprof_feedback__requested_feedback_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_feedback__type_ctor_info_option_0,
		mdprof_feedback__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_feedback__type_ctor_info_calls_above_threshold_sorted_opts_0,
		mdprof_feedback__calls_above_threshold_sorted_opts_0_0);
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
		&mercury_data_mdprof_feedback__type_ctor_info_requested_feedback_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_feedback__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_feedback__type_ctor_info_calls_above_threshold_sorted_opts_0);
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

void mercury__mdprof_feedback__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_feedback);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_feedback__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
