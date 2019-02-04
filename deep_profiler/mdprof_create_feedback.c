/*
** Automatically generated from `mdprof_create_feedback.m'
** by the Mercury compiler,
** version rotd-2012-07-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdprof_create_feedback__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "mdprof_create_feedback.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "mdprof_create_feedback.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "mdprof_create_feedback.c"
#line 284 "profile.int"
#include "profile.mh"

#line 40 "mdprof_create_feedback.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdprof_create_feedback.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "mdprof_create_feedback.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "mdprof_create_feedback.c"
#line 53 "mdprof_create_feedback.c"
#include "mdprof_create_feedback.mh"

#line 56 "mdprof_create_feedback.c"
#line 57 "mdprof_create_feedback.c"
#ifndef MDPROF_CREATE_FEEDBACK_DECL_GUARD
#define MDPROF_CREATE_FEEDBACK_DECL_GUARD

#line 61 "mdprof_create_feedback.c"
#line 62 "mdprof_create_feedback.c"

#endif
#line 65 "mdprof_create_feedback.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Integer f1;
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_vector_common_7_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_create_feedback__type_ctor_info_maybe_found_error_0,
	mercury_data_mdprof_create_feedback__type_ctor_info_option_0,
	mercury_data_mdprof_create_feedback__type_ctor_info_requested_feedback_info_0;
MR_decl_label10(mdprof_create_feedback__best_par_algorithm_parser_4_0, 2,5,4,8,11,7,15,18,14,21)
MR_decl_label2(mdprof_create_feedback__best_par_algorithm_parser_4_0, 26,1)
MR_decl_label3(mdprof_create_feedback__defaults_2_0, 23,24,25)
MR_decl_label10(mdprof_create_feedback__generate_requested_feedback_7_0, 2,4,7,8,9,12,13,14,15,16)
MR_decl_label10(mdprof_create_feedback__generate_requested_feedback_7_0, 17,11,19,22,23,21,25,27,28,26)
MR_decl_label10(mdprof_create_feedback__generate_requested_feedback_7_0, 29,56,31,33,34,35,32,41,42,43)
MR_decl_label6(mdprof_create_feedback__generate_requested_feedback_7_0, 44,45,46,47,49,50)
MR_decl_label10(mdprof_create_feedback__get_feedback_requests_6_0, 2,3,5,6,9,11,12,13,8,15)
MR_decl_label10(mdprof_create_feedback__get_feedback_requests_6_0, 16,17,18,21,23,24,25,20,27,28)
MR_decl_label10(mdprof_create_feedback__get_feedback_requests_6_0, 29,30,31,32,33,34,35,36,37,38)
MR_decl_label10(mdprof_create_feedback__get_feedback_requests_6_0, 39,40,43,41,45,46,47,48,50,51)
MR_decl_label10(mdprof_create_feedback__get_feedback_requests_6_0, 56,57,58,59,55,62,63,64,65,66)
MR_decl_label2(mdprof_create_feedback__get_feedback_requests_6_0, 67,53)
MR_decl_label10(mdprof_create_feedback__long_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(mdprof_create_feedback__long_2_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(mdprof_create_feedback__long_2_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label4(mdprof_create_feedback__long_2_0, 33,34,35,1)
MR_decl_label10(main_2_0, 2,3,8,9,12,13,14,15,16,17)
MR_decl_label10(main_2_0, 11,20,21,22,23,26,30,65,34,39)
MR_decl_label2(main_2_0, 43,10)
MR_decl_label4(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0, 3,5,7,1)
MR_decl_label10(mdprof_create_feedback__post_process_options_5_0, 2,3,5,6,4,10,11,13,9,15)
MR_decl_label2(mdprof_create_feedback__post_process_options_5_0, 16,18)
MR_decl_label2(mdprof_create_feedback__process_deep_to_feedback_5_0, 4,3)
MR_decl_label4(mdprof_create_feedback__read_deep_file_5_0, 2,3,5,6)
MR_decl_label3(mdprof_create_feedback__short_2_0, 3,4,1)
MR_decl_label2(mdprof_create_feedback__write_help_message_3_0, 2,3)
MR_decl_label4(mdprof_create_feedback__write_version_message_3_0, 2,3,4,5)
MR_decl_label1(__Unify___mdprof_create_feedback__requested_feedback_info_0_0, 6)
MR_decl_label2(__Compare___mdprof_create_feedback__requested_feedback_info_0_0, 3,2)
MR_decl_static(mdprof_create_feedback__read_deep_file_5_0)
MR_decl_static(mdprof_create_feedback__process_deep_to_feedback_5_0)
MR_decl_static(mdprof_create_feedback__generate_requested_feedback_7_0)
MR_decl_static(mdprof_create_feedback__write_help_message_3_0)
MR_decl_static(mdprof_create_feedback__write_version_message_3_0)
MR_decl_static(mdprof_create_feedback__post_process_options_5_0)
MR_decl_static(mdprof_create_feedback__parse_best_par_algorithm_2_0)
MR_decl_static(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0)
MR_decl_static(mdprof_create_feedback__get_feedback_requests_6_0)
MR_def_extern_entry(main_2_0)
MR_decl_static(mdprof_create_feedback__short_2_0)
MR_decl_static(mdprof_create_feedback__long_2_0)
MR_decl_static(mdprof_create_feedback__defaults_2_0)
MR_decl_static(mdprof_create_feedback__best_par_algorithm_parser_4_0)
MR_decl_static(__Unify___mdprof_create_feedback__maybe_found_error_0_0)
MR_decl_static(__Compare___mdprof_create_feedback__maybe_found_error_0_0)
MR_decl_static(__Unify___mdprof_create_feedback__option_0_0)
MR_decl_static(__Compare___mdprof_create_feedback__option_0_0)
MR_decl_static(__Unify___mdprof_create_feedback__requested_feedback_info_0_0)
MR_decl_static(__Compare___mdprof_create_feedback__requested_feedback_info_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_params)
}
},
};

static const struct mercury_type_1 mercury_common_1[8] =
{
{
0
},
{
4
},
{
1
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
200
},
{
2000
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_create_feedback__parse_best_par_algorithm_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_src_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_best_par_algorithm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_create_feedback__best_par_algorithm_parser_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_create_feedback__best_par_algorithm_parser_4_0_2;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_create_feedback__parse_best_par_algorithm_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parsing_utils, src),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, best_par_algorithm),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_create_feedback__best_par_algorithm_parser_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parsing_utils, src),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_create_feedback__best_par_algorithm_parser_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parsing_utils, src),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

MR_decl_entry(parsing_utils__int_literal_4_0);
static const struct mercury_type_3 mercury_common_3[6] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(mdprof_create_feedback__best_par_algorithm_parser_4_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(mdprof_create_feedback__short_2_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(mdprof_create_feedback__long_2_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(mdprof_create_feedback__defaults_2_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(parsing_utils__int_literal_4_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(parsing_utils__int_literal_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_create_feedback__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_create_feedback, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_create_feedback, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdprof_create_feedback, option),
MR_CTOR0_ADDR(getopt, option_data)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
MR_TAG_COMMON(0,3,1),
MR_TAG_COMMON(0,3,2),
MR_TAG_COMMON(0,3,3)
}
},
};

static const struct mercury_type_6 mercury_common_6[4] =
{
{
0,
MR_string_const("8.0", 3)
},
{
0,
MR_string_const("1.01", 4)
},
{
0,
MR_string_const("overlap", 7)
},
{
0,
MR_string_const("complete-branches(1000)", 23)
},
};

static const struct mercury_type_7 mercury_vector_common_7_0[21] =
{
{
0,
MR_TAG_COMMON(1,1,0)
},
{
2,
MR_TAG_COMMON(2,1,3)
},
{
1,
MR_TAG_COMMON(1,1,0)
},
{
3,
MR_TAG_COMMON(1,1,0)
},
{
4,
MR_TAG_COMMON(1,1,0)
},
{
5,
MR_TAG_COMMON(1,1,0)
},
{
6,
MR_TAG_COMMON(1,1,0)
},
{
7,
MR_TAG_COMMON(3,6,0)
},
{
8,
MR_TAG_COMMON(1,1,0)
},
{
9,
MR_TAG_COMMON(2,1,4)
},
{
10,
MR_TAG_COMMON(2,1,5)
},
{
11,
MR_TAG_COMMON(2,1,4)
},
{
12,
MR_TAG_COMMON(2,1,4)
},
{
13,
MR_TAG_COMMON(2,1,6)
},
{
14,
MR_TAG_COMMON(2,1,5)
},
{
15,
MR_TAG_COMMON(2,1,7)
},
{
16,
MR_TAG_COMMON(2,1,7)
},
{
18,
MR_TAG_COMMON(1,1,2)
},
{
17,
MR_TAG_COMMON(3,6,1)
},
{
19,
MR_TAG_COMMON(3,6,2)
},
{
20,
MR_TAG_COMMON(3,6,3)
},
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0 = {
	"have_not_found_error",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1 = {
	"found_error",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_create_feedback__enum_value_ordered_maybe_found_error_0[] = {
	&mercury_data_mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_create_feedback__enum_name_ordered_maybe_found_error_0[] = {
	&mercury_data_mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0
};

const MR_Integer mercury_data_mdprof_create_feedback__functor_number_map_maybe_found_error_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_create_feedback__type_ctor_info_maybe_found_error_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_create_feedback__maybe_found_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_create_feedback__maybe_found_error_0_0)),
	"mdprof_create_feedback",
	"maybe_found_error",
	{ (void *)mercury_data_mdprof_create_feedback__enum_name_ordered_maybe_found_error_0 },
	{ (void *)mercury_data_mdprof_create_feedback__enum_value_ordered_maybe_found_error_0 },
	2,
	4,
	mercury_data_mdprof_create_feedback__functor_number_map_maybe_found_error_0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_0 = {
	"help",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_1 = {
	"version",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_2 = {
	"verbosity",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_3 = {
	"debug_read_profile",
	3
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_4 = {
	"report",
	4
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_5 = {
	"candidate_parallel_conjunctions",
	5
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_6 = {
	"implicit_parallelism",
	6
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_7 = {
	"desired_parallelism",
	7
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_8 = {
	"ipar_intermodule_var_use",
	8
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_9 = {
	"ipar_sparking_cost",
	9
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_10 = {
	"ipar_sparking_delay",
	10
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_11 = {
	"ipar_barrier_cost",
	11
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_12 = {
	"ipar_future_signal_cost",
	12
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_13 = {
	"ipar_future_wait_cost",
	13
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_14 = {
	"ipar_context_wakeup_delay",
	14
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_15 = {
	"ipar_clique_cost_threshold",
	15
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_16 = {
	"ipar_call_site_cost_threshold",
	16
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_17 = {
	"ipar_speedup_threshold",
	17
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_18 = {
	"ipar_dep_conjs",
	18
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_19 = {
	"ipar_speedup_alg",
	19
};

static const MR_EnumFunctorDesc mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_20 = {
	"ipar_best_par_alg",
	20
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_create_feedback__enum_value_ordered_option_0[] = {
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_3,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_7,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_8,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_9,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_10,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_11,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_12,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_13,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_14,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_15,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_16,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_17,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_18,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_19,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_20
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_create_feedback__enum_name_ordered_option_0[] = {
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_3,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_7,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_11,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_20,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_16,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_15,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_14,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_18,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_12,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_13,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_8,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_9,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_10,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_19,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_17,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_create_feedback__enum_functor_desc_option_0_1
};

const MR_Integer mercury_data_mdprof_create_feedback__functor_number_map_option_0[] = {
	3,
	20,
	19,
	1,
	18,
	0,
	4,
	2,
	13,
	14,
	15,
	5,
	11,
	12,
	9,
	8,
	7,
	17,
	10,
	16,
	6 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_create_feedback__type_ctor_info_option_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_create_feedback__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_create_feedback__option_0_0)),
	"mdprof_create_feedback",
	"option",
	{ (void *)mercury_data_mdprof_create_feedback__enum_name_ordered_option_0 },
	{ (void *)mercury_data_mdprof_create_feedback__enum_value_ordered_option_0 },
	21,
	4,
	mercury_data_mdprof_create_feedback__functor_number_map_option_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0
}};

static const MR_NotagFunctorDesc mercury_data_mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0 = {
	"requested_feedback_info",
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0,
	"rfi_parallel"
};

const MR_Integer mercury_data_mdprof_create_feedback__functor_number_map_requested_feedback_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_create_feedback__type_ctor_info_requested_feedback_info_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_create_feedback__requested_feedback_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_create_feedback__requested_feedback_info_0_0)),
	"mdprof_create_feedback",
	"requested_feedback_info",
	{ (void *)&mercury_data_mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0 },
	{ (void *)&mercury_data_mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0 },
	1,
	4,
	mercury_data_mdprof_create_feedback__functor_number_map_requested_feedback_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdprof_create_feedback__best_par_algorithm_parser_4_0_2 = {
{
MR_PREDICATE,
"parsing_utils",
"parsing_utils",
"int_literal",
4,
0
},
"mdprof_create_feedback",
"mdprof_create_feedback.m",
653,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_create_feedback__best_par_algorithm_parser_4_0_1 = {
{
MR_PREDICATE,
"parsing_utils",
"parsing_utils",
"int_literal",
4,
0
},
"mdprof_create_feedback",
"mdprof_create_feedback.m",
647,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"mdprof_create_feedback",
"mdprof_create_feedback",
"defaults",
2,
0
},
"mdprof_create_feedback",
"mdprof_create_feedback.m",
65,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"mdprof_create_feedback",
"mdprof_create_feedback",
"long",
2,
0
},
"mdprof_create_feedback",
"mdprof_create_feedback.m",
65,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"mdprof_create_feedback",
"mdprof_create_feedback",
"short",
2,
0
},
"mdprof_create_feedback",
"mdprof_create_feedback.m",
65,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_create_feedback__parse_best_par_algorithm_2_0_1 = {
{
MR_PREDICATE,
"mdprof_create_feedback",
"mdprof_create_feedback",
"best_par_algorithm_parser",
4,
0
},
"mdprof_create_feedback",
"mdprof_create_feedback.m",
633,
"6"
};


MR_decl_entry(conf__server_name_port_3_0);
MR_decl_entry(conf__script_name_3_0);
MR_decl_entry(startup__read_and_startup_default_deep_options_9_0);
MR_decl_entry(io__stdout_stream_3_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module0)
	MR_init_entry1(mdprof_create_feedback__read_deep_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__read_deep_file_5_0);
	MR_init_label4(mdprof_create_feedback__read_deep_file_5_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_deep_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__read_deep_file_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(conf__server_name_port_3_0,
		mdprof_create_feedback__read_deep_file_5_0_i2);
MR_def_label(mdprof_create_feedback__read_deep_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(conf__script_name_3_0,
		mdprof_create_feedback__read_deep_file_5_0_i3);
MR_def_label(mdprof_create_feedback__read_deep_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(mdprof_create_feedback__read_deep_file_5_0_i5);
	}
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(startup__read_and_startup_default_deep_options_9_0);
	}
MR_def_label(mdprof_create_feedback__read_deep_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		mdprof_create_feedback__read_deep_file_5_0_i6);
MR_def_label(mdprof_create_feedback__read_deep_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
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

extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module1)
	MR_init_entry1(mdprof_create_feedback__process_deep_to_feedback_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__process_deep_to_feedback_5_0);
	MR_init_label2(mdprof_create_feedback__process_deep_to_feedback_5_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_deep_to_feedback'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__process_deep_to_feedback_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_create_feedback__process_deep_to_feedback_5_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_create_feedback__process_deep_to_feedback_5_0_i4);
MR_def_label(mdprof_create_feedback__process_deep_to_feedback_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(mdprof_create_feedback__process_deep_to_feedback_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(getopt__lookup_bool_option_3_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(mdbcomp__feedback__read_or_create_5_0);
MR_decl_entry(mdbcomp__feedback__read_error_message_string_3_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_0);
MR_decl_entry(mdbcomp__feedback__write_feedback_file_6_0);
MR_decl_entry(getopt__lookup_int_option_3_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(message__set_verbosity_level_3_0);
MR_decl_entry(message__write_out_messages_4_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module2)
	MR_init_entry1(mdprof_create_feedback__generate_requested_feedback_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__generate_requested_feedback_7_0);
	MR_init_label10(mdprof_create_feedback__generate_requested_feedback_7_0,2,4,7,8,9,12,13,14,15,16)
	MR_init_label10(mdprof_create_feedback__generate_requested_feedback_7_0,17,11,19,22,23,21,25,27,28,26)
	MR_init_label10(mdprof_create_feedback__generate_requested_feedback_7_0,29,56,31,33,34,35,32,41,42,43)
	MR_init_label6(mdprof_create_feedback__generate_requested_feedback_7_0,44,45,46,47,49,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_requested_feedback'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__generate_requested_feedback_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i2);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(mdprof_create_feedback__generate_requested_feedback_7_0_i4);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(": options do not request any form of feedback\n", 46);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i17);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(mdprof_create_feedback, option);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i7);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i8);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_create_feedback__read_deep_file_5_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i9);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_create_feedback__generate_requested_feedback_7_0_i11);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i12);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i13);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i14);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i15);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error reading ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i16);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i17);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__write_string_4_0);
	}
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tfield(0, MR_sv(7), 0), 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mdbcomp__feedback__read_or_create_5_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i19);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_create_feedback__generate_requested_feedback_7_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_error_message_string_3_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i22);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i23);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdprof_create_feedback__process_deep_to_feedback_5_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i25);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(mdprof_create_feedback__generate_requested_feedback_7_0_i27);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r5;
	MR_GOTO_LAB(mdprof_create_feedback__generate_requested_feedback_7_0_i26);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i28);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__feedback__write_feedback_file_6_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i29);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_create_feedback__generate_requested_feedback_7_0_i31);
	}
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i49);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_create_feedback__generate_requested_feedback_7_0_i32);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i33);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i34);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i35);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i44);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i41);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i42);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i43);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i44);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i45);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i46);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i47);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i56);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(message__set_verbosity_level_3_0,
		mdprof_create_feedback__generate_requested_feedback_7_0_i50);
MR_def_label(mdprof_create_feedback__generate_requested_feedback_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(message__write_out_messages_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module3)
	MR_init_entry1(mdprof_create_feedback__write_help_message_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__write_help_message_3_0);
	MR_init_label2(mdprof_create_feedback__write_help_message_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_help_message'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__write_help_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const(" [<options>] <profdatafile> <feedbackfile>\n    This command generates feedback information from profiling data.\n\n    The first argument must name a deep profili" "ng data file such as Deep.data.\n    The second argument should be the name of the file into which this command\n    should put the feedback information it genera" "tes.\n\n    You may specify the following general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version numbe" "r.\n    -v --verbosity  <0-4>\n                    Generate messages.  The higher the argument, the more\n                    verbose the program becomes.  2 is re" "commended and the\n                    default.\n    --debug-read-profile\n                    Generate debugging messages when reading the deep profile\n          " "          and creating the deep structure.\n    --report        Print a report about the feedback information after any\n                    processing has been d" "one.\n\n    The following options select sets of feedback information useful\n    for particular compiler optimizations:\n\n    --implicit-parallelism\n              " "  Generate information that the compiler can use for automatic\n                parallelization.\n    --desired-parallelism <value>\n                The amount of " "desired parallelism for implicit parallelism,\n                which must be a floating point number above 1.0.\n                Note: This option is currently ig" "nored.\n    --implicit-parallelism-intermodule-var-use\n                Assume that the compiler will be able to push signals and waits\n                for future" "s across module boundaries.\n    --ipar-sparking-cost <value>\n                The cost of creating a spark, measured in the deep profiler\'s\n                call " "sequence counts.\n    --ipar-sparking-delay <value>\n                The time taken from the time a spark is created until the spark\n                is executed b" "y another processor, assuming that there is a free\n                processor.\n    --ipar-barrier-cost <value>\n                The cost of executing the barrier " "code at the end of each\n                parallel conjunct.\n    --ipar-future-signal-cost <value>\n                The cost of the signal() call for the producer " "of a shared\n                variable, measured in the profiler\'s call sequence counts.\n    --ipar-future-wait-cost <value>\n                The cost of the wait(" ") call for the consumer of a shared\n                variable, measured in the profiler\'s call sequence counts.\n    --ipar-context-wakeup-delay <value>\n         " "       The time taken for a context to resume execution after being\n                placed on the run queue.  This is used to estimate the impact\n              " "  of blocking of a context\'s execution, it is measured in the\n                profiler\'s call sequence counts.\n    --ipar-clique-cost-threshold <value>\n        " "        The cost threshold for cliques to be considered for implicit\n                parallelism, measured on the profiler\'s call sequence counts.\n    --ipar-ca" "ll-site-cost-threshold <value>\n                The cost of a call site to be considered for parallelism\n                against another call site.\n    --no-ipar" "-dep-conjs\n                Disable parallelisation of dependent conjunctions.\n    --ipar-speedup-alg <alg>\n                Choose the algorithm that is used to " "estimate the speedup for\n                dependent calculations.  The available algorithms are:\n                    overlap: Compute the overlap between depende" "nt\n                      conjunctions.\n                    num_vars: Use the number of shared variables as a proxy for\n                      the amount of overl" "ap available.\n                    naive: Ignore dependencies.\n                The default is overlap.\n    --ipar-speedup-threshold <value>\n                The t" "hreshold that a speedup ratio must meet before the\n                feedback tool will accept a parallelization. It must be\n                a floating point numb" "er, which must be at least 1.0.\n                If it is e.g. 1.02, then the feedback tool will ignore\n                parallelizations that promise less than a" " 2% local speedup.\n    --ipar-best-par-alg <alg>\n                Select which algorithm to use to find the best way to\n                parallelise a conjunction" ".  The available algorithms are:\n                    greedy: A greedy algorithm with a linear time complexity.\n                    complete: A complete algorith" "m with a branch and bound\n                      search. This can be slow for problems larger than 50\n                      conjuncts, since it has an exponentia" "l complexity.\n                    complete-size(N): As above exept that it takes a single\n                      parameter, N.  If a conjunction has more than N\n" "                      conjuncts, then the greedy algorithm will be used.\n                    complete-branches(N): The same as the complete algorithm,\n         " "             except that it allows at most N branches to be created\n                      during the search.  Once N branches have been created,\n               " "       a greedy search is used on each open branch.\n                The default is complete-branches(1000).\n\n    The following options select specific types of " "feedback information\n    and parameterise them:\n\n    --candidate-parallel-conjunctions\n                Produce a list of candidate parallel conjunctions for imp" "licit\n                parallelism.  This option uses the implicit parallelism\n                settings above.\n\n", 5551);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__write_help_message_3_0_i2);
MR_def_label(mdprof_create_feedback__write_help_message_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Usage: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__write_help_message_3_0_i3);
MR_def_label(mdprof_create_feedback__write_help_message_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__version_1_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module4)
	MR_init_entry1(mdprof_create_feedback__write_version_message_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__write_version_message_3_0);
	MR_init_label4(mdprof_create_feedback__write_version_message_3_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_version_message'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__write_version_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(library__version_1_0,
		mdprof_create_feedback__write_version_message_3_0_i2);
MR_def_label(mdprof_create_feedback__write_version_message_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__write_version_message_3_0_i3);
MR_def_label(mdprof_create_feedback__write_version_message_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": Mercury deep profiler\n", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__write_version_message_3_0_i4);
MR_def_label(mdprof_create_feedback__write_version_message_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__write_version_message_3_0_i5);
MR_def_label(mdprof_create_feedback__write_version_message_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module5)
	MR_init_entry1(mdprof_create_feedback__post_process_options_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__post_process_options_5_0);
	MR_init_label10(mdprof_create_feedback__post_process_options_5_0,2,3,5,6,4,10,11,13,9,15)
	MR_init_label2(mdprof_create_feedback__post_process_options_5_0,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'post_process_options'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__post_process_options_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdprof_create_feedback, option);
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_create_feedback__post_process_options_5_0_i2);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mdprof_create_feedback__post_process_options_5_0_i3);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(1),0)) {
		MR_GOTO_LAB(mdprof_create_feedback__post_process_options_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(": warning: verbosity level should not be negative.\n", 51);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__post_process_options_5_0_i5);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__post_process_options_5_0_i6);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_create_feedback, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(2,1,0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__set_4_0,
		mdprof_create_feedback__post_process_options_5_0_i13);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),4)) {
		MR_GOTO_LAB(mdprof_create_feedback__post_process_options_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(": warning: verbosity level should not exceed 4.\n", 48);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__post_process_options_5_0_i10);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__post_process_options_5_0_i11);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_create_feedback, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(2,1,1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__set_4_0,
		mdprof_create_feedback__post_process_options_5_0_i13);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 6;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(mdprof_create_feedback__post_process_options_5_0_i15);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 6;
	MR_r1 = MR_sv(4);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_create_feedback__post_process_options_5_0_i16);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_create_feedback__post_process_options_5_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(mdprof_create_feedback__post_process_options_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_create_feedback, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = (MR_Integer) 5;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_best_par_algorithm_0;
MR_decl_entry(parsing_utils__parse_3_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module6)
	MR_init_entry1(mdprof_create_feedback__parse_best_par_algorithm_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__parse_best_par_algorithm_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_best_par_algorithm'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__parse_best_par_algorithm_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, best_par_algorithm);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_tailcall_ent(parsing_utils__parse_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_create_feedback_module7)
	MR_init_entry1(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0);
	MR_init_label4(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0,3,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_parallelise_dep_conjs_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0_i3);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("naive", 5)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0_i5);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("overlap", 7)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0_i7);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("num_vars", 8)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt__lookup_string_option_3_0);
MR_decl_entry(string__to_float_2_0);
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;

MR_BEGIN_MODULE(mdprof_create_feedback_module8)
	MR_init_entry1(mdprof_create_feedback__get_feedback_requests_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__get_feedback_requests_6_0);
	MR_init_label10(mdprof_create_feedback__get_feedback_requests_6_0,2,3,5,6,9,11,12,13,8,15)
	MR_init_label10(mdprof_create_feedback__get_feedback_requests_6_0,16,17,18,21,23,24,25,20,27,28)
	MR_init_label10(mdprof_create_feedback__get_feedback_requests_6_0,29,30,31,32,33,34,35,36,37,38)
	MR_init_label10(mdprof_create_feedback__get_feedback_requests_6_0,39,40,43,41,45,46,47,48,50,51)
	MR_init_label10(mdprof_create_feedback__get_feedback_requests_6_0,56,57,58,59,55,62,63,64,65,66)
	MR_init_label2(mdprof_create_feedback__get_feedback_requests_6_0,67,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_feedback_requests'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__get_feedback_requests_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i2);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(mdprof_create_feedback, option);
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 5;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i3);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i5);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(21);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 7;
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i6);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_float_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i9);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i8);
	}
	if ((MR_f(1) <= (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i11);
	}
	MR_r2 = MR_sv(14);
	* (MR_Float *) &MR_sv(4) = MR_f(1);
	MR_sv(16) = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 17;
	MR_r1 = MR_sv(20);
	MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i17);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(4) = MR_f(1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(": error: desired parallelism level should be > 1.\n", 50);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i12);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i13);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_sv(16) = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 17;
	MR_r1 = MR_sv(20);
	MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i17);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(": error: desired parallelism level should be a number.\n", 55);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i15);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i16);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	* (MR_Float *) &MR_sv(4) = (MR_Float) 1.0000000000000000;
	MR_sv(16) = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 17;
	MR_r1 = MR_sv(20);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r2;
	MR_sv(20) = MR_r1;
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i18);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_float_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i21);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i20);
	}
	if ((MR_f(1) < (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i23);
	}
	MR_r2 = MR_sv(14);
	* (MR_Float *) &MR_sv(18) = MR_f(1);
	MR_sv(19) = MR_sv(16);
	MR_r3 = (MR_Integer) 8;
	MR_r1 = MR_sv(20);
	MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i29);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(18) = MR_f(1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(": error: speedup threshold should be >= 1.\n", 43);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i24);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i25);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_sv(19) = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 8;
	MR_r1 = MR_sv(20);
	MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i29);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(": error: speedup threshold should be a number.\n", 47);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i27);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i28);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	* (MR_Float *) &MR_sv(18) = (MR_Float) 1.0000000000000000;
	MR_sv(19) = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 8;
	MR_r1 = MR_sv(20);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r2;
	MR_sv(20) = MR_r1;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i30);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 9;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i31);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 10;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i32);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 11;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i33);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 12;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i34);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 13;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i35);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 14;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i36);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 15;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i37);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 16;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i38);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 18;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i39);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 19;
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i40);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i43);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(14);
	MR_sv(14) = MR_tempr1;
	MR_r3 = (MR_Integer) 20;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i50);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_string_const(" is not a speedup estimate algorithm.\n", 38);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i45);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error: ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i46);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i47);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i48);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_sv(14) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(19) = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 20;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i50);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(mdprof_create_feedback__parse_best_par_algorithm_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i51);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i53);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdprof_create_feedback__get_feedback_requests_6_0_i55);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_string_const(" is not a best parallelisation algorithm.\n", 42);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i56);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error: ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i57);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i58);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i59);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tempf3 = MR_float_from_dword_ptr(&MR_sv(4));
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 0)) = MR_tempf3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(13);
	MR_tempf4 = MR_float_from_dword_ptr(&MR_sv(18));
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 11)) = MR_tempf4;
	MR_tfield(0, MR_tempr1, 13) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 14) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(21);
	}
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i62);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" is not a best parallelisation algorithm: ", 42);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i63);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i64);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error: ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i65);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i66);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_create_feedback__get_feedback_requests_6_0_i67);
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_r3 = MR_tempr1;
	MR_tempf3 = MR_float_from_dword_ptr(&MR_sv(4));
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 0)) = MR_tempf3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(13);
	MR_tempf4 = MR_float_from_dword_ptr(&MR_sv(18));
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 11)) = MR_tempf4;
	MR_tfield(0, MR_tempr1, 13) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 14) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(21);
	}
MR_def_label(mdprof_create_feedback__get_feedback_requests_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_r3 = MR_tempr1;
	MR_tempf3 = MR_float_from_dword_ptr(&MR_sv(4));
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 0)) = MR_tempf3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(13);
	MR_tempf4 = MR_float_from_dword_ptr(&MR_sv(18));
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 11)) = MR_tempf4;
	MR_tfield(0, MR_tempr1, 13) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r1 = MR_sv(19);
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module9)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,8,9,12,13,14,15,16,17)
	MR_init_label10(main_2_0,11,20,21,22,23,26,30,65,34,39)
	MR_init_label2(main_2_0,43,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("mdprof_create_feedback", 22);
	MR_np_call_localret_ent(io__progname_base_4_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i3);
MR_def_label(main_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdprof_create_feedback, option);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i8);
MR_def_label(main_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i9);
MR_def_label(main_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(main_2_0_i11);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i12);
MR_def_label(main_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error parsing options: ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i13);
MR_def_label(main_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i14);
MR_def_label(main_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i15);
MR_def_label(main_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" [<options>] <profdatafile> <feedbackfile>\n    This command generates feedback information from profiling data.\n\n    The first argument must name a deep profili" "ng data file such as Deep.data.\n    The second argument should be the name of the file into which this command\n    should put the feedback information it genera" "tes.\n\n    You may specify the following general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version numbe" "r.\n    -v --verbosity  <0-4>\n                    Generate messages.  The higher the argument, the more\n                    verbose the program becomes.  2 is re" "commended and the\n                    default.\n    --debug-read-profile\n                    Generate debugging messages when reading the deep profile\n          " "          and creating the deep structure.\n    --report        Print a report about the feedback information after any\n                    processing has been d" "one.\n\n    The following options select sets of feedback information useful\n    for particular compiler optimizations:\n\n    --implicit-parallelism\n              " "  Generate information that the compiler can use for automatic\n                parallelization.\n    --desired-parallelism <value>\n                The amount of " "desired parallelism for implicit parallelism,\n                which must be a floating point number above 1.0.\n                Note: This option is currently ig" "nored.\n    --implicit-parallelism-intermodule-var-use\n                Assume that the compiler will be able to push signals and waits\n                for future" "s across module boundaries.\n    --ipar-sparking-cost <value>\n                The cost of creating a spark, measured in the deep profiler\'s\n                call " "sequence counts.\n    --ipar-sparking-delay <value>\n                The time taken from the time a spark is created until the spark\n                is executed b" "y another processor, assuming that there is a free\n                processor.\n    --ipar-barrier-cost <value>\n                The cost of executing the barrier " "code at the end of each\n                parallel conjunct.\n    --ipar-future-signal-cost <value>\n                The cost of the signal() call for the producer " "of a shared\n                variable, measured in the profiler\'s call sequence counts.\n    --ipar-future-wait-cost <value>\n                The cost of the wait(" ") call for the consumer of a shared\n                variable, measured in the profiler\'s call sequence counts.\n    --ipar-context-wakeup-delay <value>\n         " "       The time taken for a context to resume execution after being\n                placed on the run queue.  This is used to estimate the impact\n              " "  of blocking of a context\'s execution, it is measured in the\n                profiler\'s call sequence counts.\n    --ipar-clique-cost-threshold <value>\n        " "        The cost threshold for cliques to be considered for implicit\n                parallelism, measured on the profiler\'s call sequence counts.\n    --ipar-ca" "ll-site-cost-threshold <value>\n                The cost of a call site to be considered for parallelism\n                against another call site.\n    --no-ipar" "-dep-conjs\n                Disable parallelisation of dependent conjunctions.\n    --ipar-speedup-alg <alg>\n                Choose the algorithm that is used to " "estimate the speedup for\n                dependent calculations.  The available algorithms are:\n                    overlap: Compute the overlap between depende" "nt\n                      conjunctions.\n                    num_vars: Use the number of shared variables as a proxy for\n                      the amount of overl" "ap available.\n                    naive: Ignore dependencies.\n                The default is overlap.\n    --ipar-speedup-threshold <value>\n                The t" "hreshold that a speedup ratio must meet before the\n                feedback tool will accept a parallelization. It must be\n                a floating point numb" "er, which must be at least 1.0.\n                If it is e.g. 1.02, then the feedback tool will ignore\n                parallelizations that promise less than a" " 2% local speedup.\n    --ipar-best-par-alg <alg>\n                Select which algorithm to use to find the best way to\n                parallelise a conjunction" ".  The available algorithms are:\n                    greedy: A greedy algorithm with a linear time complexity.\n                    complete: A complete algorith" "m with a branch and bound\n                      search. This can be slow for problems larger than 50\n                      conjuncts, since it has an exponentia" "l complexity.\n                    complete-size(N): As above exept that it takes a single\n                      parameter, N.  If a conjunction has more than N\n" "                      conjuncts, then the greedy algorithm will be used.\n                    complete-branches(N): The same as the complete algorithm,\n         " "             except that it allows at most N branches to be created\n                      during the search.  Once N branches have been created,\n               " "       a greedy search is used on each open branch.\n                The default is complete-branches(1000).\n\n    The following options select specific types of " "feedback information\n    and parameterise them:\n\n    --candidate-parallel-conjunctions\n                Produce a list of candidate parallel conjunctions for imp" "licit\n                parallelism.  This option uses the implicit parallelism\n                settings above.\n\n", 5551);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i16);
MR_def_label(main_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Usage: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i17);
MR_def_label(main_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i43);
MR_def_label(main_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(mdprof_create_feedback__post_process_options_5_0,
		main_2_0_i20);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i21);
MR_def_label(main_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_create_feedback, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i22);
MR_def_label(main_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdprof_create_feedback__write_version_message_3_0);
MR_def_label(main_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(main_2_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdprof_create_feedback__write_help_message_3_0);
MR_def_label(main_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(main_2_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_create_feedback__write_help_message_3_0,
		main_2_0_i43);
MR_def_label(main_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_sv(2), 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(main_2_0_i34);
	}
MR_def_label(main_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_create_feedback__write_help_message_3_0,
		main_2_0_i43);
MR_def_label(main_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(main_2_0_i65);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdprof_create_feedback__get_feedback_requests_6_0,
		main_2_0_i39);
MR_def_label(main_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i10);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdprof_create_feedback__generate_requested_feedback_7_0);
	}
MR_def_label(main_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(main_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_create_feedback_module10)
	MR_init_entry1(mdprof_create_feedback__short_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__short_2_0);
	MR_init_label3(mdprof_create_feedback__short_2_0,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__short_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,86)) {
		MR_GOTO_LAB(mdprof_create_feedback__short_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__short_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,104)) {
		MR_GOTO_LAB(mdprof_create_feedback__short_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__short_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(mdprof_create_feedback__short_2_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__short_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_create_feedback_module11)
	MR_init_entry1(mdprof_create_feedback__long_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__long_2_0);
	MR_init_label10(mdprof_create_feedback__long_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(mdprof_create_feedback__long_2_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(mdprof_create_feedback__long_2_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label4(mdprof_create_feedback__long_2_0,33,34,35,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__long_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("help", 4)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("report", 6)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i4);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("version", 7)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i5);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbosity", 9)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i6);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-dep-conjs", 14)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i7);
	}
	MR_r2 = (MR_Integer) 18;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-speedup-alg", 16)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i8);
	}
	MR_r2 = (MR_Integer) 19;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-barrier-cost", 17)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i9);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-best-par-alg", 17)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i10);
	}
	MR_r2 = (MR_Integer) 20;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-read-profile", 18)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i11);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-sparking-cost", 18)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i12);
	}
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("desired-parallelism", 19)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i13);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-sparking-delay", 19)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i14);
	}
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism", 20)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i15);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-future-wait-cost", 21)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i16);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-speedup-threshold", 22)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i17);
	}
	MR_r2 = (MR_Integer) 17;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-future-signal-cost", 23)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i18);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-intermodule-var-use", 24)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i19);
	}
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-context-wakeup-delay", 25)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i20);
	}
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-clique-cost-threshold", 26)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i21);
	}
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ipar-call-site-cost-threshold", 29)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i22);
	}
	MR_r2 = (MR_Integer) 16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("candidate-parallel-conjunctions", 31)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i23);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-barrier-cost", 33)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i24);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-sparking-cost", 34)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i25);
	}
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-sparking-delay", 35)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i26);
	}
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-future-wait-cost", 37)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i27);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-speedup-threshold", 38)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i28);
	}
	MR_r2 = (MR_Integer) 17;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-future-signal-cost", 39)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i29);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-intermodule-var-use", 40)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i30);
	}
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-context-wakeup-delay", 41)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i31);
	}
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-clique-cost-threshold", 42)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i32);
	}
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-dependant-conjunctions", 43)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i33);
	}
	MR_r2 = (MR_Integer) 18;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-call-site-cost-threshold", 45)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i34);
	}
	MR_r2 = (MR_Integer) 16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-best-parallelisation-algorithm", 51)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i35);
	}
	MR_r2 = (MR_Integer) 20;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism-dependant-conjunctions-algorithm", 53)) != 0)) {
		MR_GOTO_LAB(mdprof_create_feedback__long_2_0_i1);
	}
	MR_r2 = (MR_Integer) 19;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__long_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mdprof_create_feedback_module12)
	MR_init_entry1(mdprof_create_feedback__defaults_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__defaults_2_0);
	MR_init_label3(mdprof_create_feedback__defaults_2_0,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defaults'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdprof_create_feedback.defaults/2-0", 1,
		MR_LABEL_AP(mdprof_create_feedback__defaults_2_0_i23));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdprof_create_feedback__defaults_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,40)) {
		MR_GOTO_LAB(mdprof_create_feedback__defaults_2_0_i24);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdprof_create_feedback__defaults_2_0_i25);
MR_def_label(mdprof_create_feedback__defaults_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdprof_create_feedback__defaults_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_0, (MR_Integer) MR_r3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parsing_utils__whitespace_4_0);
MR_decl_entry(parsing_utils__keyword_6_0);
MR_decl_entry(parsing_utils__eof_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(parsing_utils__brackets_7_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module13)
	MR_init_entry1(mdprof_create_feedback__best_par_algorithm_parser_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_create_feedback__best_par_algorithm_parser_4_0);
	MR_init_label10(mdprof_create_feedback__best_par_algorithm_parser_4_0,2,5,4,8,11,7,15,18,14,21)
	MR_init_label2(mdprof_create_feedback__best_par_algorithm_parser_4_0,26,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'best_par_algorithm_parser'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_create_feedback__best_par_algorithm_parser_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parsing_utils__whitespace_4_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i2);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__best_par_algorithm_parser_4_0_i1);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", 63);
	MR_r2 = (MR_Word) MR_string_const("greedy", 6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parsing_utils__keyword_6_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i5);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__best_par_algorithm_parser_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__eof_4_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i26);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", 63);
	MR_r2 = (MR_Word) MR_string_const("complete-branches", 17);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parsing_utils__keyword_6_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i8);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__best_par_algorithm_parser_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("(", 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(")", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__brackets_7_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i11);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__best_par_algorithm_parser_4_0_i7);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_create_feedback__best_par_algorithm_parser_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parsing_utils__eof_4_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i26);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", 63);
	MR_r2 = (MR_Word) MR_string_const("complete-size", 13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parsing_utils__keyword_6_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i15);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__best_par_algorithm_parser_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("(", 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(")", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__brackets_7_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i18);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__best_par_algorithm_parser_4_0_i14);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_create_feedback__best_par_algorithm_parser_4_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parsing_utils__eof_4_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i26);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", 63);
	MR_r2 = (MR_Word) MR_string_const("complete", 8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parsing_utils__keyword_6_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i21);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__best_par_algorithm_parser_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__eof_4_0,
		mdprof_create_feedback__best_par_algorithm_parser_4_0_i26);
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_create_feedback__best_par_algorithm_parser_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_create_feedback__best_par_algorithm_parser_4_0,1)
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


MR_BEGIN_MODULE(mdprof_create_feedback_module14)
	MR_init_entry1(__Unify___mdprof_create_feedback__maybe_found_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_create_feedback__maybe_found_error_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_create_feedback__maybe_found_error_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module15)
	MR_init_entry1(__Compare___mdprof_create_feedback__maybe_found_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_create_feedback__maybe_found_error_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_create_feedback__maybe_found_error_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_create_feedback_module16)
	MR_init_entry1(__Unify___mdprof_create_feedback__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_create_feedback__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_create_feedback__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_create_feedback_module17)
	MR_init_entry1(__Compare___mdprof_create_feedback__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_create_feedback__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_create_feedback__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module18)
	MR_init_entry1(__Unify___mdprof_create_feedback__requested_feedback_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_create_feedback__requested_feedback_info_0_0);
	MR_init_label1(__Unify___mdprof_create_feedback__requested_feedback_info_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_create_feedback__requested_feedback_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_create_feedback__requested_feedback_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdprof_create_feedback__requested_feedback_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mdprof_create_feedback_module19)
	MR_init_entry1(__Compare___mdprof_create_feedback__requested_feedback_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_create_feedback__requested_feedback_info_0_0);
	MR_init_label2(__Compare___mdprof_create_feedback__requested_feedback_info_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_create_feedback__requested_feedback_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_create_feedback__requested_feedback_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_create_feedback__requested_feedback_info_0_0_i2);
MR_def_label(__Compare___mdprof_create_feedback__requested_feedback_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_create_feedback__requested_feedback_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_create_feedback_maybe_bunch_0(void)
{
	mdprof_create_feedback_module0();
	mdprof_create_feedback_module1();
	mdprof_create_feedback_module2();
	mdprof_create_feedback_module3();
	mdprof_create_feedback_module4();
	mdprof_create_feedback_module5();
	mdprof_create_feedback_module6();
	mdprof_create_feedback_module7();
	mdprof_create_feedback_module8();
	mdprof_create_feedback_module9();
	mdprof_create_feedback_module10();
	mdprof_create_feedback_module11();
	mdprof_create_feedback_module12();
	mdprof_create_feedback_module13();
	mdprof_create_feedback_module14();
	mdprof_create_feedback_module15();
	mdprof_create_feedback_module16();
	mdprof_create_feedback_module17();
	mdprof_create_feedback_module18();
	mdprof_create_feedback_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_create_feedback__init(void);
void mercury__mdprof_create_feedback__init_type_tables(void);
void mercury__mdprof_create_feedback__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_create_feedback__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_create_feedback__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdprof_create_feedback__init_threadscope_string_table(void);
#endif

void mercury__mdprof_create_feedback__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_create_feedback_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_create_feedback__type_ctor_info_maybe_found_error_0,
		mdprof_create_feedback__maybe_found_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_create_feedback__type_ctor_info_option_0,
		mdprof_create_feedback__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_create_feedback__type_ctor_info_requested_feedback_info_0,
		mdprof_create_feedback__requested_feedback_info_0_0);
	mercury__mdprof_create_feedback__init_debugger();
}

void mercury__mdprof_create_feedback__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_create_feedback__type_ctor_info_maybe_found_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_create_feedback__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_create_feedback__type_ctor_info_requested_feedback_info_0);
	}
}


void mercury__mdprof_create_feedback__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_create_feedback__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_create_feedback);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_create_feedback__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdprof_create_feedback__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
