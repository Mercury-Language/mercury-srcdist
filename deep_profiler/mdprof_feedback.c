/*
** Automatically generated from `mdprof_feedback.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdprof_feedback__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "mdprof_feedback.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "mdprof_feedback.c"
#line 268 "profile.int"
#include "profile.mh"

#line 36 "mdprof_feedback.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "mdprof_feedback.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "mdprof_feedback.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "mdprof_feedback.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "mdprof_feedback.c"
#line 53 "mdprof_feedback.c"
#include "mdprof_feedback.mh"

#line 56 "mdprof_feedback.c"
#line 57 "mdprof_feedback.c"
#ifndef MDPROF_FEEDBACK_DECL_GUARD
#define MDPROF_FEEDBACK_DECL_GUARD

#line 61 "mdprof_feedback.c"
#line 62 "mdprof_feedback.c"

#endif
#line 65 "mdprof_feedback.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_6 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_vector_common_6_0[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_vector_common_8_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_feedback__type_ctor_info_option_0,
	mercury_data_mdprof_feedback__type_ctor_info_requested_feedback_info_0;
MR_decl_label5(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0, 2,4,5,6,8)
MR_decl_label10(mdprof_feedback__check_options_2_0, 2,4,6,7,3,8,10,11,14,13)
MR_decl_label10(mdprof_feedback__check_options_2_0, 12,16,18,19,9,22,24,26,28,27)
MR_decl_label9(mdprof_feedback__check_options_2_0, 30,32,33,34,35,36,37,38,40)
MR_decl_label2(mdprof_feedback__check_verbosity_option_2_0, 2,1)
MR_decl_label8(mdprof_feedback__create_feedback_report_2_0, 33,6,17,18,21,22,23,32)
MR_decl_label3(mdprof_feedback__defaults_2_0, 18,19,20)
MR_decl_label10(mdprof_feedback__long_2_0, 3,23,5,6,7,8,9,10,11,12)
MR_decl_label9(mdprof_feedback__long_2_0, 13,14,15,16,17,18,19,20,21)
MR_decl_label10(main_2_0, 2,3,4,9,12,13,14,15,11,18)
MR_decl_label10(main_2_0, 19,20,21,22,113,25,31,34,33,37)
MR_decl_label10(main_2_0, 28,44,45,47,50,51,52,53,54,55)
MR_decl_label10(main_2_0, 49,57,60,61,59,63,65,66,64,67)
MR_decl_label10(main_2_0, 71,72,73,74,75,76,77,79,80,81)
MR_decl_label5(main_2_0, 82,83,84,85,40)
MR_decl_label6(mdprof_feedback__print_feedback_report_4_0, 2,4,5,6,7,8)
MR_decl_label4(mdprof_feedback__process_deep_to_feedback_5_0, 3,2,7,6)
MR_decl_label4(mdprof_feedback__read_deep_file_5_0, 2,3,5,6)
MR_decl_label4(mdprof_feedback__short_2_0, 3,4,5,1)
MR_decl_label5(mdprof_feedback__write_version_message_3_0, 2,3,4,5,6)
MR_decl_label3(__Unify___mdprof_feedback__requested_feedback_info_0_0, 4,8,1)
MR_decl_label4(__Compare___mdprof_feedback__requested_feedback_info_0_0, 3,2,5,21)
MR_decl_static(mdprof_feedback__print_feedback_report_4_0)
MR_decl_static(mdprof_feedback__write_help_message_3_0)
MR_decl_static(mdprof_feedback__write_version_message_3_0)
MR_decl_static(mdprof_feedback__read_deep_file_5_0)
MR_decl_static(mdprof_feedback__check_verbosity_option_2_0)
MR_decl_static(mdprof_feedback__check_options_2_0)
MR_decl_static(mdprof_feedback__process_deep_to_feedback_5_0)
MR_def_extern_entry(main_2_0)
MR_decl_static(mdprof_feedback__create_feedback_report_2_0)
MR_decl_static(mdprof_feedback__short_2_0)
MR_decl_static(mdprof_feedback__long_2_0)
MR_decl_static(mdprof_feedback__defaults_2_0)
MR_decl_static(__Unify___mdprof_feedback__option_0_0)
MR_decl_static(__Compare___mdprof_feedback__option_0_0)
MR_decl_static(__Unify___mdprof_feedback__requested_feedback_info_0_0)
MR_decl_static(__Compare___mdprof_feedback__requested_feedback_info_0_0)
MR_decl_static(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0)

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_feedback__print_feedback_report_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_feedback__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_feedback__create_feedback_report_2_0_1;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_feedback__print_feedback_report_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data),
MR_STRING_CTOR_ADDR
},
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
{
(MR_Word *) &mercury_data__closure_layout__mdprof_feedback__create_feedback_report_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,2),
MR_COMMON(5,3)
},
};

MR_decl_entry(mdprof_fb__automatic_parallelism__create_candidate_parallel_conj_report_2_0);
static const struct mercury_type_1 mercury_common_1[5] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(mdprof_feedback__create_feedback_report_2_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(mdprof_feedback__short_2_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(mdprof_feedback__long_2_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(mdprof_feedback__defaults_2_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__create_candidate_parallel_conj_report_2_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[7] =
{
{
1
},
{
0
},
{
2
},
{
100
},
{
1000
},
{
100000
},
{
50000
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
MR_TAG_COMMON(0,1,1),
MR_TAG_COMMON(0,1,2),
MR_TAG_COMMON(0,1,3)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_TAG_COMMON(0,5,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_COMMON(5,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_6;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(io, output_stream),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(message, message),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_5,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(io, output_stream),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(message, message),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_6,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(io, output_stream),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(message, message),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_pard_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_pard_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
MR_CTOR1_ADDR(mdbcomp__feedback, candidate_par_conjunction),
MR_CTOR0_ADDR(mdbcomp__feedback, pard_goal)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback, candidate_par_conjunction),
MR_CTOR0_ADDR(mdbcomp__feedback, pard_goal)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_STRING_CTOR_ADDR
}
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
0,
MR_string_const("mean", 4)
},
{
0,
MR_string_const("4.0", 3)
},
};

static const struct mercury_type_6 mercury_vector_common_6_0[32] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("desired-parallelism", 19),
-1
},
{
MR_string_const("implicit-parallelism-clique-cost-threshold", 42),
-1
},
{
MR_string_const("calls-above-threshold-sorted", 28),
-1
},
{
MR_string_const("calls-above-threshold-sorted-measure", 36),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("implicit-parallelism-call-site-cost-threshold", 45),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("report", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("implicit-parallelism", 20),
1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("implicit-parallelism-sparking-cost", 34),
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
MR_string_const("implicit-parallelism-dependant-conjunctions", 43),
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
MR_string_const("verbosity", 9),
-1
},
{
MR_string_const("implicit-parallelism-sparking-delay", 35),
3
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("help", 4),
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
MR_string_const("debug-read-profile", 18),
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
MR_string_const("version", 7),
-1
},
{
MR_string_const("candidate-parallel-conjunctions", 31),
4
},
{
MR_string_const("implicit-parallelism-locking-cost", 33),
-1
},
};

static const struct mercury_type_8 mercury_vector_common_8_0[16] =
{
{
0,
MR_TAG_COMMON(1,2,1)
},
{
2,
MR_TAG_COMMON(2,2,2)
},
{
1,
MR_TAG_COMMON(1,2,1)
},
{
3,
MR_TAG_COMMON(1,2,1)
},
{
4,
MR_TAG_COMMON(1,2,1)
},
{
5,
MR_TAG_COMMON(1,2,1)
},
{
6,
MR_TAG_COMMON(3,7,0)
},
{
7,
MR_TAG_COMMON(1,2,1)
},
{
8,
MR_TAG_COMMON(1,2,1)
},
{
9,
MR_TAG_COMMON(3,7,1)
},
{
10,
MR_TAG_COMMON(2,2,3)
},
{
11,
MR_TAG_COMMON(2,2,4)
},
{
12,
MR_TAG_COMMON(2,2,3)
},
{
13,
MR_TAG_COMMON(2,2,5)
},
{
14,
MR_TAG_COMMON(2,2,6)
},
{
15,
MR_TAG_COMMON(1,2,1)
},
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_0 = {
	"help",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_1 = {
	"version",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_2 = {
	"verbosity",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_3 = {
	"debug_read_profile",
	3
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_4 = {
	"report",
	4
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_5 = {
	"calls_above_threshold_sorted",
	5
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_6 = {
	"calls_above_threshold_sorted_measure",
	6
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_7 = {
	"candidate_parallel_conjunctions",
	7
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_8 = {
	"implicit_parallelism",
	8
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_9 = {
	"desired_parallelism",
	9
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_10 = {
	"implicit_parallelism_sparking_cost",
	10
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_11 = {
	"implicit_parallelism_sparking_delay",
	11
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_12 = {
	"implicit_parallelism_locking_cost",
	12
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_13 = {
	"implicit_parallelism_clique_cost_threshold",
	13
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_14 = {
	"implicit_parallelism_call_site_cost_threshold",
	14
};

static const MR_EnumFunctorDesc mercury_data_mdprof_feedback__enum_functor_desc_option_0_15 = {
	"implicit_parallelism_dependant_conjunctions",
	15
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_feedback__enum_value_ordered_option_0[] = {
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_3,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_7,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_8,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_9,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_10,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_11,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_12,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_13,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_14,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_15
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_feedback__enum_name_ordered_option_0[] = {
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_7,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_3,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_9,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_8,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_14,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_13,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_15,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_12,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_10,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_11,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_feedback__enum_functor_desc_option_0_1
};

const MR_Integer mercury_data_mdprof_feedback__functor_number_map_option_0[] = {
	5,
	15,
	14,
	3,
	13,
	0,
	1,
	2,
	6,
	4,
	11,
	12,
	10,
	8,
	7,
	9 };
	
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
	16,
	4,
	mercury_data_mdprof_feedback__functor_number_map_option_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_calls_above_threshold_sorted_opts_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_calls_above_threshold_sorted_opts_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdprof_fb__automatic_parallelism__type_ctor_info_calls_above_threshold_sorted_opts_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_calls_above_threshold_sorted_opts_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0
}};

const MR_PseudoTypeInfo mercury_data_mdprof_feedback__field_types_requested_feedback_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdprof_fb__automatic_parallelism__type_ctor_info_calls_above_threshold_sorted_opts_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdprof_fb__automatic_parallelism__type_ctor_info_candidate_parallel_conjunctions_opts_0
};

const MR_ConstString mercury_data_mdprof_feedback__field_names_requested_feedback_info_0_0[] = {
	"maybe_calls_above_threshold_sorted",
	"maybe_candidate_parallel_conjunctions"
};

static const MR_DuFunctorDesc mercury_data_mdprof_feedback__du_functor_desc_requested_feedback_info_0_0 = {
	"requested_feedback_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_feedback__field_types_requested_feedback_info_0_0,
	mercury_data_mdprof_feedback__field_names_requested_feedback_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_feedback__du_stag_ordered_requested_feedback_info_0_0[] = {
	&mercury_data_mdprof_feedback__du_functor_desc_requested_feedback_info_0_0

};

const MR_DuPtagLayout mercury_data_mdprof_feedback__du_ptag_ordered_requested_feedback_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_feedback__du_stag_ordered_requested_feedback_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_feedback__du_name_ordered_requested_feedback_info_0[] = {
	&mercury_data_mdprof_feedback__du_functor_desc_requested_feedback_info_0_0
};

const MR_Integer mercury_data_mdprof_feedback__functor_number_map_requested_feedback_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_feedback__type_ctor_info_requested_feedback_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_feedback__requested_feedback_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_feedback__requested_feedback_info_0_0)),
	"mdprof_feedback",
	"requested_feedback_info",
	{ (void *)mercury_data_mdprof_feedback__du_name_ordered_requested_feedback_info_0 },
	{ (void *)mercury_data_mdprof_feedback__du_ptag_ordered_requested_feedback_info_0 },
	1,
	4,
	mercury_data_mdprof_feedback__functor_number_map_requested_feedback_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdprof_feedback__create_feedback_report_2_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism",
"mdprof_fb.automatic_parallelism",
"create_candidate_parallel_conj_report",
2,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
197,
"d2;c30;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_6 = {
{
MR_PREDICATE,
"mdprof_feedback",
"mdprof_feedback",
"lambda_mdprof_feedback_m_132",
5,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
132,
"c11;s2-2;c10;e;e;e;t;c2;s2-2;c5;s2-2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_5 = {
{
MR_PREDICATE,
"mdprof_feedback",
"mdprof_feedback",
"lambda_mdprof_feedback_m_132",
5,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
132,
"c11;s2-2;c10;e;e;e;t;c2;s2-2;c5;s2-2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_4 = {
{
MR_PREDICATE,
"mdprof_feedback",
"mdprof_feedback",
"lambda_mdprof_feedback_m_132",
5,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
132,
"c11;s2-2;c10;e;e;e;t;c2;s2-2;c5;s2-2;c6;"
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
66,
"c7;"
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
66,
"c6;"
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
66,
"c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_feedback__print_feedback_report_4_0_1 = {
{
MR_PREDICATE,
"mdprof_feedback",
"mdprof_feedback",
"create_feedback_report",
2,
0
},
"mdprof_feedback",
"mdprof_feedback.m",
173,
"c2;"
};


MR_decl_entry(mdbcomp__feedback__get_all_feedback_data_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_data_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module0)
	MR_init_entry1(mdprof_feedback__print_feedback_report_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__print_feedback_report_4_0);
	MR_init_label6(mdprof_feedback__print_feedback_report_4_0,2,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_feedback_report'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__print_feedback_report_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdbcomp__feedback__get_all_feedback_data_2_0,
		mdprof_feedback__print_feedback_report_4_0_i2);
MR_def_label(mdprof_feedback__print_feedback_report_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_feedback__print_feedback_report_4_0_i4);
MR_def_label(mdprof_feedback__print_feedback_report_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		mdprof_feedback__print_feedback_report_4_0_i5);
MR_def_label(mdprof_feedback__print_feedback_report_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":\n\n", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_feedback__print_feedback_report_4_0_i6);
MR_def_label(mdprof_feedback__print_feedback_report_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_feedback__print_feedback_report_4_0_i7);
MR_def_label(mdprof_feedback__print_feedback_report_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Feedback report for ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_feedback__print_feedback_report_4_0_i8);
MR_def_label(mdprof_feedback__print_feedback_report_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(mdprof_feedback_module1)
	MR_init_entry1(mdprof_feedback__write_help_message_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__write_help_message_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_help_message'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__write_help_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("Usage: %s [<options>] <input> <output>\n       %s <output>\n       %s --help\n       %s --version\n\n    The first form of this command generates feedback information from\n    profiling data.  The second form prints a report of the feedback data and\n    does not modify it.  The third and forth forms print this help message and\n    version information respectively.\n\n    <input> must name a deep profiling data file.\n    <output> is the name of the file to be generated by this program.\n\n    You may specify the foll" "owing general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version number.\n    -v --verbosity  <0-4>\n                    Generate messages.  The higher the argument the more\n                    verbose the program becomes.  2 is recommended and the\n                    default.\n    --debug-read-profile\n                    Generate debugging messages when reading the deep profile\n                    and creating the deep structure.\n    -r --report     Disp" "lay a report about the feedback information in the file\n                    after any processing has been done.\n\n    The following options select sets of feedback information useful\n    for particular compiler optimizations:\n\n    --implicit-parallelism\n                Generate information that the compiler can use for automatic\n                parallelization.\n    --desired-parallelism <value>\n                The amount of desired parallelism for implicit parallelism,\n                value must be a floatin" "g point number above 1.0.\n                Note: This option is currently ignored.\n    --implicit-parallelism-sparking-cost <value>\n                The cost of creating a spark, measured in the deep profiler\'s\n                call sequence counts.\n    --implicit-parallelism-sparking-delay <value>\n                The time taken from the time a spark is created until the spark\n                is executed by another processor assuming that there is a free\n                processor.\n    --implicit-parallelism-lo" "cking-cost <value>\n                The cost of maintaining a lock for a single dependant variable\n                in a conjunction, measured in the profiler\'s call sequence\n                counts.\n    --implicit-parallelism-clique-cost-threshold <value>\n                The cost threshold for cliques to be considered for implicit\n                parallelism, measured on the profiler\'s call sequence counts.\n    --implicit-parallelism-call-site-cost-threshold <value>\n                The cost of a call site to " "be considered for parallelism\n                against another call site.\n    --implicit-parallelism-dependant-conjunctions\n                Advise the compiler to parallelism dependant conjunctions.\n                This will become the default once the implementation is\n                complete. \n\n    The following options select specific types of feedback information\n    and parameterise them:\n\n    --calls-above-threshold-sorted\n                A list of calls whose typical cost (in call sequence counts) is" "\n                above a given threshold. This option uses the\n                --desired-parallelism option to specify the threshold,\n                --calls-above-threshold-sorted-measure specifies what \'typical\'\n                means.  This option is deprecated.\n    --calls-above-threshold-sorted-measure mean|median\n                mean: Use mean(call site dynamic cost) as the typical cost.\n                median: Use median(call site dynamic cost) as the typical cost.\n                The default is \'mean" "\'.\n\n    --candidate-parallel-conjunctions\n                Produce a list of candidate parallel conjunctions for implicit\n                parallelism.  This option uses the implicit parallelism\n                settings above.\n    ", 3813);
	MR_r2 = MR_tempr2;
	MR_np_tailcall_ent(io__format_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__version_1_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(mdprof_feedback_module2)
	MR_init_entry1(mdprof_feedback__write_version_message_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__write_version_message_3_0);
	MR_init_label5(mdprof_feedback__write_version_message_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_version_message'/3 mode 0 */
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
MR_decl_entry(startup__read_and_startup_default_deep_options_9_0);
MR_decl_entry(io__stdout_stream_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module3)
	MR_init_entry1(mdprof_feedback__read_deep_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__read_deep_file_5_0);
	MR_init_label4(mdprof_feedback__read_deep_file_5_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_deep_file'/5 mode 0 */
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
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(startup__read_and_startup_default_deep_options_9_0);
	}
MR_def_label(mdprof_feedback__read_deep_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		mdprof_feedback__read_deep_file_5_0_i6);
MR_def_label(mdprof_feedback__read_deep_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(startup__read_and_startup_default_deep_options_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt__lookup_int_option_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module4)
	MR_init_entry1(mdprof_feedback__check_verbosity_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__check_verbosity_option_2_0);
	MR_init_label2(mdprof_feedback__check_verbosity_option_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_verbosity_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__check_verbosity_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_feedback__check_verbosity_option_2_0_i2);
MR_def_label(mdprof_feedback__check_verbosity_option_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_feedback__check_verbosity_option_2_0_i1);
	}
	if (MR_INT_GT(MR_r1,4)) {
		MR_GOTO_LAB(mdprof_feedback__check_verbosity_option_2_0_i1);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__check_verbosity_option_2_0,1)
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

MR_decl_entry(getopt__lookup_bool_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
MR_decl_entry(svmap__set_4_0);
MR_decl_entry(getopt__lookup_string_option_3_0);
MR_decl_entry(require__error_1_0);
MR_decl_entry(string__to_float_2_0);
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;

MR_BEGIN_MODULE(mdprof_feedback_module5)
	MR_init_entry1(mdprof_feedback__check_options_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__check_options_2_0);
	MR_init_label10(mdprof_feedback__check_options_2_0,2,4,6,7,3,8,10,11,14,13)
	MR_init_label10(mdprof_feedback__check_options_2_0,12,16,18,19,9,22,24,26,28,27)
	MR_init_label9(mdprof_feedback__check_options_2_0,30,32,33,34,35,36,37,38,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_options'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__check_options_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 8;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_feedback__check_options_2_0_i2);
MR_def_label(mdprof_feedback__check_options_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i3);
MR_def_label(mdprof_feedback__check_options_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = (MR_Integer) 5;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		mdprof_feedback__check_options_2_0_i6);
MR_def_label(mdprof_feedback__check_options_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = (MR_Integer) 7;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		mdprof_feedback__check_options_2_0_i7);
MR_def_label(mdprof_feedback__check_options_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
MR_def_label(mdprof_feedback__check_options_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_feedback__check_options_2_0_i8);
MR_def_label(mdprof_feedback__check_options_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 7;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i9);
MR_def_label(mdprof_feedback__check_options_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 6;
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		mdprof_feedback__check_options_2_0_i11);
MR_def_label(mdprof_feedback__check_options_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mean", 4)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i14);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i13);
MR_def_label(mdprof_feedback__check_options_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("median", 6)) != 0)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i12);
	}
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
	}
MR_def_label(mdprof_feedback__check_options_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r3 = (MR_Integer) 13;
	MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i18);
MR_def_label(mdprof_feedback__check_options_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Invalid value for calls_above_threshold_sorted_measure: ", 56);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_feedback__check_options_2_0_i16);
MR_def_label(mdprof_feedback__check_options_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_feedback__check_options_2_0_i18);
MR_def_label(mdprof_feedback__check_options_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_feedback__check_options_2_0_i19);
MR_def_label(mdprof_feedback__check_options_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 7;
	MR_r1 = MR_sv(8);
	}
MR_def_label(mdprof_feedback__check_options_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_feedback__check_options_2_0_i22);
MR_def_label(mdprof_feedback__check_options_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(mdprof_feedback__check_options_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 9;
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		mdprof_feedback__check_options_2_0_i26);
MR_def_label(mdprof_feedback__check_options_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(string__to_float_2_0,
		mdprof_feedback__check_options_2_0_i28);
MR_def_label(mdprof_feedback__check_options_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i27);
	}
	if ((MR_word_to_float(MR_r2) <= (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i27);
	}
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 10;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i32);
MR_def_label(mdprof_feedback__check_options_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid value for desired_parallelism: ", 39);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_feedback__check_options_2_0_i30);
MR_def_label(mdprof_feedback__check_options_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_feedback__check_options_2_0_i32);
MR_def_label(mdprof_feedback__check_options_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_feedback__check_options_2_0_i33);
MR_def_label(mdprof_feedback__check_options_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 11;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_feedback__check_options_2_0_i34);
MR_def_label(mdprof_feedback__check_options_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 12;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_feedback__check_options_2_0_i35);
MR_def_label(mdprof_feedback__check_options_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_feedback__check_options_2_0_i36);
MR_def_label(mdprof_feedback__check_options_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 14;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_feedback__check_options_2_0_i37);
MR_def_label(mdprof_feedback__check_options_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 15;
	}
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_feedback__check_options_2_0_i38);
MR_def_label(mdprof_feedback__check_options_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_feedback__check_options_2_0_i40);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_tfield(0, MR_r2, 4) = MR_sv(7);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	MR_tfield(0, MR_r2, 6) = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(mdprof_feedback__check_options_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_tfield(0, MR_r2, 4) = MR_sv(7);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	MR_tfield(0, MR_r2, 6) = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0);

MR_BEGIN_MODULE(mdprof_feedback_module6)
	MR_init_entry1(mdprof_feedback__process_deep_to_feedback_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__process_deep_to_feedback_5_0);
	MR_init_label4(mdprof_feedback__process_deep_to_feedback_5_0,3,2,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_deep_to_feedback'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__process_deep_to_feedback_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdprof_feedback__process_deep_to_feedback_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(mdprof_feedback__process_deep_to_feedback_5_0_i2);
MR_def_label(mdprof_feedback__process_deep_to_feedback_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__css_list_above_threshold_4_0,
		mdprof_feedback__process_deep_to_feedback_5_0_i2);
MR_def_label(mdprof_feedback__process_deep_to_feedback_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdprof_feedback__process_deep_to_feedback_5_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_feedback__process_deep_to_feedback_5_0_i7);
MR_def_label(mdprof_feedback__process_deep_to_feedback_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(mdprof_feedback__process_deep_to_feedback_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__candidate_parallel_conjunctions_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(mdbcomp__feedback__read_feedback_file_4_0);
MR_decl_entry(mdbcomp__feedback__read_error_message_string_3_0);
MR_decl_entry(fn__mdbcomp__feedback__get_feedback_program_name_1_0);
MR_decl_entry(mdbcomp__feedback__read_or_create_5_0);
MR_decl_entry(mdbcomp__feedback__write_feedback_file_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(cord__foldl_pred_4_1);
MR_decl_entry(io__error_message_2_0);

MR_BEGIN_MODULE(mdprof_feedback_module7)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,4,9,12,13,14,15,11,18)
	MR_init_label10(main_2_0,19,20,21,22,113,25,31,34,33,37)
	MR_init_label10(main_2_0,28,44,45,47,50,51,52,53,54,55)
	MR_init_label10(main_2_0,49,57,60,61,59,63,65,66,64,67)
	MR_init_label10(main_2_0,71,72,73,74,75,76,77,79,80,81)
	MR_init_label5(main_2_0,82,83,84,85,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i4);
MR_def_label(main_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,3,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i9);
MR_def_label(main_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(main_2_0_i11);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i12);
MR_def_label(main_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i13);
MR_def_label(main_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error parsing options: ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i14);
MR_def_label(main_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i15);
MR_def_label(main_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i113);
MR_def_label(main_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i18);
MR_def_label(main_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i19);
MR_def_label(main_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i20);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_feedback, option);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i21);
MR_def_label(main_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(main_2_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(mdprof_feedback__write_version_message_3_0);
MR_def_label(main_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(main_2_0_i25);
	}
MR_def_label(main_2_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(mdprof_feedback__write_help_message_3_0);
MR_def_label(main_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(main_2_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(main_2_0_i28);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_feedback_file_4_0,
		main_2_0_i31);
MR_def_label(main_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_error_message_string_3_0,
		main_2_0_i34);
MR_def_label(main_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i61);
MR_def_label(main_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__feedback__get_feedback_program_name_1_0,
		main_2_0_i37);
MR_def_label(main_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(mdprof_feedback__print_feedback_report_4_0);
MR_def_label(main_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(main_2_0_i40);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(main_2_0_i40);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(main_2_0_i40);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdprof_feedback__check_options_2_0,
		main_2_0_i44);
MR_def_label(main_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdprof_feedback__check_verbosity_option_2_0,
		main_2_0_i45);
MR_def_label(main_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(main_2_0_i40);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(mdprof_feedback__read_deep_file_5_0,
		main_2_0_i47);
MR_def_label(main_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i49);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i50);
MR_def_label(main_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i51);
MR_def_label(main_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i52);
MR_def_label(main_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i53);
MR_def_label(main_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error reading ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i54);
MR_def_label(main_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i55);
MR_def_label(main_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_4_0);
	}
MR_def_label(main_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_sv(1), 0), 0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__feedback__read_or_create_5_0,
		main_2_0_i57);
MR_def_label(main_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i59);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_error_message_string_3_0,
		main_2_0_i60);
MR_def_label(main_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i61);
MR_def_label(main_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(main_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdprof_feedback__process_deep_to_feedback_5_0,
		main_2_0_i63);
MR_def_label(main_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(main_2_0_i65);
	}
	MR_sv(1) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(main_2_0_i64);
MR_def_label(main_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(mdprof_feedback__print_feedback_report_4_0,
		main_2_0_i66);
MR_def_label(main_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(8);
MR_def_label(main_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__feedback__write_feedback_file_6_0,
		main_2_0_i67);
MR_def_label(main_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(main_2_0_i79);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i71);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(cord__foldl_pred_4_1);
	}
MR_def_label(main_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		main_2_0_i72);
MR_def_label(main_2_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i73);
MR_def_label(main_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i74);
MR_def_label(main_2_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i75);
MR_def_label(main_2_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i76);
MR_def_label(main_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i77);
MR_def_label(main_2_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(cord__foldl_pred_4_1);
	}
MR_def_label(main_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		main_2_0_i80);
MR_def_label(main_2_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i81);
MR_def_label(main_2_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i82);
MR_def_label(main_2_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i83);
MR_def_label(main_2_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i84);
MR_def_label(main_2_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i85);
MR_def_label(main_2_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(cord__foldl_pred_4_1);
	}
MR_def_label(main_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i113);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(fn__cord__cord_list_to_cord_1_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(fn__cord__list_1_0);

MR_BEGIN_MODULE(mdprof_feedback_module8)
	MR_init_entry1(mdprof_feedback__create_feedback_report_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__create_feedback_report_2_0);
	MR_init_label8(mdprof_feedback__create_feedback_report_2_0,33,6,17,18,21,22,23,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_feedback_report'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__create_feedback_report_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_feedback__create_feedback_report_2_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("  feedback_data_calls_above_threshold_sorted is deprecated\n", 59);
	MR_proceed();
MR_def_label(mdprof_feedback__create_feedback_report_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_r1, 3);
	MR_sv(5) = MR_tfield(1, MR_r1, 4);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdprof_feedback__create_feedback_report_2_0_i6);
MR_def_label(mdprof_feedback__create_feedback_report_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("  Candidate Parallel Conjunctions:\n    Desired parallelism: %f\n    Sparking cost: %d\n    Sparking delay: %d\n    Locking cost: %d\n    Number of Parallel Conjunctions: %d\n    Parallel Conjunctions:\n\n", 197);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mdprof_feedback__create_feedback_report_2_0_i17);
MR_def_label(mdprof_feedback__create_feedback_report_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_feedback__create_feedback_report_2_0_i18);
MR_def_label(mdprof_feedback__create_feedback_report_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_feedback__create_feedback_report_2_0_i21);
MR_def_label(mdprof_feedback__create_feedback_report_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		mdprof_feedback__create_feedback_report_2_0_i22);
MR_def_label(mdprof_feedback__create_feedback_report_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_feedback__create_feedback_report_2_0_i23);
MR_def_label(mdprof_feedback__create_feedback_report_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		mdprof_feedback__create_feedback_report_2_0_i32);
MR_def_label(mdprof_feedback__create_feedback_report_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module9)
	MR_init_entry1(mdprof_feedback__short_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__short_2_0);
	MR_init_label4(mdprof_feedback__short_2_0,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__short_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,86)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
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
	if (MR_INT_NE(MR_r1,114)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i5);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__short_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(mdprof_feedback__short_2_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
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


MR_BEGIN_MODULE(mdprof_feedback_module10)
	MR_init_entry1(mdprof_feedback__long_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__long_2_0);
	MR_init_label10(mdprof_feedback__long_2_0,3,23,5,6,7,8,9,10,11,12)
	MR_init_label9(mdprof_feedback__long_2_0,13,14,15,16,17,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__long_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 31);
MR_def_label(mdprof_feedback__long_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r3 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_6_0)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(mdprof_feedback__long_2_0_i5);
	}
	MR_r3 = ((MR_Word *) &mercury_vector_common_6_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(mdprof_feedback__long_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i13) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i21) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i20) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i14) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i8) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i15) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i10) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i12) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i7) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i9) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i16) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i18) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i23) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i6) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i19) MR_AND
		MR_LABEL_AP(mdprof_feedback__long_2_0_i11));
MR_def_label(mdprof_feedback__long_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_feedback__long_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mdprof_feedback_module11)
	MR_init_entry1(mdprof_feedback__defaults_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__defaults_2_0);
	MR_init_label3(mdprof_feedback__defaults_2_0,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defaults'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdprof_feedback.defaults/2-0", 1,
		MR_LABEL_AP(mdprof_feedback__defaults_2_0_i18));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdprof_feedback__defaults_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,30)) {
		MR_GOTO_LAB(mdprof_feedback__defaults_2_0_i19);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdprof_feedback__defaults_2_0_i20);
MR_def_label(mdprof_feedback__defaults_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdprof_feedback__defaults_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, (MR_Integer) MR_r3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_feedback_module12)
	MR_init_entry1(__Unify___mdprof_feedback__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_feedback__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module13)
	MR_init_entry1(__Compare___mdprof_feedback__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_feedback__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_BEGIN_MODULE(mdprof_feedback_module14)
	MR_init_entry1(__Unify___mdprof_feedback__requested_feedback_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_feedback__requested_feedback_info_0_0);
	MR_init_label3(__Unify___mdprof_feedback__requested_feedback_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_feedback__requested_feedback_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_feedback__requested_feedback_info_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, calls_above_threshold_sorted_opts);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdprof_feedback__requested_feedback_info_0_0_i4);
MR_def_label(__Unify___mdprof_feedback__requested_feedback_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdprof_feedback__requested_feedback_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, candidate_parallel_conjunctions_opts);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdprof_feedback__requested_feedback_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_feedback__requested_feedback_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdprof_feedback_module15)
	MR_init_entry1(__Compare___mdprof_feedback__requested_feedback_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_feedback__requested_feedback_info_0_0);
	MR_init_label4(__Compare___mdprof_feedback__requested_feedback_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, calls_above_threshold_sorted_opts);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdprof_feedback__requested_feedback_info_0_0_i5);
MR_def_label(__Compare___mdprof_feedback__requested_feedback_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdprof_feedback__requested_feedback_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism, candidate_parallel_conjunctions_opts);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdprof_feedback__requested_feedback_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__message__message_get_level_1_0);
MR_decl_entry(fn__message__message_level_to_int_1_0);
MR_decl_entry(message__message_to_string_2_0);
MR_decl_entry(io__nl_3_0);

MR_BEGIN_MODULE(mdprof_feedback_module16)
	MR_init_entry1(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0);
	MR_init_label5(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0,2,4,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__main__132__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0)
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
	MR_np_call_localret_ent(fn__message__message_get_level_1_0,
		mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0_i2);
MR_def_label(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__message__message_level_to_int_1_0,
		mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0_i4);
MR_def_label(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0_i8);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(message__message_to_string_2_0,
		mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0_i5);
MR_def_label(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0_i6);
MR_def_label(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_3_0);
MR_def_label(mdprof_feedback__IntroducedFrom__pred__main__132__1_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
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
		mercury_data_mdprof_feedback__type_ctor_info_option_0,
		mdprof_feedback__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_feedback__type_ctor_info_requested_feedback_info_0,
		mdprof_feedback__requested_feedback_info_0_0);
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
		&mercury_data_mdprof_feedback__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_feedback__type_ctor_info_requested_feedback_info_0);
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
